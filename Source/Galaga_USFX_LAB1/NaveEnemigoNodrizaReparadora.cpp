// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodrizaReparadora.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoNodrizaReparadora::ANaveEnemigoNodrizaReparadora()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoNodrizaReparadora1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoNodrizaReparadora = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh5"));
	MeshNaveEnemigoNodrizaReparadora->SetStaticMesh(MeshNaveEnemigoNodrizaReparadora1.Object);
	MeshNaveEnemigoNodrizaReparadora->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoNodrizaReparadora;
}

void ANaveEnemigoNodrizaReparadora::Mover(float DeltaTime)
{
}

void ANaveEnemigoNodrizaReparadora::Disparar()
{
}

void ANaveEnemigoNodrizaReparadora::Destruirse()
{
}

void ANaveEnemigoNodrizaReparadora::Escapar()
{
}

void ANaveEnemigoNodrizaReparadora::Atacar()
{
}
