// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigocazaExplosiva.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
ANaveEnemigocazaExplosiva::ANaveEnemigocazaExplosiva()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEx(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshNaveExplosiva = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh16"));
	MeshNaveExplosiva->SetStaticMesh(MeshNaveEx.Object);
	MeshNaveExplosiva->SetupAttachment(RootComponent);
	RootComponent = MeshNaveExplosiva;
}

void ANaveEnemigocazaExplosiva::Mover(float DeltaTime)
{
}

void ANaveEnemigocazaExplosiva::Destruirse()
{

}

void ANaveEnemigocazaExplosiva::Explotar()
{
}

