// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoKamikase.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigoKamikase::ANaveEnemigoKamikase()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveK(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh12"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveK.Object);
	
}

void ANaveEnemigoKamikase::BeginPlay()
{
    	Super::BeginPlay();
}

void ANaveEnemigoKamikase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    if (movimiento) {
		movimientoObstaculo();
	}
}

void ANaveEnemigoKamikase::Mover(float DeltaTime)
{

}

void ANaveEnemigoKamikase::Disparar()
{
}

void ANaveEnemigoKamikase::Destruirse()
{
}

void ANaveEnemigoKamikase::Escapar()
{
}
void ANaveEnemigoKamikase::Atacar()
{
}

void ANaveEnemigoKamikase::movimientoObstaculo()
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