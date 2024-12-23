// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "Core/MapCustomMarker.h"
#include "Core/MapMarkerComponent.h"
#include "UI/MapMarkerWidget.h"
#include "Components/CapsuleComponent.h"


void AMapCustomMarker::BeginPlay()
{
	Super::BeginPlay();
	Collision->OnComponentBeginOverlap.AddDynamic(this, &AMapCustomMarker::OnOverlap);
	MapMarkerComponent->OnRightMouseClick.AddDynamic(this, &AMapCustomMarker::K2_DestroyActor);
}

void AMapCustomMarker::OnOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetInstigatorController() == GetOwner())
	{
		Destroy();
	}
}