// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "SagePlayerState.generated.h"

class UAttributeSet;
class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class AURA_API ASagePlayerState : public APlayerState , public IAbilitySystemInterface
{
	GENERATED_BODY()
	ASagePlayerState();
public:
	// Getter For GAS values 
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const;
protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystenComp ;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
