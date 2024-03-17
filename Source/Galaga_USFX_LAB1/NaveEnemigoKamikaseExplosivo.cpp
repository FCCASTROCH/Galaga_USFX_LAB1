// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoKamikaseExplosivo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoKamikaseExplosivo::ANaveEnemigoKamikaseExplosivo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveExplosiv(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoKamikaseExplosivo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh10"));
	MeshNaveEnemigoKamikaseExplosivo->SetStaticMesh(MeshNaveExplosiv.Object);
	MeshNaveEnemigoKamikaseExplosivo->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoKamikaseExplosivo;
}

void ANaveEnemigoKamikaseExplosivo::Mover(float DeltaTime)
{
}

void ANaveEnemigoKamikaseExplosivo::Disparar()
{
}

void ANaveEnemigoKamikaseExplosivo::Destruirse()
{
}

void ANaveEnemigoKamikaseExplosivo::Escapar()
{
}

void ANaveEnemigoKamikaseExplosivo::Atacar()
{
}
