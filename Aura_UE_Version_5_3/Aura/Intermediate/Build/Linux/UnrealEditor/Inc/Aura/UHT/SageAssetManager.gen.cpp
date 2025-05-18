// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/SageAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageAssetManager() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_USageAssetManager();
AURA_API UClass* Z_Construct_UClass_USageAssetManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class USageAssetManager
void USageAssetManager::StaticRegisterNativesUSageAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USageAssetManager);
UClass* Z_Construct_UClass_USageAssetManager_NoRegister()
{
	return USageAssetManager::StaticClass();
}
struct Z_Construct_UClass_USageAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SageAssetManager.h" },
		{ "ModuleRelativePath", "Public/SageAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USageAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USageAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USageAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USageAssetManager_Statics::ClassParams = {
	&USageAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USageAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USageAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USageAssetManager()
{
	if (!Z_Registration_Info_UClass_USageAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USageAssetManager.OuterSingleton, Z_Construct_UClass_USageAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USageAssetManager.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<USageAssetManager>()
{
	return USageAssetManager::StaticClass();
}
USageAssetManager::USageAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USageAssetManager);
USageAssetManager::~USageAssetManager() {}
// End Class USageAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USageAssetManager, USageAssetManager::StaticClass, TEXT("USageAssetManager"), &Z_Registration_Info_UClass_USageAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USageAssetManager), 2801161270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageAssetManager_h_589542855(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
