// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoKamikase.h"
#include "NaveEnemigoKamikaseAgil.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoKamikaseAgil : public ANaveEnemigoKamikase
{
	GENERATED_BODY()
public:


	ANaveEnemigoKamikaseAgil();
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
	//metodos propios
	void velocidadAumentada();
	void movimientoObstaculo() override;
	
};
