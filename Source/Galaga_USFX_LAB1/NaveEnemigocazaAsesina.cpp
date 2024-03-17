// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocazaAsesina.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigocazaAsesina::ANaveEnemigocazaAsesina()
{
		PrimaryActorTick.bCanEverTick = true;
		static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveAsesina1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
		MeshNaveAsesina = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh17"));
		MeshNaveAsesina->SetStaticMesh(MeshNaveAsesina1.Object);
		MeshNaveAsesina->SetupAttachment(RootComponent);
		RootComponent = MeshNaveEnemigocaza;
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
