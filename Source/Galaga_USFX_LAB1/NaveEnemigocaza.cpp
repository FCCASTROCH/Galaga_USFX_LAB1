// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocaza.h"
#include "Components/staticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"

ANaveEnemigocaza::ANaveEnemigocaza()
{
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2.0f;
	cantidadBombas = 5;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);
}

ANaveEnemigocaza::~ANaveEnemigocaza()
{
}

void ANaveEnemigocaza::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigocaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);
	if (movimiento) {
		movimientoObstaculo();
	}
}

void ANaveEnemigocaza::Mover(float DeltaTime)
{

	// Obtiene la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime * velocidad;

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigocaza::Disparar()
{

}

void ANaveEnemigocaza::Destruirse()
{
	// Verificar si la vida actual es menor o igual a cero

		// Destruir la nave enemiga si su vida es igual o menor a cero
		Destroy();

}
void ANaveEnemigocaza::Escapar()
{
}
void ANaveEnemigocaza::Atacar()
{
}
void ANaveEnemigocaza::movimientoObstaculo()
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

void ANaveEnemigocaza::DisminuirVida(float Cantidad)
{
	// Disminuir la vida actual
	VidaActual -= Cantidad;

	// Verificar si la vida actual es menor o igual a cero
	if (VidaActual <= 0.f)
	{
		// Destruir la nave enemiga si su vida es igual o menor a cero
		Destroy();
	}
}