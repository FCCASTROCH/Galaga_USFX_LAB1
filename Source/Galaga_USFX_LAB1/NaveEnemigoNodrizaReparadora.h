// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoNodriza.h"
#include "NaveEnemigoNodrizaReparadora.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoNodrizaReparadora : public ANaveEnemigoNodriza
{
	GENERATED_BODY()
public:
	ANaveEnemigoNodrizaReparadora();
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
};
