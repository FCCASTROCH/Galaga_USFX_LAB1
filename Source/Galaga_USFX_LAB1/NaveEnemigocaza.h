// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigocaza.generated.h"

/*
 
 //crear nave trransporte

 */


UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigocaza : public ANaveEnemigo
{
	GENERATED_BODY()
			
private:
	int cantidadBombas;
public:


        ANaveEnemigocaza();	
		~ANaveEnemigocaza();


	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};
