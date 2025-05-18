// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/States/SagePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSagePlayerState() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ASagePlayerState();
AURA_API UClass* Z_Construct_UClass_ASagePlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class ASagePlayerState
void ASagePlayerState::StaticRegisterNativesASagePlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASagePlayerState);
UClass* Z_Construct_UClass_ASagePlayerState_NoRegister()
{
	return ASagePlayerState::StaticClass();
}
struct Z_Construct_UClass_ASagePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "States/SagePlayerState.h" },
		{ "ModuleRelativePath", "Public/States/SagePlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystenComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/States/SagePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/States/SagePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystenComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASagePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASagePlayerState_Statics::NewProp_AbilitySystenComp = { "AbilitySystenComp", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASagePlayerState, AbilitySystenComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystenComp_MetaData), NewProp_AbilitySystenComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASagePlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASagePlayerState, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASagePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASagePlayerState_Statics::NewProp_AbilitySystenComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASagePlayerState_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASagePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASagePlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASagePlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASagePlayerState_Statics::ClassParams = {
	&ASagePlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASagePlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASagePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASagePlayerState()
{
	if (!Z_Registration_Info_UClass_ASagePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASagePlayerState.OuterSingleton, Z_Construct_UClass_ASagePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASagePlayerState.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<ASagePlayerState>()
{
	return ASagePlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASagePlayerState);
ASagePlayerState::~ASagePlayerState() {}
// End Class ASagePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_States_SagePlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASagePlayerState, ASagePlayerState::StaticClass, TEXT("ASagePlayerState"), &Z_Registration_Info_UClass_ASagePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASagePlayerState), 2759530242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_States_SagePlayerState_h_2628571285(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_States_SagePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_States_SagePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
