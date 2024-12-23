// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MapWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapHelper;
class UMapMarkerComponent;
struct FGeometry;
#ifdef MAPSYSTEM_MapWidget_generated_h
#error "MapWidget.generated.h already included, missing '#pragma once' in MapWidget.h"
#endif
#define MAPSYSTEM_MapWidget_generated_h

#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateCustomMarker); \
	DECLARE_FUNCTION(execZoomMap); \
	DECLARE_FUNCTION(execMoveMap); \
	DECLARE_FUNCTION(execGetMapHelper); \
	DECLARE_FUNCTION(execConvertMapWidgetToMapHelperPosition); \
	DECLARE_FUNCTION(execConvertMapHelperToMapWidgetPosition); \
	DECLARE_FUNCTION(execClearMap); \
	DECLARE_FUNCTION(execUpdateMap); \
	DECLARE_FUNCTION(execOnFindPathPoints); \
	DECLARE_FUNCTION(execUpdateMarkers); \
	DECLARE_FUNCTION(execAddMarker);


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapWidget(); \
	friend struct Z_Construct_UClass_UMapWidget_Statics; \
public: \
	DECLARE_CLASS(UMapWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MapSystem"), NO_API) \
	DECLARE_SERIALIZER(UMapWidget)


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapWidget(UMapWidget&&); \
	UMapWidget(const UMapWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapWidget) \
	NO_API virtual ~UMapWidget();


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_13_PROLOG
#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPSYSTEM_API UClass* StaticClass<class UMapWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
