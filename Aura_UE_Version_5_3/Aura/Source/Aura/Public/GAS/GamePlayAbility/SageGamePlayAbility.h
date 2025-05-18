// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SageGamePlayAbility.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API USageGamePlayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly , Category="Abilities" )
	FGameplayTag StartUpInputTag ;
		
};
