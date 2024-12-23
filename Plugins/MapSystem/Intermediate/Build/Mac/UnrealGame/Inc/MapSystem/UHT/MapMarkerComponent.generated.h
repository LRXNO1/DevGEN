// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MapMarkerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapHelper;
#ifdef MAPSYSTEM_MapMarkerComponent_generated_h
#error "MapMarkerComponent.generated.h already included, missing '#pragma once' in MapMarkerComponent.h"
#endif
#define MAPSYSTEM_MapMarkerComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_9_DELEGATE \
MAPSYSTEM_API void FOnRightMouseClick_DelegateWrapper(const FMulticastScriptDelegate& OnRightMouseClick);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_10_DELEGATE \
MAPSYSTEM_API void FOnLeftMouseClick_DelegateWrapper(const FMulticastScriptDelegate& OnLeftMouseClick);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_11_DELEGATE \
MAPSYSTEM_API void FOnDoubleClick_DelegateWrapper(const FMulticastScriptDelegate& OnDoubleClick, bool bRightClick);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_12_DELEGATE \
MAPSYSTEM_API void FOnFindPath_DelegateWrapper(const FMulticastScriptDelegate& OnFindPath, bool bStart);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReRegisterMarker); \
	DECLARE_FUNCTION(execGetMapHelper); \
	DECLARE_FUNCTION(execCanBeProjectedToScreen); \
	DECLARE_FUNCTION(execIsObjective); \
	DECLARE_FUNCTION(execIsStopAtBorder); \
	DECLARE_FUNCTION(execIsFindingPath); \
	DECLARE_FUNCTION(execStopFindingPath); \
	DECLARE_FUNCTION(execStartFindingPath);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapMarkerComponent(); \
	friend struct Z_Construct_UClass_UMapMarkerComponent_Statics; \
public: \
	DECLARE_CLASS(UMapMarkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MapSystem"), NO_API) \
	DECLARE_SERIALIZER(UMapMarkerComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapMarkerComponent(UMapMarkerComponent&&); \
	UMapMarkerComponent(const UMapMarkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapMarkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapMarkerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapMarkerComponent) \
	NO_API virtual ~UMapMarkerComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_20_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPSYSTEM_API UClass* StaticClass<class UMapMarkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
