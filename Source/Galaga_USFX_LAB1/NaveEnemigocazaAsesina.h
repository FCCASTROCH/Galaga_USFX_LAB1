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
	virtual void Atacar() override;
	virtual void Mover() override; 
    virtual void Disparar() override;
	virtual void Destruirse() override;

	//metodos propios 
	void AtaqueEspecial();
	


};
