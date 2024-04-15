// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoEspia : public ANaveEnemigo
{
	GENERATED_BODY()
public:


	ANaveEnemigoEspia();
	float Timer ; //Inicializa el timer en 0    
	float TiempoTranscurrido ;

	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
	void Tick(float DeltaTime);
	void BeginPlay();

	void movimientoObstaculo() override;
};
