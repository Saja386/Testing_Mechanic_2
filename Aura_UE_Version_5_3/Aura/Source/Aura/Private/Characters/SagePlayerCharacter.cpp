// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SagePlayerCharacter.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "States/SagePlayerState.h"

ASagePlayerCharacter::ASagePlayerCharacter()
{
	//Set Default Values of Movement 
	GetCharacterMovement()->bOrientRotationToMovement = true;//For Character Face Where it is going
	GetCharacterMovement()->RotationRate = FRotator(0, 400, 0);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void ASagePlayerCharacter::PossessedBy(AController* NewController)
{
	//Set GAS Attributes
	Super::PossessedBy(NewController);
	ASagePlayerState* PlayerState = GetPlayerState<ASagePlayerState>();
	check(PlayerState);
	PlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(PlayerState , this );
	AbilitySystenComp = PlayerState->GetAbilitySystemComponent();
	AttributeSet = PlayerState->GetAttributeSet();

	AddStartUpAbilities();
}
