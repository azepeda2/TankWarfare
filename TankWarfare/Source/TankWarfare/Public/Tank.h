// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);

UCLASS()
class TANKWARFARE_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Called by engine when actor damage is dealt
	virtual float ATank::TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;
	
	// Returns the current health in percentage, from 0 to 1
	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealthPercentage() const;

	FTankDelegate OnDeath;
private:
	ATank();
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Setup")
	int32 CurrentHealth; //Initialize in BeginPlay
};
