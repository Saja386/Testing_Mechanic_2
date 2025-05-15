// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/SagePlayerCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

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
