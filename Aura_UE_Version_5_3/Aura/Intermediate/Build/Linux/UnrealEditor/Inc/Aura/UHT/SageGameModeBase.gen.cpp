// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GameMode/SageGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageGameModeBase() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ASageGameModeBase();
AURA_API UClass* Z_Construct_UClass_ASageGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class ASageGameModeBase
void ASageGameModeBase::StaticRegisterNativesASageGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASageGameModeBase);
UClass* Z_Construct_UClass_ASageGameModeBase_NoRegister()
{
	return ASageGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASageGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/SageGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameMode/SageGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASageGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASageGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASageGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASageGameModeBase_Statics::ClassParams = {
	&ASageGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASageGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASageGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASageGameModeBase()
{
	if (!Z_Registration_Info_UClass_ASageGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASageGameModeBase.OuterSingleton, Z_Construct_UClass_ASageGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASageGameModeBase.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<ASageGameModeBase>()
{
	return ASageGameModeBase::StaticClass();
}
ASageGameModeBase::ASageGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASageGameModeBase);
ASageGameModeBase::~ASageGameModeBase() {}
// End Class ASageGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GameMode_SageGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASageGameModeBase, ASageGameModeBase::StaticClass, TEXT("ASageGameModeBase"), &Z_Registration_Info_UClass_ASageGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASageGameModeBase), 3591029622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GameMode_SageGameModeBase_h_2971603279(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GameMode_SageGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GameMode_SageGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
