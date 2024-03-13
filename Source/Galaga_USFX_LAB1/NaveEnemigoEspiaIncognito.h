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

	virtual void Mover(float deltaTime) override;
	virtual void Disparar() override;
	virtual void Destruirse() override;
	virtual void Escapar()override;
	virtual void Atacar()override;
	//metodo propio
	void ModoIncognito();
};
