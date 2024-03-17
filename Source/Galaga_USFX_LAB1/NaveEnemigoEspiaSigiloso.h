// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaSigiloso.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoEspiaSigiloso : public ANaveEnemigoEspia
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshNaveSigiloso;

	ANaveEnemigoEspiaSigiloso();
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
	//metodo propio

};
