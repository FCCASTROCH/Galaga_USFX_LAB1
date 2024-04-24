// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocazaAsesina.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigocazaAsesina::ANaveEnemigocazaAsesina()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveAsesina1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
		//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
		NaveEnemigoMesh->SetStaticMesh(MeshNaveAsesina1.Object);
		
}
void ANaveEnemigocazaAsesina::BeginPlay()
{
	Super::BeginPlay();
}
void ANaveEnemigocazaAsesina::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);
	if (movimiento) {
		movimientoObstaculo();
	}
}
void ANaveEnemigocazaAsesina::movimientoObstaculo()
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
void ANaveEnemigocazaAsesina::Atacar()
{
}

void ANaveEnemigocazaAsesina::Mover(float DeltaTime)
{
}

void ANaveEnemigocazaAsesina::Disparar()
{
}

void ANaveEnemigocazaAsesina::Destruirse()
{
}

void ANaveEnemigocazaAsesina::AtaqueEspecial()
{
}
