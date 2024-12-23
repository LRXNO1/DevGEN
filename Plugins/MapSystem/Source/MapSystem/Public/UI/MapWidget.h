// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MapWidget.generated.h"

class UCanvasPanel;
class UMapMarkerWidget;
class AMapHelper;

UCLASS(Abstract)
class MAPSYSTEM_API UMapWidget : public UUserWidget
{
	GENERATED_BODY()


protected:

	/**If true, then the path can be drawn on the map */
	UPROPERTY(EditAnywhere, Category = MapSettings)
		bool bDrawPath;

	UFUNCTION()
		void AddMarker(class UMapMarkerComponent* MarkerComponent);

	UFUNCTION()
		void UpdateMarkers();

	UFUNCTION()
		void OnFindPathPoints(bool bIsFindingPath);

	AMapHelper* MapHelper;
	bool bLeftMouseButtonPressed;
	bool bZoomingMap;
	FVector2D TargetMapSize;

	void InitializeMap();
	void FindPathPoints();
	void ClearMarkers();
	void FixPositionsAfterScaling(FVector2D ScalingFactor);
	void UpdateMapTexture();

	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	FReply NativeOnMouseWheel(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	FVector2D ClampMapPosition(const FGeometry& InGeometry, class UCanvasPanelSlot* MapImageCanvasSlot, FVector2D NewPosition);
	void ZoomMapOnMouseWheel(const FGeometry& InGeometry, float InDeltaTime);


public:

	UPROPERTY(BlueprintReadOnly, Category = MapWidget, meta = (BindWidget))
		UCanvasPanel* MarkersCanvas;

	UPROPERTY(BlueprintReadOnly, Category = MapWidget, meta = (BindWidget))
		UCanvasPanel* MapCanvas;

	UPROPERTY(BlueprintReadOnly, Category = MapWidget, meta = (BindWidget))
		class UBorder* MapImage;

	UPROPERTY(BlueprintReadOnly, Category = MapWidget, meta = (BindWidget))
		class UMapPathDrawerWidget* PathDrawerWidget;


	/**If true, marker positions and a path will be updated every frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		bool bUpdateMapEveryFrame;

	/**This variable is responsible for the speed at which the map moves when the left mouse button is pressed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		float MoveRate;

	/**This is the map zoom step */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		float ZoomStep;

	/**This variable is used when interpolating the map size when zooming. The smaller the value, the smoother the zoom */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		float ZoomSpeed;

	/**The maximum map size. Zooming changes the size of the map */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		float MaxSize;

	/**The minimum map size. Zooming changes the size of the map */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		float MinSize;

	/**Multiply the size of the marker by this value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MapSettings)
		float MarkerSizeMultiplier;


	/**Completely updates the position of all objects on the map. Removes all markers, updates the player's position, creates all markers and finds a path */
	UFUNCTION(BlueprintCallable, Category = MapSettings)
		void UpdateMap();

	/**Remove markers and path */
	UFUNCTION(BlueprintCallable, Category = MapSettings)
		void ClearMap();

	/**Converts the map helper position to the map widget position */
	UFUNCTION(BlueprintPure, Category = MapSettings)
		FVector2D ConvertMapHelperToMapWidgetPosition(FVector2D MapHelperPosition);

	/**Converts the map widget position to the map helper position */
	UFUNCTION(BlueprintPure, Category = MapSettings)
		FVector2D ConvertMapWidgetToMapHelperPosition(FVector2D MapWidgetPosition);

	/**Returns a reference to the MapHelper */
	UFUNCTION(BlueprintPure, Category = Utils)
		FORCEINLINE AMapHelper* GetMapHelper() const { return MapHelper; };

	/**Adjusts the position of a map image within its canvas panel slot. It shifts the map based on a specified movement vector, scaled by a predefined rate */
	UFUNCTION(BlueprintCallable, Category = MapMovement)
		void MoveMap(const FGeometry& InGeometry, const FVector2D MoveVector);

	/**Adjusts the size of a map image within a user interface, based on a given zoom factor.*/
	UFUNCTION(BlueprintCallable, Category = MapMovement)
		void ZoomMap(const FGeometry& InGeometry, const float ZoomVector, bool bInterpolate);

	/**Adds a custom marker to the map. It takes a position and places a marker there, adjusting the position to be relative to the map's current layout and scale */
	UFUNCTION(BlueprintCallable, Category = Markers)
		void CreateCustomMarker(const FVector2D MarkerPosition);

	UMapWidget(const FObjectInitializer& ObjectInitializer);

	void SetVisibility(ESlateVisibility InVisibility) override;

};