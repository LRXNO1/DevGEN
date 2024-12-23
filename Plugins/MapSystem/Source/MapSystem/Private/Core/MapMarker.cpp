// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "Core/MapMarker.h"
#include "Core/MapMarkerComponent.h"
#include "Components/CapsuleComponent.h"


AMapMarker::AMapMarker()
{
	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	SetRootComponent(Collision);
	Collision->SetCapsuleHalfHeight(2000.f);
	Collision->SetCapsuleRadius(80.f);
	MapMarkerComponent = CreateDefaultSubobject<UMapMarkerComponent>(TEXT("MapMarkerComponent"));
}
