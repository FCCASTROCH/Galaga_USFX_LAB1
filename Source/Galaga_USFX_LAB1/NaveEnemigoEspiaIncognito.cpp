// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspiaIncognito.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigoEspiaIncognito::ANaveEnemigoEspiaIncognito()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveIN(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh14"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveIN.Object);
}
void ANaveEnemigoEspiaIncognito::BeginPlay()
{
	Super::BeginPlay();
}
void ANaveEnemigoEspiaIncognito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	if (movimiento) {
		movimientoObstaculo();
	}
}
void ANaveEnemigoEspiaIncognito::movimientoObstaculo()
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
void ANaveEnemigoEspiaIncognito::Mover(float DeltaTime)
{
	
}

void ANaveEnemigoEspiaIncognito::Disparar()
{
}

void ANaveEnemigoEspiaIncognito::Destruirse()
{
}

void ANaveEnemigoEspiaIncognito::Escapar()
{
}

void ANaveEnemigoEspiaIncognito::Atacar()
{
}

void ANaveEnemigoEspiaIncognito::ModoIncognito()
{
}
