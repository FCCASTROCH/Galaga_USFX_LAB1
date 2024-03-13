// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoKamikase.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB1_API ANaveEnemigoKamikase : public ANaveEnemigo
{
	GENERATED_BODY()
protected:
	virtual void mover(float DeltaTime) ;
	
};
