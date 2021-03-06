// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Willschar.generated.h"

UCLASS()
class MYPROJECT_API AWillschar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWillschar();

	UPROPERTY(EditAnywhere, Category = "Weapon")
		float weaponRange{ 1000 };

protected:// any subclass can access this function
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FHitResult instantShot(); 


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
