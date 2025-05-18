// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "SageAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API USageAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:
	static USageAssetManager& Get();

protected:
	virtual void StartInitialLoading() override;
};
