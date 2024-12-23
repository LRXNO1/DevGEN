// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MapCustomMarker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MAPSYSTEM_MapCustomMarker_generated_h
#error "MapCustomMarker.generated.h already included, missing '#pragma once' in MapCustomMarker.h"
#endif
#define MAPSYSTEM_MapCustomMarker_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapCustomMarker(); \
	friend struct Z_Construct_UClass_AMapCustomMarker_Statics; \
public: \
	DECLARE_CLASS(AMapCustomMarker, AMapMarker, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MapSystem"), NO_API) \
	DECLARE_SERIALIZER(AMapCustomMarker)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapCustomMarker(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapCustomMarker(AMapCustomMarker&&); \
	AMapCustomMarker(const AMapCustomMarker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapCustomMarker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapCustomMarker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapCustomMarker) \
	NO_API virtual ~AMapCustomMarker();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPSYSTEM_API UClass* StaticClass<class AMapCustomMarker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapCustomMarker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
