// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/UI/MapPathDrawerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapPathDrawerWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapPathDrawerWidget();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapPathDrawerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Class UMapPathDrawerWidget
void UMapPathDrawerWidget::StaticRegisterNativesUMapPathDrawerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapPathDrawerWidget);
UClass* Z_Construct_UClass_UMapPathDrawerWidget_NoRegister()
{
	return UMapPathDrawerWidget::StaticClass();
}
struct Z_Construct_UClass_UMapPathDrawerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MapPathDrawerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MapPathDrawerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "PathLine" },
		{ "ModuleRelativePath", "Public/UI/MapPathDrawerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "PathLine" },
		{ "ModuleRelativePath", "Public/UI/MapPathDrawerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAntiAlias_MetaData[] = {
		{ "Category", "PathLine" },
		{ "ModuleRelativePath", "Public/UI/MapPathDrawerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static void NewProp_bAntiAlias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiAlias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapPathDrawerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapPathDrawerWidget, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapPathDrawerWidget, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
void Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_bAntiAlias_SetBit(void* Obj)
{
	((UMapPathDrawerWidget*)Obj)->bAntiAlias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_bAntiAlias = { "bAntiAlias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapPathDrawerWidget), &Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_bAntiAlias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAntiAlias_MetaData), NewProp_bAntiAlias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapPathDrawerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapPathDrawerWidget_Statics::NewProp_bAntiAlias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPathDrawerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapPathDrawerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPathDrawerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapPathDrawerWidget_Statics::ClassParams = {
	&UMapPathDrawerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMapPathDrawerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapPathDrawerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapPathDrawerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapPathDrawerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapPathDrawerWidget()
{
	if (!Z_Registration_Info_UClass_UMapPathDrawerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapPathDrawerWidget.OuterSingleton, Z_Construct_UClass_UMapPathDrawerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapPathDrawerWidget.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<UMapPathDrawerWidget>()
{
	return UMapPathDrawerWidget::StaticClass();
}
UMapPathDrawerWidget::UMapPathDrawerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapPathDrawerWidget);
UMapPathDrawerWidget::~UMapPathDrawerWidget() {}
// End Class UMapPathDrawerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapPathDrawerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapPathDrawerWidget, UMapPathDrawerWidget::StaticClass, TEXT("UMapPathDrawerWidget"), &Z_Registration_Info_UClass_UMapPathDrawerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapPathDrawerWidget), 48607046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapPathDrawerWidget_h_2053562149(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapPathDrawerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_UI_MapPathDrawerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
