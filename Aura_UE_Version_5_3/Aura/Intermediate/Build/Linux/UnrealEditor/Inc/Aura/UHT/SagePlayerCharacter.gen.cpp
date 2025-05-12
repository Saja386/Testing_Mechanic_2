// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/SagePlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSagePlayerCharacter() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ASageBaseCharacter();
AURA_API UClass* Z_Construct_UClass_ASagePlayerCharacter();
AURA_API UClass* Z_Construct_UClass_ASagePlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class ASagePlayerCharacter
void ASagePlayerCharacter::StaticRegisterNativesASagePlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASagePlayerCharacter);
UClass* Z_Construct_UClass_ASagePlayerCharacter_NoRegister()
{
	return ASagePlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ASagePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SagePlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/SagePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASagePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASagePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASageBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASagePlayerCharacter_Statics::ClassParams = {
	&ASagePlayerCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASagePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASagePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ASagePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASagePlayerCharacter.OuterSingleton, Z_Construct_UClass_ASagePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASagePlayerCharacter.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<ASagePlayerCharacter>()
{
	return ASagePlayerCharacter::StaticClass();
}
ASagePlayerCharacter::ASagePlayerCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASagePlayerCharacter);
ASagePlayerCharacter::~ASagePlayerCharacter() {}
// End Class ASagePlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SagePlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASagePlayerCharacter, ASagePlayerCharacter::StaticClass, TEXT("ASagePlayerCharacter"), &Z_Registration_Info_UClass_ASagePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASagePlayerCharacter), 2142485010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SagePlayerCharacter_h_3911293119(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SagePlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SagePlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
