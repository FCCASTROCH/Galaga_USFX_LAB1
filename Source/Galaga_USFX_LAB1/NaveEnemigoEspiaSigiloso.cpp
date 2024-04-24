// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspiaSigiloso.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigoEspiaSigiloso::ANaveEnemigoEspiaSigiloso()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveSi(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh13"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveSi.Object);
	
}

void ANaveEnemigoEspiaSigiloso::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigoEspiaSigiloso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);
	if (movimiento) {
		movimientoObstaculo();
	}
}

void ANaveEnemigoEspiaSigiloso::Mover(float DeltaTime)
{
}

void ANaveEnemigoEspiaSigiloso::Disparar()
{
}

void ANaveEnemigoEspiaSigiloso::Destruirse()
{
}

void ANaveEnemigoEspiaSigiloso::Escapar()
{
}

void ANaveEnemigoEspiaSigiloso::Atacar()
{
}

void ANaveEnemigoEspiaSigiloso::movimientoObstaculo()
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