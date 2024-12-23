// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "UI/MapWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/Border.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Core/MapHelper.h"
#include <Kismet/GameplayStatics.h>
#include "Core/MapMarkerComponent.h"
#include "UI/MapMarkerWidget.h"
#include "UI/MapPathDrawerWidget.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"



UMapWidget::UMapWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	MoveRate = 1.f;
	ZoomStep = 200.f;
	ZoomSpeed = 15.f;
	MinSize = 1024.f;
	MaxSize = 4096.f;
	bDrawPath = true;
	MarkerSizeMultiplier = 1.f;
}

void UMapWidget::InitializeMap()
{
	MapHelper = Cast<AMapHelper>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapHelper::StaticClass()));
	if (MapHelper)
	{
		UpdateMap();
		UpdateMapTexture();
		MapHelper->OnAddMarker.AddDynamic(this, &UMapWidget::AddMarker);
		MapHelper->OnUpdateFindPath.AddDynamic(this, &UMapWidget::OnFindPathPoints);
		MapHelper->OnUpdateMapTexture.AddUObject(this, &UMapWidget::UpdateMapTexture);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MapWidget::Initialize: Failed to get MapHelper"));
		SetIsEnabled(false);
	}
}

void UMapWidget::NativeConstruct()
{
	Super::NativeConstruct();
	InitializeMap();
}

void UMapWidget::UpdateMap()
{
	ClearMarkers();
	UpdateMarkers();
	FindPathPoints();
}

void UMapWidget::UpdateMarkers()
{
	if (MapHelper)
	{
		const TArray<UMapMarkerComponent*>& VisibleMapMarkerComponents = MapHelper->GetVisibleMarkerComponents();

		for (UMapMarkerComponent* MapMarkerComponent : VisibleMapMarkerComponents)
		{
			AddMarker(MapMarkerComponent);
		}

		const TArray<UMapMarkerComponent*>& HiddenMapMarkerComponents = MapHelper->GetHiddenMarkerComponents();

		for (UMapMarkerComponent* MapMarkerComponent : HiddenMapMarkerComponents)
		{
			AddMarker(MapMarkerComponent);
		}
	}
}

void UMapWidget::AddMarker(UMapMarkerComponent* MarkerComponent)
{
	if (MarkerComponent->bVisible && !MarkerComponent->bOnlyMinimap)
	{
		UMapMarkerWidget* MapMarkerWidget = CreateWidget<UMapMarkerWidget>(GetOwningPlayer(), MarkerComponent->MarkerWidgetClass);

		if (MapMarkerWidget)
		{
			UCanvasPanelSlot* MarkerCanvasSlot = MarkersCanvas->AddChildToCanvas(MapMarkerWidget);
			MapMarkerWidget->InitializeMarker(MarkerComponent);
			FVector2D MarkerSize = MapMarkerWidget->Icon->GetBrush().GetImageSize() * MarkerSizeMultiplier;
			MarkerCanvasSlot->SetPosition(ConvertMapHelperToMapWidgetPosition(MapHelper->ConvertWorldLocToMapHelperPosition(MarkerComponent->GetOwner()->GetActorLocation(), !MapHelper->bLockBigMapTextureChange)) - MarkerSize / 2);
			MarkerCanvasSlot->SetSize(MarkerSize);
			MapMarkerWidget->bOnBigMap = true;

			if (MarkerComponent->bRotateAsOwnerRotation)
			{
				MapMarkerWidget->SetRenderTransformAngle(MarkerComponent->GetOwner()->GetActorRotation().Yaw);
			}
		}
	}
}

void UMapWidget::ClearMap()
{
	ClearMarkers();
	PathDrawerWidget->PathPoints.Empty();
}

void UMapWidget::ClearMarkers()
{
	MarkersCanvas->ClearChildren();
}

void UMapWidget::FixPositionsAfterScaling(FVector2D ScalingFactor)
{
	TArray<UWidget*> Widgets = MarkersCanvas->GetAllChildren();
	UCanvasPanelSlot* CanvasPanelSlot;

	for (UWidget* Widget : Widgets)
	{
		if (Widget)
		{
			CanvasPanelSlot = Cast<UCanvasPanelSlot>(Widget->Slot);
			CanvasPanelSlot->SetPosition((CanvasPanelSlot->GetPosition() + FVector2D(CanvasPanelSlot->GetSize() / 2)) * ScalingFactor - FVector2D(CanvasPanelSlot->GetSize() / 2));
		}
	}

	FindPathPoints();
}

void UMapWidget::UpdateMapTexture()
{
	UTexture* MapTexture = MapHelper->GetMapTexture(MapHelper->bLockBigMapTextureChange);
	if (MapTexture)
	{
		UMaterialInstanceDynamic* MapMaterial = MapImage->GetDynamicMaterial();
		if (MapMaterial)
		{
			MapMaterial->SetTextureParameterValue("MapTexture", (UTexture*)MapTexture);
		}
	}
}

void UMapWidget::FindPathPoints()
{
	PathDrawerWidget->PathPoints.Empty();
	if (bDrawPath && MapHelper && MapHelper->IsFindingPath())
	{
		const TArray<FVector>& PathPointsWorld = MapHelper->GetPathPoints();

		if (PathPointsWorld.Num() != 0)
		{
			for (const FVector& PathPointWorld : PathPointsWorld)
			{
				PathDrawerWidget->PathPoints.Add(ConvertMapHelperToMapWidgetPosition(MapHelper->ConvertWorldLocToMapHelperPosition(PathPointWorld, !MapHelper->bLockBigMapTextureChange)));
			}
		}
	}
}

void UMapWidget::OnFindPathPoints(bool bIsFindingPath)
{
	if (bIsFindingPath)
	{
		FindPathPoints();
	}
	else
	{
		PathDrawerWidget->PathPoints.Empty();
	}
}

FVector2D UMapWidget::ConvertMapHelperToMapWidgetPosition(FVector2D MapHelperPosition)
{
	UCanvasPanelSlot* MapImageCanvasSlot = Cast<UCanvasPanelSlot>(MapImage->Slot);
	FVector2D MapWidgetSize;
	if (MapImageCanvasSlot)
	{
		MapWidgetSize = MapImageCanvasSlot->GetSize();
	}

	return FVector2D(MapHelperPosition.X / MapHelper->GetMapSize(MapHelper->bLockBigMapTextureChange) * MapWidgetSize.X, MapHelperPosition.Y / MapHelper->GetMapSize(MapHelper->bLockBigMapTextureChange) * MapWidgetSize.Y);
}

FVector2D UMapWidget::ConvertMapWidgetToMapHelperPosition(FVector2D MapWidgetPosition)
{
	UCanvasPanelSlot* MapImageCanvasSlot = Cast<UCanvasPanelSlot>(MapImage->Slot);
	FVector2D MapWidgetSize;
	if (MapImageCanvasSlot)
	{
		MapWidgetSize = MapImageCanvasSlot->GetSize();
	}
	return FVector2D(MapWidgetPosition.X / MapWidgetSize.X * MapHelper->GetMapSize(MapHelper->bLockBigMapTextureChange), MapWidgetPosition.Y / MapWidgetSize.Y * MapHelper->GetMapSize(MapHelper->bLockBigMapTextureChange));
}

void UMapWidget::SetVisibility(ESlateVisibility InVisibility)
{
	Super::SetVisibility(InVisibility);
	if (InVisibility == ESlateVisibility::Hidden || InVisibility == ESlateVisibility::Collapsed)
	{
		ClearMap();
	}
	else
	{
		UpdateMarkers();
		FindPathPoints();
	}
}

FVector2D UMapWidget::ClampMapPosition(const FGeometry& InGeometry, class UCanvasPanelSlot* MapImageCanvasSlot, FVector2D NewPosition)
{
	if (MapImageCanvasSlot)
	{
		FVector2D MinMaxMapOffset = (MapImageCanvasSlot->GetSize() - InGeometry.GetLocalSize()) / 2;
		if (MinMaxMapOffset.X > 0)
		{
			NewPosition.X = FMath::Clamp(NewPosition.X, -MinMaxMapOffset.X, MinMaxMapOffset.X);
		}
		else
		{
			NewPosition.X = 0;
		}

		if (MinMaxMapOffset.Y > 0)
		{
			NewPosition.Y = FMath::Clamp(NewPosition.Y, -MinMaxMapOffset.Y, MinMaxMapOffset.Y);
		}
		else
		{
			NewPosition.Y = 0;
		}
	}

	return NewPosition;
}

FReply UMapWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	bLeftMouseButtonPressed = InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton);

	if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		CreateCustomMarker(InMouseEvent.GetLastScreenSpacePosition());
	}

	return FReply::Handled();
}

FReply UMapWidget::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);

	bLeftMouseButtonPressed = InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton);

	return FReply::Handled();
}

FReply UMapWidget::NativeOnMouseWheel(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseWheel(InGeometry, InMouseEvent);
	ZoomMap(InGeometry, InMouseEvent.GetWheelDelta(), true);

	return FReply::Handled();
}

FReply UMapWidget::NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseMove(InGeometry, InMouseEvent);

	if (bLeftMouseButtonPressed)
	{
		MoveMap(InGeometry, InMouseEvent.GetCursorDelta());
	}

	return FReply::Handled();
}

void UMapWidget::CreateCustomMarker(const FVector2D MarkerPosition)
{
	UCanvasPanelSlot* MapImageCanvasSlot = Cast<UCanvasPanelSlot>(MapImage->Slot);
	if (MapImageCanvasSlot)
	{
		FVector2D CustomMarkerPos = MapImage->GetCachedGeometry().AbsoluteToLocal(MarkerPosition);
		MapHelper->CreateCustomMarker(ConvertMapWidgetToMapHelperPosition(CustomMarkerPos));
	}
}

void UMapWidget::ZoomMap(const FGeometry& InGeometry, const float ZoomVector, bool bInterpolate)
{
	UCanvasPanelSlot* MapImageCanvasSlot = Cast<UCanvasPanelSlot>(MapImage->Slot);
	if (MapImageCanvasSlot)
	{
		FVector2D CurrentMapSize = MapImageCanvasSlot->GetSize();
		TargetMapSize = CurrentMapSize + ZoomVector * ZoomStep;
		
		if (TargetMapSize.X > MaxSize && TargetMapSize.Y > MaxSize)
		{
			TargetMapSize.Set(MaxSize, MaxSize);
		}
		else if (TargetMapSize.X < MinSize && TargetMapSize.Y < MinSize)
		{
			TargetMapSize.Set(MinSize, MinSize);
		}

		if (!bInterpolate)
		{
			MapImageCanvasSlot->SetSize(TargetMapSize);
			FVector2D NewMapPosition = MapImageCanvasSlot->GetPosition() * (TargetMapSize / CurrentMapSize);
			MapImageCanvasSlot->SetPosition(ClampMapPosition(InGeometry, MapImageCanvasSlot, NewMapPosition));

			FixPositionsAfterScaling(TargetMapSize / CurrentMapSize);
		}
		else
		{
			bZoomingMap = true;
		}
	}
}

void UMapWidget::ZoomMapOnMouseWheel(const FGeometry& InGeometry, float InDeltaTime)
{
	if (bZoomingMap)
	{
		UCanvasPanelSlot* MapImageCanvasSlot = Cast<UCanvasPanelSlot>(MapImage->Slot);
		if (MapImageCanvasSlot)
		{
			FVector2D CurrentMapSize = MapImageCanvasSlot->GetSize();
			FVector2D InterpedNewMapSize = FMath::Vector2DInterpTo(CurrentMapSize, TargetMapSize, InDeltaTime, ZoomSpeed);

			MapImageCanvasSlot->SetSize(InterpedNewMapSize);
			FVector2D NewMapPosition = MapImageCanvasSlot->GetPosition() * (InterpedNewMapSize / CurrentMapSize);
			MapImageCanvasSlot->SetPosition(ClampMapPosition(InGeometry, MapImageCanvasSlot, NewMapPosition));

			FixPositionsAfterScaling(InterpedNewMapSize / CurrentMapSize);

			if (InterpedNewMapSize == CurrentMapSize)
			{
				bZoomingMap = false;
			}
		}
	}
}

void UMapWidget::MoveMap(const FGeometry& InGeometry, const FVector2D MoveVector)
{
	UCanvasPanelSlot* MapImageCanvasSlot = Cast<UCanvasPanelSlot>(MapImage->Slot);
	if (MapImageCanvasSlot)
	{
		FVector2D NewMapPosition = MapImageCanvasSlot->GetPosition() + MoveVector * MoveRate;
		MapImageCanvasSlot->SetPosition(ClampMapPosition(InGeometry, MapImageCanvasSlot, NewMapPosition));
	}
}

void UMapWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	ZoomMapOnMouseWheel(MyGeometry, InDeltaTime);
	if (bUpdateMapEveryFrame)
	{
		UpdateMap();
	}
}