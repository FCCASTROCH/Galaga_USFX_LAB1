// Fill out your copyright notice in the Description page of Project Settings.


#include "Bonus.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include"Engine/StaticMesh.h"

// Sets default values
ABonus::ABonus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BonusMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	BonusMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bonus Mesh"));
	BonusMesh->SetStaticMesh(BonusMeshAsset.Object);
	RootComponent = BonusMesh;
}

// Called when the game starts or when spawned
void ABonus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABonus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

