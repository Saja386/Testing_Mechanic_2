// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
/**
 * 
 */
struct FSageGamePlayTagStruct
{
public:
 static const FSageGamePlayTagStruct& Get (){return  GameplayTags;};
 static void InitializeNativeGamePlayTags ();

 //Tags Variables
 FGameplayTag Abilities_Movement_Dash ;
protected:
 
private:
 static FSageGamePlayTagStruct GameplayTags; 
};
