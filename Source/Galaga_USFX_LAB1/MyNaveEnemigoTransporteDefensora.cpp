// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigoTransporteDefensora.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
AMyNaveEnemigoTransporteDefensora::AMyNaveEnemigoTransporteDefensora()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveE(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveEnemigoTransporteDefensora = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh"));
	MeshNaveEnemigoTransporteDefensora->SetStaticMesh(MeshNaveE.Object);
	MeshNaveEnemigoTransporteDefensora->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemigoTransporteDefensora;
}

void AMyNaveEnemigoTransporteDefensora::Mover(float DeltaTime)
{
}

void AMyNaveEnemigoTransporteDefensora::Disparar()
{
}

void AMyNaveEnemigoTransporteDefensora::Destruirse()
{
}

void AMyNaveEnemigoTransporteDefensora::Escapar()
{
}

void AMyNaveEnemigoTransporteDefensora::Atacar()
{
}
