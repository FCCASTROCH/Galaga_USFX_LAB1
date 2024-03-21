// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB1GameMode.generated.h"
class ANaveEnemigo;
class ANave;
class ANaveEnemigoTransporte;
class ANaveEnemigocaza;

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB1GameMode();
	protected:
		virtual void BeginPlay() override;
public:
	ANaveEnemigo* NaveEnemigo1;
	ANave* NaveJugador1;
	ANaveEnemigoTransporte* NaveEnemigaTransporte01;
	ANaveEnemigocaza* NaveEnemigaCaza01;
private:
	int tiempotranscurrido;
public:
	TArray<ANaveEnemigocaza*> TANavesEnemigasCaza;
//	FString GetUniqueNameForNave(); // Declaración de la función aquí
	//TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



