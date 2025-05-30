// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Controllers/SagePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSagePlayerController() {}

// Begin Cross Module References
AURA_API UClass* Z_Construct_UClass_ASagePlayerController();
AURA_API UClass* Z_Construct_UClass_ASagePlayerController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UInputDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

// Begin Class ASagePlayerController
void ASagePlayerController::StaticRegisterNativesASagePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASagePlayerController);
UClass* Z_Construct_UClass_ASagePlayerController_NoRegister()
{
	return ASagePlayerController::StaticClass();
}
struct Z_Construct_UClass_ASagePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/SagePlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/SagePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SageInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Movement Input Values \n" },
#endif
		{ "ModuleRelativePath", "Public/Controllers/SagePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Input Values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/SagePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/SagePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SageInputDataAsset_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controllers/SagePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SageInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SageInputDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASagePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASagePlayerController_Statics::NewProp_SageInputMappingContext = { "SageInputMappingContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASagePlayerController, SageInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SageInputMappingContext_MetaData), NewProp_SageInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASagePlayerController_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASagePlayerController, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASagePlayerController_Statics::NewProp_DashInputAction = { "DashInputAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASagePlayerController, DashInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashInputAction_MetaData), NewProp_DashInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASagePlayerController_Statics::NewProp_SageInputDataAsset = { "SageInputDataAsset", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASagePlayerController, SageInputDataAsset), Z_Construct_UClass_UInputDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SageInputDataAsset_MetaData), NewProp_SageInputDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASagePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASagePlayerController_Statics::NewProp_SageInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASagePlayerController_Statics::NewProp_MoveInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASagePlayerController_Statics::NewProp_DashInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASagePlayerController_Statics::NewProp_SageInputDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASagePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASagePlayerController_Statics::ClassParams = {
	&ASagePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASagePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASagePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASagePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASagePlayerController()
{
	if (!Z_Registration_Info_UClass_ASagePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASagePlayerController.OuterSingleton, Z_Construct_UClass_ASagePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASagePlayerController.OuterSingleton;
}
template<> AURA_API UClass* StaticClass<ASagePlayerController>()
{
	return ASagePlayerController::StaticClass();
}
ASagePlayerController::ASagePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASagePlayerController);
ASagePlayerController::~ASagePlayerController() {}
// End Class ASagePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_SagePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASagePlayerController, ASagePlayerController::StaticClass, TEXT("ASagePlayerController"), &Z_Registration_Info_UClass_ASagePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASagePlayerController), 3255777494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_SagePlayerController_h_2804589050(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_SagePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_Controllers_SagePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
