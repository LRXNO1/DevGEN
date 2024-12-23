// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "UI/ScreenMarkerDrawerWidget.h"
#include "Components/Overlay.h"
#include "UI/MapMarkerWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Core/MapHelper.h"
#include "Core/MapMarkerComponent.h"
#include <Engine/UserInterfaceSettings.h>
#include <Kismet/GameplayStatics.h>
#include <Components/OverlaySlot.h>
#include "Components/Border.h"
#include "Blueprint/WidgetTree.h"
#include "UI/ScreenMarkerWidget.h"
#include <Engine/Engine.h>
#include "UnrealClient.h"
#include "Engine/GameViewportClient.h"
#include "GameFramework/Pawn.h"


UScreenMarkerDrawerWidget::UScreenMarkerDrawerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ScreenMarkerScale = 1.f;
	MarkerEdgePercent = 0.93f;
	bHideByDistance = true;
	HideDistance = 5000.f;
	bShowDistanceIfPathfinding = true;
	bIndicateDirection = true;
	bStopAtScreenEdgeIfPathfinding = true;
}

void UScreenMarkerDrawerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeScreenMarkerDrawer();
}

void UScreenMarkerDrawerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	UpdateScreenMarkers();
}

float UScreenMarkerDrawerWidget::GetDistanceToMarker(class UMapMarkerComponent* MarkerComponent)
{
	APawn* Pawn = GetOwningPlayer()->GetPawn();
	float Distance = 0;
	if (Pawn)
	{
		Distance = FVector::Distance(Pawn->GetActorLocation(), MarkerComponent->GetOwner()->GetActorLocation());
	}

	return Distance;
}

void UScreenMarkerDrawerWidget::InitializeScreenMarkerDrawer()
{
	MapHelper = Cast<AMapHelper>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapHelper::StaticClass()));

	if (MapHelper)
	{
		MapHelper->OnAddVisibleMarker.AddDynamic(this, &UScreenMarkerDrawerWidget::AddMarkerToScreen);
		
		TArray<UMapMarkerComponent*> MarkerComponents = MapHelper->GetVisibleMarkerComponents();
		for (UMapMarkerComponent * MarkerComponent : MarkerComponents)
		{
			if (MarkerComponent->CanBeProjectedToScreen())
			{
				AddMarkerToScreen(MarkerComponent);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ScreenMarkerDrawerWidget::Initialize: Failed to get MapHelper"));
	}
}

void UScreenMarkerDrawerWidget::AddMarkerToScreen(UMapMarkerComponent* MarkerComponent)
{
	if (MarkerComponent->CanBeProjectedToScreen())
	{
		if (MarkerComponent->ScreenMarkerWidgetClass || DefaultScreenMarkerWidgetClass)
		{
			UScreenMarkerWidget* ScreenMarker = CreateWidget<UScreenMarkerWidget>(GetOwningPlayer(), MarkerComponent->ScreenMarkerWidgetClass ? MarkerComponent->ScreenMarkerWidgetClass : DefaultScreenMarkerWidgetClass);
			ScreenMarker->InitializeScreenMarker(MarkerComponent);
			ScreenMarker->SetVisibility(ESlateVisibility::HitTestInvisible);
			UOverlaySlot* MarkerSlot = Overlay->AddChildToOverlay(ScreenMarker);
			MarkerSlot->SetHorizontalAlignment(HAlign_Center);
			MarkerSlot->SetVerticalAlignment(VAlign_Center);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ScreenMarkerDrawerWidget: Missing ScreenMarkerWidgetClass"));
		}
	}
}

void UScreenMarkerDrawerWidget::UpdateScreenMarkers()
{
	TArray<UWidget*> Markers = Overlay->GetAllChildren();

	if (Markers.Num() == 0)
	{
		return;
	}

	UScreenMarkerWidget* CurrentMarker;
	UMapMarkerComponent* CurrentMarkerComponent;
	FVector MarkerLocation;
	FVector2D ProjectedScreenLocation;
	float RotationAngleDegrees;
	bool bIsOnScreen;
	bool bStopAtScreenEdge;
	FWidgetTransform WidgetTransform;

	FVector2D viewportSize;
	GEngine->GameViewport->GetViewportSize(viewportSize);
	float DPIScale = GetDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass())->GetDPIScaleBasedOnSize(FIntPoint(viewportSize.X, viewportSize.Y));

	for (UWidget* MarkerWidget : Markers)
	{
		CurrentMarker = Cast<UScreenMarkerWidget>(MarkerWidget);
		CurrentMarkerComponent = CurrentMarker->GetMarkerComponent();

		if ((CurrentMarkerComponent->bProjectToScreen || CurrentMarkerComponent->IsFindingPath()) && CurrentMarkerComponent->bVisible)
		{
			if (bHideByDistance && !CurrentMarkerComponent->IsFindingPath() && !CurrentMarkerComponent->bAlwaysProjectToScreen && GetDistanceToMarker(CurrentMarkerComponent) > HideDistance)
			{
				if (CurrentMarker->GetVisibility() != ESlateVisibility::Collapsed)
				{
					CurrentMarker->SetVisibility(ESlateVisibility::Collapsed);
				}
				continue;
			}
			
			MarkerLocation = CurrentMarkerComponent->GetOwner()->GetActorLocation();
			MarkerLocation.Z += CurrentMarkerComponent->LocationOffsetZ;

			bStopAtScreenEdge = (CurrentMarkerComponent->IsFindingPath() && bStopAtScreenEdgeIfPathfinding) || CurrentMarkerComponent->bStopAtScreenEdge;

			ConvertWorldLocationToScreenLocation(MarkerLocation, MarkerEdgePercent, bStopAtScreenEdge, FVector2D(0.5f, 0.5f), ProjectedScreenLocation, RotationAngleDegrees, bIsOnScreen);

			if (!bStopAtScreenEdge && !bIsOnScreen)
			{
				CurrentMarker->SetVisibility(ESlateVisibility::Collapsed);
			}
			else
			{
				ProjectedScreenLocation = (ProjectedScreenLocation - viewportSize / 2) / DPIScale;

				if (bIndicateDirection && !bIsOnScreen)
				{
					CurrentMarker->SetArrowVisibility(true);
					CurrentMarker->SetArrowAngle(RotationAngleDegrees);
				}
				else
				{
					CurrentMarker->SetArrowVisibility(false);
				}

				if (bAlwaysShowDistance || (bShowDistanceIfPathfinding && CurrentMarkerComponent->IsFindingPath()))
				{
					CurrentMarker->SetDistanceVisibility(true);
					CurrentMarker->SetDistance(GetDistanceToMarker(CurrentMarkerComponent) / 100);
				}
				else
				{
					CurrentMarker->SetDistanceVisibility(false);
				}

				WidgetTransform.Translation = ProjectedScreenLocation;
				WidgetTransform.Scale = FVector2D(ScreenMarkerScale);

				if (CurrentMarker->GetVisibility() != ESlateVisibility::HitTestInvisible)
				{
					CurrentMarker->SetVisibility(ESlateVisibility::HitTestInvisible);
				}

				CurrentMarker->SetRenderTransform(WidgetTransform);
			}
		}
		else if(CurrentMarker->GetVisibility() != ESlateVisibility::Collapsed)
		{
			CurrentMarker->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UScreenMarkerDrawerWidget::ConvertWorldLocationToScreenLocation(const FVector& InLocation, const float EdgePercent, const bool bStopCalcIfOff, const FVector2D ViewportCenterLoc, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen)
{
	bIsOnScreen = false;
	OutRotationAngleDegrees = 0.f;
	FVector2D ScreenPosition = FVector2D();

	if (!GEngine)
	{
		return;
	}

	const FVector2D ViewportSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
	const FVector2D ViewportCenter = FVector2D(ViewportSize.X * ViewportCenterLoc.X, ViewportSize.Y * ViewportCenterLoc.Y);

	APlayerController* PlayerController = GetOwningPlayer();

	if (!PlayerController)
	{
		return;
	}

	FVector CameraLoc;
	FRotator CameraRot;

	PlayerController->GetPlayerViewPoint(CameraLoc, CameraRot);

	const FVector CameraToLoc = InLocation - CameraLoc;
	FVector Forward = CameraRot.Vector();
	FVector Offset = CameraToLoc.GetSafeNormal();

	float DotProduct = FVector::DotProduct(Forward, Offset);
	bool bLocationIsBehindCamera = (DotProduct < 0);

	if (bLocationIsBehindCamera)
	{
		FVector Inverted = CameraToLoc * -1.f;
		FVector NewInLocation = CameraLoc + Inverted;

		PlayerController->ProjectWorldLocationToScreen(NewInLocation, ScreenPosition);

		ScreenPosition.X = ViewportSize.X - ScreenPosition.X;
		ScreenPosition.Y = ViewportSize.Y - ScreenPosition.Y;
	}
	else
	{
		PlayerController->ProjectWorldLocationToScreen(InLocation, ScreenPosition);
	}

	if ((ScreenPosition.X >= 0.f && ScreenPosition.X <= ViewportSize.X
		&& ScreenPosition.Y >= 0.f && ScreenPosition.Y <= ViewportSize.Y && !bLocationIsBehindCamera))
	{
		OutScreenPosition = ScreenPosition;
		bIsOnScreen = true;
		return;
	}
	else if (!bStopCalcIfOff)
	{
		return;
	}

	ScreenPosition -= ViewportCenter;

	float AngleRadians = FMath::Atan2(ScreenPosition.Y, ScreenPosition.X);
	AngleRadians -= FMath::DegreesToRadians(90.f);

	OutRotationAngleDegrees = FMath::RadiansToDegrees(AngleRadians) + 180.f;

	float Cos = cosf(AngleRadians);
	float Sin = -sinf(AngleRadians);

	ScreenPosition = FVector2D(ViewportCenter.X + (Sin * 150.f), ViewportCenter.Y + Cos * 150.f);

	float m = Cos / Sin;

	FVector2D ScreenBounds = ViewportCenter * EdgePercent;

	if (Cos > 0)
	{
		ScreenPosition = FVector2D(ScreenBounds.Y / m, ScreenBounds.Y);
	}
	else
	{
		ScreenPosition = FVector2D(-ScreenBounds.Y / m, -ScreenBounds.Y);
	}

	if (ScreenPosition.X > ScreenBounds.X)
	{
		ScreenPosition = FVector2D(ScreenBounds.X, ScreenBounds.X * m);
	}
	else if (ScreenPosition.X < -ScreenBounds.X)
	{
		ScreenPosition = FVector2D(-ScreenBounds.X, -ScreenBounds.X * m);
	}

	ScreenPosition += ViewportCenter;

	OutScreenPosition = ScreenPosition;
}
