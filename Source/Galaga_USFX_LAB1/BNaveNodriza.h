// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BNaveNodriza.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBNaveNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_LAB1_API IBNaveNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void ConstruirMovimientoDeNave() = 0;
	virtual void ConstruirPocisionNaves() = 0;
	virtual void ConstruirBarreraEscudo() = 0;
	virtual void ConstruirSpawnNaves() = 0;
	//virtual void ConstruirDestruirNave() = 0;
	virtual class ANaveEnemigoNodriza* getNaveNodriza() = 0;


};
