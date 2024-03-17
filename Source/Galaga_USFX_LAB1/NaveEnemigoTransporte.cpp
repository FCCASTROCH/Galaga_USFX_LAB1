// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoTransporte.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

ANaveEnemigoTransporte::ANaveEnemigoTransporte()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoTransporte1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoTransporte = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh1"));
	MeshNaveEnemigoTransporte->SetStaticMesh(MeshNaveEnemigoTransporte1.Object);
	MeshNaveEnemigoTransporte->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoTransporte;
}

ANaveEnemigoTransporte::~ANaveEnemigoTransporte()
{
}

void ANaveEnemigoTransporte::Mover(float DeltaTime)
{
}
void ANaveEnemigoTransporte::Disparar()
{
	//disparar
}

void ANaveEnemigoTransporte::Destruirse()
{
}

void ANaveEnemigoTransporte::Escapar()
{
}

void ANaveEnemigoTransporte::Atacar()
{
}
