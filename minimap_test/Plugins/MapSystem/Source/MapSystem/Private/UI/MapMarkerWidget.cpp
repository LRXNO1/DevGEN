// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "UI/MapMarkerWidget.h"
#include "Components/Image.h"
#include "Core/MapMarkerComponent.h"


void UMapMarkerWidget::InitializeMarker_Implementation(UMapMarkerComponent* MarkerComponent)
{
	if (MarkerComponent)
	{
		OwningComponent = MarkerComponent;
		OwningComponent->OnFindPath.AddDynamic(this, &UMapMarkerWidget::CallOnFindPathToMarker);
		OwningComponent->OnEndPlay.AddUObject(this, &UMapMarkerWidget::RemoveFromParent);
		OwningComponent->OnHide.AddUObject(this, &UMapMarkerWidget::HideMarker);
	}
}

void UMapMarkerWidget::OnLeftMouseButtonDown_Implementation()
{
	OwningComponent->LeftMouseClick();
}

void UMapMarkerWidget::OnRightMouseButtonDown_Implementation()
{
	OwningComponent->RightMouseClick();
}

void UMapMarkerWidget::CallOnFindPathToMarker(bool bFindingPath)
{
	OnFindPathToMarker.Broadcast(this, bFindingPath);
}

FReply UMapMarkerWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		OnLeftMouseButtonDown();
	}
	else if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		OnRightMouseButtonDown();
	}
	return FReply::Handled();
}

FReply UMapMarkerWidget::NativeOnMouseButtonDoubleClick(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDoubleClick(InGeometry, InMouseEvent);

	OwningComponent->DoubleClick(InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) ? true : false);

	return FReply::Handled();
}

void UMapMarkerWidget::HideMarker()
{
	if (!bOnBigMap)
	{
		RemoveFromParent();
	}
}

