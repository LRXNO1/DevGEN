// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapSystem_init() {}
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature();
	MAPSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MapSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MapSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_MapSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnAddMarker__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnAddVisibleMarker__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnDoubleClick__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnFindPath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnFindPathToMarker__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnHideVisibleMarker__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnLeftMouseClick__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnRightMouseClick__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MapSystem_OnUpdateFindPath__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MapSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF8C72B23,
				0x2C65B0B7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MapSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MapSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MapSystem(Z_Construct_UPackage__Script_MapSystem, TEXT("/Script/MapSystem"), Z_Registration_Info_UPackage__Script_MapSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF8C72B23, 0x2C65B0B7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
