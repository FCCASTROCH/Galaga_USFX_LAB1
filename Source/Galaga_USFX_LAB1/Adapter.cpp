// Fill out your copyright notice in the Description page of Project Settings.


#include "Adapter.h"
#include "Ball.h"
// Sets default values
AAdapter::AAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapter::BeginPlay()
{
	Super::BeginPlay();
	ball = GetWorld()->SpawnActor<ABall>(ABall::StaticClass(), FVector(-770, 10, 180), FRotator::ZeroRotator);

}

// Called every frame
void AAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAdapter::Lanzar()
{
	if (!ball) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("No se pudo spawnear la pelota")));
		return;
	}
	ball->Launch();
}

