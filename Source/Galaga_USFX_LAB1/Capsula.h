// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Capsula.generated.h"

/**
 * 
 */
UCLASS(abstract)
class GALAGA_USFX_LAB1_API ACapsula : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	//ACapsula();

	virtual void Mover(float DeltaTime) PURE_VIRTUAL(ACapsula::Mover, );

	virtual void PickUp()PURE_VIRTUAL(ACapsula::PickUp, );
	virtual void PutDown(FTransform TargetLocation)PURE_VIRTUAL(ACapsula::PutDown, );
};
