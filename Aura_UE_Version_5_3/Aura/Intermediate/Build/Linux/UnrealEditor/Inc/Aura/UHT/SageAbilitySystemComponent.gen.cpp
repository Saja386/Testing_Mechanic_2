// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/SageAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageAbilitySystemComponent() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_USageAbilitySystemComponent();
AURA_API UClass* Z_Construct_UClass_USageAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class USageAbilitySystemComponent
void USageAbilitySystemComponent::StaticRegisterNativesUSageAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USageAbilitySystemComponent);
UClass* Z_Construct_UClass_USageAbilitySystemComponent_NoRegister()
{
	return USageAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_USageAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS/SageAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GAS/SageAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USageAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USageAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USageAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USageAbilitySystemComponent_Statics::ClassParams = {
	&USageAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USageAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USageAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USageAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_USageAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USageAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_USageAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USageAbilitySystemComponent.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<USageAbilitySystemComponent>()
{
	return USageAbilitySystemComponent::StaticClass();
}
USageAbilitySystemComponent::USageAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USageAbilitySystemComponent);
USageAbilitySystemComponent::~USageAbilitySystemComponent() {}
// End Class USageAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USageAbilitySystemComponent, USageAbilitySystemComponent::StaticClass, TEXT("USageAbilitySystemComponent"), &Z_Registration_Info_UClass_USageAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USageAbilitySystemComponent), 2416877594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilitySystemComponent_h_3107560274(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
