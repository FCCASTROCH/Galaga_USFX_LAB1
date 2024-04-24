// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PeticionNaves.h"
#include "PeticionNavesAtaque.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API APeticionNavesAtaque : public APeticionNaves
{
	GENERATED_BODY()
public:

	virtual ANaveEnemigo* CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion) override;
};