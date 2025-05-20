// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/SageAbilityTask.h"
#include "DashTimerHandle.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatTimelineUpdate, float, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFloatTimelineFinished);

/**
 * 
 */
UCLASS()
class AURA_API UDashTimerHandle : public USageAbilityTask
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintAssignable)
	FFloatTimelineUpdate OnUpdate;

	UPROPERTY(BlueprintAssignable)
	FFloatTimelineFinished OnFinished;
	virtual void Activate() override;
	UFUNCTION(BlueprintCallable, meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"), Category = "Ability|Tasks")
	static UDashTimerHandle* CreateFloatTimeline(UGameplayAbility* OwningAbility);
protected:
	double ElapsedTime =	0.f ;
	double Duration = 0.25f ;

	FTimerHandle TimerHandle;

	void TickTimeline();
	virtual void OnDestroy(bool bInOwnerFinished) override;

};
