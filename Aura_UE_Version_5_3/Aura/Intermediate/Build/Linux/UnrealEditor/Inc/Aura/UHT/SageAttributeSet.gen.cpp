// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/SageAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageAttributeSet() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_USageAttributeSet();
AURA_API UClass* Z_Construct_UClass_USageAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class USageAttributeSet
void USageAttributeSet::StaticRegisterNativesUSageAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USageAttributeSet);
UClass* Z_Construct_UClass_USageAttributeSet_NoRegister()
{
	return USageAttributeSet::StaticClass();
}
struct Z_Construct_UClass_USageAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/SageAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS/SageAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USageAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USageAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USageAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USageAttributeSet_Statics::ClassParams = {
	&USageAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USageAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USageAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USageAttributeSet()
{
	if (!Z_Registration_Info_UClass_USageAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USageAttributeSet.OuterSingleton, Z_Construct_UClass_USageAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USageAttributeSet.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<USageAttributeSet>()
{
	return USageAttributeSet::StaticClass();
}
USageAttributeSet::USageAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USageAttributeSet);
USageAttributeSet::~USageAttributeSet() {}
// End Class USageAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USageAttributeSet, USageAttributeSet::StaticClass, TEXT("USageAttributeSet"), &Z_Registration_Info_UClass_USageAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USageAttributeSet), 3195745075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAttributeSet_h_2426137842(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
