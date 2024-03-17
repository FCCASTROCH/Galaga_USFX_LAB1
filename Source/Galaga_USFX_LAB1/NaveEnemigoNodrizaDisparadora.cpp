// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoNodrizaDisparadora.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoNodrizaDisparadora::ANaveEnemigoNodrizaDisparadora()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigoNodrizaDisparadora1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoNodrizaDisparadora = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh6"));
	MeshNaveEnemigoNodrizaDisparadora->SetStaticMesh(MeshNaveEnemigoNodrizaDisparadora1.Object);
	MeshNaveEnemigoNodrizaDisparadora->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoNodrizaDisparadora;
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

void ANaveEnemigoNodrizaDisparadora::Escapar()
{
}

void ANaveEnemigoNodrizaDisparadora::Atacar()
{
}
