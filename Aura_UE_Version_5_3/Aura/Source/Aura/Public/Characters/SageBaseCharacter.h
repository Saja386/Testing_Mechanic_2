// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SageBaseCharacter.generated.h"

class UGameplayAbility;
class UAttributeSet;
class UAbilitySystemComponent;

UCLASS()
class AURA_API ASageBaseCharacter : public ACharacter , public IAbilitySystemInterface 
{
	GENERATED_BODY()

public:
	ASageBaseCharacter();
	//Getter for GAS parts 
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const;

protected:
	//Weapon Values
	UPROPERTY(EditAnywhere , Category = "Combat" )
	TObjectPtr<USkeletalMeshComponent> Weapon ;

	UPROPERTY(EditAnywhere , Category = "Combat" )
	FName HeadWeaponSucketName ;
	//GAS Values
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystenComp ;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	//Get StartUp Abilities to character
	void AddStartUpAbilities ();

private:
	UPROPERTY(EditDefaultsOnly , Category="Defaults")
	TArray<TSubclassOf<UGameplayAbility>> StartUpAbilities ; 
};
