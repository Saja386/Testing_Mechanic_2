// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/SageAbilityTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSageAbilityTask() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_USageAbilityTask();
AURA_API UClass* Z_Construct_UClass_USageAbilityTask_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class USageAbilityTask
void USageAbilityTask::StaticRegisterNativesUSageAbilityTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USageAbilityTask);
UClass* Z_Construct_UClass_USageAbilityTask_NoRegister()
{
	return USageAbilityTask::StaticClass();
}
struct Z_Construct_UClass_USageAbilityTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/SageAbilityTask.h" },
		{ "ModuleRelativePath", "Public/GAS/SageAbilityTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USageAbilityTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USageAbilityTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USageAbilityTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USageAbilityTask_Statics::ClassParams = {
	&USageAbilityTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USageAbilityTask_Statics::Class_MetaDataParams), Z_Construct_UClass_USageAbilityTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USageAbilityTask()
{
	if (!Z_Registration_Info_UClass_USageAbilityTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USageAbilityTask.OuterSingleton, Z_Construct_UClass_USageAbilityTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USageAbilityTask.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<USageAbilityTask>()
{
	return USageAbilityTask::StaticClass();
}
USageAbilityTask::USageAbilityTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USageAbilityTask);
USageAbilityTask::~USageAbilityTask() {}
// End Class USageAbilityTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilityTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USageAbilityTask, USageAbilityTask::StaticClass, TEXT("USageAbilityTask"), &Z_Registration_Info_UClass_USageAbilityTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USageAbilityTask), 351737730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilityTask_h_2969431674(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilityTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_SageAbilityTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
