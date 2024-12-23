// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/UI/ScreenMarkerDrawerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenMarkerDrawerWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UScreenMarkerDrawerWidget();
MAPSYSTEM_API UClass* Z_Construct_UClass_UScreenMarkerDrawerWidget_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UScreenMarkerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Class UScreenMarkerDrawerWidget Function AddMarkerToScreen
struct Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics
{
	struct ScreenMarkerDrawerWidget_eventAddMarkerToScreen_Parms
	{
		UMapMarkerComponent* MarkerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenMarkerDrawerWidget_eventAddMarkerToScreen_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenMarkerDrawerWidget, nullptr, "AddMarkerToScreen", nullptr, nullptr, Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::ScreenMarkerDrawerWidget_eventAddMarkerToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::ScreenMarkerDrawerWidget_eventAddMarkerToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenMarkerDrawerWidget::execAddMarkerToScreen)
{
	P_GET_OBJECT(UMapMarkerComponent,Z_Param_MarkerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMarkerToScreen(Z_Param_MarkerComponent);
	P_NATIVE_END;
}
// End Class UScreenMarkerDrawerWidget Function AddMarkerToScreen

// Begin Class UScreenMarkerDrawerWidget Function ConvertWorldLocationToScreenLocation
struct Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics
{
	struct ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms
	{
		FVector InLocation;
		float EdgePercent;
		bool bStopCalcIfOff;
		FVector2D ViewportCenterLoc;
		FVector2D OutScreenPosition;
		float OutRotationAngleDegrees;
		bool bIsOnScreen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Converts a world location to screen position for HUD drawing.\n\x09*\n\x09* @param InLocation - The world space location to be converted to screen space\n\x09* @param EdgePercent - How close to the edge of the screen, 1.0 = at edge, 0.0 = at center of screen. .9 or .95 is usually desirable\n\x09* @param bStopCalcIfOff - True - stop calculation if off screen\n\x09* @param ViewportCenterLoc - for offsetting center of the screen, leave at (0.5, 0.5) for no offset\n\x09* @outparam OutScreenPosition - the screen coordinates for HUD drawing\n\x09* @outparam OutRotationAngleDegrees - The angle to rotate a HUD element if you want it pointing toward the off screen indicator, 0\xc2\xb0 if on screen\n\x09* @outparam bIsOnScreen - True if the specified location is in the camera view (may be obstructed)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a world location to screen position for HUD drawing.\n\n@param InLocation - The world space location to be converted to screen space\n@param EdgePercent - How close to the edge of the screen, 1.0 = at edge, 0.0 = at center of screen. .9 or .95 is usually desirable\n@param bStopCalcIfOff - True - stop calculation if off screen\n@param ViewportCenterLoc - for offsetting center of the screen, leave at (0.5, 0.5) for no offset\n@outparam OutScreenPosition - the screen coordinates for HUD drawing\n@outparam OutRotationAngleDegrees - The angle to rotate a HUD element if you want it pointing toward the off screen indicator, 0\xc2\xb0 if on screen\n@outparam bIsOnScreen - True if the specified location is in the camera view (may be obstructed)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgePercent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopCalcIfOff_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportCenterLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgePercent;
	static void NewProp_bStopCalcIfOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopCalcIfOff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportCenterLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRotationAngleDegrees;
	static void NewProp_bIsOnScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnScreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLocation_MetaData), NewProp_InLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_EdgePercent = { "EdgePercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms, EdgePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgePercent_MetaData), NewProp_EdgePercent_MetaData) };
void Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bStopCalcIfOff_SetBit(void* Obj)
{
	((ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms*)Obj)->bStopCalcIfOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bStopCalcIfOff = { "bStopCalcIfOff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms), &Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bStopCalcIfOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopCalcIfOff_MetaData), NewProp_bStopCalcIfOff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_ViewportCenterLoc = { "ViewportCenterLoc", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms, ViewportCenterLoc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportCenterLoc_MetaData), NewProp_ViewportCenterLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_OutScreenPosition = { "OutScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms, OutScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_OutRotationAngleDegrees = { "OutRotationAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms, OutRotationAngleDegrees), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bIsOnScreen_SetBit(void* Obj)
{
	((ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms*)Obj)->bIsOnScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bIsOnScreen = { "bIsOnScreen", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms), &Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bIsOnScreen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_EdgePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bStopCalcIfOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_ViewportCenterLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_OutScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_OutRotationAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::NewProp_bIsOnScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenMarkerDrawerWidget, nullptr, "ConvertWorldLocationToScreenLocation", nullptr, nullptr, Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::ScreenMarkerDrawerWidget_eventConvertWorldLocationToScreenLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenMarkerDrawerWidget::execConvertWorldLocationToScreenLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EdgePercent);
	P_GET_UBOOL(Z_Param_bStopCalcIfOff);
	P_GET_STRUCT(FVector2D,Z_Param_ViewportCenterLoc);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutScreenPosition);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRotationAngleDegrees);
	P_GET_UBOOL_REF(Z_Param_Out_bIsOnScreen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertWorldLocationToScreenLocation(Z_Param_Out_InLocation,Z_Param_EdgePercent,Z_Param_bStopCalcIfOff,Z_Param_ViewportCenterLoc,Z_Param_Out_OutScreenPosition,Z_Param_Out_OutRotationAngleDegrees,Z_Param_Out_bIsOnScreen);
	P_NATIVE_END;
}
// End Class UScreenMarkerDrawerWidget Function ConvertWorldLocationToScreenLocation

// Begin Class UScreenMarkerDrawerWidget
void UScreenMarkerDrawerWidget::StaticRegisterNativesUScreenMarkerDrawerWidget()
{
	UClass* Class = UScreenMarkerDrawerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMarkerToScreen", &UScreenMarkerDrawerWidget::execAddMarkerToScreen },
		{ "ConvertWorldLocationToScreenLocation", &UScreenMarkerDrawerWidget::execConvertWorldLocationToScreenLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenMarkerDrawerWidget);
UClass* Z_Construct_UClass_UScreenMarkerDrawerWidget_NoRegister()
{
	return UScreenMarkerDrawerWidget::StaticClass();
}
struct Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This widget is a container for screen markers. It needs to be expanded to full screen. \n */" },
#endif
		{ "IncludePath", "UI/ScreenMarkerDrawerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This widget is a container for screen markers. It needs to be expanded to full screen." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenMarkerDrawerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMarkerScale_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Multiply the size of the marker by this value */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiply the size of the marker by this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEdgePercent_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**How close will the marker be to the edge of the screen, 1.0 = at edge, 0.0 = at center of screen */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How close will the marker be to the edge of the screen, 1.0 = at edge, 0.0 = at center of screen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIndicateDirection_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, the arrow will indicate a direction to the marker */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the arrow will indicate a direction to the marker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**if true, the distance to the marker will always be shown */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if true, the distance to the marker will always be shown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDistanceIfPathfinding_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Show distance to the marker if a path is being found to it */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show distance to the marker if a path is being found to it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtScreenEdgeIfPathfinding_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, this marker will be on the screen when finding a path */" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this marker will be on the screen when finding a path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideByDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, screen markers will be hidden if distance from the player is more than HideDistance **/" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, screen markers will be hidden if distance from the player is more than HideDistance *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If a screen marker is further away from the player than this value then it'll be hidden **/" },
#endif
		{ "EditCondition", "bHideByDistance==true" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a screen marker is further away from the player than this value then it'll be hidden *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenMarkerWidgetClass_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If no class is specified for the marker, this will be used by default\n\x09* USE ONLY BLUEPRINT CLASSES\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerDrawerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If no class is specified for the marker, this will be used by default\nUSE ONLY BLUEPRINT CLASSES" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenMarkerScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerEdgePercent;
	static void NewProp_bIndicateDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndicateDirection;
	static void NewProp_bAlwaysShowDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowDistance;
	static void NewProp_bShowDistanceIfPathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDistanceIfPathfinding;
	static void NewProp_bStopAtScreenEdgeIfPathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtScreenEdgeIfPathfinding;
	static void NewProp_bHideByDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideByDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HideDistance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultScreenMarkerWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenMarkerDrawerWidget_AddMarkerToScreen, "AddMarkerToScreen" }, // 304417834
		{ &Z_Construct_UFunction_UScreenMarkerDrawerWidget_ConvertWorldLocationToScreenLocation, "ConvertWorldLocationToScreenLocation" }, // 1871476043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenMarkerDrawerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerDrawerWidget, Overlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlay_MetaData), NewProp_Overlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_ScreenMarkerScale = { "ScreenMarkerScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerDrawerWidget, ScreenMarkerScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMarkerScale_MetaData), NewProp_ScreenMarkerScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_MarkerEdgePercent = { "MarkerEdgePercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerDrawerWidget, MarkerEdgePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerEdgePercent_MetaData), NewProp_MarkerEdgePercent_MetaData) };
void Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bIndicateDirection_SetBit(void* Obj)
{
	((UScreenMarkerDrawerWidget*)Obj)->bIndicateDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bIndicateDirection = { "bIndicateDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerDrawerWidget), &Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bIndicateDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIndicateDirection_MetaData), NewProp_bIndicateDirection_MetaData) };
void Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bAlwaysShowDistance_SetBit(void* Obj)
{
	((UScreenMarkerDrawerWidget*)Obj)->bAlwaysShowDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bAlwaysShowDistance = { "bAlwaysShowDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerDrawerWidget), &Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bAlwaysShowDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowDistance_MetaData), NewProp_bAlwaysShowDistance_MetaData) };
void Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bShowDistanceIfPathfinding_SetBit(void* Obj)
{
	((UScreenMarkerDrawerWidget*)Obj)->bShowDistanceIfPathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bShowDistanceIfPathfinding = { "bShowDistanceIfPathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerDrawerWidget), &Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bShowDistanceIfPathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDistanceIfPathfinding_MetaData), NewProp_bShowDistanceIfPathfinding_MetaData) };
void Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bStopAtScreenEdgeIfPathfinding_SetBit(void* Obj)
{
	((UScreenMarkerDrawerWidget*)Obj)->bStopAtScreenEdgeIfPathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bStopAtScreenEdgeIfPathfinding = { "bStopAtScreenEdgeIfPathfinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerDrawerWidget), &Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bStopAtScreenEdgeIfPathfinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopAtScreenEdgeIfPathfinding_MetaData), NewProp_bStopAtScreenEdgeIfPathfinding_MetaData) };
void Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bHideByDistance_SetBit(void* Obj)
{
	((UScreenMarkerDrawerWidget*)Obj)->bHideByDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bHideByDistance = { "bHideByDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerDrawerWidget), &Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bHideByDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideByDistance_MetaData), NewProp_bHideByDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_HideDistance = { "HideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerDrawerWidget, HideDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideDistance_MetaData), NewProp_HideDistance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_DefaultScreenMarkerWidgetClass = { "DefaultScreenMarkerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerDrawerWidget, DefaultScreenMarkerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UScreenMarkerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScreenMarkerWidgetClass_MetaData), NewProp_DefaultScreenMarkerWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_Overlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_ScreenMarkerScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_MarkerEdgePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bIndicateDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bAlwaysShowDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bShowDistanceIfPathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bStopAtScreenEdgeIfPathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_bHideByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_HideDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::NewProp_DefaultScreenMarkerWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::ClassParams = {
	&UScreenMarkerDrawerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreenMarkerDrawerWidget()
{
	if (!Z_Registration_Info_UClass_UScreenMarkerDrawerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenMarkerDrawerWidget.OuterSingleton, Z_Construct_UClass_UScreenMarkerDrawerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenMarkerDrawerWidget.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UScreenMarkerDrawerWidget>()
{
	return UScreenMarkerDrawerWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenMarkerDrawerWidget);
UScreenMarkerDrawerWidget::~UScreenMarkerDrawerWidget() {}
// End Class UScreenMarkerDrawerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerDrawerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenMarkerDrawerWidget, UScreenMarkerDrawerWidget::StaticClass, TEXT("UScreenMarkerDrawerWidget"), &Z_Registration_Info_UClass_UScreenMarkerDrawerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenMarkerDrawerWidget), 4294676528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerDrawerWidget_h_204444919(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerDrawerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_New_folder_minimap_test_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerDrawerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
