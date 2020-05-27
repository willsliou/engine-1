// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"
#include "Engine/World.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


FHitResult AFPSCharacter::instantShot()
{
	// vector has x, y, z in 3D Space
	FVector rayLocation; // shots start from front of camera
	FRotator rayRotation;
	FVector endTrace = FVector::ZeroVector;
	// input validation
	if (playerController)
	{
		playerController->GetPlayerViewPoint(rayLocation, rayRotation);
		// Get and add direction and distance to where we are facing
		endTrace = rayLocation + (rayRotation.Vector() * weaponRange); // player current location + forward direction * weapon range (1000)
	}

	FCollisionQueryParams traceParams(SCENE_QUERTY_STAT(instantShot);


	APlayerController* const playerController = GetWorld()->GetFirstPlayerController();


	return FHitResult();
}

