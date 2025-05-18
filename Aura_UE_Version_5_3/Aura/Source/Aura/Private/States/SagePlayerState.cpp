// Fill out your copyright notice in the Description page of Project Settings.


#include "States/SagePlayerState.h"

#include "GAS/SageAbilitySystemComponent.h"
#include "GAS/SageAttributeSet.h"

ASagePlayerState::ASagePlayerState()
{
	AbilitySystenComp = CreateDefaultSubobject<USageAbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<USageAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* ASagePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystenComp;
}

UAttributeSet* ASagePlayerState::GetAttributeSet() const
{
	return AttributeSet;
}
