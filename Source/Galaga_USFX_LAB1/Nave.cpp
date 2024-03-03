// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "Components/staticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANave::ANave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMesh1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave mesh"));
	NaveMesh->SetStaticMesh(NaveMesh1.Object);
	NaveMesh->SetupAttachment(RootComponent);
	RootComponent = NaveMesh;
}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

