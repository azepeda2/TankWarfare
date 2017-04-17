// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"


/**
 * 
 */
UCLASS()
class TANKWARFARE_API ATankAIController : public AAIController
{
	GENERATED_BODY()
			
protected:
	// How close an AI tank can get to a player
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000;

private:
	virtual void BeginPlay() override;
	void Tick(float DeltaTime);
};
