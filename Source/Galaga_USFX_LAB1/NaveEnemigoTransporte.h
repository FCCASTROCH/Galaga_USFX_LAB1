// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoTransporte : public ANaveEnemigo
{
	GENERATED_BODY()

private:
	float capacidadCargaPeso;
	float capacidadCargaVolumen;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshNaveEnemigoTransporte;

	ANaveEnemigoTransporte();
	~ANaveEnemigoTransporte();
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();

	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadCargaPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadCargaPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadCargaVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadCargaVolumen = capacidad; }

};
