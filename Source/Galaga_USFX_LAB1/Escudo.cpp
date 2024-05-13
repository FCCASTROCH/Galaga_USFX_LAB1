// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo.h"
#include "Galaga_USFX_LAB1Pawn.h"
#include "NaveEnemigoNodriza.h"
// Sets default values
AEscudo::AEscudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

    // Crea el componente de malla estática
    UStaticMeshComponent* Escudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Escudo"));
    RootComponent = Escudo;

    FRotator CurrentRotation = Escudo->GetRelativeRotation();

    // Establece la rotación absoluta del componente de malla estática para evitar rotaciones no deseadas
    Escudo->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));

    // Verifica si se encontró el StaticMesh
    if (ShipMesh.Succeeded())
    {
        // Asigna el StaticMesh al componente de malla estática
        Escudo->SetStaticMesh(ShipMesh.Object);

        // Modifica la escala del componente de malla estática
        Escudo->SetWorldScale3D(FVector(2.0f, 3.0f, 1.0f)); // Aquí se ajusta la escala
    }
    VidaMaxima = 150.f; // Puedes ajustar el valor inicial de la vida máxima
    VidaActual = VidaMaxima; // Inicializamos la vida actual con la vida máxima al comenzar
	distanciaObs = 0;
}

void AEscudo::SeguirNave(FVector posicion)
{/*
	FVector posicionEscudo = GetActorLocation();
	FVector direccion = posicion - posicionEscudo;

	direccion.Normalize();
	FRotator rotacion = direccion.Rotation();*/
    //SetActorRotation(rotacion);
}

void AEscudo::DisminuirResistencia(float Cantidad)
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

void AEscudo::MovimientoDeNave()
{
}

void AEscudo::PocisionNaves(FString forma)
{
}

void AEscudo::BarreraEscudo()
{
    if (Barrera == "Barrera 1") {
        // Spawnear la barrera solo si no se ha spawneado antes
        for (int i = 0; i < 7; i++) {
            FVector ubicacionEscudo = FVector(-300.0f, 1000.0f - i * 350, 216.0f);
            AEscudo* pared = GetWorld()->SpawnActor<AEscudo>(AEscudo::StaticClass(), ubicacionEscudo, FRotator(0, 0, 0));
        }
        // Marcamos que la barrera ha sido spawneada
        GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Barrera spwneada"));
    }
}

void AEscudo::SpawnNaves()
{
}

void AEscudo::DestruirNave()
{

}

// Called when the game starts or when spawned
void AEscudo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AEscudo::movimientoObstaculo()
{
    // Encuentra el objeto del jugador
	ANaveEnemigoNodriza* Nave = GetWorld()->GetFirstPlayerController()->GetPawn<ANaveEnemigoNodriza>();

    // Verifica si se encontró al jugador
    if (Nave)
    {
        // Calcula la dirección hacia el jugador
        FVector DirectionToPlayer = Nave->GetActorLocation() - GetActorLocation();
        DirectionToPlayer.Normalize();

        // Calcula la nueva posición para el obstáculo
        FVector NewPosition = Nave->GetActorLocation() - (DirectionToPlayer * (200 + distanciaObs)); // 100 es la distancia constante

        // Mueve el obstáculo hacia la nueva posición
        SetActorLocation(NewPosition);
    }
}


