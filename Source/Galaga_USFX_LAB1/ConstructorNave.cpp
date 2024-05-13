// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorNave.h"
#include "NaveEnemigoNodriza.h"
#include "TimerManager.h"
// Sets default values
AConstructorNave::AConstructorNave()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorNave::BeginPlay()
{
	Super::BeginPlay();
	naveNodriza = GetWorld()->SpawnActor<ANaveEnemigoNodriza>(ANaveEnemigoNodriza::StaticClass(), FVector(-900, -1250, 255), FRotator(0, 0, 0));
	naveNodriza->SetActorScale3D(FVector(1.5, 1.5, 1.5));
	naveNodriza->SetTipoMovimiento("Movimiento 2");
	naveNodriza->SetBarrera("Barrera 2");
}

// Called every frame
void AConstructorNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AConstructorNave::ConstruirMovimientoDeNave()
{
	naveNodriza->MovimientoDeNave();
}

void AConstructorNave::ConstruirPocisionNaves()
{
	naveNodriza->PocisionNaves("Redondo");
}

void AConstructorNave::ConstruirBarreraEscudo()
{
	naveNodriza->BarreraEscudo();
}

void AConstructorNave::ConstruirSpawnNaves()
{
	naveNodriza->SpawnNaves();
}


class ANaveEnemigoNodriza* AConstructorNave::getNaveNodriza()
{
	return naveNodriza;
}
