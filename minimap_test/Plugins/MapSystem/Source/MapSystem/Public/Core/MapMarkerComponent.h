// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MapMarkerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRightMouseClick);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeftMouseClick);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoubleClick, bool, bRightClick);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindPath, bool, bStart);
DECLARE_MULTICAST_DELEGATE(FOnEndPlay);
DECLARE_MULTICAST_DELEGATE(FOnHide);

class AMapHelper;


/**If add this component to any actor then it'll be displayed on the map and minimap */
UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class MAPSYSTEM_API UMapMarkerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	/**If true then this marker when out of the view of the minimap will be displayed on the edge */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = MarkerInfo)
		bool bStopAtBorder;

	/**If true, the location of the marker can be projected to the screen */
	UPROPERTY(EditAnywhere, Category = SceenMarker)
		bool bCanBeProjectedToScreen;

	AMapHelper* MapHelper;
	bool bFindingPath;

	virtual void BeginPlay() override;
	void AddMarkerToMapHelper();

public:

	/**
	* The marker widget of this class will be added to map and minimap.
	* USE ONLY BLUEPRINT CLASSES
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		TSubclassOf<class UMapMarkerWidget> MarkerWidgetClass;

	/**
	* The marker widget of this class will be projected to the screen, only if ScreenMapDrawer exists.
	* USE ONLY BLUEPRINT CLASSES
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		TSubclassOf<class UScreenMarkerWidget> ScreenMarkerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		FText MarkerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		FText MarkerDescription;

	/**If true then it can be displayed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		bool bVisible;

	/**If true then it'll be able to find the path to this marker */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		bool bPathable;

	/**If true then this market will only be displayed on the minimap */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		bool bOnlyMinimap;

	/**If true then this marker will be in the HiddenMarkers array in the MapHelper. It won't be displayed on the minimap and in the screen drawer but will be on the big map */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		bool bForceHiddenMarker;

	/**If true then the marker on the map will have the same rotation as it's owner. This may be necessary for NPCs or other players */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MarkerInfo)
		bool bRotateAsOwnerRotation;



	/**If true, this marker will be projected to the screen but in the event that the hidden(ScreenMarkerDrawer) and visible(MapHelper) distance allow this **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SceenMarker, meta = (EditCondition = "bCanBeProjectToScreen==true"))
		bool bProjectToScreen;

	/**If true, this marker will always be projected to the screen, ignoring the hidden(ScreenMarkerDrawer) and visible(MapHelper) distance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SceenMarker, meta = (EditCondition = "bCanBeProjectToScreen==true"))
		bool bAlwaysProjectToScreen;

	/**If true, this marker will always be on the screen */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SceenMarker, meta = (EditCondition = "bCanBeProjectToScreen==true"))
		bool bStopAtScreenEdge;

	/**This value will be added to the owner location of this component when projected to the screen. It may be useful in some cases */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SceenMarker, meta = (EditCondition = "bCanBeProjectToScreen==true"))
		float LocationOffsetZ;



	/**Called when the right mouse button is pressed on the widget of this marker on the map */
	UPROPERTY(BlueprintAssignable)
		FOnRightMouseClick OnRightMouseClick;

	/**Called when the left mouse button is pressed on the widget of this marker on the map */
	UPROPERTY(BlueprintAssignable)
		FOnLeftMouseClick OnLeftMouseClick;

	/**Called when the mouse button is double-clicked on the widget of this marker on the map */
	UPROPERTY(BlueprintAssignable)
		FOnDoubleClick OnDoubleClick;

	/**Called when starts or stops finding path to this marker */
	UPROPERTY(BlueprintAssignable)
		FOnFindPath OnFindPath;

	
	FOnEndPlay OnEndPlay;
	FOnHide OnHide;

	UMapMarkerComponent();

public:

	/**Starts finding the path to this marker */
	UFUNCTION(BlueprintCallable, Category = PathFinding)
		void StartFindingPath();

	/**Stops finding the path to this marker */
	UFUNCTION(BlueprintCallable, Category = PathFinding)
		void StopFindingPath();


	/**Returns true while finding the path to this marker */
	UFUNCTION(BlueprintCallable, Category = PathFinding)
		FORCEINLINE bool IsFindingPath() const { return bFindingPath; };

	/**Returns true if this marker when out of the view of the minimap will be displayed on the edge */
	UFUNCTION(BlueprintPure, Category = MarkerInfo)
		FORCEINLINE bool IsStopAtBorder() const { return bStopAtBorder; };

	/**Returns true if bStopAtBorder, bFindingPath or bAlwaysProjectToScreen is true */
	UFUNCTION(BlueprintPure, Category = MarkerInfo)
		FORCEINLINE bool IsObjective() const { return bStopAtBorder || bFindingPath || bAlwaysProjectToScreen; };

	/**Returns true if bStopAtBorder, bFindingPath or bAlwaysProjectToScreen is true */
	UFUNCTION(BlueprintPure, Category = MarkerInfo)
		FORCEINLINE bool CanBeProjectedToScreen() const { return bCanBeProjectedToScreen; };


	/**Returns a reference to the MapHelper */
	UFUNCTION(BlueprintPure, Category = Utils)
		FORCEINLINE AMapHelper* GetMapHelper() const { return MapHelper; };

	/**Removes and adds this marker to the map helper again */
	UFUNCTION(BlueprintCallable, Category = Utils)
		void ReRegisterMarker();


	void SetFindingPath(bool bValue);
	void LeftMouseClick();
	void RightMouseClick();
	void DoubleClick(bool bRightClick);
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
