// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SageBaseCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GAS/SageAbilitySystemComponent.h"


// Sets default values
ASageBaseCharacter::ASageBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false ;
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetGenerateOverlapEvents(false);
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("hand_lWeaponSucket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* ASageBaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystenComp;
}

UAttributeSet* ASageBaseCharacter::GetAttributeSet() const
{
	return AttributeSet;
}

void ASageBaseCharacter::AddStartUpAbilities()
{
	USageAbilitySystemComponent* ASC = Cast<USageAbilitySystemComponent>(AbilitySystenComp);
	ASC->AddCharacterAbilities(StartUpAbilities);
	
}
