// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/UI/MapMarkerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMarkerWidget() {}

// Begin Cross Module References
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerWidget();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerWidget_NoRegister();
MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Delegate FOnFindPathToMarker
struct Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics
{
	struct _Script_MapSystem_eventOnFindPathToMarker_Parms
	{
		UMapMarkerWidget* MarkerWidget;
		bool bStart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::NewProp_MarkerWidget = { "MarkerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MapSystem_eventOnFindPathToMarker_Parms, MarkerWidget), Z_Construct_UClass_UMapMarkerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerWidget_MetaData), NewProp_MarkerWidget_MetaData) };
void Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::NewProp_bStart_SetBit(void* Obj)
{
	((_Script_MapSystem_eventOnFindPathToMarker_Parms*)Obj)->bStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MapSystem_eventOnFindPathToMarker_Parms), &Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::NewProp_MarkerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::NewProp_bStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MapSystem, nullptr, "OnFindPathToMarker__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnFindPathToMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::_Script_MapSystem_eventOnFindPathToMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindPathToMarker_DelegateWrapper(const FMulticastScriptDelegate& OnFindPathToMarker, UMapMarkerWidget* MarkerWidget, bool bStart)
{
	struct _Script_MapSystem_eventOnFindPathToMarker_Parms
	{
		UMapMarkerWidget* MarkerWidget;
		bool bStart;
	};
	_Script_MapSystem_eventOnFindPathToMarker_Parms Parms;
	Parms.MarkerWidget=MarkerWidget;
	Parms.bStart=bStart ? true : false;
	OnFindPathToMarker.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFindPathToMarker

// Begin Class UMapMarkerWidget Function CallOnFindPathToMarker
struct Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics
{
	struct MapMarkerWidget_eventCallOnFindPathToMarker_Parms
	{
		bool bFindingPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFindingPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindingPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::NewProp_bFindingPath_SetBit(void* Obj)
{
	((MapMarkerWidget_eventCallOnFindPathToMarker_Parms*)Obj)->bFindingPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::NewProp_bFindingPath = { "bFindingPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapMarkerWidget_eventCallOnFindPathToMarker_Parms), &Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::NewProp_bFindingPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::NewProp_bFindingPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerWidget, nullptr, "CallOnFindPathToMarker", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::MapMarkerWidget_eventCallOnFindPathToMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::MapMarkerWidget_eventCallOnFindPathToMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerWidget::execCallOnFindPathToMarker)
{
	P_GET_UBOOL(Z_Param_bFindingPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnFindPathToMarker(Z_Param_bFindingPath);
	P_NATIVE_END;
}
// End Class UMapMarkerWidget Function CallOnFindPathToMarker

// Begin Class UMapMarkerWidget Function GetOwningComponent
struct Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics
{
	struct MapMarkerWidget_eventGetOwningComponent_Parms
	{
		UMapMarkerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**Returns the marker component of this marker widget */" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
		{ "ToolTip", "Returns the marker component of this marker widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarkerWidget_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerWidget, nullptr, "GetOwningComponent", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::MapMarkerWidget_eventGetOwningComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::MapMarkerWidget_eventGetOwningComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerWidget::execGetOwningComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMapMarkerComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
	P_NATIVE_END;
}
// End Class UMapMarkerWidget Function GetOwningComponent

// Begin Class UMapMarkerWidget Function HideMarker
struct Z_Construct_UFunction_UMapMarkerWidget_HideMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerWidget_HideMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerWidget, nullptr, "HideMarker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_HideMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerWidget_HideMarker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarkerWidget_HideMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerWidget_HideMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerWidget::execHideMarker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideMarker();
	P_NATIVE_END;
}
// End Class UMapMarkerWidget Function HideMarker

// Begin Class UMapMarkerWidget Function InitializeMarker
struct MapMarkerWidget_eventInitializeMarker_Parms
{
	UMapMarkerComponent* MarkerComponent;
};
static FName NAME_UMapMarkerWidget_InitializeMarker = FName(TEXT("InitializeMarker"));
void UMapMarkerWidget::InitializeMarker(UMapMarkerComponent* MarkerComponent)
{
	MapMarkerWidget_eventInitializeMarker_Parms Parms;
	Parms.MarkerComponent=MarkerComponent;
	ProcessEvent(FindFunctionChecked(NAME_UMapMarkerWidget_InitializeMarker),&Parms);
}
struct Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**This function is called when the marker is created in the map or minimap widget. This is where variables are set and delegates are bound */" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
		{ "ToolTip", "This function is called when the marker is created in the map or minimap widget. This is where variables are set and delegates are bound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapMarkerWidget_eventInitializeMarker_Parms, MarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerWidget, nullptr, "InitializeMarker", nullptr, nullptr, Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::PropPointers), sizeof(MapMarkerWidget_eventInitializeMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(MapMarkerWidget_eventInitializeMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerWidget::execInitializeMarker)
{
	P_GET_OBJECT(UMapMarkerComponent,Z_Param_MarkerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMarker_Implementation(Z_Param_MarkerComponent);
	P_NATIVE_END;
}
// End Class UMapMarkerWidget Function InitializeMarker

// Begin Class UMapMarkerWidget Function OnLeftMouseButtonDown
static FName NAME_UMapMarkerWidget_OnLeftMouseButtonDown = FName(TEXT("OnLeftMouseButtonDown"));
void UMapMarkerWidget::OnLeftMouseButtonDown()
{
	ProcessEvent(FindFunctionChecked(NAME_UMapMarkerWidget_OnLeftMouseButtonDown),NULL);
}
struct Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Called when the left mouse button is clicked on this widget */" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
		{ "ToolTip", "Called when the left mouse button is clicked on this widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerWidget, nullptr, "OnLeftMouseButtonDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerWidget::execOnLeftMouseButtonDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLeftMouseButtonDown_Implementation();
	P_NATIVE_END;
}
// End Class UMapMarkerWidget Function OnLeftMouseButtonDown

// Begin Class UMapMarkerWidget Function OnRightMouseButtonDown
static FName NAME_UMapMarkerWidget_OnRightMouseButtonDown = FName(TEXT("OnRightMouseButtonDown"));
void UMapMarkerWidget::OnRightMouseButtonDown()
{
	ProcessEvent(FindFunctionChecked(NAME_UMapMarkerWidget_OnRightMouseButtonDown),NULL);
}
struct Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Called when the right mouse button is clicked on this widget */" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
		{ "ToolTip", "Called when the right mouse button is clicked on this widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapMarkerWidget, nullptr, "OnRightMouseButtonDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapMarkerWidget::execOnRightMouseButtonDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRightMouseButtonDown_Implementation();
	P_NATIVE_END;
}
// End Class UMapMarkerWidget Function OnRightMouseButtonDown

// Begin Class UMapMarkerWidget
void UMapMarkerWidget::StaticRegisterNativesUMapMarkerWidget()
{
	UClass* Class = UMapMarkerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallOnFindPathToMarker", &UMapMarkerWidget::execCallOnFindPathToMarker },
		{ "GetOwningComponent", &UMapMarkerWidget::execGetOwningComponent },
		{ "HideMarker", &UMapMarkerWidget::execHideMarker },
		{ "InitializeMarker", &UMapMarkerWidget::execInitializeMarker },
		{ "OnLeftMouseButtonDown", &UMapMarkerWidget::execOnLeftMouseButtonDown },
		{ "OnRightMouseButtonDown", &UMapMarkerWidget::execOnRightMouseButtonDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapMarkerWidget);
UClass* Z_Construct_UClass_UMapMarkerWidget_NoRegister()
{
	return UMapMarkerWidget::StaticClass();
}
struct Z_Construct_UClass_UMapMarkerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MapMarkerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MapMarkerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnBigMap_MetaData[] = {
		{ "Category", "MarkerInfo" },
		{ "Comment", "/**If true, then the instance is on the minimap */" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
		{ "ToolTip", "If true, then the instance is on the minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFindPathToMarker_MetaData[] = {
		{ "Comment", "/**Called when starts or stops finding path to this marker */" },
		{ "ModuleRelativePath", "Public/UI/MapMarkerWidget.h" },
		{ "ToolTip", "Called when starts or stops finding path to this marker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static void NewProp_bOnBigMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnBigMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFindPathToMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapMarkerWidget_CallOnFindPathToMarker, "CallOnFindPathToMarker" }, // 3656147861
		{ &Z_Construct_UFunction_UMapMarkerWidget_GetOwningComponent, "GetOwningComponent" }, // 228622106
		{ &Z_Construct_UFunction_UMapMarkerWidget_HideMarker, "HideMarker" }, // 2349861979
		{ &Z_Construct_UFunction_UMapMarkerWidget_InitializeMarker, "InitializeMarker" }, // 2861425007
		{ &Z_Construct_UFunction_UMapMarkerWidget_OnLeftMouseButtonDown, "OnLeftMouseButtonDown" }, // 1389491540
		{ &Z_Construct_UFunction_UMapMarkerWidget_OnRightMouseButtonDown, "OnRightMouseButtonDown" }, // 1555075982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapMarkerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerWidget, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
void Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_bOnBigMap_SetBit(void* Obj)
{
	((UMapMarkerWidget*)Obj)->bOnBigMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_bOnBigMap = { "bOnBigMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapMarkerWidget), &Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_bOnBigMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnBigMap_MetaData), NewProp_bOnBigMap_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_OnFindPathToMarker = { "OnFindPathToMarker", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapMarkerWidget, OnFindPathToMarker), Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFindPathToMarker_MetaData), NewProp_OnFindPathToMarker_MetaData) }; // 3137960963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapMarkerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_bOnBigMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMarkerWidget_Statics::NewProp_OnFindPathToMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapMarkerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapMarkerWidget_Statics::ClassParams = {
	&UMapMarkerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapMarkerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapMarkerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapMarkerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapMarkerWidget()
{
	if (!Z_Registration_Info_UClass_UMapMarkerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapMarkerWidget.OuterSingleton, Z_Construct_UClass_UMapMarkerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapMarkerWidget.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UMapMarkerWidget>()
{
	return UMapMarkerWidget::StaticClass();
}
UMapMarkerWidget::UMapMarkerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapMarkerWidget);
UMapMarkerWidget::~UMapMarkerWidget() {}
// End Class UMapMarkerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapMarkerWidget, UMapMarkerWidget::StaticClass, TEXT("UMapMarkerWidget"), &Z_Registration_Info_UClass_UMapMarkerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapMarkerWidget), 1330141083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_3544309822(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapMarkerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
