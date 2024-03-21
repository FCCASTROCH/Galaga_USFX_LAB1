// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoReabasteEnergia.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoReabasteEnergia::ANaveEnemigoReabasteEnergia()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoReabasteEnergia1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh3"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigoReabasteEnergia1.Object);
	
}

void ANaveEnemigoReabasteEnergia::Mover(float DeltaTime)
{
}

void ANaveEnemigoReabasteEnergia::Disparar()
{
}

void ANaveEnemigoReabasteEnergia::Destruirse()
{
}

void ANaveEnemigoReabasteEnergia::Escapar()
{
}

void ANaveEnemigoReabasteEnergia::Atacar()
{
}
