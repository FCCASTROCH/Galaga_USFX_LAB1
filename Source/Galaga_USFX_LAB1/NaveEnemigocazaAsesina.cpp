// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocazaAsesina.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigocazaAsesina::ANaveEnemigocazaAsesina()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveAsesina1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
		//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
		NaveEnemigoMesh->SetStaticMesh(MeshNaveAsesina1.Object);
		
}

void ANaveEnemigocazaAsesina::Atacar()
{
}

void ANaveEnemigocazaAsesina::Mover(float DeltaTime)
{
}

void ANaveEnemigocazaAsesina::Disparar()
{
}

void ANaveEnemigocazaAsesina::Destruirse()
{
}

void ANaveEnemigocazaAsesina::AtaqueEspecial()
{
}
