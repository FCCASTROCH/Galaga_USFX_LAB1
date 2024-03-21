// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoKamikaseAgil.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoKamikaseAgil::ANaveEnemigoKamikaseAgil()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveKA(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh11"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveKA.Object);
	
}

void ANaveEnemigoKamikaseAgil::Mover(float DeltaTime)
{
}

void ANaveEnemigoKamikaseAgil::Disparar()
{
}

void ANaveEnemigoKamikaseAgil::Destruirse()
{
}

void ANaveEnemigoKamikaseAgil::Escapar()
{
}

void ANaveEnemigoKamikaseAgil::Atacar()
{
}

void ANaveEnemigoKamikaseAgil::velocidadAumentada()
{
}
