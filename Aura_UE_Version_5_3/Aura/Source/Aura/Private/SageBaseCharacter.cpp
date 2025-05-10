// Fill out your copyright notice in the Description page of Project Settings.


#include "SageBaseCharacter.h"

// Sets default values
ASageBaseCharacter::ASageBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASageBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASageBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASageBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

