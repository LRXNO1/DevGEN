// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/Core/MapMarkerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMarkerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapHelper_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerWidget_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UScreenMarkerWidget_NoRegister();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Delegate FOnRightMouseClick
struct Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnRightMouseClick__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRightMouseClick_DelegateWrapper(const FMulticastScriptDelegate& OnRightMouseClick)
{
	OnRightMouseClick.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRightMouseClick

// Begin Delegate FOnLeftMouseClick
struct Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnLeftMouseClick__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLeftMouseClick_DelegateWrapper(const FMulticastScriptDelegate& OnLeftMouseClick)
{
	OnLeftMouseClick.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnLeftMouseClick

// Begin Delegate FOnDoubleClick
struct Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnDoubleClick_Parms
	{
		bool bRightClick;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRightClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightClick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::NewProp_bRightClick_SetBit(void* Obj)
{
	((_Script_MapSystem_eventOnDoubleClick_Parms*)Obj)->bRightClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::NewProp_bRightClick = { "bRightClick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MapSystem_eventOnDoubleClick_Parms), &Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::NewProp_bRightClick_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::NewProp_bRightClick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnDoubleClick__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::_Script_MapSystem_eventOnDoubleClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::_Script_MapSystem_eventOnDoubleClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoubleClick_DelegateWrapper(const FMulticastScriptDelegate& OnDoubleClick, bool bRightClick)
{
	struct _Script_MapSystem_eventOnDoubleClick_Parms
	{
		bool bRightClick;
	};
	_Script_MapSystem_eventOnDoubleClick_Parms Parms;
	Parms.bRightClick=bRightClick ? true : false;
	OnDoubleClick.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDoubleClick

// Begin Delegate FOnFindPath
struct Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnFindPath_Parms
	{
		bool bStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::NewProp_bStart_SetBit(void* Obj)
{
	((_Script_MapSystem_eventOnFindPath_Parms*)Obj)->bStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MapSystem_eventOnFindPath_Parms), &Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::NewProp_bStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnFindPath__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::_Script_MapSystem_eventOnFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::_Script_MapSystem_eventOnFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindPath_DelegateWrapper(const FMulticastScriptDelegate& OnFindPath, bool bStart)
{
	struct _Script_MapSystem_eventOnFindPath_Parms
	{
		bool bStart;
	};
	_Script_MapSystem_eventOnFindPath_Parms Parms;
	Parms.bStart=bStart ? true : false;
	OnFindPath.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFindPath

// Begin Class UMapMarkerComponent Function CanBeProjectedToScreen
struct Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics
{
	struct MapMarkerComponent_eventCanBeProjectedToScreen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**Returns true if bStopAtBorder, bFindingPath or bAlwaysProjectToScreen is true */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Returns true if bStopAtBorder, bFindingPath or bAlwaysProjectToScreen is true" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapMarkerComponent_eventCanBeProjectedToScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMarkerComponent_eventCanBeProjectedToScreen_Parms), &Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "CanBeProjectedToScreen", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::MapMarkerComponent_eventCanBeProjectedToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::MapMarkerComponent_eventCanBeProjectedToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execCanBeProjectedToScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeProjectedToScreen();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function CanBeProjectedToScreen

// Begin Class UMapMarkerComponent Function GetMapHelper
struct Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics
{
	struct MapMarkerComponent_eventGetMapHelper_Parms
	{
		AMapHelper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "Comment", "/**Returns a reference to the MapHelper */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Returns a reference to the MapHelper" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarkerComponent_eventGetMapHelper_Parms, ReturnValue), Z_Construct_UClass_AMapHelper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "GetMapHelper", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::MapMarkerComponent_eventGetMapHelper_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::MapMarkerComponent_eventGetMapHelper_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execGetMapHelper)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMapHelper**)Z_Param__Result=P_THIS->GetMapHelper();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function GetMapHelper

// Begin Class UMapMarkerComponent Function IsFindingPath
struct Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics
{
	struct MapMarkerComponent_eventIsFindingPath_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Returns true while finding the path to this marker */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Returns true while finding the path to this marker" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapMarkerComponent_eventIsFindingPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMarkerComponent_eventIsFindingPath_Parms), &Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "IsFindingPath", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::MapMarkerComponent_eventIsFindingPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::MapMarkerComponent_eventIsFindingPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execIsFindingPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFindingPath();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function IsFindingPath

// Begin Class UMapMarkerComponent Function IsObjective
struct Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics
{
	struct MapMarkerComponent_eventIsObjective_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**Returns true if bStopAtBorder, bFindingPath or bAlwaysProjectToScreen is true */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Returns true if bStopAtBorder, bFindingPath or bAlwaysProjectToScreen is true" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapMarkerComponent_eventIsObjective_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMarkerComponent_eventIsObjective_Parms), &Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "IsObjective", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::MapMarkerComponent_eventIsObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::MapMarkerComponent_eventIsObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerComponent_IsObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_IsObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execIsObjective)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsObjective();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function IsObjective

// Begin Class UMapMarkerComponent Function IsStopAtBorder
struct Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics
{
	struct MapMarkerComponent_eventIsStopAtBorder_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**Returns true if this marker when out of the view of the minimap will be displayed on the edge */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Returns true if this marker when out of the view of the minimap will be displayed on the edge" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapMarkerComponent_eventIsStopAtBorder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMarkerComponent_eventIsStopAtBorder_Parms), &Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "IsStopAtBorder", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::MapMarkerComponent_eventIsStopAtBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::MapMarkerComponent_eventIsStopAtBorder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execIsStopAtBorder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStopAtBorder();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function IsStopAtBorder

// Begin Class UMapMarkerComponent Function ReRegisterMarker
struct Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "Comment", "/**Removes and adds this marker to the map helper again */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Removes and adds this marker to the map helper again" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "ReRegisterMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execReRegisterMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReRegisterMarker();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function ReRegisterMarker

// Begin Class UMapMarkerComponent Function StartFindingPath
struct Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Starts finding the path to this marker */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Starts finding the path to this marker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "StartFindingPath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execStartFindingPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFindingPath();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function StartFindingPath

// Begin Class UMapMarkerComponent Function StopFindingPath
struct Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathFinding" },
		{ "Comment", "/**Stops finding the path to this marker */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Stops finding the path to this marker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerComponent, nullptr, "StopFindingPath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerComponent::execStopFindingPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFindingPath();
	P_NATIVE_END;
}
// End Class UMapMarkerComponent Function StopFindingPath

// Begin Class UMapMarkerComponent
void UMapMarkerComponent::StaticRegisterNativesUMapMarkerComponent()
{
	UClass* Class = UMapMarkerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeProjectedToScreen", &UMapMarkerComponent::execCanBeProjectedToScreen },
		{ "GetMapHelper", &UMapMarkerComponent::execGetMapHelper },
		{ "IsFindingPath", &UMapMarkerComponent::execIsFindingPath },
		{ "IsObjective", &UMapMarkerComponent::execIsObjective },
		{ "IsStopAtBorder", &UMapMarkerComponent::execIsStopAtBorder },
		{ "ReRegisterMarker", &UMapMarkerComponent::execReRegisterMarker },
		{ "StartFindingPath", &UMapMarkerComponent::execStartFindingPath },
		{ "StopFindingPath", &UMapMarkerComponent::execStopFindingPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapMarkerComponent);
UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister()
{
	return UMapMarkerComponent::StaticClass();
}
struct Z_Construct_UClass_UMapMarkerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**If add this component to any actor then it'll be displayed on the map and minimap */" },
		{ "IncludePath", "Core/MapMarkerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If add this component to any actor then it'll be displayed on the map and minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtBorder_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true then this marker when out of the view of the minimap will be displayed on the edge */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true then this marker when out of the view of the minimap will be displayed on the edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeProjectedToScreen_MetaData[] = {
		{ "Category", "SceenMarker" },
		{ "Comment", "/**If true, the location of the marker can be projected to the screen */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true, the location of the marker can be projected to the screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerWidgetClass_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**\n\x09* The marker widget of this class will be added to map and minimap.\n\x09* USE ONLY BLUEPRINT CLASSES\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "The marker widget of this class will be added to map and minimap.\nUSE ONLY BLUEPRINT CLASSES" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenMarkerWidgetClass_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**\n\x09* The marker widget of this class will be projected to the screen, only if ScreenMapDrawer exists.\n\x09* USE ONLY BLUEPRINT CLASSES\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "The marker widget of this class will be projected to the screen, only if ScreenMapDrawer exists.\nUSE ONLY BLUEPRINT CLASSES" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerDescription_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true then it can be displayed */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true then it can be displayed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathable_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true then it'll be able to find the path to this marker */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true then it'll be able to find the path to this marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyMinimap_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true then this market will only be displayed on the minimap */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true then this market will only be displayed on the minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceHiddenMarker_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true then this marker will be in the HiddenMarkers array in the MapHelper. It won't be displayed on the minimap and in the screen drawer but will be on the big map */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true then this marker will be in the HiddenMarkers array in the MapHelper. It won't be displayed on the minimap and in the screen drawer but will be on the big map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateAsOwnerRotation_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true then the marker on the map will have the same rotation as it's owner. This may be necessary for NPCs or other players */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true then the marker on the map will have the same rotation as it's owner. This may be necessary for NPCs or other players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectToScreen_MetaData[] = {
		{ "Category", "SceenMarker" },
		{ "Comment", "/**If true, this marker will be projected to the screen but in the event that the hidden(ScreenMarkerDrawer) and visible(MapHelper) distance allow this **/" },
		{ "EditCondition", "bCanBeProjectToScreen==true" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true, this marker will be projected to the screen but in the event that the hidden(ScreenMarkerDrawer) and visible(MapHelper) distance allow this *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysProjectToScreen_MetaData[] = {
		{ "Category", "SceenMarker" },
		{ "Comment", "/**If true, this marker will always be projected to the screen, ignoring the hidden(ScreenMarkerDrawer) and visible(MapHelper) distance. */" },
		{ "EditCondition", "bCanBeProjectToScreen==true" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true, this marker will always be projected to the screen, ignoring the hidden(ScreenMarkerDrawer) and visible(MapHelper) distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtScreenEdge_MetaData[] = {
		{ "Category", "SceenMarker" },
		{ "Comment", "/**If true, this marker will always be on the screen */" },
		{ "EditCondition", "bCanBeProjectToScreen==true" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "If true, this marker will always be on the screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffsetZ_MetaData[] = {
		{ "Category", "SceenMarker" },
		{ "Comment", "/**This value will be added to the owner location of this component when projected to the screen. It may be useful in some cases */" },
		{ "EditCondition", "bCanBeProjectToScreen==true" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "This value will be added to the owner location of this component when projected to the screen. It may be useful in some cases" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRightMouseClick_MetaData[] = {
		{ "Comment", "/**Called when the right mouse button is pressed on the widget of this marker on the map */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Called when the right mouse button is pressed on the widget of this marker on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftMouseClick_MetaData[] = {
		{ "Comment", "/**Called when the left mouse button is pressed on the widget of this marker on the map */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Called when the left mouse button is pressed on the widget of this marker on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDoubleClick_MetaData[] = {
		{ "Comment", "/**Called when the mouse button is double-clicked on the widget of this marker on the map */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Called when the mouse button is double-clicked on the widget of this marker on the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFindPath_MetaData[] = {
		{ "Comment", "/**Called when starts or stops finding path to this marker */" },
		{ "ModuleRelativePath", "Public/Core/MapMarkerComponent.h" },
		{ "ToolTip", "Called when starts or stops finding path to this marker" },
	};
#endif // WITH_METADATA
	static void NewProp_bStopAtBorder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtBorder;
	static void NewProp_bCanBeProjectedToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeProjectedToScreen;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MarkerWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ScreenMarkerWidgetClass;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MarkerDescription;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bPathable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathable;
	static void NewProp_bOnlyMinimap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyMinimap;
	static void NewProp_bForceHiddenMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceHiddenMarker;
	static void NewProp_bRotateAsOwnerRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateAsOwnerRotation;
	static void NewProp_bProjectToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectToScreen;
	static void NewProp_bAlwaysProjectToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysProjectToScreen;
	static void NewProp_bStopAtScreenEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtScreenEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationOffsetZ;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightMouseClick;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftMouseClick;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoubleClick;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFindPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapMarkerComponent_CanBeProjectedToScreen, "CanBeProjectedToScreen" }, // 128023665
		{ &Z_Construct_UFunction_UMapMarkerComponent_GetMapHelper, "GetMapHelper" }, // 3414447835
		{ &Z_Construct_UFunction_UMapMarkerComponent_IsFindingPath, "IsFindingPath" }, // 3975477247
		{ &Z_Construct_UFunction_UMapMarkerComponent_IsObjective, "IsObjective" }, // 1479195364
		{ &Z_Construct_UFunction_UMapMarkerComponent_IsStopAtBorder, "IsStopAtBorder" }, // 2151457732
		{ &Z_Construct_UFunction_UMapMarkerComponent_ReRegisterMarker, "ReRegisterMarker" }, // 3031957068
		{ &Z_Construct_UFunction_UMapMarkerComponent_StartFindingPath, "StartFindingPath" }, // 1886603845
		{ &Z_Construct_UFunction_UMapMarkerComponent_StopFindingPath, "StopFindingPath" }, // 226723748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapMarkerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtBorder_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bStopAtBorder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtBorder = { "bStopAtBorder", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopAtBorder_MetaData), NewProp_bStopAtBorder_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bCanBeProjectedToScreen_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bCanBeProjectedToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bCanBeProjectedToScreen = { "bCanBeProjectedToScreen", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bCanBeProjectedToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeProjectedToScreen_MetaData), NewProp_bCanBeProjectedToScreen_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_MarkerWidgetClass = { "MarkerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, MarkerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMapMarkerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerWidgetClass_MetaData), NewProp_MarkerWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_ScreenMarkerWidgetClass = { "ScreenMarkerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, ScreenMarkerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UScreenMarkerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenMarkerWidgetClass_MetaData), NewProp_ScreenMarkerWidgetClass_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_MarkerDescription = { "MarkerDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, MarkerDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerDescription_MetaData), NewProp_MarkerDescription_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bPathable_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bPathable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bPathable = { "bPathable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bPathable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathable_MetaData), NewProp_bPathable_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bOnlyMinimap_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bOnlyMinimap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bOnlyMinimap = { "bOnlyMinimap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bOnlyMinimap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyMinimap_MetaData), NewProp_bOnlyMinimap_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bForceHiddenMarker_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bForceHiddenMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bForceHiddenMarker = { "bForceHiddenMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bForceHiddenMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceHiddenMarker_MetaData), NewProp_bForceHiddenMarker_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bRotateAsOwnerRotation_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bRotateAsOwnerRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bRotateAsOwnerRotation = { "bRotateAsOwnerRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bRotateAsOwnerRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateAsOwnerRotation_MetaData), NewProp_bRotateAsOwnerRotation_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bProjectToScreen_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bProjectToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bProjectToScreen = { "bProjectToScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bProjectToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectToScreen_MetaData), NewProp_bProjectToScreen_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bAlwaysProjectToScreen_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bAlwaysProjectToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bAlwaysProjectToScreen = { "bAlwaysProjectToScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bAlwaysProjectToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysProjectToScreen_MetaData), NewProp_bAlwaysProjectToScreen_MetaData) };
void Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtScreenEdge_SetBit(void* Obj)
{
	((UMapMarkerComponent*)Obj)->bStopAtScreenEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtScreenEdge = { "bStopAtScreenEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerComponent), &Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtScreenEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopAtScreenEdge_MetaData), NewProp_bStopAtScreenEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_LocationOffsetZ = { "LocationOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, LocationOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffsetZ_MetaData), NewProp_LocationOffsetZ_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnRightMouseClick = { "OnRightMouseClick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, OnRightMouseClick), Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRightMouseClick_MetaData), NewProp_OnRightMouseClick_MetaData) }; // 2599499528
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnLeftMouseClick = { "OnLeftMouseClick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, OnLeftMouseClick), Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeftMouseClick_MetaData), NewProp_OnLeftMouseClick_MetaData) }; // 2952636064
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnDoubleClick = { "OnDoubleClick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, OnDoubleClick), Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoubleClick_MetaData), NewProp_OnDoubleClick_MetaData) }; // 1064741977
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnFindPath = { "OnFindPath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerComponent, OnFindPath), Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFindPath_MetaData), NewProp_OnFindPath_MetaData) }; // 352938594
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bCanBeProjectedToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_MarkerWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_ScreenMarkerWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_MarkerDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bPathable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bOnlyMinimap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bForceHiddenMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bRotateAsOwnerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bProjectToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bAlwaysProjectToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_bStopAtScreenEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_LocationOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnRightMouseClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnLeftMouseClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnDoubleClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerComponent_Statics::NewProp_OnFindPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapMarkerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapMarkerComponent_Statics::ClassParams = {
	&UMapMarkerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapMarkerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapMarkerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapMarkerComponent()
{
	if (!Z_Registration_Info_UClass_UMapMarkerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapMarkerComponent.OuterSingleton, Z_Construct_UClass_UMapMarkerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapMarkerComponent.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UMapMarkerComponent>()
{
	return UMapMarkerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapMarkerComponent);
UMapMarkerComponent::~UMapMarkerComponent() {}
// End Class UMapMarkerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapMarkerComponent, UMapMarkerComponent::StaticClass, TEXT("UMapMarkerComponent"), &Z_Registration_Info_UClass_UMapMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapMarkerComponent), 1320383088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_78364581(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarkerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
