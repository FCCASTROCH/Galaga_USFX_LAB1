// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoTransporteExplosivos.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoTransporteExplosivos::ANaveEnemigoTransporteExplosivos()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoTransporteExplosivos1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoTransporteExplosivos = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave Exp"));
	MeshNaveEnemigoTransporteExplosivos->SetStaticMesh(MeshNaveEnemigoTransporteExplosivos1.Object);
	MeshNaveEnemigoTransporteExplosivos->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoTransporteExplosivos;
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
