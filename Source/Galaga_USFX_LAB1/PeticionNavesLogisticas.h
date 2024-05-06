// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PeticionNaves.h"
#include "PeticionNavesLogisticas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API APeticionNavesLogisticas : public APeticionNaves
{
	GENERATED_BODY()
public:

	//virtual ANaveEnemigo* CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion) override;
	virtual ANaveEnemigo* CrearNaveEnemiga(FString NombreNave) override;
};
