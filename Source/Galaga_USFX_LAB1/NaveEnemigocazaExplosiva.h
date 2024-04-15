// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigocazaExplosiva.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigocazaExplosiva : public ANaveEnemigocaza
{
	GENERATED_BODY()
	
	public:
		//Constructor
		ANaveEnemigocazaExplosiva();
		void BeginPlay() override;
		void Tick(float DeltaTime) override;
		virtual void Mover(float DeltaTime) override; //Sobrescribir los metodos
	    virtual void Destruirse() override;
		//metodo propio
		void Explotar();
		void movimientoObstaculo() override;
};
