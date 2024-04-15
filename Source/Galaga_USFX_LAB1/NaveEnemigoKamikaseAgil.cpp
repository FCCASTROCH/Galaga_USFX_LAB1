// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoKamikaseAgil.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigoKamikaseAgil::ANaveEnemigoKamikaseAgil()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveKA(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh11"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveKA.Object);
	
}

void ANaveEnemigoKamikaseAgil::BeginPlay()
{
    	Super::BeginPlay();
}
void ANaveEnemigoKamikaseAgil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    if (movimiento) {
		movimientoObstaculo();
	}
}
void ANaveEnemigoKamikaseAgil::Mover(float DeltaTime)
{
}

void ANaveEnemigoKamikaseAgil::Disparar()
{
}

void ANaveEnemigoKamikaseAgil::Destruirse()
{
}

void ANaveEnemigoKamikaseAgil::Escapar()
{
}

void ANaveEnemigoKamikaseAgil::Atacar()
{
}

void ANaveEnemigoKamikaseAgil::velocidadAumentada()
{
}

void ANaveEnemigoKamikaseAgil::movimientoObstaculo()
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