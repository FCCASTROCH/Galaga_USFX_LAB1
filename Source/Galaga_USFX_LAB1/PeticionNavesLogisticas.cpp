// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNavesLogisticas.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaIncognito.h"
#include "NaveEnemigoEspiaSigiloso.h"

ANaveEnemigo* APeticionNavesLogisticas::CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion)
{
	if (NombreNave == "NaveEspia")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoEspia>(ANaveEnemigoEspia::StaticClass(),Poscision, Rotacion);
	}
	else if (NombreNave == "NaveEpiaIncognito")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoEspiaIncognito>(ANaveEnemigoEspiaIncognito::StaticClass(),Poscision, Rotacion);
	}
	else if (NombreNave == "NaveEspiaSigiloso")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoEspiaSigiloso>(ANaveEnemigoEspiaSigiloso::StaticClass(),Poscision, Rotacion);
	}
	else
	{
		return nullptr;
	}

}
