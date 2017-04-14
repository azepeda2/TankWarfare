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
	
private:
	virtual void BeginPlay() override;
	void Tick(float DeltaTime);
	// How close an AI tank can get to a player
	float AcceptanceRadius = 3000;
};
