// Fill out your copyright notice in the Description page of Project Settings.

#include "TankWarfare.h"
#include "TankTrack.h"
#include "TankMovementComponent.h"

void UTankMovementComponent::Initialiaze(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet)
{
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;
	
}

void UTankMovementComponent::IntendMoveForward(float Throw)
{
	if (!LeftTrackToSet || !RightTrackToSet) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}


void UTankMovementComponent::IntendTurnRight(float Throw)
{
	if (!LeftTrackToSet || !RightTrackToSet) { return; }
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(-Throw);
}
