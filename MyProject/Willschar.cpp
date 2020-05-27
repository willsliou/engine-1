// Fill out your copyright notice in the Description page of Project Settings.


#include "Willschar.h"
#include <Engine/World.h>

// Sets default values
AWillschar::AWillschar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWillschar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWillschar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWillschar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


FHitResult AWillschar::instantShot()
{
	FVector cameraLocation; // shots start from front of camera
	FRotator cameraRotation;

	APlayerController* const playerController = GetWorld()->GetFirstPlayerController();


	return FHitResult();
}