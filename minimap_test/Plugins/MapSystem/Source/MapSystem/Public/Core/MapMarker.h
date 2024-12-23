// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapMarker.generated.h"

class UMapMarkerComponent;


/**
* This is an actor marker, this can be simply placed on the map, it already has a marker component and can be customized.
*/
UCLASS()
class MAPSYSTEM_API AMapMarker : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = Components)
		class UCapsuleComponent* Collision;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		UMapMarkerComponent* MapMarkerComponent;


	AMapMarker();
};