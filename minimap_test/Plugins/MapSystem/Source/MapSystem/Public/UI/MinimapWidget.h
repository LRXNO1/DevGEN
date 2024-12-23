// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinimapWidget.generated.h"

class UMapMarkerWidget;
class UOverlay;
class AMapHelper;


UCLASS()
class MAPSYSTEM_API UMinimapWidget : public UUserWidget
{
	GENERATED_BODY()

		void LoadAllMarkersFromMapHelper();

protected:

	/**If true, then the path can be drawn on the minimap */
	UPROPERTY(EditAnywhere, Category = MinimapSettings)
		bool bDrawPath;


	UFUNCTION()
		void AddMarker(UMapMarkerComponent* MarkerComponent);

	UFUNCTION()
		void RemoveMarker(int32 id);

	UFUNCTION()
		void UpdateFindPathToMarker(UMapMarkerWidget* MarkerWidget, bool bStart);


	TArray<UMapMarkerWidget*> MarkerWidgets;
	AMapHelper* MapHelper;

	void InitializeMinimap();
	void UpdateMarkersPositions();
	void SwitchMarkerOverlay(UMapMarkerWidget* Marker, bool bStoppedOnBorder);
	void FindPathPoints();
	void NativeConstruct() override;
	void UpdateMapTexture();

public:

	UPROPERTY(BlueprintReadOnly, Category = MinimapWidget, meta = (BindWidget))
		class UBorder* MinimapImage;

	UPROPERTY(BlueprintReadOnly, Category = MinimapWidget, meta = (BindWidget))
		UOverlay* MarkerOverlay;

	UPROPERTY(BlueprintReadOnly, Category = MinimapWidget, meta = (BindWidget))
		UOverlay* MaskedMarkerOverlay;

	UPROPERTY(BlueprintReadOnly, Category = MinimapWidget, meta = (BindWidget))
		class URetainerBox* MinimapMask;

	UPROPERTY(BlueprintReadOnly, Category = MinimapWidget, meta = (BindWidget))
		class UMapPathDrawerWidget* PathDrawerWidget;


	/**This function updates player icon rotation, markers positions and path. By default, that's called every tick in NativeContruct */
	UFUNCTION(BlueprintCallable, Category = MinimapSettings)
		void UpdateMinimap();

	/**When markers go out of view on the minimap, they stop updating. This variable will be added to the minimap radius in order to compare it with the distance to the marker */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Markers)
		float DisableMarkerRadiousOffset;

	/**Markers may not leave the minimap even if they are far away, then they remain on the border. With this variable you can adjust this border */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Markers)
		float StopAtBorderOffset;

	/**If the next pathpoint is outside the minimap, then it isn't drawn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MinimapSettings)
		float StopDrawPathOffset;

	/**Returns a reference to the MapHelper */
	UFUNCTION(BlueprintPure, Category = Utils)
		FORCEINLINE AMapHelper* GetMapHelper() const { return MapHelper; };


	UMinimapWidget(const FObjectInitializer& ObjectInitializer);
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};