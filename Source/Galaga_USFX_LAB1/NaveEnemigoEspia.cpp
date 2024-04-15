// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspia.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Galaga_USFX_LAB1Pawn.h"
ANaveEnemigoEspia::ANaveEnemigoEspia()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEs(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh15"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEs.Object);
    Timer = 0.0f; //Inicializa el timer en 0    
    TiempoTranscurrido = 0.0f;

    
}


void ANaveEnemigoEspia::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
    if (movimiento) {
        movimientoObstaculo();
    }
}
void ANaveEnemigoEspia::movimientoObstaculo()
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
void ANaveEnemigoEspia::BeginPlay()
{
    Super::BeginPlay();
}

void ANaveEnemigoEspia::Mover(float DeltaTime)
{

    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    float NewY; //Declara la nueva posición en Y

    float Velocidad = 200.0f; //Declara la velocidad de la nave 
    float NewX; //Declara la nueva posición en X  


    // Si han pasado más de 5 segundos, cambia la pendiente
    if (Timer <= 1.0f && Timer >= 0)
    {
        NewX = PosicionActual.X - 2 * Velocidad * DeltaTime;
        NewY = PosicionActual.Y;

    }
    else
    {

        NewX = PosicionActual.X + Velocidad * DeltaTime;
        NewY = PosicionActual.Y + Velocidad * DeltaTime;
    }
    TiempoTranscurrido += PI / 2 * DeltaTime;
    Timer = FMath::Sin(TiempoTranscurrido); //Alternando para que sea positivo y negativo

    // Calcula las nuevas posiciones en X e Y


    // Actualiza la posición del actor
    SetActorLocation(FVector(NewX, NewY, PosicionActual.Z));

    if (GetActorLocation().X <= -1800.0f)
    {

        SetActorLocation(FVector(1850.0f, NewY, PosicionActual.Z));

    }
    if (GetActorLocation().Y >= 1850)
    {
        SetActorLocation(FVector(NewX, -1850.0f, PosicionActual.Z));
    }

    if (GetActorLocation().Y <= -1850)
    {
        SetActorLocation(FVector(NewX, 1850.0f, PosicionActual.Z));
    }
}
void ANaveEnemigoEspia::Disparar()
{

}

void ANaveEnemigoEspia::Destruirse()
{
}
void ANaveEnemigoEspia::Escapar()
{
}
void ANaveEnemigoEspia::Atacar()
{
}


