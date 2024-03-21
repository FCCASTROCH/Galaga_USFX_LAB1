// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoTransporteExplosivos.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoTransporteExplosivos::ANaveEnemigoTransporteExplosivos()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoTransporteExplosivos1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave Exp"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigoTransporteExplosivos1.Object);
	NaveEnemigoMesh->SetupAttachment(RootComponent);
	RootComponent = NaveEnemigoMesh;
}

void ANaveEnemigoTransporteExplosivos::Mover(float DeltaTime)
{
}

void ANaveEnemigoTransporteExplosivos::Disparar()
{
}

void ANaveEnemigoTransporteExplosivos::Destruirse()
{
}

void ANaveEnemigoTransporteExplosivos::Escapar()
{
}

void ANaveEnemigoTransporteExplosivos::Atacar()
{
}
