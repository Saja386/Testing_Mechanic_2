// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "SageAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API USageAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	//Function to apply abilityes 
	void AddCharacterAbilities (const TArray<TSubclassOf<UGameplayAbility>>& StartUpAbilities);
	void ActivateAbilityByTag (FGameplayTag& InTag); 
};
