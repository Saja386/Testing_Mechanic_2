// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Characters/SageBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageBaseCharacter() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ASageBaseCharacter();
AURA_API UClass* Z_Construct_UClass_ASageBaseCharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
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
		{ "IncludePath", "Characters/SageBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/SageBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapon Values\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SageBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadWeaponSucketName_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Characters/SageBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystenComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GAS Values\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SageBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SageBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUpAbilities_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/Characters/SageBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadWeaponSucketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystenComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartUpAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartUpAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASageBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASageBaseCharacter, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_HeadWeaponSucketName = { "HeadWeaponSucketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASageBaseCharacter, HeadWeaponSucketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadWeaponSucketName_MetaData), NewProp_HeadWeaponSucketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_AbilitySystenComp = { "AbilitySystenComp", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASageBaseCharacter, AbilitySystenComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystenComp_MetaData), NewProp_AbilitySystenComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASageBaseCharacter, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_StartUpAbilities_Inner = { "StartUpAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_StartUpAbilities = { "StartUpAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASageBaseCharacter, StartUpAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUpAbilities_MetaData), NewProp_StartUpAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASageBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_Weapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_HeadWeaponSucketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_AbilitySystenComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_StartUpAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASageBaseCharacter_Statics::NewProp_StartUpAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASageBaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASageBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASageBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASageBaseCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASageBaseCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASageBaseCharacter_Statics::ClassParams = {
	&ASageBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASageBaseCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASageBaseCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SageBaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASageBaseCharacter, ASageBaseCharacter::StaticClass, TEXT("ASageBaseCharacter"), &Z_Registration_Info_UClass_ASageBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASageBaseCharacter), 1031354891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SageBaseCharacter_h_2990182239(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SageBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Characters_SageBaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
