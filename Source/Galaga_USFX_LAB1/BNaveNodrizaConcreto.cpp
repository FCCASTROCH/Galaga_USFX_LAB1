// Fill out your copyright notice in the Description page of Project Settings.


#include "BNaveNodrizaConcreto.h"
#include "NaveEnemigoNodriza.h"
#include "TimerManager.h"
// Sets default values
ABNaveNodrizaConcreto::ABNaveNodrizaConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABNaveNodrizaConcreto::BeginPlay()
{
	Super::BeginPlay();
	naveNodriza = GetWorld()->SpawnActor<ANaveEnemigoNodriza>(ANaveEnemigoNodriza::StaticClass(), FVector(-900, 1250, 255), FRotator(0, 0, 0));
	naveNodriza->SetActorScale3D(FVector(0.5, 0.5, 0.5));
	naveNodriza->SetTipoMovimiento("Movimiento 1");
}

// Called every frame
void ABNaveNodrizaConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ABNaveNodrizaConcreto::ConstruirMovimientoDeNave()
{
	naveNodriza->MovimientoDeNave();
}

void ABNaveNodrizaConcreto::ConstruirPocisionNaves()
{
	naveNodriza->PocisionNaves("Cuadrado");
}

void ABNaveNodrizaConcreto::ConstruirBarreraEscudo()
{
	naveNodriza->BarreraEscudo();
}

void ABNaveNodrizaConcreto::ConstruirSpawnNaves()
{
	naveNodriza->SpawnNaves();
}


class ANaveEnemigoNodriza* ABNaveNodrizaConcreto::getNaveNodriza()
{
	return naveNodriza;
}
