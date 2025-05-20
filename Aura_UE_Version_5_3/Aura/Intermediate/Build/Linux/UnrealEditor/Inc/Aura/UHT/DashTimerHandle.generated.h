// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/DashTimerHandle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDashTimerHandle;
class UGameplayAbility;
#ifdef AURA_DashTimerHandle_generated_h
#error "DashTimerHandle.generated.h already included, missing '#pragma once' in DashTimerHandle.h"
#endif
#define AURA_DashTimerHandle_generated_h

#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_10_DELEGATE \
AURA_API void FFloatTimelineUpdate_DelegateWrapper(const FMulticastScriptDelegate& FloatTimelineUpdate, float Value);


#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_11_DELEGATE \
AURA_API void FFloatTimelineFinished_DelegateWrapper(const FMulticastScriptDelegate& FloatTimelineFinished);


#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateFloatTimeline);


#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDashTimerHandle(); \
	friend struct Z_Construct_UClass_UDashTimerHandle_Statics; \
public: \
	DECLARE_CLASS(UDashTimerHandle, USageAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UDashTimerHandle)


#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDashTimerHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDashTimerHandle(UDashTimerHandle&&); \
	UDashTimerHandle(const UDashTimerHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDashTimerHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDashTimerHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDashTimerHandle) \
	NO_API virtual ~UDashTimerHandle();


#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_16_PROLOG
#define FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UDashTimerHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_Testing_Mechanic_2_Aura_UE_Version_5_3_Aura_Source_Aura_Public_GAS_DashTimerHandle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
