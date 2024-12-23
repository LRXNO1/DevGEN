// Copyright 2024 MeRoMoN. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <AI/Navigation/NavigationTypes.h>
#include "MapHelper.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddVisibleMarker, UMapMarkerComponent*, MarkerComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideVisibleMarker, int32, id);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddMarker, UMapMarkerComponent*, MarkerComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateFindPath, bool, bStart);
DECLARE_MULTICAST_DELEGATE(FOnUpdateMapTexture);

class UMapMarkerComponent;
class UMaterialParameterCollectionInstance;
class AMapCustomMarker;

USTRUCT(BlueprintType)
struct FMapHelperConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
		float MapSize = 1024.f;

	/**This is a map texture used for the map and minimap */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
		UTexture* MapTexture = nullptr;

	/**This value is used to set the zoom in the minimap widget */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
		float MinimapZoom = 0.5f;
};



/**
*This actor is an important element for the operation of the map and minimap, it unites them. The main task is to capture the map image.
*It involves in creating and removing markers, pathfinding, creating custom markers, and updating the data in the MPC_Minimap.
*/
UCLASS()
class MAPSYSTEM_API AMapHelper : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		class USceneComponent* DefaultSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		class USceneCaptureComponent2D* MapCaptureComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		class UBoxComponent* CaptureAreaVisualizer;


	/**If true, when a new texture will be set, it won't affect on the big map. The new texture will be set only on the minimap */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
		bool bLockBigMapTextureChange;

	/**
	* If true, the yaw rotation (Z-axis) of the Controller will be used to calculate the minimap compass (minimap rotation) and the position of the markers on it.
	* If false, the PlayerYawRotation value must be set.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Map)
		bool bUseControllerRotation;

	/**This value will be used instead of the controller's yaw rotation (Z-axis) if bUseControllerRotation is set to true. **/
	UPROPERTY(BlueprintReadWrite, Category = Map)
		float PlayerYawRotation;


	/**If true, new custom markers could be placed on the map */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CustomMarker)
		bool bEnableCustomMarkers;

	/**
	* It'll be created on right click on the map.
	* USE ONLY BLUEPRINT CLASSES
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CustomMarker, meta = (BlueprintBaseOnly))
		TSubclassOf<AMapCustomMarker> CustomMarkerClass;

	/**Line tracing is used to find the surface on which the custom marker will be placed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CustomMarker)
		TEnumAsByte<ECollisionChannel> LineTraceCollisionChannel;

	/**The length of the Line Trace which is created when a custom marker is spawning to search for a surface */
	UPROPERTY(EditAnywhere, Category = CustomMarker)
		float LineTraceLength;

	/**If true, it will not be possible to create more than one custom marker */
	UPROPERTY(EditAnywhere, Category = CustomMarker)
		bool bOnlyOne;

	/**If true, then it will be possible to put a custom marker on the map only in the place where there is the NavMesh */
	UPROPERTY(EditAnywhere, Category = CustomMarker)
		bool bProjectToNavigation;

	/**The size of the area to find the nearest point in the NavMesh */
	UPROPERTY(EditAnywhere, Category = CustomMarker, meta = (EditCondition = "bProjectToNavigation==true"))
		FVector ExtentToProjectToNavigation;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bEnablePathfinding;

	/**If true, the path will be found and drawn on the maps. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bFindPath;

	/**If true, then the line between the start and the end will simply be drawn. This doesn't require the NavMesh.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bSimplePathfinding;

	/**If true, pathfinding will be performed asynchronously. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bFindPathAsync;

	/**If true, then FindPath() will be called every frame.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bFindPathEveryFrame;


	/**If true, it'll look for the nearest point near the player to find the path. It'll be useful if the player is outside the NavMesh. Execute every frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bProjectPlayerLocationToNavigiation;

	/**The size of the area to find the nearest point in the NavMesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding, meta = (EditCondition = "bProjectPlayerLocationToNavigiation==true"))
		FVector ExtentToProjPlayerLocToNav;

	/**If true, it'll look for the nearest point near the custom marker to find the path. It'll be useful if the custom marker is outside the NavMesh. Execute every frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bProjectCustomMarkerLocationToNavigiation;

	/**The size of the area to find the nearest point in the NavMesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding, meta = (EditCondition = "bProjectCustomMarkerLocationToNavigiation==true"))
		FVector ExtentToProjCustomMarkLocToNav;

	/**
	* The position of the first waypoint and the player may differ, and if this difference exceeds this allowable value, then the position of the player will be the first waypoint.
	* Too low a value can result in path line artifacts on the map
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		float MaxDifferenceBetweenPlayerAndFirstPoint;

	/**If the path is lost during the player's movement, a line will be drawn to the path that was found */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bOnlyUpdateFirstPointIfPathWasLost;

	/**If there is no path, then a line will simply be drawn between the start and end points */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pathfinding)
		bool bStartToEndIfNoPath;


	/**If true, markers will be sorted by distance into hidden and visible groups. This allows for the avoidance of creating marker widgets if the marker is far away from the player, which can improve performance in some cases */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Markers)
		bool bSortMarkers;

	/**If markers are further than this distance they'll be hidden **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Markers, meta = (EditCondition = "bSortMarkers==true"))
		float MaxDistanceToVisibleMarker;

	/**It's how often markers will be sorted. Specify time in a seconds **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Markers, meta = (EditCondition = "bSortMarkers==true"))
		float MarkersSortingRate;


	/**Called when a visible marker is added to array of visible markers */
	UPROPERTY(BlueprintAssignable)
		FOnAddVisibleMarker OnAddVisibleMarker;

	/**Called when a visible marker is removed from array of visible markers */
	UPROPERTY(BlueprintAssignable)
		FOnHideVisibleMarker OnHideVisibleMarker;

	/**Called when a new marker is created */
	UPROPERTY(BlueprintAssignable)
		FOnAddMarker OnAddMarker;

	/**Called when starts or stops finding path */
	UPROPERTY(BlueprintAssignable)
		FOnUpdateFindPath OnUpdateFindPath;


	FOnUpdateMapTexture OnUpdateMapTexture;
	FMapHelperConfig DefaultMapConfig;

	AMapHelper();

protected:

	UPROPERTY(EditAnywhere, Category = Map, meta = (DisplayPriority = 0))
		FMapHelperConfig MapHelperConfig;

	/**If true, then when the game starts, the map image will be captured */
	UPROPERTY(EditAnywhere, Category = Map)
		bool bCaptureMapOnBeginPlay;

	/**If true, CaptureAreaVisualizer will be destroyed at the begin play event. This may improve performance. */
	UPROPERTY(EditAnywhere, Category = Map)
		bool bDestroyCaptureComponent;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = CustomMarker)
		bool FindSpawnCustomMarkerLocation(FVector2D MapHelperPos, FVector& SpawnLocation);
		virtual bool FindSpawnCustomMarkerLocation_Implementation(FVector2D MapHelperPos, FVector& SpawnLocation);


	class APlayerController* PlayerController;
	class UMaterialParameterCollection* MPC_Minimap;
	class UMaterialParameterCollectionInstance* MPCI_Minimap;

	TArray<UMapMarkerComponent*> VisibleMarkerComponents;
	TArray<UMapMarkerComponent*> HiddenMarkerComponents;

	UMapMarkerComponent* FindingPathTo;
	TArray<FVector> PathPoints;
	
	bool bFindingPath;
	bool bPauseMapHelper;

	AMapCustomMarker* CreatedCustomMarker;
	FTimerHandle SortMarkersTimerHandle;
	AActor* ReferenceActor;

	virtual void BeginPlay() override;
	void Initialize();
	void HandleCapturing();
	void SortMarkersByDistance();
	void PathToMarkerFound(uint32 Id, ENavigationQueryResult::Type Result, FNavPathSharedPtr NavPathPointer);
	float NormalizeAngle(float Angle);

public:

	/**Updates the player's position in the MPC_Minimap. By default, every frame is called in EventTick */
	UFUNCTION(BlueprintCallable, Category = Map)
		void UpdateMCPMinimap();

	/**Creates a map image */
	UFUNCTION(CallInEditor, Category = Map)
		void CaptureMapImage();

	/**Returns size of the map */
	UFUNCTION(BlueprintPure, Category = Map)
		FORCEINLINE float GetMapSize(bool bGetDefaultSize = false) const { return bGetDefaultSize ? DefaultMapConfig.MapSize : MapHelperConfig.MapSize; };

	/**Sets a new map size */
	UFUNCTION(BlueprintCallable, Category = Map)
		void SetMapSize(float NewMapSize);

	/**If true, then finding the path and position of the player on the minimap will be suspended */
	UFUNCTION(BlueprintCallable, Category = Map)
		void SetPauseMapHelper(bool bPause);

	/**Converts the location to a position relative to the map helper */
	UFUNCTION(BlueprintPure, Category = Map)
		FVector2D ConvertWorldLocToMapHelperPosition(FVector Location, bool bUseRefActor = true);

	/**Converts the position relative to the map helper to world location */
	UFUNCTION(BlueprintPure, Category = Map)
		FVector ConvertMapHelperPosToWorldLocation(FVector2D Position, bool bUseRefActor = true);

	/**Starts finding the path to the MarkerComponent every tick. Calls OnFindingPath with true */
	UFUNCTION(BlueprintCallable, Category = PathFinding)
		void StartFindingPathToMarker(UMapMarkerComponent* MarkerComponent);

	/**Stops finding the path. Calls OnFindingPath with false */
	UFUNCTION(BlueprintCallable, Category = PathFinding)
		void StopFindingPath();

	/**Finds path points to a marker. By default, every frame is called in EventTick */
	UFUNCTION(BlueprintCallable, Category = PathFinding)
		void FindPath(bool bAsync);

	/**Returns an array of path points. These points were found while finding a path */
	UFUNCTION(BlueprintPure, Category = PathFinding)
		FORCEINLINE TArray<FVector>& GetPathPoints() { return PathPoints; };

	/**Returns true while finding the path */
	UFUNCTION(BlueprintPure, Category = PathFinding)
		FORCEINLINE bool IsFindingPath() const { return bFindingPath; };

	/**Returns the MarkerComponent to which it's finding a path */
	UFUNCTION(BlueprintPure, Category = PathFinding)
		const FORCEINLINE	UMapMarkerComponent* GetPathFindingComponent() const { return FindingPathTo; };


	/**Converts the passed position to a world location and spawns a user marker at that location. A Line Trace is made to scan the yaw axis */
	UFUNCTION(BlueprintCallable, Category = Markers)
		void CreateCustomMarker(FVector2D MapHelperPos, bool bStartFindingPath = true);

	/**Returns only visible marker components. These marker are no further than the DistanceToVisibleMarker from the player. */
	UFUNCTION(BlueprintPure, Category = Markers)
		const FORCEINLINE TArray<UMapMarkerComponent*>& GetVisibleMarkerComponents() { return VisibleMarkerComponents; };

	/**Returns only hidden marker components. These marker are further than the DistanceToVisibleMarker from the player. */
	UFUNCTION(BlueprintPure, Category = Markers)
		const FORCEINLINE TArray<UMapMarkerComponent*>& GetHiddenMarkerComponents() const { return HiddenMarkerComponents; };

	/**Returns the map texture from the map helper config*/
	UFUNCTION(BlueprintPure, Category = Map)
		FORCEINLINE UTexture* GetMapTexture(bool bGetDefaultTexture = false) const { return bGetDefaultTexture ? DefaultMapConfig.MapTexture : MapHelperConfig.MapTexture; };

	/**Sets a new map texture */
	UFUNCTION(BlueprintCallable, Category = Map)
		void SetMapTexture(UTexture* NewTexture);

	/**Return the minimap zoom from the map helper config which is currently being used */
	UFUNCTION(BlueprintPure, Category = Map)
		FORCEINLINE float GetMinimapZoom() const {return MapHelperConfig.MinimapZoom;};

	/**Sets a new minimap zoom */
	UFUNCTION(BlueprintCallable, Category = Map)
		void SetMinimapZoom(float NewZoom);

	/**Restores the map helper config to its default setting */
	UFUNCTION(BlueprintCallable, Category = Map)
		void RestoreMapHelperConfig();

	/**Sets a new map helper config */
	UFUNCTION(BlueprintCallable, Category = Map)
		void SetMapHelperConfig(FMapHelperConfig NewConfig, AActor* NewReferenceActor);

	/**Sets a new reference actor which is used to calculate marker positions. By default this is the map helper itself but you can set any another actor here */
	UFUNCTION(BlueprintCallable, Category = Map)
		void SetReferenceActor(AActor* NewReferenceActor);

	/**Returns the reference actor which is used to calculate marker positions.*/
	UFUNCTION(BlueprintPure, Category = Map)
		FORCEINLINE AActor* GetReferenceActor() const {return ReferenceActor;};


	void AddMarkerComponent(UMapMarkerComponent* MarkerComponent);
	void RemoveMarkerComponent(UMapMarkerComponent* MarkerComponent);

	virtual void Tick(float DeltaTime) override;
	void OnConstruction(const FTransform& Transform) override;

};