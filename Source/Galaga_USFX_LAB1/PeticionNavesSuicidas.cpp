// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNavesSuicidas.h"
#include "NaveEnemigo.h"
#include "NaveEnemigoKamikase.h"
#include "NaveEnemigoKamikaseExplosivo.h"
#include "NaveEnemigoKamikaseAgil.h"
#include "NaveEnemigocazaExplosiva.h"
ANaveEnemigo* APeticionNavesSuicidas::CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion)
{

	if (NombreNave == "NaveKamikaseAgil")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoKamikaseAgil>(ANaveEnemigoKamikaseAgil::StaticClass(), Poscision, Rotacion);
	}
	else if (NombreNave == "NaveCazaExplosiva")
	{
		return GetWorld()->SpawnActor<ANaveEnemigocazaExplosiva>(ANaveEnemigocazaExplosiva::StaticClass(), Poscision, Rotacion);
	}
	else if (NombreNave == "NaveKamikaseExplosivo")
	{
		return GetWorld()->SpawnActor<ANaveEnemigoKamikaseExplosivo>(ANaveEnemigoKamikaseExplosivo::StaticClass(), Poscision, Rotacion);
	}
	else if (NombreNave == "NaveKamikase") {
		return GetWorld()->SpawnActor<ANaveEnemigoKamikase>(ANaveEnemigoKamikase::StaticClass(), Poscision, Rotacion);
	}
		return nullptr;
}
