// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MapMarker.h"
#include "MapCustomMarker.generated.h"


UCLASS()
class MAPSYSTEM_API AMapCustomMarker : public AMapMarker
{
	GENERATED_BODY()

protected:

	UFUNCTION()
		void OnOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	virtual void BeginPlay() override;

};
