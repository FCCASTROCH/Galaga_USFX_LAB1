// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodrizaReparadora.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoNodrizaReparadora::ANaveEnemigoNodrizaReparadora()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoNodrizaReparadora1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh5"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigoNodrizaReparadora1.Object);
	
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

