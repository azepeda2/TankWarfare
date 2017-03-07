// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "TankWarfare.h"
#include "TankAIController.h"


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("TankAIController didn't find player one's pawn!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TankAIController found player one pawn: %s"), *PlayerTank->GetName());
	}
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTank) { return nullptr; }

	return Cast<ATank>(PlayerTank);
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank())
	{
		// TODO move towards player

		// Aim towards player
		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
		// fire if ready
	}
}
