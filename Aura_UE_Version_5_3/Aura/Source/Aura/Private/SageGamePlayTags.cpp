// Fill out your copyright notice in the Description page of Project Settings.


#include "SageGamePlayTags.h"
#include "GameplayTagsManager.h"

FSageGamePlayTagStruct FSageGamePlayTagStruct::GameplayTags ;

void FSageGamePlayTagStruct::InitializeNativeGamePlayTags()
{
	GameplayTags.Abilities_Movement_Dash = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Abilities.Movement.Dash") , FString("GamePlayTag required for activating Dash")); 
}
