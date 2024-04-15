// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
// Sets default values
ANaveEnemigo::ANaveEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	NaveEnemigoMesh->SetupAttachment(RootComponent);
	RootComponent = NaveEnemigoMesh;

    movimiento = false;
    distanciaObs = 0;
	velocidad = 1;
}



// Called when the game starts or when spawned
void ANaveEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEnemigo::movimientoObstaculo()
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

