// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MapHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMapMarkerComponent;
class UTexture;
struct FMapHelperConfig;
#ifdef MAPSYSTEM_MapHelper_generated_h
#error "MapHelper.generated.h already included, missing '#pragma once' in MapHelper.h"
#endif
#define MAPSYSTEM_MapHelper_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_10_DELEGATE \
MAPSYSTEM_API void FOnAddVisibleMarker_DelegateWrapper(const FMulticastScriptDelegate& OnAddVisibleMarker, UMapMarkerComponent* MarkerComponent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_11_DELEGATE \
MAPSYSTEM_API void FOnHideVisibleMarker_DelegateWrapper(const FMulticastScriptDelegate& OnHideVisibleMarker, int32 id);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_12_DELEGATE \
MAPSYSTEM_API void FOnAddMarker_DelegateWrapper(const FMulticastScriptDelegate& OnAddMarker, UMapMarkerComponent* MarkerComponent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_13_DELEGATE \
MAPSYSTEM_API void FOnUpdateFindPath_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateFindPath, bool bStart);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapHelperConfig_Statics; \
	MAPSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MAPSYSTEM_API UScriptStruct* StaticStruct<struct FMapHelperConfig>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReferenceActor); \
	DECLARE_FUNCTION(execSetReferenceActor); \
	DECLARE_FUNCTION(execSetMapHelperConfig); \
	DECLARE_FUNCTION(execRestoreMapHelperConfig); \
	DECLARE_FUNCTION(execSetMinimapZoom); \
	DECLARE_FUNCTION(execGetMinimapZoom); \
	DECLARE_FUNCTION(execSetMapTexture); \
	DECLARE_FUNCTION(execGetMapTexture); \
	DECLARE_FUNCTION(execGetHiddenMarkerComponents); \
	DECLARE_FUNCTION(execGetVisibleMarkerComponents); \
	DECLARE_FUNCTION(execCreateCustomMarker); \
	DECLARE_FUNCTION(execGetPathFindingComponent); \
	DECLARE_FUNCTION(execIsFindingPath); \
	DECLARE_FUNCTION(execGetPathPoints); \
	DECLARE_FUNCTION(execFindPath); \
	DECLARE_FUNCTION(execStopFindingPath); \
	DECLARE_FUNCTION(execStartFindingPathToMarker); \
	DECLARE_FUNCTION(execConvertMapHelperPosToWorldLocation); \
	DECLARE_FUNCTION(execConvertWorldLocToMapHelperPosition); \
	DECLARE_FUNCTION(execSetPauseMapHelper); \
	DECLARE_FUNCTION(execSetMapSize); \
	DECLARE_FUNCTION(execGetMapSize); \
	DECLARE_FUNCTION(execCaptureMapImage); \
	DECLARE_FUNCTION(execUpdateMCPMinimap); \
	DECLARE_FUNCTION(execFindSpawnCustomMarkerLocation);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapHelper(); \
	friend struct Z_Construct_UClass_AMapHelper_Statics; \
public: \
	DECLARE_CLASS(AMapHelper, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MapSystem"), NO_API) \
	DECLARE_SERIALIZER(AMapHelper)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapHelper(AMapHelper&&); \
	AMapHelper(const AMapHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapHelper) \
	NO_API virtual ~AMapHelper();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_43_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPSYSTEM_API UClass* StaticClass<class AMapHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
