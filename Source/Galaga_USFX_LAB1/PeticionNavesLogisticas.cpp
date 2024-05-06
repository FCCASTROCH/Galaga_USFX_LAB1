// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNavesLogisticas.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaIncognito.h"
#include "NaveEnemigoEspiaSigiloso.h"
ANaveEnemigo* APeticionNavesLogisticas::CrearNaveEnemiga(FString NombreNave)
{
	if (NombreNave == "NaveEspia")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoEspia>(ANaveEnemigoEspia::StaticClass());
	}
	else if (NombreNave == "NaveEpiaIncognito")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoEspiaIncognito>(ANaveEnemigoEspiaIncognito::StaticClass());
	}
	else if (NombreNave == "NaveEspiaSigiloso")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoEspiaSigiloso>(ANaveEnemigoEspiaSigiloso::StaticClass());
	}
	else
	{
		return nullptr;
	}

}
