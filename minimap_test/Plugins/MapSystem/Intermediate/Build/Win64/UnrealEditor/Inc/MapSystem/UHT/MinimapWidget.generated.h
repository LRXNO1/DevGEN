// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MinimapWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapHelper;
class UMapMarkerComponent;
class UMapMarkerWidget;
#ifdef MAPSYSTEM_MinimapWidget_generated_h
#error "MinimapWidget.generated.h already included, missing '#pragma once' in MinimapWidget.h"
#endif
#define MAPSYSTEM_MinimapWidget_generated_h

#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMapHelper); \
	DECLARE_FUNCTION(execUpdateMinimap); \
	DECLARE_FUNCTION(execUpdateFindPathToMarker); \
	DECLARE_FUNCTION(execRemoveMarker); \
	DECLARE_FUNCTION(execAddMarker);


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMinimapWidget(); \
	friend struct Z_Construct_UClass_UMinimapWidget_Statics; \
public: \
	DECLARE_CLASS(UMinimapWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MapSystem"), NO_API) \
	DECLARE_SERIALIZER(UMinimapWidget)


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMinimapWidget(UMinimapWidget&&); \
	UMinimapWidget(const UMinimapWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMinimapWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinimapWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinimapWidget) \
	NO_API virtual ~UMinimapWidget();


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_14_PROLOG
#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPSYSTEM_API UClass* StaticClass<class UMinimapWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
