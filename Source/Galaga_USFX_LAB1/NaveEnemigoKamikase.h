// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoKamikase.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoKamikase : public ANaveEnemigo
{
	GENERATED_BODY()
protected:

	ANaveEnemigoKamikase();
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime) ;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
	void movimientoObstaculo() override;
};
