// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward Declaration
class UTankBarrel;
class UTankTurret;
class AProjectile;

UCLASS()
class TANKWARFARE_API ATank : public APawn
{
	GENERATED_BODY()

public:	
	UFUNCTION(BlueprintCallable, Category = "Actions")
	void Fire();

private:
	// Sets default values for this pawn's properties
	ATank();
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000; // Starting at 500 m/s
	
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3;
	
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;
	
	UTankBarrel* Barrel = nullptr;
	
	double LastFiredTime = 0;
};
