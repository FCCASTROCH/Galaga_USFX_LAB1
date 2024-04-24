// Fill out your copyright notice in the Description page of Project Settings.


#include "PeticionNavesAtaque.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigocazaAsesina.h"
#include "NaveEnemigocazaExplosiva.h"
#include "NaveEnemigoNodrizaDisparadora.h"
ANaveEnemigo* APeticionNavesAtaque::CrearNaves(FString NombreNave, FVector Poscision, FRotator Rotacion)
{
	
	if (NombreNave == "NavecazaAsesina")
	{
		return GetWorld()->SpawnActor<ANaveEnemigocazaAsesina>(ANaveEnemigocazaAsesina::StaticClass(), Poscision, Rotacion);
	}
	else if (NombreNave == "Navecaza")
	{
		return GetWorld()->SpawnActor<ANaveEnemigocaza>(ANaveEnemigocaza::StaticClass(), Poscision, Rotacion);
	}
	else if (NombreNave == "NaveNodrizaDisparadora") {
		return GetWorld()->SpawnActor<ANaveEnemigoNodrizaDisparadora>(ANaveEnemigoNodrizaDisparadora::StaticClass(), Poscision, Rotacion);
	}
		return nullptr;
}
