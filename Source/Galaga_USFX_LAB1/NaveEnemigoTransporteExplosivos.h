// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoTransporte.h"
#include "NaveEnemigoTransporteExplosivos.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoTransporteExplosivos : public ANaveEnemigoTransporte
{
	GENERATED_BODY()
public:

	ANaveEnemigoTransporteExplosivos();
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
};
