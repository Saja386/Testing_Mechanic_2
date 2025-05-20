// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/DashTimerHandle.h"

void UDashTimerHandle::Activate()
{
	Super::Activate();
	ElapsedTime = 0.0f;
	if(UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(TimerHandle, this, &UDashTimerHandle::TickTimeline, 1.f/60.f, true);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Valid World"));
		EndTask();
	}
}

UDashTimerHandle* UDashTimerHandle::CreateFloatTimeline(UGameplayAbility* OwningAbility)
{
	UDashTimerHandle* MyHandle = NewAbilityTask<UDashTimerHandle>(OwningAbility);
	return MyHandle;
	
}

void UDashTimerHandle::TickTimeline()
{
	ElapsedTime += 1.f / 60.f;
	float Alpha = FMath::Clamp(ElapsedTime / Duration, 0.f, 1.f);
	OnUpdate.Broadcast(Alpha);
	if (Alpha >= 1.f)
	{
		OnFinished.Broadcast();
		EndTask();              
	}
}

void UDashTimerHandle::OnDestroy(bool bInOwnerFinished)
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(TimerHandle); 
	}
	Super::OnDestroy(bInOwnerFinished);
}
