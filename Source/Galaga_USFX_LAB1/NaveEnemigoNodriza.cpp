// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodriza.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoNodriza::ANaveEnemigoNodriza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveNodriza(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh8"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveNodriza.Object);
	NaveEnemigoMesh->SetupAttachment(RootComponent);
	RootComponent = NaveEnemigoMesh;
}

ANaveEnemigoNodriza::~ANaveEnemigoNodriza()
{

}

void ANaveEnemigoNodriza::Mover(float DeltaTime)
{
}

void ANaveEnemigoNodriza::Disparar()
{
}
void ANaveEnemigoNodriza::Atacar() {

}
void ANaveEnemigoNodriza::Destruirse() {

}
void ANaveEnemigoNodriza::Escapar() {

}