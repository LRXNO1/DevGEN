// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/UI/ScreenMarkerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenMarkerWidget() {}

// Begin Cross Module References
MAPSYSTEM_API UClass* Z_Construct_UClass_UScreenMarkerWidget();
MAPSYSTEM_API UClass* Z_Construct_UClass_UScreenMarkerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Class UScreenMarkerWidget
void UScreenMarkerWidget::StaticRegisterNativesUScreenMarkerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenMarkerWidget);
UClass* Z_Construct_UClass_UScreenMarkerWidget_NoRegister()
{
	return UScreenMarkerWidget::StaticClass();
}
struct Z_Construct_UClass_UScreenMarkerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ScreenMarkerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenMarkerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionArrow_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenMarkerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ScreenMarkerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateMarkerWidget_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**If true then a MapMarkerWidget will be created and added to Overlay automatically. You must set it to false if you want to use another widget instead of the default marker widget **/" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerWidget.h" },
		{ "ToolTip", "If true then a MapMarkerWidget will be created and added to Overlay automatically. You must set it to false if you want to use another widget instead of the default marker widget *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**Controls whether the displayed distance includes the \"m\" unit **/" },
		{ "ModuleRelativePath", "Public/UI/ScreenMarkerWidget.h" },
		{ "ToolTip", "Controls whether the displayed distance includes the \"m\" unit *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceText;
	static void NewProp_bAutoCreateMarkerWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateMarkerWidget;
	static void NewProp_bShowMeters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMeters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenMarkerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerWidget, Overlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlay_MetaData), NewProp_Overlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_DirectionArrow = { "DirectionArrow", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerWidget, DirectionArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionArrow_MetaData), NewProp_DirectionArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_DistanceText = { "DistanceText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenMarkerWidget, DistanceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceText_MetaData), NewProp_DistanceText_MetaData) };
void Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bAutoCreateMarkerWidget_SetBit(void* Obj)
{
	((UScreenMarkerWidget*)Obj)->bAutoCreateMarkerWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bAutoCreateMarkerWidget = { "bAutoCreateMarkerWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerWidget), &Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bAutoCreateMarkerWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCreateMarkerWidget_MetaData), NewProp_bAutoCreateMarkerWidget_MetaData) };
void Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bShowMeters_SetBit(void* Obj)
{
	((UScreenMarkerWidget*)Obj)->bShowMeters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bShowMeters = { "bShowMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScreenMarkerWidget), &Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bShowMeters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMeters_MetaData), NewProp_bShowMeters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenMarkerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_Overlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_DirectionArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_DistanceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bAutoCreateMarkerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenMarkerWidget_Statics::NewProp_bShowMeters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScreenMarkerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenMarkerWidget_Statics::ClassParams = {
	&UScreenMarkerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScreenMarkerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMarkerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenMarkerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreenMarkerWidget()
{
	if (!Z_Registration_Info_UClass_UScreenMarkerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenMarkerWidget.OuterSingleton, Z_Construct_UClass_UScreenMarkerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenMarkerWidget.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UScreenMarkerWidget>()
{
	return UScreenMarkerWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenMarkerWidget);
UScreenMarkerWidget::~UScreenMarkerWidget() {}
// End Class UScreenMarkerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenMarkerWidget, UScreenMarkerWidget::StaticClass, TEXT("UScreenMarkerWidget"), &Z_Registration_Info_UClass_UScreenMarkerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenMarkerWidget), 1633772052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerWidget_h_90478588(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_ScreenMarkerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
