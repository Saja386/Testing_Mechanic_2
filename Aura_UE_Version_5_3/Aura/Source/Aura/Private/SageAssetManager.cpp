// Fill out your copyright notice in the Description page of Project Settings.


#include "SageAssetManager.h"
#include "SageGamePlayTags.h"

USageAssetManager& USageAssetManager::Get()
{
	check(GEngine);
	USageAssetManager* AssetManager = Cast<USageAssetManager>(GEngine->AssetManager);
	return *AssetManager ; 
}

void USageAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	FSageGamePlayTagStruct::InitializeNativeGamePlayTags();
}
