// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigocazaAsesina.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigocazaAsesina : public ANaveEnemigocaza
{
	GENERATED_BODY()
public:

	ANaveEnemigocazaAsesina();
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	virtual void Atacar() override;
	virtual void Mover(float DeltaTime) override; 
    virtual void Disparar() override;
	virtual void Destruirse() override;
	void movimientoObstaculo() override;
	void DisminuirVida(float Cantidad) override;
	//metodos propios 
	void AtaqueEspecial();

		

};
