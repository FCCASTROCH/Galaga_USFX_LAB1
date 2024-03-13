// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB1GameMode.h"
#include "Galaga_USFX_LAB1Pawn.h"
#include "NaveEnemigo.h"
#include "Nave.h"
AGalaga_USFX_LAB1GameMode::AGalaga_USFX_LAB1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB1Pawn::StaticClass();
	NaveEnemigo1 = 0;
}
void AGalaga_USFX_LAB1GameMode::BeginPlay()
{

	Super::BeginPlay();

	FVector ubicacionNave = FVector(-960.0f, 50.0f, 250.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigo1 = World->SpawnActor<ANaveEnemigo>(ubicacionNave, rotacionNave);
		NaveJugador1 = World->SpawnActor<ANave>(FVector(-400.0f,50.0f,250.0f), FRotator(0.0f, 0.0f, 0.0f));
	}

}

