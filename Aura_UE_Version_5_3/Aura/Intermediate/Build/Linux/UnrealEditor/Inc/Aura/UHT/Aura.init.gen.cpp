// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAura_init() {}
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Aura;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Aura()
	{
		if (!Z_Registration_Info_UPackage__Script_Aura.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Aura_FloatTimelineFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Aura_FloatTimelineUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Aura",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x228AD592,
				0xB71B5452,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Aura.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Aura.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Aura(Z_Construct_UPackage__Script_Aura, TEXT("/Script/Aura"), Z_Registration_Info_UPackage__Script_Aura, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x228AD592, 0xB71B5452));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
