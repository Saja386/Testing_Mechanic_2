// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/SageBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageBaseCharacter() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ASageBaseCharacter();
AURA_API UClass* Z_Construct_UClass_ASageBaseCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class ASageBaseCharacter
void ASageBaseCharacter::StaticRegisterNativesASageBaseCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASageBaseCharacter);
UClass* Z_Construct_UClass_ASageBaseCharacter_NoRegister()
{
	return ASageBaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ASageBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SageBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/SageBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASageBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASageBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASageBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASageBaseCharacter_Statics::ClassParams = {
	&ASageBaseCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASageBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASageBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASageBaseCharacter()
{
	if (!Z_Registration_Info_UClass_ASageBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASageBaseCharacter.OuterSingleton, Z_Construct_UClass_ASageBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASageBaseCharacter.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<ASageBaseCharacter>()
{
	return ASageBaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASageBaseCharacter);
ASageBaseCharacter::~ASageBaseCharacter() {}
// End Class ASageBaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageBaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASageBaseCharacter, ASageBaseCharacter::StaticClass, TEXT("ASageBaseCharacter"), &Z_Registration_Info_UClass_ASageBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASageBaseCharacter), 3792570826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageBaseCharacter_h_756487979(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_SageBaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
