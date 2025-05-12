// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/SagePlayerController.h"
#include "EnhancedInputSubsystems.h"

void ASagePlayerController::BeginPlay()
{
	Super::BeginPlay();
	/* Adding Mapping Context to the EnhancedInputSubSystem */
	check(SageInputMappingContext);
	if(UEnhancedInputLocalPlayerSubsystem* EnhancedInputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		EnhancedInputSubsystem->AddMappingContext(SageInputMappingContext , 0 ); 
	}
	/*End Adding Mapping Context to the EnhancedInputSubSystem */
	
	/*Setting Mouse Default Values*/
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	FInputModeGameAndUI InputModeData ;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
	/*End Setting Mouse Default Values*/

}
