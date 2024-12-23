// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MapMarkerWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapMarkerComponent;
class UMapMarkerWidget;
#ifdef MAPSYSTEM_MapMarkerWidget_generated_h
#error "MapMarkerWidget.generated.h already included, missing '#pragma once' in MapMarkerWidget.h"
#endif
#define MAPSYSTEM_MapMarkerWidget_generated_h

#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_9_DELEGATE \
MAPSYSTEM_API void FOnFindPathToMarker_DelegateWrapper(const FMulticastScriptDelegate& OnFindPathToMarker, UMapMarkerWidget* MarkerWidget, bool bStart);


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeMarker_Implementation(UMapMarkerComponent* MarkerComponent); \
	virtual void OnRightMouseButtonDown_Implementation(); \
	virtual void OnLeftMouseButtonDown_Implementation(); \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execInitializeMarker); \
	DECLARE_FUNCTION(execHideMarker); \
	DECLARE_FUNCTION(execCallOnFindPathToMarker); \
	DECLARE_FUNCTION(execOnRightMouseButtonDown); \
	DECLARE_FUNCTION(execOnLeftMouseButtonDown);


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_CALLBACK_WRAPPERS
#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapMarkerWidget(); \
	friend struct Z_Construct_UClass_UMapMarkerWidget_Statics; \
public: \
	DECLARE_CLASS(UMapMarkerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MapSystem"), NO_API) \
	DECLARE_SERIALIZER(UMapMarkerWidget)


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapMarkerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapMarkerWidget(UMapMarkerWidget&&); \
	UMapMarkerWidget(const UMapMarkerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapMarkerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapMarkerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapMarkerWidget) \
	NO_API virtual ~UMapMarkerWidget();


#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_14_PROLOG
#define FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_CALLBACK_WRAPPERS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAPSYSTEM_API UClass* StaticClass<class UMapMarkerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
