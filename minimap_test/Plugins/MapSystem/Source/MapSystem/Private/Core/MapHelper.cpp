// Copyright 2024 MeRoMoN. All Rights Reserved.


#include "Core/MapHelper.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Materials/MaterialParameterCollection.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Core/MapMarkerComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Core/MapCustomMarker.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Pawn.h"
#include "TimerManager.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "UI/MapMarkerWidget.h"


AMapHelper::AMapHelper()
{
	PrimaryActorTick.bCanEverTick = true;
	MapHelperConfig.MapSize = 2048.f;
	bDestroyCaptureComponent = true;
	MaxDifferenceBetweenPlayerAndFirstPoint = 40.f;
	bOnlyUpdateFirstPointIfPathWasLost = true;
	bStartToEndIfNoPath = true;
	bFindPathEveryFrame = true;
	MaxDistanceToVisibleMarker = 10000.f;
	MarkersSortingRate = 3.f;
	LineTraceCollisionChannel = ECollisionChannel::ECC_WorldStatic;
	bOnlyOne = true;
	bProjectToNavigation = true;
	LineTraceLength = 5000.f;
	ExtentToProjectToNavigation.Set(3000.f, 3000.f, 3000.f);
	MapHelperConfig.MinimapZoom = 0.4f;
	bEnablePathfinding = true;
	bEnableCustomMarkers = true;
	bFindPath = true;
	bUseControllerRotation = true;
	bSortMarkers = true;

	DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
	MapCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
	CaptureAreaVisualizer = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

	SetRootComponent(DefaultSceneComponent);
	MapCaptureComponent->SetupAttachment(DefaultSceneComponent);
	CaptureAreaVisualizer->SetupAttachment(MapCaptureComponent);

	MapCaptureComponent->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
	MapCaptureComponent->ProjectionType = ECameraProjectionMode::Orthographic;
	MapCaptureComponent->bCaptureEveryFrame = false;
	MapCaptureComponent->bCaptureOnMovement = false;
	MapCaptureComponent->CaptureSource = ESceneCaptureSource::SCS_BaseColor;
	MapCaptureComponent->bAlwaysPersistRenderingState = true;

	static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> MCP(TEXT("MaterialParameterCollection'/MapSystem/Materials/MPC_Minimap'"));
	if (MCP.Succeeded())
	{
		MPC_Minimap = MCP.Object;
	}
}

void AMapHelper::BeginPlay()
{
	Super::BeginPlay();
	Initialize();
	HandleCapturing();
}

void AMapHelper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bPauseMapHelper)
	{
		UpdateMCPMinimap();

		if (bFindPathEveryFrame)
		{
			FindPath(bFindPathAsync);
		}
	}
}

void AMapHelper::CaptureMapImage()
{
	MapCaptureComponent->OrthoWidth = MapHelperConfig.MapSize;
	MapCaptureComponent->CaptureScene();
}

void AMapHelper::Initialize()
{
	ReferenceActor = this;
	DefaultMapConfig = MapHelperConfig;

	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (PlayerController)
	{
		if(bSortMarkers)
			GetWorld()->GetTimerManager().SetTimer(SortMarkersTimerHandle, this, &AMapHelper::SortMarkersByDistance, MarkersSortingRate, true, 0.4f);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MapHelper::Initialize: Failed to get Player Controller"));
	}

	if (MPC_Minimap)
	{
		MPCI_Minimap = GetWorld()->GetParameterCollectionInstance(MPC_Minimap);
		if (MPCI_Minimap)
		{
			MPCI_Minimap->SetScalarParameterValue(FName("MapSize"), MapHelperConfig.MapSize);
			MPCI_Minimap->SetScalarParameterValue(FName("Zoom"), MapHelperConfig.MinimapZoom);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MapHelper::Initialize: Missing MPC_Minimap"));
	}
}

void AMapHelper::HandleCapturing()
{
	if (bCaptureMapOnBeginPlay)
	{
		CaptureMapImage();
	}
	if (bDestroyCaptureComponent)
	{
		MapCaptureComponent->DestroyComponent();
	}

	CaptureAreaVisualizer->DestroyComponent();
}

void AMapHelper::UpdateMCPMinimap()
{
	if (PlayerController)
	{
		APawn* ControlledPawn = PlayerController->GetPawn();
		if (ControlledPawn)
		{
			if (MPCI_Minimap)
			{
				FVector2D PlayerPosition = ConvertWorldLocToMapHelperPosition(ControlledPawn->GetActorLocation());
				if (bUseControllerRotation)
				{
					PlayerYawRotation = ControlledPawn->GetControlRotation().Yaw;
				}

				float PlayerYaw = PlayerYawRotation;

				MPCI_Minimap->SetScalarParameterValue(FName("Player X"), PlayerPosition.X);
				MPCI_Minimap->SetScalarParameterValue(FName("Player Y"), PlayerPosition.Y);

				MPCI_Minimap->SetScalarParameterValue(FName("Player Yaw"), NormalizeAngle(PlayerYaw - ReferenceActor->GetActorRotation().Yaw));
				MPCI_Minimap->SetScalarParameterValue(FName("Compass"), NormalizeAngle(PlayerYaw - GetActorRotation().Yaw));
			}
		}
	}
}

void AMapHelper::SetMapSize(float NewMapSize)
{
	MapHelperConfig.MapSize = NewMapSize;

	if (MPCI_Minimap)
	{
		MPCI_Minimap->SetScalarParameterValue(FName("MapSize"), MapHelperConfig.MapSize);
	}
}

void AMapHelper::SetPauseMapHelper(bool bPause)
{
	bPauseMapHelper = bPause;
}

FVector2D AMapHelper::ConvertWorldLocToMapHelperPosition(FVector Location, bool bUseRefActor)
{
	AActor* RefActor = bUseRefActor ? ReferenceActor : this;
	if (!RefActor)
		return FVector2D::Zero();

	float MapSize = bUseRefActor ? MapHelperConfig.MapSize : DefaultMapConfig.MapSize;

	Location = RefActor->GetActorRotation().UnrotateVector(Location - (RefActor->GetActorLocation() + RefActor->GetActorRotation().RotateVector(FVector(MapSize / 2, MapSize / -2, 0))));
	return FVector2D(Location.Y, -Location.X);
}

FVector AMapHelper::ConvertMapHelperPosToWorldLocation(FVector2D Position, bool bUseRefActor)
{
	AActor* RefActor = bUseRefActor ? ReferenceActor : this;
	if (!RefActor)
		return FVector::Zero();

	float MapSize = bUseRefActor ? MapHelperConfig.MapSize : DefaultMapConfig.MapSize;

	FVector WorldLocation = RefActor->GetActorLocation() + RefActor->GetActorRotation().RotateVector(FVector(MapSize / 2, MapSize / -2, 0) - FVector(Position.Y, -Position.X, 0));
	WorldLocation.Z = GetActorLocation().Z;
	return WorldLocation;
}

void AMapHelper::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	CaptureMapImage();
	CaptureAreaVisualizer->SetBoxExtent(FVector(2.f, MapHelperConfig.MapSize / 2.f, MapHelperConfig.MapSize / 2.f));
}

void AMapHelper::StartFindingPathToMarker(UMapMarkerComponent* MarkerComponent)
{
	if (bEnablePathfinding && MarkerComponent && MarkerComponent->bPathable)
	{
		if (FindingPathTo && !FindingPathTo->IsBeingDestroyed() && IsValid(FindingPathTo->GetOwner()))
		{
			FindingPathTo->SetFindingPath(false);
		}

		FindingPathTo = MarkerComponent;

		FindingPathTo->SetFindingPath(true);
		bFindingPath = true;
		SortMarkersByDistance();
		FindPath(false);
		OnUpdateFindPath.Broadcast(bFindingPath);
	}
}

void AMapHelper::FindPath(bool bAsync)
{
	if (bFindingPath && bFindPath)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(MapSystem: FindPathSync);

		APawn* PlayerPawn = PlayerController->GetPawn();

		if (bSimplePathfinding)
		{
			PathPoints.Empty();
			PathPoints.Add(PlayerPawn->GetActorLocation());
			PathPoints.Add(FindingPathTo->GetOwner()->GetActorLocation());
			return;
		}

		UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

		if (NavSystem && PlayerPawn)
		{
			FVector PlayerLocation = PlayerPawn->GetActorLocation();
			FVector CustomMarkerLocation = FindingPathTo->GetOwner()->GetActorLocation();
			FNavLocation ProjectedLocation;
			bool bPathExists = false;

			if (bProjectPlayerLocationToNavigiation)
			{
				if (NavSystem->ProjectPointToNavigation(PlayerLocation, ProjectedLocation, ExtentToProjPlayerLocToNav))
				{
					PlayerLocation = ProjectedLocation.Location;
				}
			}

			if (bProjectCustomMarkerLocationToNavigiation)
			{
				if (NavSystem->ProjectPointToNavigation(CustomMarkerLocation, ProjectedLocation, ExtentToProjCustomMarkLocToNav))
				{
					CustomMarkerLocation = ProjectedLocation.Location;
				}
			}
			
			if (bAsync)
			{
				FNavAgentProperties NavAgentProperties(PlayerPawn->GetNavAgentPropertiesRef());
				FPathFindingQuery PathFindingQuery;
				PathFindingQuery.SetNavAgentProperties(NavAgentProperties);
				PathFindingQuery.StartLocation = PlayerLocation;
				PathFindingQuery.EndLocation = CustomMarkerLocation;

				const ANavigationData* NavigationData = NavSystem->GetNavDataForProps(NavAgentProperties, PlayerLocation);
				PathFindingQuery.QueryFilter = UNavigationQueryFilter::GetQueryFilter(*NavigationData, PlayerPawn, UNavigationQueryFilter::StaticClass());

				NavSystem->FindPathAsync(NavAgentProperties, PathFindingQuery, FNavPathQueryDelegate::CreateUObject(this, &AMapHelper::PathToMarkerFound), EPathFindingMode::Regular);
				return;
			}

			UNavigationPath* NavPath = NavSystem->FindPathToLocationSynchronously(GetWorld(), PlayerLocation, CustomMarkerLocation, (AActor*)PlayerPawn);

			if (NavPath)
			{
				if (NavPath->PathPoints.Num() != 0)
				{
					PathPoints = NavPath->PathPoints;

					FVector2D DiferenceBetweenPlayerAndFirstPoint = FVector2D(PlayerPawn->GetActorLocation().X - PathPoints[0].X, PlayerPawn->GetActorLocation().Y - PathPoints[0].Y).GetAbs();
					if (DiferenceBetweenPlayerAndFirstPoint.X > MaxDifferenceBetweenPlayerAndFirstPoint || DiferenceBetweenPlayerAndFirstPoint.Y > MaxDifferenceBetweenPlayerAndFirstPoint)
					{
						PathPoints.Insert(PlayerPawn->GetActorLocation(), 0);
					}

					PathPoints.Add(FindingPathTo->GetOwner()->GetActorLocation());
				}
				else if(bOnlyUpdateFirstPointIfPathWasLost && PathPoints.Num() != 0)
				{	
					PathPoints[0] = PlayerPawn->GetActorLocation();
				}
				else
				{
					PathPoints.Empty();
					if (bStartToEndIfNoPath)
					{
						PathPoints.Add(PlayerPawn->GetActorLocation());
						PathPoints.Add(FindingPathTo->GetOwner()->GetActorLocation());
					}
				}
			}
		}
	}
}

void AMapHelper::PathToMarkerFound(uint32 Id, ENavigationQueryResult::Type Result, FNavPathSharedPtr NavPathPointer)
{
	APawn* PlayerPawn = PlayerController->GetPawn();

	if (PlayerPawn && FindingPathTo)
	{
		if (NavPathPointer->GetPathPoints().Num() != 0)
		{
			PathPoints.Empty();
			for (FNavPathPoint NavPathPoint : NavPathPointer->GetPathPoints())
			{
				PathPoints.Add(NavPathPoint.Location);
			}

			FVector2D DiferenceBetweenPlayerAndFirstPoint = FVector2D(PlayerPawn->GetActorLocation().X - PathPoints[0].X, PlayerPawn->GetActorLocation().Y - PathPoints[0].Y).GetAbs();
			if (DiferenceBetweenPlayerAndFirstPoint.X > MaxDifferenceBetweenPlayerAndFirstPoint || DiferenceBetweenPlayerAndFirstPoint.Y > MaxDifferenceBetweenPlayerAndFirstPoint)
			{
				PathPoints.Insert(PlayerPawn->GetActorLocation(), 0);
			}

			PathPoints.Add(FindingPathTo->GetOwner()->GetActorLocation());
		}
		else if (bOnlyUpdateFirstPointIfPathWasLost && PathPoints.Num() != 0)
		{
			PathPoints[0] = PlayerPawn->GetActorLocation();
		}
		else
		{
			PathPoints.Empty();
			if (bStartToEndIfNoPath)
			{
				PathPoints.Add(PlayerPawn->GetActorLocation());
				PathPoints.Add(FindingPathTo->GetOwner()->GetActorLocation());
			}
		}
	}
}

float AMapHelper::NormalizeAngle(float Angle)
{
	if (Angle < 0.f)
	{
		Angle += 360.0f;
	}
	return Angle / 360.0f;
}

void AMapHelper::StopFindingPath()
{
	if (FindingPathTo && IsValid(FindingPathTo->GetOwner()) && !FindingPathTo->IsBeingDestroyed())
	{
		FindingPathTo->SetFindingPath(false);
	}

	bFindingPath = false;
	FindingPathTo = nullptr;
	PathPoints.Empty();
	OnUpdateFindPath.Broadcast(bFindingPath);
}

bool AMapHelper::FindSpawnCustomMarkerLocation_Implementation(FVector2D MapHelperPos, FVector& SpawnLocation)
{
	FVector WorldLoc = ConvertMapHelperPosToWorldLocation(MapHelperPos, !bLockBigMapTextureChange);
	FVector StartLoc = FVector(WorldLoc.X, WorldLoc.Y, WorldLoc.Z);
	FVector EndLoc = FVector(WorldLoc.X, WorldLoc.Y, WorldLoc.Z - LineTraceLength);
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, StartLoc, EndLoc, LineTraceCollisionChannel);
	SpawnLocation = HitResult.Location;

	return HitResult.bBlockingHit;
}

void AMapHelper::CreateCustomMarker(FVector2D MapHelperPos, bool bStartFindingPath)
{
	if (!bEnableCustomMarkers)
		return;

	if (bOnlyOne && CreatedCustomMarker && CreatedCustomMarker->IsValidLowLevel())
	{
		CreatedCustomMarker->Destroy();
		CreatedCustomMarker = nullptr;
	}

	FVector SpawnLocation;

	if (FindSpawnCustomMarkerLocation(MapHelperPos, SpawnLocation))
	{
		bool bSpawn = true;
		FTransform SpawnTransfor(SpawnLocation);

		if (bProjectToNavigation)
		{
			UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
			FNavLocation ProjectedLocation;
			if (NavSystem)
			{
				bSpawn = NavSystem->ProjectPointToNavigation(SpawnLocation, ProjectedLocation, ExtentToProjectToNavigation);
				if (bSpawn)
				{				
					SpawnTransfor.SetLocation(ProjectedLocation.Location);
				}
			}
		}
		if (bSpawn)
		{
			FActorSpawnParameters ActorSpawnParameters;
			ActorSpawnParameters.Owner = PlayerController;
			ActorSpawnParameters.Instigator = PlayerController->GetPawn();

			CreatedCustomMarker = GetWorld()->SpawnActor<AMapCustomMarker>(CustomMarkerClass, SpawnTransfor, ActorSpawnParameters);
			if (CreatedCustomMarker && bStartFindingPath)
			{
				StartFindingPathToMarker(CreatedCustomMarker->MapMarkerComponent);
			}
		}
	}
}

void AMapHelper::SortMarkersByDistance()
{
	APawn* ControlledPawn = PlayerController->GetPawn();
	if (bSortMarkers && ControlledPawn)
	{
		float Distance = 0.f;
		FVector PlayerLocation = ControlledPawn->GetActorLocation();
		for (int32 i = 0; i < VisibleMarkerComponents.Num(); ++i)
		{
			Distance = FVector::Distance(PlayerLocation, VisibleMarkerComponents[i]->GetOwner()->GetActorLocation());

			if ((!VisibleMarkerComponents[i]->IsObjective() && Distance >= MaxDistanceToVisibleMarker) || VisibleMarkerComponents[i]->bForceHiddenMarker)
			{
				HiddenMarkerComponents.Add(VisibleMarkerComponents[i]);
				OnHideVisibleMarker.Broadcast(i);
				VisibleMarkerComponents[i]->OnHide.Broadcast();
				VisibleMarkerComponents.RemoveAt(i);
				--i;
			}
		}

		for (int32 i = 0; i < HiddenMarkerComponents.Num(); ++i)
		{
			Distance = FVector::Distance(PlayerLocation, HiddenMarkerComponents[i]->GetOwner()->GetActorLocation());

			if ((HiddenMarkerComponents[i]->IsObjective() || Distance < MaxDistanceToVisibleMarker) && !HiddenMarkerComponents[i]->bForceHiddenMarker)
			{
				VisibleMarkerComponents.Add(HiddenMarkerComponents[i]);
				OnAddVisibleMarker.Broadcast(HiddenMarkerComponents[i]);
				HiddenMarkerComponents.RemoveAt(i);
				--i;
			}
		}
	}
}

void AMapHelper::SetMapTexture(UTexture* NewTexture)
{
	if (NewTexture)
	{
		MapHelperConfig.MapTexture = NewTexture;
		OnUpdateMapTexture.Broadcast();
	}
}

void AMapHelper::SetMinimapZoom(float NewZoom)
{
	MapHelperConfig.MinimapZoom = NewZoom;
	if (MPCI_Minimap)
	{
		MPCI_Minimap->SetScalarParameterValue(FName("Zoom"), MapHelperConfig.MinimapZoom);
	}
}

void AMapHelper::RestoreMapHelperConfig()
{
	SetMapHelperConfig(DefaultMapConfig, this);
}

void AMapHelper::SetMapHelperConfig(FMapHelperConfig NewConfig, AActor* NewReferenceActor)
{
	if (!NewReferenceActor)
		return;

	MapHelperConfig = NewConfig;
	ReferenceActor = NewReferenceActor;

	if (MPCI_Minimap)
	{
		MPCI_Minimap->SetScalarParameterValue(FName("Zoom"), MapHelperConfig.MinimapZoom);
		MPCI_Minimap->SetScalarParameterValue(FName("MapSize"), MapHelperConfig.MapSize);
	}

	OnUpdateMapTexture.Broadcast();
}

void AMapHelper::SetReferenceActor(AActor* NewReferenceActor)
{
	if (NewReferenceActor)
	{
		ReferenceActor = NewReferenceActor;
	}
}

void AMapHelper::AddMarkerComponent(UMapMarkerComponent* MarkerComponent)
{
	if (!MarkerComponent || !MarkerComponent->MarkerWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s: Missing MarkerWidgetClass or MarkerComponent"), *GetNameSafe(MarkerComponent->GetOwner()));
		return;
	}

	OnAddMarker.Broadcast(MarkerComponent);

	if (!PlayerController)
	{
		HiddenMarkerComponents.Add(MarkerComponent);
		return;
	}

	if (!bSortMarkers)
	{
		VisibleMarkerComponents.Add(MarkerComponent);
		OnAddVisibleMarker.Broadcast(MarkerComponent);
		return;
	}

	APawn* ControlledPawn = PlayerController->GetPawn();
	if (ControlledPawn)
	{
		float Distance = FVector::Distance(ControlledPawn->GetActorLocation(), MarkerComponent->GetOwner()->GetActorLocation());
		bool bWithinDistance = Distance < MaxDistanceToVisibleMarker;
		if (MarkerComponent->IsObjective() || (bWithinDistance && !MarkerComponent->bForceHiddenMarker))
		{
			VisibleMarkerComponents.Add(MarkerComponent);
			OnAddVisibleMarker.Broadcast(MarkerComponent);
			return;
		}
	}

	HiddenMarkerComponents.Add(MarkerComponent);
}

void AMapHelper::RemoveMarkerComponent(UMapMarkerComponent* MarkerComponent)
{
	int32 id = VisibleMarkerComponents.Find(MarkerComponent);
	if (id != -1)
	{
		VisibleMarkerComponents.RemoveAt(id);
		OnHideVisibleMarker.Broadcast(id);
	}
	else
	{
		id = HiddenMarkerComponents.Find(MarkerComponent);
		if (id != -1)
		{
			HiddenMarkerComponents.RemoveAt(id);
		}
	}

	if (FindingPathTo == MarkerComponent)
	{
		StopFindingPath();
	}
}