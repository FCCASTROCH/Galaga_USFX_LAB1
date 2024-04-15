// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo.h"

// Sets default values
AEscudo::AEscudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Carga el StaticMesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));

    // Crea el componente de malla est�tica
    UStaticMeshComponent* Escudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Escudo"));
    RootComponent = Escudo;

    // Verifica si se encontr� el StaticMesh
    if (ShipMesh.Succeeded())
    {
        // Asigna el StaticMesh al componente de malla est�tica
        Escudo->SetStaticMesh(ShipMesh.Object);

        // Modifica la escala del componente de malla est�tica
        Escudo->SetWorldScale3D(FVector(1.0f, 3.0f, 1.0f)); // Aqu� se ajusta la escala
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

