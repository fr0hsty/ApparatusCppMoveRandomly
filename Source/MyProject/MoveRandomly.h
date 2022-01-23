// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MechanicalActor.h"
#include "MoveRandomly.generated.h"

UCLASS()
class MYPROJECT_API AMoveRandomly : public AMechanicalActor // Inheriting from mechanical actors lets us use mechanics.
{
	GENERATED_BODY()

	// Declare our tick and begin play functions
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

	// The following are a bunch of public variables for your to tweak Blueprint side.
	// These are used in the .cpp file
	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MoveRandomly")
	float MinDistanceFroMDestination = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MoveRandomly")
	float MoveSpeed  = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MoveRandomly")
	float RandomWidth  = 250.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MoveRandomly")
	int NumSubjects  = 10;
	
};
