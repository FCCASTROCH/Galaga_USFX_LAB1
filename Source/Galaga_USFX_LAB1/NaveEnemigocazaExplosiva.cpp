// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocazaExplosiva.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigocazaExplosiva::ANaveEnemigocazaExplosiva()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEx(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEx.Object);

}
void ANaveEnemigocazaExplosiva::BeginPlay()
{
		Super::BeginPlay();
}
void ANaveEnemigocazaExplosiva::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);
	if (movimiento) {
		movimientoObstaculo();
	}
}
void ANaveEnemigocazaExplosiva::movimientoObstaculo()
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
void ANaveEnemigocazaExplosiva::Mover(float DeltaTime)
{
}

void ANaveEnemigocazaExplosiva::Destruirse()
{

}

void ANaveEnemigocazaExplosiva::Explotar()
{
}

