// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/SagePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

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

void ASagePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked <UEnhancedInputComponent>(InputComponent);
	//Bind Input Actions To Functions 
	EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Triggered , this , &ASagePlayerController::Move); 
}

void ASagePlayerController::Move(const FInputActionValue& MoveInputActionValue)
{
	FVector2d InputVector = MoveInputActionValue.Get<FVector2D>();
	//Get Forward Direction and Right Direction 
	const FRotator PlayerRotation = GetControlRotation();
	const FRotator YawRotation = FRotator (0.f , PlayerRotation.Yaw , 0.f );
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);//Get Forward Vector 
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);//Get Right Vector 

	// Apply Input
	if(APawn* ControlledPawn = GetPawn())
	{
		ControlledPawn->AddMovementInput(ForwardDirection , InputVector.Y);
		ControlledPawn->AddMovementInput(RightDirection , InputVector.X);
	}
}
