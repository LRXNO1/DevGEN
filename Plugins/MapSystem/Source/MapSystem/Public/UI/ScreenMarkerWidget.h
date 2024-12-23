// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScreenMarkerWidget.generated.h"

class UMapMarkerComponent;

UCLASS()
class MAPSYSTEM_API UScreenMarkerWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UMapMarkerComponent* MapMarkerComponent;


public:

	UPROPERTY(BlueprintReadOnly, Category = ScreenMarkerWidget, meta = (BindWidget))
		class UOverlay* Overlay;

	UPROPERTY(BlueprintReadOnly, Category = ScreenMarkerWidget, meta = (BindWidget))
		class UImage* DirectionArrow;

	UPROPERTY(BlueprintReadOnly, Category = ScreenMarkerWidget, meta = (BindWidget))
		class UTextBlock* DistanceText;

	/**If true then a MapMarkerWidget will be created and added to Overlay automatically. You must set it to false if you want to use another widget instead of the default marker widget **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bAutoCreateMarkerWidget;

	/**Controls whether the displayed distance includes the "m" unit **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bShowMeters;

	UScreenMarkerWidget(const FObjectInitializer& ObjectInitializer);
	void InitializeScreenMarker(UMapMarkerComponent* MarkerComponent);
	void SetArrowAngle(float Angle);
	void SetArrowVisibility(bool bVisible);
	void SetDistance(int Distance);
	void SetDistanceVisibility(bool bVisible);
	UMapMarkerComponent* GetMarkerComponent() const { return MapMarkerComponent; };
};
