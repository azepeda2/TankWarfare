// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

// Forward Declarations
class ATank;

/**
 * 
 */
UCLASS()
class TANKWARFARE_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	ATank* GetControlledTank() const;
	virtual void BeginPlay() override;
	ATank* GetPlayerTank() const;
	void Tick(float DeltaTime);
	
};
