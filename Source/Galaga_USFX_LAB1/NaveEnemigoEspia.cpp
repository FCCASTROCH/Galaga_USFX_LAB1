// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspia.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoEspia::ANaveEnemigoEspia()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEs(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoEspia = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh15"));
	MeshNaveEnemigoEspia->SetStaticMesh(MeshNaveEs.Object);
	MeshNaveEnemigoEspia->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoEspia;
}

ANaveEnemigoEspia::~ANaveEnemigoEspia()
{
}

void ANaveEnemigoEspia::Mover(float DeltaTime)
{
}
void ANaveEnemigoEspia::Disparar()
{

}

void ANaveEnemigoEspia::Destruirse()
{
}
void ANaveEnemigoEspia::Escapar()
{
}
void ANaveEnemigoEspia::Atacar()
{
}
