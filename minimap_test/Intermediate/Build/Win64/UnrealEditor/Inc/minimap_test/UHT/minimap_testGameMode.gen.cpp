// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "minimap_test/minimap_testGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeminimap_testGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MINIMAP_TEST_API UClass* Z_Construct_UClass_Aminimap_testGameMode();
MINIMAP_TEST_API UClass* Z_Construct_UClass_Aminimap_testGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_minimap_test();
// End Cross Module References

// Begin Class Aminimap_testGameMode
void Aminimap_testGameMode::StaticRegisterNativesAminimap_testGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aminimap_testGameMode);
UClass* Z_Construct_UClass_Aminimap_testGameMode_NoRegister()
{
	return Aminimap_testGameMode::StaticClass();
}
struct Z_Construct_UClass_Aminimap_testGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "minimap_testGameMode.h" },
		{ "ModuleRelativePath", "minimap_testGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aminimap_testGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aminimap_testGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_minimap_test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aminimap_testGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aminimap_testGameMode_Statics::ClassParams = {
	&Aminimap_testGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aminimap_testGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aminimap_testGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aminimap_testGameMode()
{
	if (!Z_Registration_Info_UClass_Aminimap_testGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aminimap_testGameMode.OuterSingleton, Z_Construct_UClass_Aminimap_testGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aminimap_testGameMode.OuterSingleton;
}
template<> MINIMAP_TEST_API UClass* StaticClass<Aminimap_testGameMode>()
{
	return Aminimap_testGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aminimap_testGameMode);
Aminimap_testGameMode::~Aminimap_testGameMode() {}
// End Class Aminimap_testGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_New_folder_minimap_test_Source_minimap_test_minimap_testGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aminimap_testGameMode, Aminimap_testGameMode::StaticClass, TEXT("Aminimap_testGameMode"), &Z_Registration_Info_UClass_Aminimap_testGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aminimap_testGameMode), 4005161832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_New_folder_minimap_test_Source_minimap_test_minimap_testGameMode_h_3132496778(TEXT("/Script/minimap_test"),
	Z_CompiledInDeferFile_FID_New_folder_minimap_test_Source_minimap_test_minimap_testGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_New_folder_minimap_test_Source_minimap_test_minimap_testGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
