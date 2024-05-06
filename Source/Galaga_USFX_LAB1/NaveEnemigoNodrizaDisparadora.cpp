// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodrizaDisparadora.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoNodrizaDisparadora::ANaveEnemigoNodrizaDisparadora()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoNodrizaDisparadora1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	//NaveEnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh6"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigoNodrizaDisparadora1.Object);
	
}

void ANaveEnemigoNodrizaDisparadora::Mover(float DeltaTime)
{
}

void ANaveEnemigoNodrizaDisparadora::Disparar()
{
}

void ANaveEnemigoNodrizaDisparadora::Destruirse()
{
}

