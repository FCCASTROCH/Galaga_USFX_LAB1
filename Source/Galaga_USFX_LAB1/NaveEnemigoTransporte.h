// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoTransporte : public ANaveEnemigo
{
	GENERATED_BODY()
public:
	ANaveEnemigoTransporte();
	~ANaveEnemigoTransporte();
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};
