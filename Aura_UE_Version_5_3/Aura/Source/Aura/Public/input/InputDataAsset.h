// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "InputDataAsset.generated.h"
USTRUCT(BlueprintType)
struct FSageInputActionTags
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	const class UInputAction* InputAction = nullptr;
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag GameplayTag = FGameplayTag();
};
/**
 * 
 */
UCLASS()
class AURA_API UInputDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	const FGameplayTag FindABilityInputActionForTag (UInputAction* Actin) const;

	
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly)
	TArray<FSageInputActionTags> AbilityInputActionsTags;
	
};
