// Fill out your copyright notice in the Description page of Project Settings.

#include "TankWarfare.h"
#include "Tank.h"
#include "TankAIController.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}


void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		// TODO move towards player
		MoveToActor(PlayerTank, AcceptanceRadius);
		// Aim towards player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		// fire if ready
		ControlledTank->Fire();
	}
}
