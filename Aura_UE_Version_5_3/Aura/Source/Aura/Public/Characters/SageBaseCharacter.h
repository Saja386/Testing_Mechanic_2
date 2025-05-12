// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SageBaseCharacter.generated.h"

UCLASS()
class AURA_API ASageBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASageBaseCharacter(); 

protected:
	UPROPERTY(EditAnywhere , Category = "Combat" )
	TObjectPtr<USkeletalMeshComponent> Weapon ;

	UPROPERTY(EditAnywhere , Category = "Combat" )
	FName HeadWeaponSucketName ;

public:	


};
