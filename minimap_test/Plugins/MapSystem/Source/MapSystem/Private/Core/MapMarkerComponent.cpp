// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "Core/MapMarkerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Core/MapHelper.h"
#include "UI/MapMarkerWidget.h"


UMapMarkerComponent::UMapMarkerComponent()
{
	bVisible = true;
	bPathable = true;
}

void UMapMarkerComponent::BeginPlay()
{
	Super::BeginPlay();
	AddMarkerToMapHelper();
}

void UMapMarkerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	OnEndPlay.Broadcast();

	if (MapHelper)
	{
		MapHelper->RemoveMarkerComponent(this);
	}
}

void UMapMarkerComponent::AddMarkerToMapHelper()
{
	MapHelper = Cast<AMapHelper>(UGameplayStatics::GetActorOfClass(GetWorld(), AMapHelper::StaticClass()));
	if (MapHelper)
	{
		MapHelper->AddMarkerComponent(this);
	}
}

void UMapMarkerComponent::LeftMouseClick()
{
	StartFindingPath();
	OnLeftMouseClick.Broadcast();
}

void UMapMarkerComponent::RightMouseClick()
{
	StopFindingPath();
	OnRightMouseClick.Broadcast();
}

void UMapMarkerComponent::DoubleClick(bool bRightClick)
{
	OnDoubleClick.Broadcast(bRightClick);
}

void UMapMarkerComponent::StartFindingPath()
{
	if (!bFindingPath && bPathable)
	{
		MapHelper->StartFindingPathToMarker(this);
	}
}

void UMapMarkerComponent::StopFindingPath()
{
	if (bFindingPath && bPathable)
	{
		MapHelper->StopFindingPath();
	}
}

void UMapMarkerComponent::ReRegisterMarker()
{
	MapHelper->RemoveMarkerComponent(this);
	OnHide.Broadcast();
	MapHelper->AddMarkerComponent(this);
}

void UMapMarkerComponent::SetFindingPath(bool bValue)
{
	bFindingPath = bValue;
	OnFindPath.Broadcast(bFindingPath);
}