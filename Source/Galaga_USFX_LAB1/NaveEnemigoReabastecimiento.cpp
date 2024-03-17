// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoReabastecimiento.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoReabastecimiento::ANaveEnemigoReabastecimiento()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoReabastecimiento1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoReabastecimiento = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh4"));
	MeshNaveEnemigoReabastecimiento->SetStaticMesh(MeshNaveEnemigoReabastecimiento1.Object);
	MeshNaveEnemigoReabastecimiento->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoReabastecimiento;
}
ANaveEnemigoReabastecimiento::~ANaveEnemigoReabastecimiento()
{
}

void ANaveEnemigoReabastecimiento::Mover(float DeltaTime)
{

}

void ANaveEnemigoReabastecimiento::Disparar()
{
}
void ANaveEnemigoReabastecimiento::Destruirse()
{
}
void ANaveEnemigoReabastecimiento::Escapar()
{
}
void ANaveEnemigoReabastecimiento::Atacar()
{
}
