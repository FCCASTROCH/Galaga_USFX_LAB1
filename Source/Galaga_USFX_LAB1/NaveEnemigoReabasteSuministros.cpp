// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoReabasteSuministros.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoReabasteSuministros::ANaveEnemigoReabasteSuministros()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoReabasteSuministros1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoReabasteSuministros = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh2"));
	MeshNaveEnemigoReabasteSuministros->SetStaticMesh(MeshNaveEnemigoReabasteSuministros1.Object);
	MeshNaveEnemigoReabasteSuministros->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoReabasteSuministros;
}

void ANaveEnemigoReabasteSuministros::Mover(float DeltaTime)
{
}

void ANaveEnemigoReabasteSuministros::Disparar()
{
}

void ANaveEnemigoReabasteSuministros::Destruirse()
{
}

void ANaveEnemigoReabasteSuministros::Escapar()
{
}

void ANaveEnemigoReabasteSuministros::Atacar()
{
}
