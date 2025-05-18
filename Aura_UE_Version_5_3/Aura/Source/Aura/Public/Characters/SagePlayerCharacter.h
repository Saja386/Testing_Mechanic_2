// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/SageBaseCharacter.h"
#include "SagePlayerCharacter.generated.h"


class UGameplayAbility;
/**
 * 
 */
UCLASS()
class AURA_API ASagePlayerCharacter : public ASageBaseCharacter
{
	GENERATED_BODY()
public:
	ASagePlayerCharacter();
	virtual void PossessedBy(AController* NewController) override;

	UPROPERTY(EditDefaultsOnly , Category= "Defaults")
	TArray<TSubclassOf<UGameplayAbility>> DefaultAbilities;
};
