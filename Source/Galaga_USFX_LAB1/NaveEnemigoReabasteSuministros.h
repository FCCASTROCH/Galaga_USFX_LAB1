// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoReabastecimiento.h"
#include "NaveEnemigoReabasteSuministros.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoReabasteSuministros : public ANaveEnemigoReabastecimiento
{
	GENERATED_BODY()
public:

	ANaveEnemigoReabasteSuministros();
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
};
