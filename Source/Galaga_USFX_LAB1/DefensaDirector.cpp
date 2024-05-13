// Fill out your copyright notice in the Description page of Project Settings.


#include "DefensaDirector.h"
#include "ConstructorNave.h"
#include "NaveEnemigoNodriza.h"

// Sets default values
ADefensaDirector::ADefensaDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADefensaDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefensaDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADefensaDirector::construirNaveNodriza()
{

	ConstruyendoND->ConstruirMovimientoDeNave();
	ConstruyendoND->ConstruirPocisionNaves();
	ConstruyendoND->ConstruirBarreraEscudo();
	ConstruyendoND->ConstruirSpawnNaves();
}

void ADefensaDirector::Construyendo(AActor* constructor)
{
	ConstruyendoND = Cast<IBNaveNodriza>(constructor);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Construyendo......"));
	GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Green, TEXT("Construyendo Escudos....."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Construyendo Naves....."));
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, TEXT("Nave Se Retira ....."));

	//otro nave
}

ANaveEnemigoNodriza* ADefensaDirector::obtenerNave()
{
	return ConstruyendoND->getNaveNodriza();
}
