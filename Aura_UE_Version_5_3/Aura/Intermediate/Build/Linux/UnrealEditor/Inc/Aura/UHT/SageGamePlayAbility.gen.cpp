// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/GamePlayAbility/SageGamePlayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageGamePlayAbility() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_USageGamePlayAbility();
AURA_API UClass* Z_Construct_UClass_USageGamePlayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class USageGamePlayAbility
void USageGamePlayAbility::StaticRegisterNativesUSageGamePlayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USageGamePlayAbility);
UClass* Z_Construct_UClass_USageGamePlayAbility_NoRegister()
{
	return USageGamePlayAbility::StaticClass();
}
struct Z_Construct_UClass_USageGamePlayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/GamePlayAbility/SageGamePlayAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/GamePlayAbility/SageGamePlayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUpInputTag_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS/GamePlayAbility/SageGamePlayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartUpInputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USageGamePlayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USageGamePlayAbility_Statics::NewProp_StartUpInputTag = { "StartUpInputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USageGamePlayAbility, StartUpInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUpInputTag_MetaData), NewProp_StartUpInputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USageGamePlayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USageGamePlayAbility_Statics::NewProp_StartUpInputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USageGamePlayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USageGamePlayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USageGamePlayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USageGamePlayAbility_Statics::ClassParams = {
	&USageGamePlayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USageGamePlayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USageGamePlayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USageGamePlayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USageGamePlayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USageGamePlayAbility()
{
	if (!Z_Registration_Info_UClass_USageGamePlayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USageGamePlayAbility.OuterSingleton, Z_Construct_UClass_USageGamePlayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USageGamePlayAbility.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<USageGamePlayAbility>()
{
	return USageGamePlayAbility::StaticClass();
}
USageGamePlayAbility::USageGamePlayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USageGamePlayAbility);
USageGamePlayAbility::~USageGamePlayAbility() {}
// End Class USageGamePlayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GamePlayAbility_SageGamePlayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USageGamePlayAbility, USageGamePlayAbility::StaticClass, TEXT("USageGamePlayAbility"), &Z_Registration_Info_UClass_USageGamePlayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USageGamePlayAbility), 1493217858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GamePlayAbility_SageGamePlayAbility_h_1053170162(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GamePlayAbility_SageGamePlayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_GamePlayAbility_SageGamePlayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
