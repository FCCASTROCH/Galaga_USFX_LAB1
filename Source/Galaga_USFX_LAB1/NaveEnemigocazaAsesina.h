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
//

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshNaveAsesina;
	//
	ANaveEnemigocazaAsesina();
	virtual void Atacar() override;
	virtual void Mover(float DeltaTime) override; 
    virtual void Disparar() override;
	virtual void Destruirse() override;

	//metodos propios 
	void AtaqueEspecial();

		

};
