// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/SageAbilitySystemComponent.h"

#include "GAS/GamePlayAbility/SageGamePlayAbility.h"

void USageAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartUpAbilities)
{
	for (TSubclassOf<UGameplayAbility> Ability : StartUpAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability  , 1);
		if(const USageGamePlayAbility* SageAbility = Cast<USageGamePlayAbility>(AbilitySpec.Ability))
		{
			AbilitySpec.DynamicAbilityTags.AddTag(SageAbility->StartUpInputTag);
			GiveAbility(AbilitySpec);
		}
	}
}

void USageAbilitySystemComponent::ActivateAbilityByTag(FGameplayTag& InTag)
{
	if(!InTag.IsValid()){return;}
	for(FGameplayAbilitySpec AbilitySpec : GetActivatableAbilities())
	{
		if(AbilitySpec.DynamicAbilityTags.HasTagExact(InTag))
		{
			AbilitySpecInputPressed(AbilitySpec);
			if(!AbilitySpec.IsActive())
			{
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
	}
}
