// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/UI/MinimapWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimapWidget() {}

// Begin Cross Module References
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapHelper_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerWidget_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapPathDrawerWidget_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMinimapWidget();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMinimapWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Class UMinimapWidget Function AddMarker
struct Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics
{
	struct MinimapWidget_eventAddMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinimapWidget_eventAddMarker_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinimapWidget, nullptr, "AddMarker", nullptr, nullptr, Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::MinimapWidget_eventAddMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::MinimapWidget_eventAddMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinimapWidget_AddMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinimapWidget_AddMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinimapWidget::execAddMarker)
{
	P_GET_OBJECT(UMapMarkerComponent,Z_Param_MarkerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMarker(Z_Param_MarkerComponent);
	P_NATIVE_END;
}
// End Class UMinimapWidget Function AddMarker

// Begin Class UMinimapWidget Function GetMapHelper
struct Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics
{
	struct MinimapWidget_eventGetMapHelper_Parms
	{
		AMapHelper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Returns a reference to the MapHelper */" },
#endif
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a reference to the MapHelper" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinimapWidget_eventGetMapHelper_Parms, ReturnValue), Z_Construct_UClass_AMapHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinimapWidget, nullptr, "GetMapHelper", nullptr, nullptr, Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::MinimapWidget_eventGetMapHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::MinimapWidget_eventGetMapHelper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinimapWidget_GetMapHelper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinimapWidget_GetMapHelper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinimapWidget::execGetMapHelper)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMapHelper**)Z_Param__Result=P_THIS->GetMapHelper();
	P_NATIVE_END;
}
// End Class UMinimapWidget Function GetMapHelper

// Begin Class UMinimapWidget Function RemoveMarker
struct Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics
{
	struct MinimapWidget_eventRemoveMarker_Parms
	{
		int32 id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinimapWidget_eventRemoveMarker_Parms, id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::NewProp_id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinimapWidget, nullptr, "RemoveMarker", nullptr, nullptr, Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::MinimapWidget_eventRemoveMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::MinimapWidget_eventRemoveMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinimapWidget_RemoveMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinimapWidget_RemoveMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinimapWidget::execRemoveMarker)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMarker(Z_Param_id);
	P_NATIVE_END;
}
// End Class UMinimapWidget Function RemoveMarker

// Begin Class UMinimapWidget Function UpdateFindPathToMarker
struct Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics
{
	struct MinimapWidget_eventUpdateFindPathToMarker_Parms
	{
		UMapMarkerWidget* MarkerWidget;
		bool bStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerWidget;
	static void NewProp_bStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::NewProp_MarkerWidget = { "MarkerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinimapWidget_eventUpdateFindPathToMarker_Parms, MarkerWidget), Z_Construct_UClass_UMapMarkerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerWidget_MetaData), NewProp_MarkerWidget_MetaData) };
void Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::NewProp_bStart_SetBit(void* Obj)
{
	((MinimapWidget_eventUpdateFindPathToMarker_Parms*)Obj)->bStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MinimapWidget_eventUpdateFindPathToMarker_Parms), &Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::NewProp_MarkerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::NewProp_bStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinimapWidget, nullptr, "UpdateFindPathToMarker", nullptr, nullptr, Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::MinimapWidget_eventUpdateFindPathToMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::MinimapWidget_eventUpdateFindPathToMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinimapWidget::execUpdateFindPathToMarker)
{
	P_GET_OBJECT(UMapMarkerWidget,Z_Param_MarkerWidget);
	P_GET_UBOOL(Z_Param_bStart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFindPathToMarker(Z_Param_MarkerWidget,Z_Param_bStart);
	P_NATIVE_END;
}
// End Class UMinimapWidget Function UpdateFindPathToMarker

// Begin Class UMinimapWidget Function UpdateMinimap
struct Z_Construct_UFunction_UMinimapWidget_UpdateMinimap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MinimapSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**This function updates player icon rotation, markers positions and path. By default, that's called every tick in NativeContruct */" },
#endif
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function updates player icon rotation, markers positions and path. By default, that's called every tick in NativeContruct" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinimapWidget_UpdateMinimap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinimapWidget, nullptr, "UpdateMinimap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinimapWidget_UpdateMinimap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinimapWidget_UpdateMinimap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMinimapWidget_UpdateMinimap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinimapWidget_UpdateMinimap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinimapWidget::execUpdateMinimap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMinimap();
	P_NATIVE_END;
}
// End Class UMinimapWidget Function UpdateMinimap

// Begin Class UMinimapWidget
void UMinimapWidget::StaticRegisterNativesUMinimapWidget()
{
	UClass* Class = UMinimapWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMarker", &UMinimapWidget::execAddMarker },
		{ "GetMapHelper", &UMinimapWidget::execGetMapHelper },
		{ "RemoveMarker", &UMinimapWidget::execRemoveMarker },
		{ "UpdateFindPathToMarker", &UMinimapWidget::execUpdateFindPathToMarker },
		{ "UpdateMinimap", &UMinimapWidget::execUpdateMinimap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinimapWidget);
UClass* Z_Construct_UClass_UMinimapWidget_NoRegister()
{
	return UMinimapWidget::StaticClass();
}
struct Z_Construct_UClass_UMinimapWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MinimapWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPath_MetaData[] = {
		{ "Category", "MinimapSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, then the path can be drawn on the minimap */" },
#endif
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then the path can be drawn on the minimap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinimapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinimapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskedMarkerOverlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinimapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMask_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinimapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathDrawerWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MinimapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableMarkerRadiousOffset_MetaData[] = {
		{ "Category", "Markers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**When markers go out of view on the minimap, they stop updating. This variable will be added to the minimap radius in order to compare it with the distance to the marker */" },
#endif
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When markers go out of view on the minimap, they stop updating. This variable will be added to the minimap radius in order to compare it with the distance to the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopAtBorderOffset_MetaData[] = {
		{ "Category", "Markers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Markers may not leave the minimap even if they are far away, then they remain on the border. With this variable you can adjust this border */" },
#endif
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Markers may not leave the minimap even if they are far away, then they remain on the border. With this variable you can adjust this border" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopDrawPathOffset_MetaData[] = {
		{ "Category", "MinimapSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If the next pathpoint is outside the minimap, then it isn't drawn */" },
#endif
		{ "ModuleRelativePath", "Public/UI/MinimapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the next pathpoint is outside the minimap, then it isn't drawn" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDrawPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskedMarkerOverlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapMask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathDrawerWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisableMarkerRadiousOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopAtBorderOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopDrawPathOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinimapWidget_AddMarker, "AddMarker" }, // 1781037639
		{ &Z_Construct_UFunction_UMinimapWidget_GetMapHelper, "GetMapHelper" }, // 2890398725
		{ &Z_Construct_UFunction_UMinimapWidget_RemoveMarker, "RemoveMarker" }, // 313118961
		{ &Z_Construct_UFunction_UMinimapWidget_UpdateFindPathToMarker, "UpdateFindPathToMarker" }, // 3830715908
		{ &Z_Construct_UFunction_UMinimapWidget_UpdateMinimap, "UpdateMinimap" }, // 2109276705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinimapWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMinimapWidget_Statics::NewProp_bDrawPath_SetBit(void* Obj)
{
	((UMinimapWidget*)Obj)->bDrawPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_bDrawPath = { "bDrawPath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMinimapWidget), &Z_Construct_UClass_UMinimapWidget_Statics::NewProp_bDrawPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPath_MetaData), NewProp_bDrawPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MinimapImage = { "MinimapImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, MinimapImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapImage_MetaData), NewProp_MinimapImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MarkerOverlay = { "MarkerOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, MarkerOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerOverlay_MetaData), NewProp_MarkerOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MaskedMarkerOverlay = { "MaskedMarkerOverlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, MaskedMarkerOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskedMarkerOverlay_MetaData), NewProp_MaskedMarkerOverlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MinimapMask = { "MinimapMask", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, MinimapMask), Z_Construct_UClass_URetainerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMask_MetaData), NewProp_MinimapMask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_PathDrawerWidget = { "PathDrawerWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, PathDrawerWidget), Z_Construct_UClass_UMapPathDrawerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathDrawerWidget_MetaData), NewProp_PathDrawerWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_DisableMarkerRadiousOffset = { "DisableMarkerRadiousOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, DisableMarkerRadiousOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableMarkerRadiousOffset_MetaData), NewProp_DisableMarkerRadiousOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_StopAtBorderOffset = { "StopAtBorderOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, StopAtBorderOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopAtBorderOffset_MetaData), NewProp_StopAtBorderOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMinimapWidget_Statics::NewProp_StopDrawPathOffset = { "StopDrawPathOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinimapWidget, StopDrawPathOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopDrawPathOffset_MetaData), NewProp_StopDrawPathOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinimapWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_bDrawPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MinimapImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MarkerOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MaskedMarkerOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_MinimapMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_PathDrawerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_DisableMarkerRadiousOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_StopAtBorderOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimapWidget_Statics::NewProp_StopDrawPathOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinimapWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinimapWidget_Statics::ClassParams = {
	&UMinimapWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMinimapWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinimapWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinimapWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinimapWidget()
{
	if (!Z_Registration_Info_UClass_UMinimapWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinimapWidget.OuterSingleton, Z_Construct_UClass_UMinimapWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinimapWidget.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UMinimapWidget>()
{
	return UMinimapWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimapWidget);
UMinimapWidget::~UMinimapWidget() {}
// End Class UMinimapWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinimapWidget, UMinimapWidget::StaticClass, TEXT("UMinimapWidget"), &Z_Registration_Info_UClass_UMinimapWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinimapWidget), 3706681355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_3772880165(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_MinimapWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
