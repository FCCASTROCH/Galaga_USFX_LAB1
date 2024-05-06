// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNavesSuicidas.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoKamikase.h"
#include "NaveEnemigoKamikaseExplosivo.h"
#include "NaveEnemigoKamikaseAgil.h"
#include "NaveEnemigocazaExplosiva.h"
ANaveEnemigo* APeticionNavesSuicidas::CrearNaveEnemiga(FString NombreNave)
{

	if (NombreNave == "NaveKamikaseAgil")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoKamikaseAgil>(ANaveEnemigoKamikaseAgil::StaticClass());
	}
	else if (NombreNave == "NaveCazaExplosiva")
	{
		return GetWorld()->SpawnActor<ANaveEnemigocazaExplosiva>(ANaveEnemigocazaExplosiva::StaticClass());
	}
	else if (NombreNave == "NaveKamikaseExplosivo")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoKamikaseExplosivo>(ANaveEnemigoKamikaseExplosivo::StaticClass());
	}
	else if (NombreNave == "NaveKamikase") {
		return GetWorld()->SpawnActor<ANaveEnemigoKamikase>(ANaveEnemigoKamikase::StaticClass());
	}
		return nullptr;
}
