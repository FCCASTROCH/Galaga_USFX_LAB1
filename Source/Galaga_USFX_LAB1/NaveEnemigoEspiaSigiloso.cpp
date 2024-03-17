// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspiaSigiloso.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoEspiaSigiloso::ANaveEnemigoEspiaSigiloso()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveSi(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveSigiloso = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh13"));
	MeshNaveSigiloso->SetStaticMesh(MeshNaveSi.Object);
	MeshNaveSigiloso->SetupAttachment(RootComponent);
	RootComponent = MeshNaveSigiloso;
}

void ANaveEnemigoEspiaSigiloso::Mover(float DeltaTime)
{
}

void ANaveEnemigoEspiaSigiloso::Disparar()
{
}

void ANaveEnemigoEspiaSigiloso::Destruirse()
{
}

void ANaveEnemigoEspiaSigiloso::Escapar()
{
}

void ANaveEnemigoEspiaSigiloso::Atacar()
{
}
