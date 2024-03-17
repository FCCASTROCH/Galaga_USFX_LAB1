// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocaza.h"
#include "Components/staticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"


ANaveEnemigocaza::ANaveEnemigocaza()
{
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 100.0f;
	cantidadBombas = 5;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigocaza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh18"));
	MeshNaveEnemigocaza->SetStaticMesh(MeshNaveEnemigocaza1.Object);
	MeshNaveEnemigocaza->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigocaza;
}

ANaveEnemigocaza::~ANaveEnemigocaza()
{
}

void ANaveEnemigocaza::BeginPlay()
{
}

void ANaveEnemigocaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
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
}
void ANaveEnemigocaza::Escapar()
{
}
void ANaveEnemigocaza::Atacar()
{
}
