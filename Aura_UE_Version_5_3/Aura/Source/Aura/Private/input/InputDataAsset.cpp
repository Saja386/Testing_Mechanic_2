// Fill out your copyright notice in the Description page of Project Settings.


#include "input/InputDataAsset.h"

const FGameplayTag UInputDataAsset::FindABilityInputActionForTag(UInputAction* Action) const
{
	for (FSageInputActionTags InputActionTags : AbilityInputActionsTags)
	{
		if(InputActionTags.InputAction == Action)
		{
			return InputActionTags.GameplayTag;
		}
	}
	return FGameplayTag(); 
}
