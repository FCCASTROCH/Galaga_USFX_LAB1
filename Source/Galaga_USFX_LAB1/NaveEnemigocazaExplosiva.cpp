// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocazaExplosiva.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigocazaExplosiva::ANaveEnemigocazaExplosiva()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEx(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEx.Object);

}

void ANaveEnemigocazaExplosiva::Mover(float DeltaTime)
{
}

void ANaveEnemigocazaExplosiva::Destruirse()
{

}

void ANaveEnemigocazaExplosiva::Explotar()
{
}

