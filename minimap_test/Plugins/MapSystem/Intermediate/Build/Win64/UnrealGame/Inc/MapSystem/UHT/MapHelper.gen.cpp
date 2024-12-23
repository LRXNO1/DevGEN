// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/Core/MapHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapHelper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapCustomMarker_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapHelper();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapHelper_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature();
MAPSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMapHelperConfig();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Delegate FOnAddVisibleMarker
struct Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnAddVisibleMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MapSystem_eventOnAddVisibleMarker_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnAddVisibleMarker__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnAddVisibleMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnAddVisibleMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddVisibleMarker_DelegateWrapper(const FMulticastScriptDelegate& OnAddVisibleMarker, UMapMarkerComponent* MarkerComponent)
{
	struct _Script_MapSystem_eventOnAddVisibleMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
	_Script_MapSystem_eventOnAddVisibleMarker_Parms Parms;
	Parms.MarkerComponent=MarkerComponent;
	OnAddVisibleMarker.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAddVisibleMarker

// Begin Delegate FOnHideVisibleMarker
struct Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnHideVisibleMarker_Parms
	{
		int32 id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MapSystem_eventOnHideVisibleMarker_Parms, id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::NewProp_id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnHideVisibleMarker__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnHideVisibleMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnHideVisibleMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHideVisibleMarker_DelegateWrapper(const FMulticastScriptDelegate& OnHideVisibleMarker, int32 id)
{
	struct _Script_MapSystem_eventOnHideVisibleMarker_Parms
	{
		int32 id;
	};
	_Script_MapSystem_eventOnHideVisibleMarker_Parms Parms;
	Parms.id=id;
	OnHideVisibleMarker.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHideVisibleMarker

// Begin Delegate FOnAddMarker
struct Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnAddMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MapSystem_eventOnAddMarker_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnAddMarker__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnAddMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnAddMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAddMarker_DelegateWrapper(const FMulticastScriptDelegate& OnAddMarker, UMapMarkerComponent* MarkerComponent)
{
	struct _Script_MapSystem_eventOnAddMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
	_Script_MapSystem_eventOnAddMarker_Parms Parms;
	Parms.MarkerComponent=MarkerComponent;
	OnAddMarker.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAddMarker

// Begin Delegate FOnUpdateFindPath
struct Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnUpdateFindPath_Parms
	{
		bool bStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::NewProp_bStart_SetBit(void* Obj)
{
	((_Script_MapSystem_eventOnUpdateFindPath_Parms*)Obj)->bStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MapSystem_eventOnUpdateFindPath_Parms), &Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::NewProp_bStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnUpdateFindPath__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::_Script_MapSystem_eventOnUpdateFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::_Script_MapSystem_eventOnUpdateFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUpdateFindPath_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateFindPath, bool bStart)
{
	struct _Script_MapSystem_eventOnUpdateFindPath_Parms
	{
		bool bStart;
	};
	_Script_MapSystem_eventOnUpdateFindPath_Parms Parms;
	Parms.bStart=bStart ? true : false;
	OnUpdateFindPath.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUpdateFindPath

// Begin ScriptStruct FMapHelperConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapHelperConfig;
class UScriptStruct* FMapHelperConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapHelperConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapHelperConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapHelperConfig, (UObject*)Z_Construct_UPackage__Script_MapSystem(), TEXT("MapHelperConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MapHelperConfig.OuterSingleton;
}
template<> MAPSYSTEM_API UScriptStruct* StaticStruct<FMapHelperConfig>()
{
	return FMapHelperConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapHelperConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTexture_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**This is a map texture used for the map and minimap */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "This is a map texture used for the map and minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapZoom_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**This value is used to set the zoom in the minimap widget */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "This value is used to set the zoom in the minimap widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MapSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapHelperConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapHelperConfig, MapSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapSize_MetaData), NewProp_MapSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewProp_MapTexture = { "MapTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapHelperConfig, MapTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTexture_MetaData), NewProp_MapTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewProp_MinimapZoom = { "MinimapZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapHelperConfig, MinimapZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapZoom_MetaData), NewProp_MinimapZoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapHelperConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewProp_MapSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewProp_MapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewProp_MinimapZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapHelperConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapHelperConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
	nullptr,
	&NewStructOps,
	"MapHelperConfig",
	Z_Construct_UScriptStruct_FMapHelperConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapHelperConfig_Statics::PropPointers),
	sizeof(FMapHelperConfig),
	alignof(FMapHelperConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapHelperConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapHelperConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapHelperConfig()
{
	if (!Z_Registration_Info_UScriptStruct_MapHelperConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapHelperConfig.InnerSingleton, Z_Construct_UScriptStruct_FMapHelperConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapHelperConfig.InnerSingleton;
}
// End ScriptStruct FMapHelperConfig

// Begin Class AMapHelper Function CaptureMapImage
struct Z_Construct_UFunction_AMapHelper_CaptureMapImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Map" },
		{ "Comment", "/**Creates a map image */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Creates a map image" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_CaptureMapImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "CaptureMapImage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_CaptureMapImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_CaptureMapImage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapHelper_CaptureMapImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_CaptureMapImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execCaptureMapImage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureMapImage();
	P_NATIVE_END;
}
// End Class AMapHelper Function CaptureMapImage

// Begin Class AMapHelper Function ConvertMapHelperPosToWorldLocation
struct Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics
{
	struct MapHelper_eventConvertMapHelperPosToWorldLocation_Parms
	{
		FVector2D Position;
		bool bUseRefActor;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Converts the position relative to the map helper to world location */" },
		{ "CPP_Default_bUseRefActor", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Converts the position relative to the map helper to world location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bUseRefActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRefActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventConvertMapHelperPosToWorldLocation_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_bUseRefActor_SetBit(void* Obj)
{
	((MapHelper_eventConvertMapHelperPosToWorldLocation_Parms*)Obj)->bUseRefActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_bUseRefActor = { "bUseRefActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventConvertMapHelperPosToWorldLocation_Parms), &Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_bUseRefActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventConvertMapHelperPosToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_bUseRefActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "ConvertMapHelperPosToWorldLocation", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::MapHelper_eventConvertMapHelperPosToWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::MapHelper_eventConvertMapHelperPosToWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execConvertMapHelperPosToWorldLocation)
{
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bUseRefActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ConvertMapHelperPosToWorldLocation(Z_Param_Position,Z_Param_bUseRefActor);
	P_NATIVE_END;
}
// End Class AMapHelper Function ConvertMapHelperPosToWorldLocation

// Begin Class AMapHelper Function ConvertWorldLocToMapHelperPosition
struct Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics
{
	struct MapHelper_eventConvertWorldLocToMapHelperPosition_Parms
	{
		FVector Location;
		bool bUseRefActor;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Converts the location to a position relative to the map helper */" },
		{ "CPP_Default_bUseRefActor", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Converts the location to a position relative to the map helper" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bUseRefActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRefActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventConvertWorldLocToMapHelperPosition_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_bUseRefActor_SetBit(void* Obj)
{
	((MapHelper_eventConvertWorldLocToMapHelperPosition_Parms*)Obj)->bUseRefActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_bUseRefActor = { "bUseRefActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventConvertWorldLocToMapHelperPosition_Parms), &Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_bUseRefActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventConvertWorldLocToMapHelperPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_bUseRefActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "ConvertWorldLocToMapHelperPosition", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::MapHelper_eventConvertWorldLocToMapHelperPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::MapHelper_eventConvertWorldLocToMapHelperPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execConvertWorldLocToMapHelperPosition)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_UBOOL(Z_Param_bUseRefActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->ConvertWorldLocToMapHelperPosition(Z_Param_Location,Z_Param_bUseRefActor);
	P_NATIVE_END;
}
// End Class AMapHelper Function ConvertWorldLocToMapHelperPosition

// Begin Class AMapHelper Function CreateCustomMarker
struct Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics
{
	struct MapHelper_eventCreateCustomMarker_Parms
	{
		FVector2D MapHelperPos;
		bool bStartFindingPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**Converts the passed position to a world location and spawns a user marker at that location. A Line Trace is made to scan the yaw axis */" },
		{ "CPP_Default_bStartFindingPath", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Converts the passed position to a world location and spawns a user marker at that location. A Line Trace is made to scan the yaw axis" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapHelperPos;
	static void NewProp_bStartFindingPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFindingPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::NewProp_MapHelperPos = { "MapHelperPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventCreateCustomMarker_Parms, MapHelperPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::NewProp_bStartFindingPath_SetBit(void* Obj)
{
	((MapHelper_eventCreateCustomMarker_Parms*)Obj)->bStartFindingPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::NewProp_bStartFindingPath = { "bStartFindingPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventCreateCustomMarker_Parms), &Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::NewProp_bStartFindingPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::NewProp_MapHelperPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::NewProp_bStartFindingPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "CreateCustomMarker", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::MapHelper_eventCreateCustomMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::MapHelper_eventCreateCustomMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_CreateCustomMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_CreateCustomMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execCreateCustomMarker)
{
	P_GET_STRUCT(FVector2D,Z_Param_MapHelperPos);
	P_GET_UBOOL(Z_Param_bStartFindingPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCustomMarker(Z_Param_MapHelperPos,Z_Param_bStartFindingPath);
	P_NATIVE_END;
}
// End Class AMapHelper Function CreateCustomMarker

// Begin Class AMapHelper Function FindPath
struct Z_Construct_UFunction_AMapHelper_FindPath_Statics
{
	struct MapHelper_eventFindPath_Parms
	{
		bool bAsync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Finds path points to a marker. By default, every frame is called in EventTick */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Finds path points to a marker. By default, every frame is called in EventTick" },
	};
#endif // WITH_METADATA
	static void NewProp_bAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapHelper_FindPath_Statics::NewProp_bAsync_SetBit(void* Obj)
{
	((MapHelper_eventFindPath_Parms*)Obj)->bAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_FindPath_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventFindPath_Parms), &Z_Construct_UFunction_AMapHelper_FindPath_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_FindPath_Statics::NewProp_bAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "FindPath", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_FindPath_Statics::MapHelper_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_FindPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_FindPath_Statics::MapHelper_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execFindPath)
{
	P_GET_UBOOL(Z_Param_bAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindPath(Z_Param_bAsync);
	P_NATIVE_END;
}
// End Class AMapHelper Function FindPath

// Begin Class AMapHelper Function FindSpawnCustomMarkerLocation
struct MapHelper_eventFindSpawnCustomMarkerLocation_Parms
{
	FVector2D MapHelperPos;
	FVector SpawnLocation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MapHelper_eventFindSpawnCustomMarkerLocation_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AMapHelper_FindSpawnCustomMarkerLocation = FName(TEXT("FindSpawnCustomMarkerLocation"));
bool AMapHelper::FindSpawnCustomMarkerLocation(FVector2D MapHelperPos, FVector& SpawnLocation)
{
	MapHelper_eventFindSpawnCustomMarkerLocation_Parms Parms;
	Parms.MapHelperPos=MapHelperPos;
	Parms.SpawnLocation=SpawnLocation;
	ProcessEvent(FindFunctionChecked(NAME_AMapHelper_FindSpawnCustomMarkerLocation),&Parms);
	SpawnLocation=Parms.SpawnLocation;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomMarker" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapHelperPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_MapHelperPos = { "MapHelperPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventFindSpawnCustomMarkerLocation_Parms, MapHelperPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventFindSpawnCustomMarkerLocation_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapHelper_eventFindSpawnCustomMarkerLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventFindSpawnCustomMarkerLocation_Parms), &Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_MapHelperPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "FindSpawnCustomMarkerLocation", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::PropPointers), sizeof(MapHelper_eventFindSpawnCustomMarkerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapHelper_eventFindSpawnCustomMarkerLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execFindSpawnCustomMarkerLocation)
{
	P_GET_STRUCT(FVector2D,Z_Param_MapHelperPos);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SpawnLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindSpawnCustomMarkerLocation_Implementation(Z_Param_MapHelperPos,Z_Param_Out_SpawnLocation);
	P_NATIVE_END;
}
// End Class AMapHelper Function FindSpawnCustomMarkerLocation

// Begin Class AMapHelper Function GetHiddenMarkerComponents
struct Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics
{
	struct MapHelper_eventGetHiddenMarkerComponents_Parms
	{
		TArray<UMapMarkerComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**Returns only hidden marker components. These marker are further than the DistanceToVisibleMarker from the player. */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns only hidden marker components. These marker are further than the DistanceToVisibleMarker from the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetHiddenMarkerComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetHiddenMarkerComponents", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::MapHelper_eventGetHiddenMarkerComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::MapHelper_eventGetHiddenMarkerComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetHiddenMarkerComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMapMarkerComponent*>*)Z_Param__Result=P_THIS->GetHiddenMarkerComponents();
	P_NATIVE_END;
}
// End Class AMapHelper Function GetHiddenMarkerComponents

// Begin Class AMapHelper Function GetMapSize
struct Z_Construct_UFunction_AMapHelper_GetMapSize_Statics
{
	struct MapHelper_eventGetMapSize_Parms
	{
		bool bGetDefaultSize;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Returns size of the map */" },
		{ "CPP_Default_bGetDefaultSize", "false" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns size of the map" },
	};
#endif // WITH_METADATA
	static void NewProp_bGetDefaultSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDefaultSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::NewProp_bGetDefaultSize_SetBit(void* Obj)
{
	((MapHelper_eventGetMapSize_Parms*)Obj)->bGetDefaultSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::NewProp_bGetDefaultSize = { "bGetDefaultSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventGetMapSize_Parms), &Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::NewProp_bGetDefaultSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetMapSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::NewProp_bGetDefaultSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetMapSize", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::MapHelper_eventGetMapSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::MapHelper_eventGetMapSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetMapSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetMapSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetMapSize)
{
	P_GET_UBOOL(Z_Param_bGetDefaultSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMapSize(Z_Param_bGetDefaultSize);
	P_NATIVE_END;
}
// End Class AMapHelper Function GetMapSize

// Begin Class AMapHelper Function GetMapTexture
struct Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics
{
	struct MapHelper_eventGetMapTexture_Parms
	{
		bool bGetDefaultTexture;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Returns the map texture from the map helper config*/" },
		{ "CPP_Default_bGetDefaultTexture", "false" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns the map texture from the map helper config" },
	};
#endif // WITH_METADATA
	static void NewProp_bGetDefaultTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDefaultTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::NewProp_bGetDefaultTexture_SetBit(void* Obj)
{
	((MapHelper_eventGetMapTexture_Parms*)Obj)->bGetDefaultTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::NewProp_bGetDefaultTexture = { "bGetDefaultTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventGetMapTexture_Parms), &Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::NewProp_bGetDefaultTexture_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetMapTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::NewProp_bGetDefaultTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetMapTexture", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::MapHelper_eventGetMapTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::MapHelper_eventGetMapTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetMapTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetMapTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetMapTexture)
{
	P_GET_UBOOL(Z_Param_bGetDefaultTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetMapTexture(Z_Param_bGetDefaultTexture);
	P_NATIVE_END;
}
// End Class AMapHelper Function GetMapTexture

// Begin Class AMapHelper Function GetMinimapZoom
struct Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics
{
	struct MapHelper_eventGetMinimapZoom_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Return the minimap zoom from the map helper config which is currently being used */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Return the minimap zoom from the map helper config which is currently being used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetMinimapZoom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetMinimapZoom", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::MapHelper_eventGetMinimapZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::MapHelper_eventGetMinimapZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetMinimapZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetMinimapZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetMinimapZoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMinimapZoom();
	P_NATIVE_END;
}
// End Class AMapHelper Function GetMinimapZoom

// Begin Class AMapHelper Function GetPathFindingComponent
struct Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics
{
	struct MapHelper_eventGetPathFindingComponent_Parms
	{
		const UMapMarkerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Returns the MarkerComponent to which it's finding a path */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns the MarkerComponent to which it's finding a path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetPathFindingComponent_Parms, ReturnValue), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetPathFindingComponent", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::MapHelper_eventGetPathFindingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::MapHelper_eventGetPathFindingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetPathFindingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetPathFindingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetPathFindingComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UMapMarkerComponent**)Z_Param__Result=P_THIS->GetPathFindingComponent();
	P_NATIVE_END;
}
// End Class AMapHelper Function GetPathFindingComponent

// Begin Class AMapHelper Function GetPathPoints
struct Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics
{
	struct MapHelper_eventGetPathPoints_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Returns an array of path points. These points were found while finding a path */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns an array of path points. These points were found while finding a path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetPathPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetPathPoints", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::MapHelper_eventGetPathPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::MapHelper_eventGetPathPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetPathPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetPathPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetPathPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPathPoints();
	P_NATIVE_END;
}
// End Class AMapHelper Function GetPathPoints

// Begin Class AMapHelper Function GetReferenceActor
struct Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics
{
	struct MapHelper_eventGetReferenceActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Returns the reference actor which is used to calculate marker positions.*/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns the reference actor which is used to calculate marker positions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetReferenceActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetReferenceActor", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::MapHelper_eventGetReferenceActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::MapHelper_eventGetReferenceActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetReferenceActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetReferenceActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetReferenceActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetReferenceActor();
	P_NATIVE_END;
}
// End Class AMapHelper Function GetReferenceActor

// Begin Class AMapHelper Function GetVisibleMarkerComponents
struct Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics
{
	struct MapHelper_eventGetVisibleMarkerComponents_Parms
	{
		TArray<UMapMarkerComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**Returns only visible marker components. These marker are no further than the DistanceToVisibleMarker from the player. */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns only visible marker components. These marker are no further than the DistanceToVisibleMarker from the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventGetVisibleMarkerComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "GetVisibleMarkerComponents", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::MapHelper_eventGetVisibleMarkerComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::MapHelper_eventGetVisibleMarkerComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execGetVisibleMarkerComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMapMarkerComponent*>*)Z_Param__Result=P_THIS->GetVisibleMarkerComponents();
	P_NATIVE_END;
}
// End Class AMapHelper Function GetVisibleMarkerComponents

// Begin Class AMapHelper Function IsFindingPath
struct Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics
{
	struct MapHelper_eventIsFindingPath_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Returns true while finding the path */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Returns true while finding the path" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapHelper_eventIsFindingPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventIsFindingPath_Parms), &Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "IsFindingPath", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::MapHelper_eventIsFindingPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::MapHelper_eventIsFindingPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_IsFindingPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_IsFindingPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execIsFindingPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFindingPath();
	P_NATIVE_END;
}
// End Class AMapHelper Function IsFindingPath

// Begin Class AMapHelper Function RestoreMapHelperConfig
struct Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Restores the map helper config to its default setting */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Restores the map helper config to its default setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "RestoreMapHelperConfig", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execRestoreMapHelperConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreMapHelperConfig();
	P_NATIVE_END;
}
// End Class AMapHelper Function RestoreMapHelperConfig

// Begin Class AMapHelper Function SetMapHelperConfig
struct Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics
{
	struct MapHelper_eventSetMapHelperConfig_Parms
	{
		FMapHelperConfig NewConfig;
		AActor* NewReferenceActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Sets a new map helper config */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Sets a new map helper config" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewReferenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventSetMapHelperConfig_Parms, NewConfig), Z_Construct_UScriptStruct_FMapHelperConfig, METADATA_PARAMS(0, nullptr) }; // 3548326184
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::NewProp_NewReferenceActor = { "NewReferenceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventSetMapHelperConfig_Parms, NewReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::NewProp_NewConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::NewProp_NewReferenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "SetMapHelperConfig", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::MapHelper_eventSetMapHelperConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::MapHelper_eventSetMapHelperConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_SetMapHelperConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_SetMapHelperConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execSetMapHelperConfig)
{
	P_GET_STRUCT(FMapHelperConfig,Z_Param_NewConfig);
	P_GET_OBJECT(AActor,Z_Param_NewReferenceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMapHelperConfig(Z_Param_NewConfig,Z_Param_NewReferenceActor);
	P_NATIVE_END;
}
// End Class AMapHelper Function SetMapHelperConfig

// Begin Class AMapHelper Function SetMapSize
struct Z_Construct_UFunction_AMapHelper_SetMapSize_Statics
{
	struct MapHelper_eventSetMapSize_Parms
	{
		float NewMapSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Sets a new map size */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Sets a new map size" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMapSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::NewProp_NewMapSize = { "NewMapSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventSetMapSize_Parms, NewMapSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::NewProp_NewMapSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "SetMapSize", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::MapHelper_eventSetMapSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::MapHelper_eventSetMapSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_SetMapSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_SetMapSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execSetMapSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMapSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMapSize(Z_Param_NewMapSize);
	P_NATIVE_END;
}
// End Class AMapHelper Function SetMapSize

// Begin Class AMapHelper Function SetMapTexture
struct Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics
{
	struct MapHelper_eventSetMapTexture_Parms
	{
		UTexture* NewTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Sets a new map texture */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Sets a new map texture" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventSetMapTexture_Parms, NewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::NewProp_NewTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "SetMapTexture", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::MapHelper_eventSetMapTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::MapHelper_eventSetMapTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_SetMapTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_SetMapTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execSetMapTexture)
{
	P_GET_OBJECT(UTexture,Z_Param_NewTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMapTexture(Z_Param_NewTexture);
	P_NATIVE_END;
}
// End Class AMapHelper Function SetMapTexture

// Begin Class AMapHelper Function SetMinimapZoom
struct Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics
{
	struct MapHelper_eventSetMinimapZoom_Parms
	{
		float NewZoom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Sets a new minimap zoom */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Sets a new minimap zoom" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventSetMinimapZoom_Parms, NewZoom), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::NewProp_NewZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "SetMinimapZoom", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::MapHelper_eventSetMinimapZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::MapHelper_eventSetMinimapZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_SetMinimapZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_SetMinimapZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execSetMinimapZoom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinimapZoom(Z_Param_NewZoom);
	P_NATIVE_END;
}
// End Class AMapHelper Function SetMinimapZoom

// Begin Class AMapHelper Function SetPauseMapHelper
struct Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics
{
	struct MapHelper_eventSetPauseMapHelper_Parms
	{
		bool bPause;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**If true, then finding the path and position of the player on the minimap will be suspended */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, then finding the path and position of the player on the minimap will be suspended" },
	};
#endif // WITH_METADATA
	static void NewProp_bPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::NewProp_bPause_SetBit(void* Obj)
{
	((MapHelper_eventSetPauseMapHelper_Parms*)Obj)->bPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapHelper_eventSetPauseMapHelper_Parms), &Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::NewProp_bPause,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "SetPauseMapHelper", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::MapHelper_eventSetPauseMapHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::MapHelper_eventSetPauseMapHelper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_SetPauseMapHelper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_SetPauseMapHelper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execSetPauseMapHelper)
{
	P_GET_UBOOL(Z_Param_bPause);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPauseMapHelper(Z_Param_bPause);
	P_NATIVE_END;
}
// End Class AMapHelper Function SetPauseMapHelper

// Begin Class AMapHelper Function SetReferenceActor
struct Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics
{
	struct MapHelper_eventSetReferenceActor_Parms
	{
		AActor* NewReferenceActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Sets a new reference actor which is used to calculate marker positions. By default this is the map helper itself but you can set any another actor here */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Sets a new reference actor which is used to calculate marker positions. By default this is the map helper itself but you can set any another actor here" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewReferenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::NewProp_NewReferenceActor = { "NewReferenceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventSetReferenceActor_Parms, NewReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::NewProp_NewReferenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "SetReferenceActor", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::MapHelper_eventSetReferenceActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::MapHelper_eventSetReferenceActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_SetReferenceActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_SetReferenceActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execSetReferenceActor)
{
	P_GET_OBJECT(AActor,Z_Param_NewReferenceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReferenceActor(Z_Param_NewReferenceActor);
	P_NATIVE_END;
}
// End Class AMapHelper Function SetReferenceActor

// Begin Class AMapHelper Function StartFindingPathToMarker
struct Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics
{
	struct MapHelper_eventStartFindingPathToMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Starts finding the path to the MarkerComponent every tick. Calls OnFindingPath with true */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Starts finding the path to the MarkerComponent every tick. Calls OnFindingPath with true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapHelper_eventStartFindingPathToMarker_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "StartFindingPathToMarker", nullptr, nullptr, Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::MapHelper_eventStartFindingPathToMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::MapHelper_eventStartFindingPathToMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execStartFindingPathToMarker)
{
	P_GET_OBJECT(UMapMarkerComponent,Z_Param_MarkerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFindingPathToMarker(Z_Param_MarkerComponent);
	P_NATIVE_END;
}
// End Class AMapHelper Function StartFindingPathToMarker

// Begin Class AMapHelper Function StopFindingPath
struct Z_Construct_UFunction_AMapHelper_StopFindingPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Stops finding the path. Calls OnFindingPath with false */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Stops finding the path. Calls OnFindingPath with false" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_StopFindingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "StopFindingPath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_StopFindingPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_StopFindingPath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapHelper_StopFindingPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_StopFindingPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execStopFindingPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFindingPath();
	P_NATIVE_END;
}
// End Class AMapHelper Function StopFindingPath

// Begin Class AMapHelper Function UpdateMCPMinimap
struct Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "Comment", "/**Updates the player's position in the MPC_Minimap. By default, every frame is called in EventTick */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Updates the player's position in the MPC_Minimap. By default, every frame is called in EventTick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapHelper, nullptr, "UpdateMCPMinimap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapHelper::execUpdateMCPMinimap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMCPMinimap();
	P_NATIVE_END;
}
// End Class AMapHelper Function UpdateMCPMinimap

// Begin Class AMapHelper
void AMapHelper::StaticRegisterNativesAMapHelper()
{
	UClass* Class = AMapHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureMapImage", &AMapHelper::execCaptureMapImage },
		{ "ConvertMapHelperPosToWorldLocation", &AMapHelper::execConvertMapHelperPosToWorldLocation },
		{ "ConvertWorldLocToMapHelperPosition", &AMapHelper::execConvertWorldLocToMapHelperPosition },
		{ "CreateCustomMarker", &AMapHelper::execCreateCustomMarker },
		{ "FindPath", &AMapHelper::execFindPath },
		{ "FindSpawnCustomMarkerLocation", &AMapHelper::execFindSpawnCustomMarkerLocation },
		{ "GetHiddenMarkerComponents", &AMapHelper::execGetHiddenMarkerComponents },
		{ "GetMapSize", &AMapHelper::execGetMapSize },
		{ "GetMapTexture", &AMapHelper::execGetMapTexture },
		{ "GetMinimapZoom", &AMapHelper::execGetMinimapZoom },
		{ "GetPathFindingComponent", &AMapHelper::execGetPathFindingComponent },
		{ "GetPathPoints", &AMapHelper::execGetPathPoints },
		{ "GetReferenceActor", &AMapHelper::execGetReferenceActor },
		{ "GetVisibleMarkerComponents", &AMapHelper::execGetVisibleMarkerComponents },
		{ "IsFindingPath", &AMapHelper::execIsFindingPath },
		{ "RestoreMapHelperConfig", &AMapHelper::execRestoreMapHelperConfig },
		{ "SetMapHelperConfig", &AMapHelper::execSetMapHelperConfig },
		{ "SetMapSize", &AMapHelper::execSetMapSize },
		{ "SetMapTexture", &AMapHelper::execSetMapTexture },
		{ "SetMinimapZoom", &AMapHelper::execSetMinimapZoom },
		{ "SetPauseMapHelper", &AMapHelper::execSetPauseMapHelper },
		{ "SetReferenceActor", &AMapHelper::execSetReferenceActor },
		{ "StartFindingPathToMarker", &AMapHelper::execStartFindingPathToMarker },
		{ "StopFindingPath", &AMapHelper::execStopFindingPath },
		{ "UpdateMCPMinimap", &AMapHelper::execUpdateMCPMinimap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapHelper);
UClass* Z_Construct_UClass_AMapHelper_NoRegister()
{
	return AMapHelper::StaticClass();
}
struct Z_Construct_UClass_AMapHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*This actor is an important element for the operation of the map and minimap, it unites them. The main task is to capture the map image.\n*It involves in creating and removing markers, pathfinding, creating custom markers, and updating the data in the MPC_Minimap.\n*/" },
		{ "IncludePath", "Core/MapHelper.h" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "This actor is an important element for the operation of the map and minimap, it unites them. The main task is to capture the map image.\nIt involves in creating and removing markers, pathfinding, creating custom markers, and updating the data in the MPC_Minimap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapCaptureComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureAreaVisualizer_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockBigMapTextureChange_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**If true, when a new texture will be set, it won't affect on the big map. The new texture will be set only on the minimap */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, when a new texture will be set, it won't affect on the big map. The new texture will be set only on the minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**\n\x09* If true, the yaw rotation (Z-axis) of the Controller will be used to calculate the minimap compass (minimap rotation) and the position of the markers on it.\n\x09* If false, the PlayerYawRotation value must be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, the yaw rotation (Z-axis) of the Controller will be used to calculate the minimap compass (minimap rotation) and the position of the markers on it.\nIf false, the PlayerYawRotation value must be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerYawRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**This value will be used instead of the controller's yaw rotation (Z-axis) if bUseControllerRotation is set to true. **/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "This value will be used instead of the controller's yaw rotation (Z-axis) if bUseControllerRotation is set to true. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCustomMarkers_MetaData[] = {
		{ "Category", "CustomMarker" },
		{ "Comment", "/**If true, new custom markers could be placed on the map */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, new custom markers could be placed on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMarkerClass_MetaData[] = {
		{ "BlueprintBaseOnly", "" },
		{ "Category", "CustomMarker" },
		{ "Comment", "/**\n\x09* It'll be created on right click on the map.\n\x09* USE ONLY BLUEPRINT CLASSES\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "It'll be created on right click on the map.\nUSE ONLY BLUEPRINT CLASSES" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceCollisionChannel_MetaData[] = {
		{ "Category", "CustomMarker" },
		{ "Comment", "/**Line tracing is used to find the surface on which the custom marker will be placed */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Line tracing is used to find the surface on which the custom marker will be placed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceLength_MetaData[] = {
		{ "Category", "CustomMarker" },
		{ "Comment", "/**The length of the Line Trace which is created when a custom marker is spawning to search for a surface */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "The length of the Line Trace which is created when a custom marker is spawning to search for a surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyOne_MetaData[] = {
		{ "Category", "CustomMarker" },
		{ "Comment", "/**If true, it will not be possible to create more than one custom marker */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, it will not be possible to create more than one custom marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectToNavigation_MetaData[] = {
		{ "Category", "CustomMarker" },
		{ "Comment", "/**If true, then it will be possible to put a custom marker on the map only in the place where there is the NavMesh */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, then it will be possible to put a custom marker on the map only in the place where there is the NavMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentToProjectToNavigation_MetaData[] = {
		{ "Category", "CustomMarker" },
		{ "Comment", "/**The size of the area to find the nearest point in the NavMesh */" },
		{ "EditCondition", "bProjectToNavigation==true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "The size of the area to find the nearest point in the NavMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePathfinding_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindPath_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If true, the path will be found and drawn on the maps. */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, the path will be found and drawn on the maps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimplePathfinding_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If true, then the line between the start and the end will simply be drawn. This doesn't require the NavMesh.*/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, then the line between the start and the end will simply be drawn. This doesn't require the NavMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindPathAsync_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If true, pathfinding will be performed asynchronously. */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, pathfinding will be performed asynchronously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindPathEveryFrame_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If true, then FindPath() will be called every frame.*/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, then FindPath() will be called every frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectPlayerLocationToNavigiation_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If true, it'll look for the nearest point near the player to find the path. It'll be useful if the player is outside the NavMesh. Execute every frame */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, it'll look for the nearest point near the player to find the path. It'll be useful if the player is outside the NavMesh. Execute every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentToProjPlayerLocToNav_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**The size of the area to find the nearest point in the NavMesh */" },
		{ "EditCondition", "bProjectPlayerLocationToNavigiation==true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "The size of the area to find the nearest point in the NavMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectCustomMarkerLocationToNavigiation_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If true, it'll look for the nearest point near the custom marker to find the path. It'll be useful if the custom marker is outside the NavMesh. Execute every frame */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, it'll look for the nearest point near the custom marker to find the path. It'll be useful if the custom marker is outside the NavMesh. Execute every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentToProjCustomMarkLocToNav_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**The size of the area to find the nearest point in the NavMesh */" },
		{ "EditCondition", "bProjectCustomMarkerLocationToNavigiation==true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "The size of the area to find the nearest point in the NavMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDifferenceBetweenPlayerAndFirstPoint_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**\n\x09* The position of the first waypoint and the player may differ, and if this difference exceeds this allowable value, then the position of the player will be the first waypoint.\n\x09* Too low a value can result in path line artifacts on the map\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "The position of the first waypoint and the player may differ, and if this difference exceeds this allowable value, then the position of the player will be the first waypoint.\nToo low a value can result in path line artifacts on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUpdateFirstPointIfPathWasLost_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If the path is lost during the player's movement, a line will be drawn to the path that was found */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If the path is lost during the player's movement, a line will be drawn to the path that was found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartToEndIfNoPath_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/**If there is no path, then a line will simply be drawn between the start and end points */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If there is no path, then a line will simply be drawn between the start and end points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortMarkers_MetaData[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**If true, markers will be sorted by distance into hidden and visible groups. This allows for the avoidance of creating marker widgets if the marker is far away from the player, which can improve performance in some cases */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, markers will be sorted by distance into hidden and visible groups. This allows for the avoidance of creating marker widgets if the marker is far away from the player, which can improve performance in some cases" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceToVisibleMarker_MetaData[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**If markers are further than this distance they'll be hidden **/" },
		{ "EditCondition", "bSortMarkers==true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If markers are further than this distance they'll be hidden *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkersSortingRate_MetaData[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**It's how often markers will be sorted. Specify time in a seconds **/" },
		{ "EditCondition", "bSortMarkers==true" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "It's how often markers will be sorted. Specify time in a seconds *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddVisibleMarker_MetaData[] = {
		{ "Comment", "/**Called when a visible marker is added to array of visible markers */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Called when a visible marker is added to array of visible markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHideVisibleMarker_MetaData[] = {
		{ "Comment", "/**Called when a visible marker is removed from array of visible markers */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Called when a visible marker is removed from array of visible markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddMarker_MetaData[] = {
		{ "Comment", "/**Called when a new marker is created */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Called when a new marker is created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateFindPath_MetaData[] = {
		{ "Comment", "/**Called when starts or stops finding path */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "Called when starts or stops finding path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapHelperConfig_MetaData[] = {
		{ "Category", "Map" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureMapOnBeginPlay_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**If true, then when the game starts, the map image will be captured */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, then when the game starts, the map image will be captured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyCaptureComponent_MetaData[] = {
		{ "Category", "Map" },
		{ "Comment", "/**If true, CaptureAreaVisualizer will be destroyed at the begin play event. This may improve performance. */" },
		{ "ModuleRelativePath", "Public/Core/MapHelper.h" },
		{ "ToolTip", "If true, CaptureAreaVisualizer will be destroyed at the begin play event. This may improve performance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapCaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureAreaVisualizer;
	static void NewProp_bLockBigMapTextureChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockBigMapTextureChange;
	static void NewProp_bUseControllerRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerYawRotation;
	static void NewProp_bEnableCustomMarkers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCustomMarkers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomMarkerClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTraceCollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineTraceLength;
	static void NewProp_bOnlyOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyOne;
	static void NewProp_bProjectToNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectToNavigation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentToProjectToNavigation;
	static void NewProp_bEnablePathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePathfinding;
	static void NewProp_bFindPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindPath;
	static void NewProp_bSimplePathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplePathfinding;
	static void NewProp_bFindPathAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindPathAsync;
	static void NewProp_bFindPathEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindPathEveryFrame;
	static void NewProp_bProjectPlayerLocationToNavigiation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectPlayerLocationToNavigiation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentToProjPlayerLocToNav;
	static void NewProp_bProjectCustomMarkerLocationToNavigiation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectCustomMarkerLocationToNavigiation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentToProjCustomMarkLocToNav;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDifferenceBetweenPlayerAndFirstPoint;
	static void NewProp_bOnlyUpdateFirstPointIfPathWasLost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUpdateFirstPointIfPathWasLost;
	static void NewProp_bStartToEndIfNoPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartToEndIfNoPath;
	static void NewProp_bSortMarkers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortMarkers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToVisibleMarker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkersSortingRate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddVisibleMarker;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHideVisibleMarker;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddMarker;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateFindPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapHelperConfig;
	static void NewProp_bCaptureMapOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureMapOnBeginPlay;
	static void NewProp_bDestroyCaptureComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyCaptureComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapHelper_CaptureMapImage, "CaptureMapImage" }, // 36569943
		{ &Z_Construct_UFunction_AMapHelper_ConvertMapHelperPosToWorldLocation, "ConvertMapHelperPosToWorldLocation" }, // 1329639896
		{ &Z_Construct_UFunction_AMapHelper_ConvertWorldLocToMapHelperPosition, "ConvertWorldLocToMapHelperPosition" }, // 2288900861
		{ &Z_Construct_UFunction_AMapHelper_CreateCustomMarker, "CreateCustomMarker" }, // 4060192554
		{ &Z_Construct_UFunction_AMapHelper_FindPath, "FindPath" }, // 862122569
		{ &Z_Construct_UFunction_AMapHelper_FindSpawnCustomMarkerLocation, "FindSpawnCustomMarkerLocation" }, // 2531528398
		{ &Z_Construct_UFunction_AMapHelper_GetHiddenMarkerComponents, "GetHiddenMarkerComponents" }, // 2088106191
		{ &Z_Construct_UFunction_AMapHelper_GetMapSize, "GetMapSize" }, // 2765600483
		{ &Z_Construct_UFunction_AMapHelper_GetMapTexture, "GetMapTexture" }, // 1269042934
		{ &Z_Construct_UFunction_AMapHelper_GetMinimapZoom, "GetMinimapZoom" }, // 2013183652
		{ &Z_Construct_UFunction_AMapHelper_GetPathFindingComponent, "GetPathFindingComponent" }, // 4199881892
		{ &Z_Construct_UFunction_AMapHelper_GetPathPoints, "GetPathPoints" }, // 3579414725
		{ &Z_Construct_UFunction_AMapHelper_GetReferenceActor, "GetReferenceActor" }, // 2668986880
		{ &Z_Construct_UFunction_AMapHelper_GetVisibleMarkerComponents, "GetVisibleMarkerComponents" }, // 4010084029
		{ &Z_Construct_UFunction_AMapHelper_IsFindingPath, "IsFindingPath" }, // 584843661
		{ &Z_Construct_UFunction_AMapHelper_RestoreMapHelperConfig, "RestoreMapHelperConfig" }, // 1684170235
		{ &Z_Construct_UFunction_AMapHelper_SetMapHelperConfig, "SetMapHelperConfig" }, // 290237491
		{ &Z_Construct_UFunction_AMapHelper_SetMapSize, "SetMapSize" }, // 611205602
		{ &Z_Construct_UFunction_AMapHelper_SetMapTexture, "SetMapTexture" }, // 1918879779
		{ &Z_Construct_UFunction_AMapHelper_SetMinimapZoom, "SetMinimapZoom" }, // 1282639017
		{ &Z_Construct_UFunction_AMapHelper_SetPauseMapHelper, "SetPauseMapHelper" }, // 589197840
		{ &Z_Construct_UFunction_AMapHelper_SetReferenceActor, "SetReferenceActor" }, // 1086917095
		{ &Z_Construct_UFunction_AMapHelper_StartFindingPathToMarker, "StartFindingPathToMarker" }, // 4050348779
		{ &Z_Construct_UFunction_AMapHelper_StopFindingPath, "StopFindingPath" }, // 394767391
		{ &Z_Construct_UFunction_AMapHelper_UpdateMCPMinimap, "UpdateMCPMinimap" }, // 111641532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_DefaultSceneComponent = { "DefaultSceneComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, DefaultSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneComponent_MetaData), NewProp_DefaultSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_MapCaptureComponent = { "MapCaptureComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, MapCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapCaptureComponent_MetaData), NewProp_MapCaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_CaptureAreaVisualizer = { "CaptureAreaVisualizer", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, CaptureAreaVisualizer), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureAreaVisualizer_MetaData), NewProp_CaptureAreaVisualizer_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bLockBigMapTextureChange_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bLockBigMapTextureChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bLockBigMapTextureChange = { "bLockBigMapTextureChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bLockBigMapTextureChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockBigMapTextureChange_MetaData), NewProp_bLockBigMapTextureChange_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bUseControllerRotation_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bUseControllerRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bUseControllerRotation = { "bUseControllerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bUseControllerRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerRotation_MetaData), NewProp_bUseControllerRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_PlayerYawRotation = { "PlayerYawRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, PlayerYawRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerYawRotation_MetaData), NewProp_PlayerYawRotation_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnableCustomMarkers_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bEnableCustomMarkers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnableCustomMarkers = { "bEnableCustomMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnableCustomMarkers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCustomMarkers_MetaData), NewProp_bEnableCustomMarkers_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_CustomMarkerClass = { "CustomMarkerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, CustomMarkerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMapCustomMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMarkerClass_MetaData), NewProp_CustomMarkerClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_LineTraceCollisionChannel = { "LineTraceCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, LineTraceCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTraceCollisionChannel_MetaData), NewProp_LineTraceCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_LineTraceLength = { "LineTraceLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, LineTraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTraceLength_MetaData), NewProp_LineTraceLength_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyOne_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bOnlyOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyOne = { "bOnlyOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyOne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyOne_MetaData), NewProp_bOnlyOne_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectToNavigation_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bProjectToNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectToNavigation = { "bProjectToNavigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectToNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectToNavigation_MetaData), NewProp_bProjectToNavigation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_ExtentToProjectToNavigation = { "ExtentToProjectToNavigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, ExtentToProjectToNavigation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentToProjectToNavigation_MetaData), NewProp_ExtentToProjectToNavigation_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnablePathfinding_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bEnablePathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnablePathfinding = { "bEnablePathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnablePathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePathfinding_MetaData), NewProp_bEnablePathfinding_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPath_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bFindPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPath = { "bFindPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindPath_MetaData), NewProp_bFindPath_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bSimplePathfinding_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bSimplePathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bSimplePathfinding = { "bSimplePathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bSimplePathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimplePathfinding_MetaData), NewProp_bSimplePathfinding_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathAsync_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bFindPathAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathAsync = { "bFindPathAsync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindPathAsync_MetaData), NewProp_bFindPathAsync_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathEveryFrame_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bFindPathEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathEveryFrame = { "bFindPathEveryFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindPathEveryFrame_MetaData), NewProp_bFindPathEveryFrame_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectPlayerLocationToNavigiation_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bProjectPlayerLocationToNavigiation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectPlayerLocationToNavigiation = { "bProjectPlayerLocationToNavigiation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectPlayerLocationToNavigiation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectPlayerLocationToNavigiation_MetaData), NewProp_bProjectPlayerLocationToNavigiation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_ExtentToProjPlayerLocToNav = { "ExtentToProjPlayerLocToNav", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, ExtentToProjPlayerLocToNav), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentToProjPlayerLocToNav_MetaData), NewProp_ExtentToProjPlayerLocToNav_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectCustomMarkerLocationToNavigiation_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bProjectCustomMarkerLocationToNavigiation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectCustomMarkerLocationToNavigiation = { "bProjectCustomMarkerLocationToNavigiation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectCustomMarkerLocationToNavigiation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectCustomMarkerLocationToNavigiation_MetaData), NewProp_bProjectCustomMarkerLocationToNavigiation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_ExtentToProjCustomMarkLocToNav = { "ExtentToProjCustomMarkLocToNav", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, ExtentToProjCustomMarkLocToNav), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentToProjCustomMarkLocToNav_MetaData), NewProp_ExtentToProjCustomMarkLocToNav_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_MaxDifferenceBetweenPlayerAndFirstPoint = { "MaxDifferenceBetweenPlayerAndFirstPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, MaxDifferenceBetweenPlayerAndFirstPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDifferenceBetweenPlayerAndFirstPoint_MetaData), NewProp_MaxDifferenceBetweenPlayerAndFirstPoint_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyUpdateFirstPointIfPathWasLost_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bOnlyUpdateFirstPointIfPathWasLost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyUpdateFirstPointIfPathWasLost = { "bOnlyUpdateFirstPointIfPathWasLost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyUpdateFirstPointIfPathWasLost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyUpdateFirstPointIfPathWasLost_MetaData), NewProp_bOnlyUpdateFirstPointIfPathWasLost_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bStartToEndIfNoPath_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bStartToEndIfNoPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bStartToEndIfNoPath = { "bStartToEndIfNoPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bStartToEndIfNoPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartToEndIfNoPath_MetaData), NewProp_bStartToEndIfNoPath_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bSortMarkers_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bSortMarkers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bSortMarkers = { "bSortMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bSortMarkers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortMarkers_MetaData), NewProp_bSortMarkers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_MaxDistanceToVisibleMarker = { "MaxDistanceToVisibleMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, MaxDistanceToVisibleMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceToVisibleMarker_MetaData), NewProp_MaxDistanceToVisibleMarker_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_MarkersSortingRate = { "MarkersSortingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, MarkersSortingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkersSortingRate_MetaData), NewProp_MarkersSortingRate_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_OnAddVisibleMarker = { "OnAddVisibleMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, OnAddVisibleMarker), Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddVisibleMarker_MetaData), NewProp_OnAddVisibleMarker_MetaData) }; // 436730512
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_OnHideVisibleMarker = { "OnHideVisibleMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, OnHideVisibleMarker), Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHideVisibleMarker_MetaData), NewProp_OnHideVisibleMarker_MetaData) }; // 2296691728
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_OnAddMarker = { "OnAddMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, OnAddMarker), Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddMarker_MetaData), NewProp_OnAddMarker_MetaData) }; // 3074608904
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_OnUpdateFindPath = { "OnUpdateFindPath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, OnUpdateFindPath), Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdateFindPath_MetaData), NewProp_OnUpdateFindPath_MetaData) }; // 709151075
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_MapHelperConfig = { "MapHelperConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapHelper, MapHelperConfig), Z_Construct_UScriptStruct_FMapHelperConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapHelperConfig_MetaData), NewProp_MapHelperConfig_MetaData) }; // 3548326184
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bCaptureMapOnBeginPlay_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bCaptureMapOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bCaptureMapOnBeginPlay = { "bCaptureMapOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bCaptureMapOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureMapOnBeginPlay_MetaData), NewProp_bCaptureMapOnBeginPlay_MetaData) };
void Z_Construct_UClass_AMapHelper_Statics::NewProp_bDestroyCaptureComponent_SetBit(void* Obj)
{
	((AMapHelper*)Obj)->bDestroyCaptureComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapHelper_Statics::NewProp_bDestroyCaptureComponent = { "bDestroyCaptureComponent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapHelper), &Z_Construct_UClass_AMapHelper_Statics::NewProp_bDestroyCaptureComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyCaptureComponent_MetaData), NewProp_bDestroyCaptureComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_DefaultSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_MapCaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_CaptureAreaVisualizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bLockBigMapTextureChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bUseControllerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_PlayerYawRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnableCustomMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_CustomMarkerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_LineTraceCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_LineTraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_ExtentToProjectToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bEnablePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bSimplePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathAsync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bFindPathEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectPlayerLocationToNavigiation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_ExtentToProjPlayerLocToNav,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bProjectCustomMarkerLocationToNavigiation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_ExtentToProjCustomMarkLocToNav,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_MaxDifferenceBetweenPlayerAndFirstPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bOnlyUpdateFirstPointIfPathWasLost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bStartToEndIfNoPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bSortMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_MaxDistanceToVisibleMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_MarkersSortingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_OnAddVisibleMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_OnHideVisibleMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_OnAddMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_OnUpdateFindPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_MapHelperConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bCaptureMapOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapHelper_Statics::NewProp_bDestroyCaptureComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapHelper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapHelper_Statics::ClassParams = {
	&AMapHelper::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapHelper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapHelper_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapHelper()
{
	if (!Z_Registration_Info_UClass_AMapHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapHelper.OuterSingleton, Z_Construct_UClass_AMapHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapHelper.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<AMapHelper>()
{
	return AMapHelper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapHelper);
AMapHelper::~AMapHelper() {}
// End Class AMapHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapHelperConfig::StaticStruct, Z_Construct_UScriptStruct_FMapHelperConfig_Statics::NewStructOps, TEXT("MapHelperConfig"), &Z_Registration_Info_UScriptStruct_MapHelperConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapHelperConfig), 3548326184U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapHelper, AMapHelper::StaticClass, TEXT("AMapHelper"), &Z_Registration_Info_UClass_AMapHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapHelper), 1063255743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_1250341406(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapHelper_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
