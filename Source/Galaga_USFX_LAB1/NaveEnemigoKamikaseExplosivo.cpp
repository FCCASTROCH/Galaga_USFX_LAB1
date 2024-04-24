// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoKamikaseExplosivo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigoKamikaseExplosivo::ANaveEnemigoKamikaseExplosivo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveExplosiv(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh10"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveExplosiv.Object);

}

void ANaveEnemigoKamikaseExplosivo::BeginPlay()
{
    	Super::BeginPlay();
}
void ANaveEnemigoKamikaseExplosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);
    if (movimiento) {
		movimientoObstaculo();
	}
}
void ANaveEnemigoKamikaseExplosivo::Mover(float DeltaTime)
{
}

void ANaveEnemigoKamikaseExplosivo::Disparar()
{
}

void ANaveEnemigoKamikaseExplosivo::Destruirse()
{
}

void ANaveEnemigoKamikaseExplosivo::Escapar()
{
}

void ANaveEnemigoKamikaseExplosivo::Atacar()
{
}

void ANaveEnemigoKamikaseExplosivo::movimientoObstaculo()
{
    // Encuentra el objeto del jugador
    AGalaga_USFX_LAB1Pawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn<AGalaga_USFX_LAB1Pawn>();

    // Verifica si se encontró al jugador
    if (PlayerPawn)
    {
        // Calcula la dirección hacia el jugador
        FVector DirectionToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();
        DirectionToPlayer.Normalize();

        // Calcula la nueva posición para el obstáculo
        FVector NewPosition = PlayerPawn->GetActorLocation() - (DirectionToPlayer * (200 + distanciaObs)); // 100 es la distancia constante

        // Mueve el obstáculo hacia la nueva posición
        SetActorLocation(NewPosition);
     }
}