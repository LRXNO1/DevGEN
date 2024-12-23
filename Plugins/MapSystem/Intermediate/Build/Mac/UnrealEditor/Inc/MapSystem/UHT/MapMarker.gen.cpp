// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapSystem/Public/Core/MapMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMarker() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapMarker();
MAPSYSTEM_API UClass* Z_Construct_UClass_AMapMarker_NoRegister();
MAPSYSTEM_API UClass* Z_Construct_UClass_UMapMarkerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MapSystem();
// End Cross Module References

// Begin Class AMapMarker
void AMapMarker::StaticRegisterNativesAMapMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapMarker);
UClass* Z_Construct_UClass_AMapMarker_NoRegister()
{
	return AMapMarker::StaticClass();
}
struct Z_Construct_UClass_AMapMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is an actor marker, this can be simply placed on the map, it already has a marker component and can be customized.\n*/" },
		{ "IncludePath", "Core/MapMarker.h" },
		{ "ModuleRelativePath", "Public/Core/MapMarker.h" },
		{ "ToolTip", "This is an actor marker, this can be simply placed on the map, it already has a marker component and can be customized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MapMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMarkerComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/MapMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapMarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMarker_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMarker, Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapMarker_Statics::NewProp_MapMarkerComponent = { "MapMarkerComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapMarker, MapMarkerComponent), Z_Construct_UClass_UMapMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMarkerComponent_MetaData), NewProp_MapMarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMarker_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapMarker_Statics::NewProp_MapMarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MapSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapMarker_Statics::ClassParams = {
	&AMapMarker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapMarker_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapMarker()
{
	if (!Z_Registration_Info_UClass_AMapMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapMarker.OuterSingleton, Z_Construct_UClass_AMapMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapMarker.OuterSingleton;
}
template<> MAPSYSTEM_API UClass* StaticClass<AMapMarker>()
{
	return AMapMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapMarker);
AMapMarker::~AMapMarker() {}
// End Class AMapMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapMarker, AMapMarker::StaticClass, TEXT("AMapMarker"), &Z_Registration_Info_UClass_AMapMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapMarker), 3807590334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarker_h_4157009195(TEXT("/Script/MapSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MapSystem_Source_MapSystem_Public_Core_MapMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
