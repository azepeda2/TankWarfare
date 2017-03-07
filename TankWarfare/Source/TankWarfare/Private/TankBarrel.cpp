// Fill out your copyright notice in the Description page of Project Settings.

#include "TankWarfare.h"
#include "TankBarrel.h"

// Move Barrel at a reasonable speed, due to max elevation speed and frame time
void UTankBarrel::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto NewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp(NewElevation, MinElevationDegrees, MaxElevationDegrees);
	SetRelativeRotation(FRotator(Elevation, 0, 0));
}

