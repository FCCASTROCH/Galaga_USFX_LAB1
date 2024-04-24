// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNaves.h"

// Sets default values
APeticionNaves::APeticionNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APeticionNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APeticionNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//
//ANaveEnemigo* APeticionNaves::Peticion(FString Categoria, FVector pocision, FRotator Rotacion)
//{
//	ANaveEnemigo* NaveEnemigo = CrearNaves(Categoria, pocision, Rotacion);
//
//	return NaveEnemigo;
//}
