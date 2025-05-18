// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/input/InputDataAsset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDataAsset() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UInputDataAsset();
AURA_API UClass* Z_Construct_UClass_UInputDataAsset_NoRegister();
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FSageInputActionTags();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin ScriptStruct FSageInputActionTags
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SageInputActionTags;
class UScriptStruct* FSageInputActionTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SageInputActionTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SageInputActionTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSageInputActionTags, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("SageInputActionTags"));
	}
	return Z_Registration_Info_UScriptStruct_SageInputActionTags.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FSageInputActionTags>()
{
	return FSageInputActionTags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSageInputActionTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/input/InputDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "SageInputActionTags" },
		{ "ModuleRelativePath", "Public/input/InputDataAsset.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[] = {
		{ "Category", "SageInputActionTags" },
		{ "ModuleRelativePath", "Public/input/InputDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSageInputActionTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSageInputActionTags_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSageInputActionTags, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSageInputActionTags_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSageInputActionTags, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTag_MetaData), NewProp_GameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSageInputActionTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSageInputActionTags_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSageInputActionTags_Statics::NewProp_GameplayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSageInputActionTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSageInputActionTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"SageInputActionTags",
	Z_Construct_UScriptStruct_FSageInputActionTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSageInputActionTags_Statics::PropPointers),
	sizeof(FSageInputActionTags),
	alignof(FSageInputActionTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSageInputActionTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSageInputActionTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSageInputActionTags()
{
	if (!Z_Registration_Info_UScriptStruct_SageInputActionTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SageInputActionTags.InnerSingleton, Z_Construct_UScriptStruct_FSageInputActionTags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SageInputActionTags.InnerSingleton;
}
// End ScriptStruct FSageInputActionTags

// Begin Class UInputDataAsset
void UInputDataAsset::StaticRegisterNativesUInputDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDataAsset);
UClass* Z_Construct_UClass_UInputDataAsset_NoRegister()
{
	return UInputDataAsset::StaticClass();
}
struct Z_Construct_UClass_UInputDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "input/InputDataAsset.h" },
		{ "ModuleRelativePath", "Public/input/InputDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActionsTags_MetaData[] = {
		{ "Category", "InputDataAsset" },
		{ "ModuleRelativePath", "Public/input/InputDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActionsTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActionsTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDataAsset_Statics::NewProp_AbilityInputActionsTags_Inner = { "AbilityInputActionsTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSageInputActionTags, METADATA_PARAMS(0, nullptr) }; // 1223654693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputDataAsset_Statics::NewProp_AbilityInputActionsTags = { "AbilityInputActionsTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDataAsset, AbilityInputActionsTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActionsTags_MetaData), NewProp_AbilityInputActionsTags_MetaData) }; // 1223654693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDataAsset_Statics::NewProp_AbilityInputActionsTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDataAsset_Statics::NewProp_AbilityInputActionsTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDataAsset_Statics::ClassParams = {
	&UInputDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDataAsset()
{
	if (!Z_Registration_Info_UClass_UInputDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDataAsset.OuterSingleton, Z_Construct_UClass_UInputDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDataAsset.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UInputDataAsset>()
{
	return UInputDataAsset::StaticClass();
}
UInputDataAsset::UInputDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDataAsset);
UInputDataAsset::~UInputDataAsset() {}
// End Class UInputDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_input_InputDataAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSageInputActionTags::StaticStruct, Z_Construct_UScriptStruct_FSageInputActionTags_Statics::NewStructOps, TEXT("SageInputActionTags"), &Z_Registration_Info_UScriptStruct_SageInputActionTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSageInputActionTags), 1223654693U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDataAsset, UInputDataAsset::StaticClass, TEXT("UInputDataAsset"), &Z_Registration_Info_UClass_UInputDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDataAsset), 2138578316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_input_InputDataAsset_h_1097991322(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_input_InputDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_input_InputDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_input_InputDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_input_InputDataAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
