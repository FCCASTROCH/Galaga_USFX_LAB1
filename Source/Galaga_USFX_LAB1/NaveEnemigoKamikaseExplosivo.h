// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoKamikase.h"
#include "NaveEnemigoKamikaseExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoKamikaseExplosivo : public ANaveEnemigoKamikase
{
	GENERATED_BODY()
public:

	ANaveEnemigoKamikaseExplosivo();
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
	//metodos propios
};
