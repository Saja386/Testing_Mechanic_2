// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SagePlayerController.generated.h"


//Forward Declaration

struct FInputActionValue;
class UInputMappingContext ;
class UInputAction ;

/**
 * 
 */
UCLASS()
class AURA_API ASagePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	

protected:
	// Functions To set up default values 
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	
private:
	//Movement Input Values 
	UPROPERTY(EditAnywhere , Category="Input")
	TObjectPtr<UInputMappingContext> SageInputMappingContext;

	UPROPERTY(EditAnywhere , Category="Input")
	TObjectPtr<UInputAction> MoveInputAction ;

	void Move (const FInputActionValue& MoveInputActionValue) ; 
};
