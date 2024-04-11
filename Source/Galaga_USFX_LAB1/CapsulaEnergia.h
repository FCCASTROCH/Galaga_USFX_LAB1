// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaEnergia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ACapsulaEnergia : public ACapsula
{
	GENERATED_BODY()
public:
		ACapsulaEnergia();
	float ZLimiteDestruccion;
	virtual void Tick(float DeltaTime) override;

	virtual void PickUp()override;
	virtual void PutDown(FTransform TargetLocation)override;
	virtual void Mover(float DeltaTime)override;
};
