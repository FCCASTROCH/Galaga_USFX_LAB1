// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoKamikase.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoKamikase::ANaveEnemigoKamikase()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveK(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh12"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveK.Object);
	
}

void ANaveEnemigoKamikase::Mover(float DeltaTime)
{

}

void ANaveEnemigoKamikase::Disparar()
{
}

void ANaveEnemigoKamikase::Destruirse()
{
}

void ANaveEnemigoKamikase::Escapar()
{
}
void ANaveEnemigoKamikase::Atacar()
{
}