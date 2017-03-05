// Fill out your copyright notice in the Description page of Project Settings.

#include "TankWarfare.h"
#include "TankBarrel.h"


void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() at %f"), DegreesPerSecond);

}

