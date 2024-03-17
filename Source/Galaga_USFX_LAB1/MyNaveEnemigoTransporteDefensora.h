// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigoTransporte.h"
#include "MyNaveEnemigoTransporteDefensora.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API AMyNaveEnemigoTransporteDefensora : public ANaveEnemigoTransporte
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshNaveEnemigoTransporteDefensora;

	AMyNaveEnemigoTransporteDefensora();
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar()override;
	virtual void Destruirse()override;
	virtual void Escapar()override;
	virtual void Atacar()override;
};
