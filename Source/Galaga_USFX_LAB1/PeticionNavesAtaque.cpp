// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNavesAtaque.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigocazaAsesina.h"
#include "NaveEnemigocazaExplosiva.h"
#include "NaveEnemigoNodrizaDisparadora.h"
ANaveEnemigo* APeticionNavesAtaque::CrearNaveEnemiga(FString NombreNave)
{
	
	if (NombreNave == "NavecazaAsesina")
	{
		return GetWorld()->SpawnActor<ANaveEnemigocazaAsesina>(ANaveEnemigocazaAsesina::StaticClass());
	}
	else if (NombreNave == "Navecaza")
	{
		return GetWorld()->SpawnActor<ANaveEnemigocaza>(ANaveEnemigocaza::StaticClass());
	}
	else if (NombreNave == "NaveNodrizaDisparadora") {
		return GetWorld()->SpawnActor<ANaveEnemigoNodrizaDisparadora>(ANaveEnemigoNodrizaDisparadora::StaticClass());
	}
		return nullptr;
}
