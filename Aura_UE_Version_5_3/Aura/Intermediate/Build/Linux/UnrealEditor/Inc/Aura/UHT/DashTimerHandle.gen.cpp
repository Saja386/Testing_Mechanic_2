// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/GAS/DashTimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashTimerHandle() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_UDashTimerHandle();
AURA_API UClass* Z_Construct_UClass_UDashTimerHandle_NoRegister();
AURA_API UClass* Z_Construct_UClass_USageAbilityTask();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature();
AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Delegate FFloatTimelineUpdate
struct Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics
{
	struct _Script_Aura_eventFloatTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/DashTimerHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Aura_eventFloatTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "FloatTimelineUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::_Script_Aura_eventFloatTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::_Script_Aura_eventFloatTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFloatTimelineUpdate_DelegateWrapper(const FMulticastScriptDelegate& FloatTimelineUpdate, float Value)
{
	struct _Script_Aura_eventFloatTimelineUpdate_Parms
	{
		float Value;
	};
	_Script_Aura_eventFloatTimelineUpdate_Parms Parms;
	Parms.Value=Value;
	FloatTimelineUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFloatTimelineUpdate

// Begin Delegate FFloatTimelineFinished
struct Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/DashTimerHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "FloatTimelineFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFloatTimelineFinished_DelegateWrapper(const FMulticastScriptDelegate& FloatTimelineFinished)
{
	FloatTimelineFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FFloatTimelineFinished

// Begin Class UDashTimerHandle Function CreateFloatTimeline
struct Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics
{
	struct DashTimerHandle_eventCreateFloatTimeline_Parms
	{
		UGameplayAbility* OwningAbility;
		UDashTimerHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/GAS/DashTimerHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DashTimerHandle_eventCreateFloatTimeline_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DashTimerHandle_eventCreateFloatTimeline_Parms, ReturnValue), Z_Construct_UClass_UDashTimerHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashTimerHandle, nullptr, "CreateFloatTimeline", nullptr, nullptr, Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::DashTimerHandle_eventCreateFloatTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::DashTimerHandle_eventCreateFloatTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDashTimerHandle::execCreateFloatTimeline)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDashTimerHandle**)Z_Param__Result=UDashTimerHandle::CreateFloatTimeline(Z_Param_OwningAbility);
	P_NATIVE_END;
}
// End Class UDashTimerHandle Function CreateFloatTimeline

// Begin Class UDashTimerHandle
void UDashTimerHandle::StaticRegisterNativesUDashTimerHandle()
{
	UClass* Class = UDashTimerHandle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateFloatTimeline", &UDashTimerHandle::execCreateFloatTimeline },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDashTimerHandle);
UClass* Z_Construct_UClass_UDashTimerHandle_NoRegister()
{
	return UDashTimerHandle::StaticClass();
}
struct Z_Construct_UClass_UDashTimerHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/DashTimerHandle.h" },
		{ "ModuleRelativePath", "Public/GAS/DashTimerHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/DashTimerHandle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/DashTimerHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDashTimerHandle_CreateFloatTimeline, "CreateFloatTimeline" }, // 2787318490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDashTimerHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDashTimerHandle_Statics::NewProp_OnUpdate = { "OnUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDashTimerHandle, OnUpdate), Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdate_MetaData), NewProp_OnUpdate_MetaData) }; // 3073430981
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDashTimerHandle_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDashTimerHandle, OnFinished), Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 204886925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDashTimerHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashTimerHandle_Statics::NewProp_OnUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashTimerHandle_Statics::NewProp_OnFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDashTimerHandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDashTimerHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USageAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDashTimerHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDashTimerHandle_Statics::ClassParams = {
	&UDashTimerHandle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDashTimerHandle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDashTimerHandle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDashTimerHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UDashTimerHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDashTimerHandle()
{
	if (!Z_Registration_Info_UClass_UDashTimerHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDashTimerHandle.OuterSingleton, Z_Construct_UClass_UDashTimerHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDashTimerHandle.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<UDashTimerHandle>()
{
	return UDashTimerHandle::StaticClass();
}
UDashTimerHandle::UDashTimerHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDashTimerHandle);
UDashTimerHandle::~UDashTimerHandle() {}
// End Class UDashTimerHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDashTimerHandle, UDashTimerHandle::StaticClass, TEXT("UDashTimerHandle"), &Z_Registration_Info_UClass_UDashTimerHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDashTimerHandle), 2851948382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_1581772691(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
