// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB1GameMode.h"
#include "Galaga_USFX_LAB1Pawn.h"
#include "NaveEnemigo.h"
#include "Nave.h"
#include "NaveEnemigoTransporte.h"
#include "MyNaveEnemigoTransporteDefensora.h"
#include "NaveEnemigoTransporteExplosivos.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigocazaAsesina.h"
#include "NaveEnemigocazaExplosiva.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaIncognito.h"
#include "NaveEnemigoEspiaSigiloso.h"
#include "NaveEnemigoKamikase.h"
#include "NaveEnemigoKamikaseExplosivo.h"
#include "NaveEnemigoKamikaseAgil.h"
#include "NaveEnemigoNodriza.h"
#include "NaveEnemigoNodrizaReparadora.h"
#include "NaveEnemigoNodrizaDisparadora.h"

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
  
    FVector ubicacionInicioNavesEnemigas = FVector(1850.0f, -1540.7f, 250.0f);
    FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);
    FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
    

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
        TArray<TSubclassOf<ANaveEnemigo>> Naves;//Crea un TArray de subclases de ANaveEnemiga
        Naves.Add(ANaveEnemigocaza::StaticClass()); //Agrega la subclase ANaveEnemigaCaza al TArray
        Naves.Add(ANaveEnemigocazaAsesina::StaticClass()); //Agrega la subclase ANaveEnemigaCazaAsesina al TArray
        Naves.Add(ANaveEnemigocazaExplosiva::StaticClass()); //Agrega la subclase ANaveEnemigaTransporte al TArray
        Naves.Add(ANaveEnemigoEspia::StaticClass()); //Agrega la subclase ANaveEnemigaEspia al TArray
        Naves.Add(ANaveEnemigoEspiaIncognito::StaticClass()); //Agrega la subclase ANaveEnemigaEspiaIncognito al TArray
        Naves.Add(ANaveEnemigoEspiaSigiloso::StaticClass()); //Agrega la subclase ANaveEnemigaEspiaSigiloso al TArray
        Naves.Add(ANaveEnemigoKamikase::StaticClass()); //Agrega la subclase ANaveEnemigaKamikase al TArray
        Naves.Add(ANaveEnemigoKamikaseExplosivo::StaticClass()); //Agrega la subclase ANaveEnemigaKamikaseExplosivo al TArray
        Naves.Add(ANaveEnemigoKamikaseAgil::StaticClass()); //Agrega la subclase ANaveEnemigaKamikaseAgil al TArray
        Naves.Add(ANaveEnemigoNodriza::StaticClass()); //Agrega la subclase ANaveEnemigaNodriza al TArray
        Naves.Add(ANaveEnemigoNodrizaReparadora::StaticClass()); //Agrega la subclase ANaveEnemigaNodrizaReparadora al TArray
        Naves.Add(ANaveEnemigoNodrizaDisparadora::StaticClass()); //Agrega la subclase ANaveEnemigaNodrizaDisparadora al TArray
        Naves.Add(ANaveEnemigoTransporte::StaticClass()); //Agrega la subclase ANaveEnemigaTransporte al TArray
        Naves.Add(ANaveEnemigoTransporteExplosivos::StaticClass()); //Agrega la subclase ANaveEnemigaTransporteExplosivos al TArray
        Naves.Add(AMyNaveEnemigoTransporteDefensora::StaticClass()); //Agrega la subclase ANaveEnemigaTransporteDefensora al TArray
        for (int i = 0; i < 6; i++) {
            FVector PosicionNaveActualX = FVector(ubicacionInicioNavesEnemigas.X, ubicacionInicioNavesEnemigas.Y + i * 600.0f, ubicacionInicioNavesEnemigas.Z);

            for (int j = 0; j < 5; j++) {
                FVector PosicionNaveActualY = FVector(PosicionNaveActualX.X - j * 528.5f, PosicionNaveActualX.Y, PosicionNaveActualX.Z);

                //tipo de nave aleatorio
                int32 RandomIndex = FMath::RandRange(0, Naves.Num() - 1);
                TSubclassOf<ANaveEnemigo> NaveClass = Naves[RandomIndex]; 

                // spawn
                ANaveEnemigo* NaveEnemigaTemporal = World->SpawnActor<ANaveEnemigo>(NaveClass, PosicionNaveActualY, rotacionNave);//Spawnea la nave enemiga en una posicion y rotacion especifica

               
            }
        }
        tiempotranscurrido = 0;
    }
}



void AGalaga_USFX_LAB1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

