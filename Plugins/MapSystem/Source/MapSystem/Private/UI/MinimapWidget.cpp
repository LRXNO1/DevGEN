// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "UI/MinimapWidget.h"
#include "Components/Border.h"
#include "Components/Overlay.h"
#include "UI/MapMarkerWidget.h"
#include "Components/OverlaySlot.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Core/MapHelper.h"
#include "Components/RetainerBox.h"
#include "UI/MapPathDrawerWidget.h"
#include "Core/MapMarkerComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "GameFramework/Pawn.h"



UMinimapWidget::UMinimapWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DisableMarkerRadiousOffset = 10.f;
	StopAtBorderOffset = -20.f;
	bDrawPath = true;
	StopDrawPathOffset = 20.f;
}

void UMinimapWidget::InitializeMinimap()
{
	MapHelper = Cast<AMapHelper>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapHelper::StaticClass()));
	if (MapHelper)
	{
		MapHelper->OnAddVisibleMarker.AddDynamic(this, &UMinimapWidget::AddMarker);
		MapHelper->OnHideVisibleMarker.AddDynamic(this, &UMinimapWidget::RemoveMarker);
		MapHelper->OnUpdateMapTexture.AddUObject(this, &UMinimapWidget::UpdateMapTexture);
		LoadAllMarkersFromMapHelper();
		UpdateMapTexture();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MinimapWidget::Initialize: Failed to get MapHelper"));
		SetIsEnabled(false);
	}

	if (!bDrawPath)
	{
		PathDrawerWidget->RemoveFromParent();
	}
}

void UMinimapWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeMinimap();
}

void UMinimapWidget::UpdateMapTexture()
{
	UTexture* MapTexture = MapHelper->GetMapTexture();
	if (MapTexture)
	{
		UMaterialInstanceDynamic* MinimapMaterial = MinimapImage->GetDynamicMaterial();
		if (MinimapMaterial)
		{
			MinimapMaterial->SetTextureParameterValue("MapTexture", (UTexture*)MapTexture);
		}
	}
}

void UMinimapWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	UpdateMinimap();
}

void UMinimapWidget::UpdateMinimap()
{
	UpdateMarkersPositions();
	FindPathPoints();
}

void UMinimapWidget::UpdateMarkersPositions()
{
	if (MarkerWidgets.Num() != 0)
	{
		APawn* PlayerPawn = GetOwningPlayer()->GetPawn();
		if (PlayerPawn && MapHelper)
		{
			FVector PlayerLocation = PlayerPawn->GetActorLocation();
			float PlayerYawRotation = MapHelper->PlayerYawRotation;
			float MinimapWidgetSize = MinimapImage->GetCachedGeometry().GetLocalSize().X;

			if (MinimapWidgetSize != 0.f)
			{
				float MinimapFactor = MapHelper->GetMapSize() / MinimapWidgetSize * MapHelper->GetMinimapZoom();
				float MinimapRadius = MinimapWidgetSize / 2;
				UMapMarkerWidget* CurrentMarker;
				UMapMarkerComponent* CurrentMarkerComponent;
				FVector2D ToMarkerVector;
				float LenghtToMarker;
				bool bMarkerInsideMinimap;
				float AngleToMarker;
				FVector2D MarkerPosition;
				FWidgetTransform WidgetTransform;

				for (int32 i = 0; i < MarkerWidgets.Num(); ++i)
				{
					CurrentMarker = MarkerWidgets[i];
					CurrentMarkerComponent = CurrentMarker->GetOwningComponent();

					ToMarkerVector.X = (PlayerLocation.X - CurrentMarkerComponent->GetOwner()->GetActorLocation().X) / MinimapFactor;
					ToMarkerVector.Y = (PlayerLocation.Y - CurrentMarkerComponent->GetOwner()->GetActorLocation().Y) / MinimapFactor * -1;

					LenghtToMarker = ToMarkerVector.Size();
					bMarkerInsideMinimap = MinimapRadius + DisableMarkerRadiousOffset > LenghtToMarker;

					if ((CurrentMarkerComponent->IsStopAtBorder() || CurrentMarkerComponent->IsFindingPath() || bMarkerInsideMinimap) && CurrentMarkerComponent->bVisible)
					{
						AngleToMarker = FMath::Atan2(ToMarkerVector.Y, ToMarkerVector.X);

						if (CurrentMarkerComponent->IsStopAtBorder() || CurrentMarkerComponent->IsFindingPath())
						{
							LenghtToMarker = FMath::Clamp(LenghtToMarker, 0.f, MinimapRadius + StopAtBorderOffset);
						}

						MarkerPosition = FVector2D(FMath::Sin(AngleToMarker) * LenghtToMarker, FMath::Cos(AngleToMarker) * LenghtToMarker).GetRotated(PlayerYawRotation * -1);

						WidgetTransform.Translation = MarkerPosition;
						WidgetTransform.Angle = 0.f;
						if (CurrentMarkerComponent->bRotateAsOwnerRotation)
						{
							WidgetTransform.Angle = (PlayerYawRotation * -1) + CurrentMarkerComponent->GetOwner()->GetActorRotation().Yaw;
						}
						CurrentMarker->SetRenderTransform(WidgetTransform);

						if (CurrentMarker->GetVisibility() == ESlateVisibility::Collapsed)
						{
							CurrentMarker->SetVisibility(ESlateVisibility::HitTestInvisible);
						}
					}
					else
					{
						if (CurrentMarker->GetVisibility() != ESlateVisibility::Collapsed)
						{
							CurrentMarker->SetVisibility(ESlateVisibility::Collapsed);
						}
					}
				}
			}
		}
	}
}

void UMinimapWidget::SwitchMarkerOverlay(UMapMarkerWidget* Marker, bool bStoppedOnBorder)
{
	Marker->RemoveFromParent();
	UOverlaySlot* OverlaySlot;
	if (bStoppedOnBorder)
	{
		OverlaySlot = MarkerOverlay->AddChildToOverlay(Marker);
	}
	else
	{
		OverlaySlot = MaskedMarkerOverlay->AddChildToOverlay(Marker);
	}
	OverlaySlot->SetVerticalAlignment(VAlign_Center);
	OverlaySlot->SetHorizontalAlignment(HAlign_Center);


	FWidgetTransform WidgetTransform;
	WidgetTransform.Translation = FVector2D(2000.f, 2000.f);
	Marker->SetRenderTransform(WidgetTransform);
}

void UMinimapWidget::LoadAllMarkersFromMapHelper()
{
	const TArray<UMapMarkerComponent*>& MarkerComponents = MapHelper->GetVisibleMarkerComponents();

	for (UMapMarkerComponent* MarkerComponent : MarkerComponents)
	{
		AddMarker(MarkerComponent);
	}
}

void UMinimapWidget::FindPathPoints()
{
	if (bDrawPath && MapHelper && MapHelper->IsFindingPath())
	{
		PathDrawerWidget->PathPoints.Empty();
		const TArray<FVector>& PathPointsArr = MapHelper->GetPathPoints();

		if (PathPointsArr.Num() != 0)
		{
			APawn* PlayerPawn = GetOwningPlayer()->GetPawn();
			if (PlayerPawn)
			{
				FVector PlayerLocation = PlayerPawn->GetActorLocation();
				float PlayerYawRotation = MapHelper->PlayerYawRotation;

				float MinimapWidgetSize = MinimapImage->GetCachedGeometry().GetLocalSize().X;

				float MinimapFactor = MapHelper->GetMapSize() / MinimapWidgetSize * MapHelper->GetMinimapZoom();
				float MinimapRadius = MinimapWidgetSize / 2;

				FVector2D ToPointVector;
				FVector2D PathPointPosition;
				
				for (const FVector& CurrentPoint : PathPointsArr)
				{
					ToPointVector.X = (PlayerLocation.X - CurrentPoint.X) / MinimapFactor;
					ToPointVector.Y = (PlayerLocation.Y - CurrentPoint.Y) / MinimapFactor * -1;

					float LenghtToPoint = ToPointVector.Size();

					float AngleToPoint = FMath::Atan2(ToPointVector.Y, ToPointVector.X);

					PathPointPosition = FVector2D(FMath::Sin(AngleToPoint) * LenghtToPoint, FMath::Cos(AngleToPoint) * LenghtToPoint).GetRotated(PlayerYawRotation * -1) + MinimapRadius;
					PathDrawerWidget->PathPoints.Add(PathPointPosition);

					if (LenghtToPoint > MinimapRadius + StopDrawPathOffset)
					{
						break;
					}
				}

			}
		}
	}
}

void UMinimapWidget::AddMarker(UMapMarkerComponent* MarkerComponent)
{
	UMapMarkerWidget* Marker = CreateWidget<UMapMarkerWidget>(GetOwningPlayer(), MarkerComponent->MarkerWidgetClass);
	if (Marker)
	{
		Marker->InitializeMarker(MarkerComponent);
		MarkerWidgets.Add(Marker);

		Marker->OnFindPathToMarker.AddDynamic(this, &UMinimapWidget::UpdateFindPathToMarker);
		Marker->SetVisibility(ESlateVisibility::HitTestInvisible);
		SwitchMarkerOverlay(Marker, MarkerComponent->IsStopAtBorder() || MarkerComponent->IsFindingPath());
	}
}

void UMinimapWidget::RemoveMarker(int32 id)
{
	MarkerWidgets.RemoveAt(id);
}

void UMinimapWidget::UpdateFindPathToMarker(UMapMarkerWidget* MarkerWidget, bool bStart)
{
	if (!bStart)
	{
		PathDrawerWidget->PathPoints.Empty();
	}
	if (MarkerWidget->GetParent())
	{
		SwitchMarkerOverlay(MarkerWidget, MarkerWidget->GetOwningComponent()->IsStopAtBorder() || bStart);
	}
}
