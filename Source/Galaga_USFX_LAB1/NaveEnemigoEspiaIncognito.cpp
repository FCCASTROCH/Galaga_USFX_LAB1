// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigoEspiaIncognito.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigoEspiaIncognito::ANaveEnemigoEspiaIncognito()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveIN(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveIncognito = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh14"));
	MeshNaveIncognito->SetStaticMesh(MeshNaveIN.Object);
	MeshNaveIncognito->SetupAttachment(RootComponent);
	RootComponent = MeshNaveIncognito;
}

void ANaveEnemigoEspiaIncognito::Mover(float DeltaTime)
{
	
}

void ANaveEnemigoEspiaIncognito::Disparar()
{
}

void ANaveEnemigoEspiaIncognito::Destruirse()
{
}

void ANaveEnemigoEspiaIncognito::Escapar()
{
}

void ANaveEnemigoEspiaIncognito::Atacar()
{
}

void ANaveEnemigoEspiaIncognito::ModoIncognito()
{
}
