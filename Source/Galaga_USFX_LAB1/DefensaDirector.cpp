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

	constructorNaves->ConstruirMovimientoDeNave();
	constructorNaves->ConstruirPocisionNaves();
	constructorNaves->ConstruirBarreraEscudo();
	constructorNaves->ConstruirSpawnNaves();
}

void ADefensaDirector::Construyendo(AActor* constructor)
{
	constructorNaves = Cast<IBNaveNodriza>(constructor);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Constructor enviado"));
}

ANaveEnemigoNodriza* ADefensaDirector::obtenerNave()
{
	return constructorNaves->getNaveNodriza();
}
