// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB1GameMode.h"
#include "Galaga_USFX_LAB1Pawn.h"
#include "NaveEnemigo.h"
#include "Nave.h"
#include "NaveEnemigoTransporte.h"
#include "NaveEnemigocaza.h"

AGalaga_USFX_LAB1GameMode::AGalaga_USFX_LAB1GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_LAB1Pawn::StaticClass();
	NaveEnemigo1 = 0;
}
void AGalaga_USFX_LAB1GameMode::BeginPlay()
{
    Super::BeginPlay();
    // Set the game state to playing
    FVector UbicacionInicialNaveEnemigoCaza = FVector(1600.0f, -500.0f, 250.0f);

    FRotator Rotacion = FRotator(0.0f, 0.0f, 0.0f);
    UWorld* const World = GetWorld();

    if (World != nullptr)
    {
        for (int32 i = 0; i < 2; i++)
        {
            // Calcula la ubicación para cada nave enemiga caza
            FVector UbicacionNaveEnemigoCaza = FVector(UbicacionInicialNaveEnemigoCaza.X, UbicacionInicialNaveEnemigoCaza.Y + i * 300.0f, UbicacionInicialNaveEnemigoCaza.Z);
            // Spawnea la nave enemiga caza en la ubicación calculada
            ANaveEnemigocaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigocaza>(UbicacionNaveEnemigoCaza, Rotacion);

        
        }
    }
}
void AGalaga_USFX_LAB1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

