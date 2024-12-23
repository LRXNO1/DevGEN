// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "UI/ScreenMarkerWidget.h"
#include "Components/Overlay.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "UI/MapMarkerWidget.h"
#include <Components/OverlaySlot.h>
#include "Core/MapMarkerComponent.h"


#define LOCTEXT_NAMESPACE "ScreenMarkerWidget"

UScreenMarkerWidget::UScreenMarkerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bAutoCreateMarkerWidget = true;
	bShowMeters = true;
}

void UScreenMarkerWidget::InitializeScreenMarker(UMapMarkerComponent* MarkerComponent)
{
	MapMarkerComponent = MarkerComponent;
	MarkerComponent->OnEndPlay.AddUObject(this, &UScreenMarkerWidget::RemoveFromParent);
	MarkerComponent->OnHide.AddUObject(this, &UScreenMarkerWidget::RemoveFromParent);

	if (bAutoCreateMarkerWidget)
	{
		UMapMarkerWidget* Marker = CreateWidget<UMapMarkerWidget>(GetOwningPlayer(), MarkerComponent->MarkerWidgetClass);
		Marker->InitializeMarker(MarkerComponent);
		UOverlaySlot* MarkerSlot = Overlay->AddChildToOverlay(Marker);
		MarkerSlot->SetVerticalAlignment(VAlign_Center);
		MarkerSlot->SetHorizontalAlignment(HAlign_Center);
	}
}

void UScreenMarkerWidget::SetArrowAngle(float Angle)
{
	DirectionArrow->SetRenderTransformAngle(Angle);
}

void UScreenMarkerWidget::SetArrowVisibility(bool bVisible)
{
	ESlateVisibility DesiredVisibility = bVisible ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed;

	if (DirectionArrow->GetVisibility() != DesiredVisibility)
	{
		DirectionArrow->SetVisibility(DesiredVisibility);
	}
}

void UScreenMarkerWidget::SetDistance(int Distance)
{
	FText DistanceFormat = LOCTEXT("DistanceText", "{0}");
	if (bShowMeters)
	{
		DistanceFormat = LOCTEXT("DistanceTextMeters", "{0} m");
	}

	DistanceText->SetText(FText::Format(DistanceFormat, FText::AsNumber(Distance)));
}

void UScreenMarkerWidget::SetDistanceVisibility(bool bVisible)
{
	ESlateVisibility DesiredVisibility = bVisible ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed;

	if (DistanceText->GetVisibility() != DesiredVisibility)
	{
		DistanceText->SetVisibility(DesiredVisibility);
	}
}
