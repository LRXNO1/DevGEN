// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScreenMarkerDrawerWidget.generated.h"


class UScreenMarkerWidget;
class UMapMarkerComponent;

/**
 * This widget is a container for screen markers. It needs to be expanded to full screen. 
 */
UCLASS()
class MAPSYSTEM_API UScreenMarkerDrawerWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UFUNCTION()
		void AddMarkerToScreen(class UMapMarkerComponent* MarkerComponent);


	class AMapHelper* MapHelper;

	void InitializeScreenMarkerDrawer();
	void UpdateScreenMarkers();
	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	float GetDistanceToMarker(UMapMarkerComponent* MarkerComponent);

public:

	UPROPERTY(BlueprintReadOnly, Category = ScreenMarkerDrawerWidget, meta = (BindWidget))
		class UOverlay* Overlay;

	/**Multiply the size of the marker by this value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		float ScreenMarkerScale;

	/**How close will the marker be to the edge of the screen, 1.0 = at edge, 0.0 = at center of screen */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		float MarkerEdgePercent;

	/**If true, the arrow will indicate a direction to the marker */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bIndicateDirection;

	/**if true, the distance to the marker will always be shown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bAlwaysShowDistance;

	/**Show distance to the marker if a path is being found to it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bShowDistanceIfPathfinding;

	/**If true, this marker will be on the screen when finding a path */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bStopAtScreenEdgeIfPathfinding;

	/**If true, screen markers will be hidden if distance from the player is more than HideDistance **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		bool bHideByDistance;

	/**If a screen marker is further away from the player than this value then it'll be hidden **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (EditCondition = "bHideByDistance==true"))
		float HideDistance;


	/**
	* If no class is specified for the marker, this will be used by default
	* USE ONLY BLUEPRINT CLASSES
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
		TSubclassOf<class UScreenMarkerWidget> DefaultScreenMarkerWidgetClass;


	/**
	* Converts a world location to screen position for HUD drawing.
	*
	* @param InLocation - The world space location to be converted to screen space
	* @param EdgePercent - How close to the edge of the screen, 1.0 = at edge, 0.0 = at center of screen. .9 or .95 is usually desirable
	* @param bStopCalcIfOff - True - stop calculation if off screen
	* @param ViewportCenterLoc - for offsetting center of the screen, leave at (0.5, 0.5) for no offset
	* @outparam OutScreenPosition - the screen coordinates for HUD drawing
	* @outparam OutRotationAngleDegrees - The angle to rotate a HUD element if you want it pointing toward the off screen indicator, 0° if on screen
	* @outparam bIsOnScreen - True if the specified location is in the camera view (may be obstructed)
	*/
	UFUNCTION(BlueprintPure, Category = "Utils")
		void ConvertWorldLocationToScreenLocation(const FVector& InLocation, const float EdgePercent, const bool bStopCalcIfOff, const FVector2D ViewportCenterLoc, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen);


	UScreenMarkerDrawerWidget(const FObjectInitializer& ObjectInitializer);
};
