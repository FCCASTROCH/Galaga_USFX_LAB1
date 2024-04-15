// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaIncognito.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoEspiaIncognito : public ANaveEnemigoEspia
{
	GENERATED_BODY()
public:


	ANaveEnemigoEspiaIncognito();
	//metodos sobreescritos
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void Destruirse() override;
	virtual void Escapar()override;
	virtual void Atacar()override;
	void movimientoObstaculo() override;
	//metodo propio
	void ModoIncognito();
};
