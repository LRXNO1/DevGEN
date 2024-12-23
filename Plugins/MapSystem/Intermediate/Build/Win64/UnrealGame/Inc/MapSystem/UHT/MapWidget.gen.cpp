// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/UI/MapWidget.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapHelper_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapPathDrawerWidget_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapWidget();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapWidget_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Class UMapWidget Function AddMarker
struct Z_Construct_UFunction_UMapWidget_AddMarker_Statics
{
	struct MapWidget_eventAddMarker_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapWidget_AddMarker_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventAddMarker_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_AddMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_AddMarker_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_AddMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_AddMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "AddMarker", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_AddMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_AddMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_AddMarker_Statics::MapWidget_eventAddMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_AddMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_AddMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_AddMarker_Statics::MapWidget_eventAddMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_AddMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_AddMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execAddMarker)
{
	P_GET_OBJECT(UMapMarkerComponent,Z_Param_MarkerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMarker(Z_Param_MarkerComponent);
	P_NATIVE_END;
}
// End Class UMapWidget Function AddMarker

// Begin Class UMapWidget Function ClearMap
struct Z_Construct_UFunction_UMapWidget_ClearMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**Remove markers and path */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Remove markers and path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_ClearMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "ClearMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ClearMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_ClearMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapWidget_ClearMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_ClearMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execClearMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMap();
	P_NATIVE_END;
}
// End Class UMapWidget Function ClearMap

// Begin Class UMapWidget Function ConvertMapHelperToMapWidgetPosition
struct Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics
{
	struct MapWidget_eventConvertMapHelperToMapWidgetPosition_Parms
	{
		FVector2D MapHelperPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**Converts the map helper position to the map widget position */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Converts the map helper position to the map widget position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapHelperPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::NewProp_MapHelperPosition = { "MapHelperPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventConvertMapHelperToMapWidgetPosition_Parms, MapHelperPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventConvertMapHelperToMapWidgetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::NewProp_MapHelperPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "ConvertMapHelperToMapWidgetPosition", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::MapWidget_eventConvertMapHelperToMapWidgetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::MapWidget_eventConvertMapHelperToMapWidgetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execConvertMapHelperToMapWidgetPosition)
{
	P_GET_STRUCT(FVector2D,Z_Param_MapHelperPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->ConvertMapHelperToMapWidgetPosition(Z_Param_MapHelperPosition);
	P_NATIVE_END;
}
// End Class UMapWidget Function ConvertMapHelperToMapWidgetPosition

// Begin Class UMapWidget Function ConvertMapWidgetToMapHelperPosition
struct Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics
{
	struct MapWidget_eventConvertMapWidgetToMapHelperPosition_Parms
	{
		FVector2D MapWidgetPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**Converts the map widget position to the map helper position */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Converts the map widget position to the map helper position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapWidgetPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::NewProp_MapWidgetPosition = { "MapWidgetPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventConvertMapWidgetToMapHelperPosition_Parms, MapWidgetPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventConvertMapWidgetToMapHelperPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::NewProp_MapWidgetPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "ConvertMapWidgetToMapHelperPosition", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::MapWidget_eventConvertMapWidgetToMapHelperPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::MapWidget_eventConvertMapWidgetToMapHelperPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execConvertMapWidgetToMapHelperPosition)
{
	P_GET_STRUCT(FVector2D,Z_Param_MapWidgetPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->ConvertMapWidgetToMapHelperPosition(Z_Param_MapWidgetPosition);
	P_NATIVE_END;
}
// End Class UMapWidget Function ConvertMapWidgetToMapHelperPosition

// Begin Class UMapWidget Function CreateCustomMarker
struct Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics
{
	struct MapWidget_eventCreateCustomMarker_Parms
	{
		FVector2D MarkerPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Markers" },
		{ "Comment", "/**Adds a custom marker to the map. It takes a position and places a marker there, adjusting the position to be relative to the map's current layout and scale */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Adds a custom marker to the map. It takes a position and places a marker there, adjusting the position to be relative to the map's current layout and scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::NewProp_MarkerPosition = { "MarkerPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventCreateCustomMarker_Parms, MarkerPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerPosition_MetaData), NewProp_MarkerPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::NewProp_MarkerPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "CreateCustomMarker", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::MapWidget_eventCreateCustomMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::MapWidget_eventCreateCustomMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_CreateCustomMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_CreateCustomMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execCreateCustomMarker)
{
	P_GET_STRUCT(FVector2D,Z_Param_MarkerPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCustomMarker(Z_Param_MarkerPosition);
	P_NATIVE_END;
}
// End Class UMapWidget Function CreateCustomMarker

// Begin Class UMapWidget Function GetMapHelper
struct Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics
{
	struct MapWidget_eventGetMapHelper_Parms
	{
		AMapHelper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "Comment", "/**Returns a reference to the MapHelper */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Returns a reference to the MapHelper" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventGetMapHelper_Parms, ReturnValue), Z_Construct_UClass_AMapHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "GetMapHelper", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::MapWidget_eventGetMapHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::MapWidget_eventGetMapHelper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_GetMapHelper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_GetMapHelper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execGetMapHelper)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMapHelper**)Z_Param__Result=P_THIS->GetMapHelper();
	P_NATIVE_END;
}
// End Class UMapWidget Function GetMapHelper

// Begin Class UMapWidget Function MoveMap
struct Z_Construct_UFunction_UMapWidget_MoveMap_Statics
{
	struct MapWidget_eventMoveMap_Parms
	{
		FGeometry InGeometry;
		FVector2D MoveVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapMovement" },
		{ "Comment", "/**Adjusts the position of a map image within its canvas panel slot. It shifts the map based on a specified movement vector, scaled by a predefined rate */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Adjusts the position of a map image within its canvas panel slot. It shifts the map based on a specified movement vector, scaled by a predefined rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_MoveMap_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventMoveMap_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGeometry_MetaData), NewProp_InGeometry_MetaData) }; // 3532897347
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_MoveMap_Statics::NewProp_MoveVector = { "MoveVector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventMoveMap_Parms, MoveVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveVector_MetaData), NewProp_MoveVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_MoveMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_MoveMap_Statics::NewProp_InGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_MoveMap_Statics::NewProp_MoveVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_MoveMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_MoveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "MoveMap", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_MoveMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_MoveMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_MoveMap_Statics::MapWidget_eventMoveMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_MoveMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_MoveMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_MoveMap_Statics::MapWidget_eventMoveMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_MoveMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_MoveMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execMoveMap)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_InGeometry);
	P_GET_STRUCT(FVector2D,Z_Param_MoveVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveMap(Z_Param_Out_InGeometry,Z_Param_MoveVector);
	P_NATIVE_END;
}
// End Class UMapWidget Function MoveMap

// Begin Class UMapWidget Function OnFindPathPoints
struct Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics
{
	struct MapWidget_eventOnFindPathPoints_Parms
	{
		bool bIsFindingPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFindingPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFindingPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::NewProp_bIsFindingPath_SetBit(void* Obj)
{
	((MapWidget_eventOnFindPathPoints_Parms*)Obj)->bIsFindingPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::NewProp_bIsFindingPath = { "bIsFindingPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapWidget_eventOnFindPathPoints_Parms), &Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::NewProp_bIsFindingPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::NewProp_bIsFindingPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "OnFindPathPoints", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::MapWidget_eventOnFindPathPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::MapWidget_eventOnFindPathPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_OnFindPathPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_OnFindPathPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execOnFindPathPoints)
{
	P_GET_UBOOL(Z_Param_bIsFindingPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFindPathPoints(Z_Param_bIsFindingPath);
	P_NATIVE_END;
}
// End Class UMapWidget Function OnFindPathPoints

// Begin Class UMapWidget Function UpdateMap
struct Z_Construct_UFunction_UMapWidget_UpdateMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**Completely updates the position of all objects on the map. Removes all markers, updates the player's position, creates all markers and finds a path */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Completely updates the position of all objects on the map. Removes all markers, updates the player's position, creates all markers and finds a path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_UpdateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "UpdateMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_UpdateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_UpdateMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapWidget_UpdateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_UpdateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execUpdateMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMap();
	P_NATIVE_END;
}
// End Class UMapWidget Function UpdateMap

// Begin Class UMapWidget Function UpdateMarkers
struct Z_Construct_UFunction_UMapWidget_UpdateMarkers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_UpdateMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "UpdateMarkers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_UpdateMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_UpdateMarkers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapWidget_UpdateMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_UpdateMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execUpdateMarkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMarkers();
	P_NATIVE_END;
}
// End Class UMapWidget Function UpdateMarkers

// Begin Class UMapWidget Function ZoomMap
struct Z_Construct_UFunction_UMapWidget_ZoomMap_Statics
{
	struct MapWidget_eventZoomMap_Parms
	{
		FGeometry InGeometry;
		float ZoomVector;
		bool bInterpolate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MapMovement" },
		{ "Comment", "/**Adjusts the size of a map image within a user interface, based on a given zoom factor.*/" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Adjusts the size of a map image within a user interface, based on a given zoom factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGeometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomVector;
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventZoomMap_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGeometry_MetaData), NewProp_InGeometry_MetaData) }; // 3532897347
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_ZoomVector = { "ZoomVector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapWidget_eventZoomMap_Parms, ZoomVector), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomVector_MetaData), NewProp_ZoomVector_MetaData) };
void Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((MapWidget_eventZoomMap_Parms*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapWidget_eventZoomMap_Parms), &Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_InGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_ZoomVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::NewProp_bInterpolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapWidget, nullptr, "ZoomMap", nullptr, nullptr, Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::MapWidget_eventZoomMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::MapWidget_eventZoomMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapWidget_ZoomMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapWidget_ZoomMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapWidget::execZoomMap)
{
	P_GET_STRUCT_REF(FGeometry,Z_Param_Out_InGeometry);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomVector);
	P_GET_UBOOL(Z_Param_bInterpolate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ZoomMap(Z_Param_Out_InGeometry,Z_Param_ZoomVector,Z_Param_bInterpolate);
	P_NATIVE_END;
}
// End Class UMapWidget Function ZoomMap

// Begin Class UMapWidget
void UMapWidget::StaticRegisterNativesUMapWidget()
{
	UClass* Class = UMapWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMarker", &UMapWidget::execAddMarker },
		{ "ClearMap", &UMapWidget::execClearMap },
		{ "ConvertMapHelperToMapWidgetPosition", &UMapWidget::execConvertMapHelperToMapWidgetPosition },
		{ "ConvertMapWidgetToMapHelperPosition", &UMapWidget::execConvertMapWidgetToMapHelperPosition },
		{ "CreateCustomMarker", &UMapWidget::execCreateCustomMarker },
		{ "GetMapHelper", &UMapWidget::execGetMapHelper },
		{ "MoveMap", &UMapWidget::execMoveMap },
		{ "OnFindPathPoints", &UMapWidget::execOnFindPathPoints },
		{ "UpdateMap", &UMapWidget::execUpdateMap },
		{ "UpdateMarkers", &UMapWidget::execUpdateMarkers },
		{ "ZoomMap", &UMapWidget::execZoomMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapWidget);
UClass* Z_Construct_UClass_UMapWidget_NoRegister()
{
	return UMapWidget::StaticClass();
}
struct Z_Construct_UClass_UMapWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MapWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPath_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**If true, then the path can be drawn on the map */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "If true, then the path can be drawn on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkersCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathDrawerWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMapEveryFrame_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**If true, marker positions and a path will be updated every frame */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "If true, marker positions and a path will be updated every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRate_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**This variable is responsible for the speed at which the map moves when the left mouse button is pressed */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "This variable is responsible for the speed at which the map moves when the left mouse button is pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomStep_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**This is the map zoom step */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "This is the map zoom step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**This variable is used when interpolating the map size when zooming. The smaller the value, the smoother the zoom */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "This variable is used when interpolating the map size when zooming. The smaller the value, the smoother the zoom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**The maximum map size. Zooming changes the size of the map */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "The maximum map size. Zooming changes the size of the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSize_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**The minimum map size. Zooming changes the size of the map */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "The minimum map size. Zooming changes the size of the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSizeMultiplier_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/**Multiply the size of the marker by this value */" },
		{ "ModuleRelativePath", "Public/UI/MapWidget.h" },
		{ "ToolTip", "Multiply the size of the marker by this value" },
	};
#endif // WITH_METADATA
	static void NewProp_bDrawPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkersCanvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapCanvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathDrawerWidget;
	static void NewProp_bUpdateMapEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMapEveryFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerSizeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapWidget_AddMarker, "AddMarker" }, // 917081533
		{ &Z_Construct_UFunction_UMapWidget_ClearMap, "ClearMap" }, // 216989276
		{ &Z_Construct_UFunction_UMapWidget_ConvertMapHelperToMapWidgetPosition, "ConvertMapHelperToMapWidgetPosition" }, // 1973990551
		{ &Z_Construct_UFunction_UMapWidget_ConvertMapWidgetToMapHelperPosition, "ConvertMapWidgetToMapHelperPosition" }, // 3295792770
		{ &Z_Construct_UFunction_UMapWidget_CreateCustomMarker, "CreateCustomMarker" }, // 12367130
		{ &Z_Construct_UFunction_UMapWidget_GetMapHelper, "GetMapHelper" }, // 3304047474
		{ &Z_Construct_UFunction_UMapWidget_MoveMap, "MoveMap" }, // 2662831924
		{ &Z_Construct_UFunction_UMapWidget_OnFindPathPoints, "OnFindPathPoints" }, // 784076338
		{ &Z_Construct_UFunction_UMapWidget_UpdateMap, "UpdateMap" }, // 1382581125
		{ &Z_Construct_UFunction_UMapWidget_UpdateMarkers, "UpdateMarkers" }, // 1484128610
		{ &Z_Construct_UFunction_UMapWidget_ZoomMap, "ZoomMap" }, // 953569754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMapWidget_Statics::NewProp_bDrawPath_SetBit(void* Obj)
{
	((UMapWidget*)Obj)->bDrawPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_bDrawPath = { "bDrawPath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapWidget), &Z_Construct_UClass_UMapWidget_Statics::NewProp_bDrawPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPath_MetaData), NewProp_bDrawPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MarkersCanvas = { "MarkersCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MarkersCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkersCanvas_MetaData), NewProp_MarkersCanvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MapCanvas = { "MapCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MapCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapCanvas_MetaData), NewProp_MapCanvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MapImage = { "MapImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MapImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapImage_MetaData), NewProp_MapImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_PathDrawerWidget = { "PathDrawerWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, PathDrawerWidget), Z_Construct_UClass_UMapPathDrawerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathDrawerWidget_MetaData), NewProp_PathDrawerWidget_MetaData) };
void Z_Construct_UClass_UMapWidget_Statics::NewProp_bUpdateMapEveryFrame_SetBit(void* Obj)
{
	((UMapWidget*)Obj)->bUpdateMapEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_bUpdateMapEveryFrame = { "bUpdateMapEveryFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapWidget), &Z_Construct_UClass_UMapWidget_Statics::NewProp_bUpdateMapEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateMapEveryFrame_MetaData), NewProp_bUpdateMapEveryFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MoveRate = { "MoveRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MoveRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRate_MetaData), NewProp_MoveRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_ZoomStep = { "ZoomStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, ZoomStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomStep_MetaData), NewProp_ZoomStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSize_MetaData), NewProp_MaxSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MinSize = { "MinSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MinSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSize_MetaData), NewProp_MinSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapWidget_Statics::NewProp_MarkerSizeMultiplier = { "MarkerSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapWidget, MarkerSizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSizeMultiplier_MetaData), NewProp_MarkerSizeMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_bDrawPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MarkersCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MapCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MapImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_PathDrawerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_bUpdateMapEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MoveRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_ZoomStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MinSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapWidget_Statics::NewProp_MarkerSizeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapWidget_Statics::ClassParams = {
	&UMapWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapWidget()
{
	if (!Z_Registration_Info_UClass_UMapWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapWidget.OuterSingleton, Z_Construct_UClass_UMapWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapWidget.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UMapWidget>()
{
	return UMapWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapWidget);
UMapWidget::~UMapWidget() {}
// End Class UMapWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapWidget, UMapWidget::StaticClass, TEXT("UMapWidget"), &Z_Registration_Info_UClass_UMapWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapWidget), 949338738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_3662765637(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
