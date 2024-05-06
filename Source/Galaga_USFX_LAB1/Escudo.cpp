// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo.h"

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

    // Verifica si se encontró el StaticMesh
    if (ShipMesh.Succeeded())
    {
        // Asigna el StaticMesh al componente de malla estática
        Escudo->SetStaticMesh(ShipMesh.Object);

        // Modifica la escala del componente de malla estática
        Escudo->SetWorldScale3D(FVector(1.0f, 3.0f, 1.0f)); // Aquí se ajusta la escala
    }
    VidaMaxima = 150.f; // Puedes ajustar el valor inicial de la vida máxima
    VidaActual = VidaMaxima; // Inicializamos la vida actual con la vida máxima al comenzar
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

