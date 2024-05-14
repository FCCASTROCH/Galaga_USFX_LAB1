// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//#include "NaveEnemigo.h"

#include "DefensaDirector.h"
#include "BNaveNodrizaConcreto.h"
#include "Galaga_USFX_LAB1GameMode.generated.h"
class ANaveEnemigoTransporte;
class ANaveEnemigocaza;
class ANave;
class ANaveEnemigo;
//class ADefensaDirector;
//class ABNaveNodrizaConcreto;

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB1GameMode();
	protected:
		virtual void BeginPlay() override;
public:
	ANaveEnemigo* NaveEnemigo1;
	ANave* NaveJugador1;
	ANaveEnemigoTransporte* NaveEnemigaTransporte01;
	ANaveEnemigocaza* NaveEnemigaCaza01;
private:
	int tiempotranscurrido;
public:
	// Inicializada como falsa
	TArray<ANaveEnemigocaza*> TANavesEnemigasCaza;
//	FString GetUniqueNameForNave(); // Declaraci�n de la funci�n aqu�
	//TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SpawnCapsulas();
	FTimerHandle TimerHandle_SpawnCapsulas;
	FTimerHandle AgregarNaves;
TMap<int32, ANaveEnemigo*> NaveEnemig; // Mapa de naves enemigas

void AgregarPeticiones(); // Declaraci�n de la funci�n AgregarPeticiones



TMap<int32, FString> Peticiones; // Mapa de peticiones de naves

void AgregarNaveEnemiga(int32 ID, ANaveEnemigo* NuevaNave);
void ModificarNaveEnemiga(int32 ID, ANaveEnemigo* NuevaNave);
//void EliminarNaveEnemiga(int32 ID);

void SpawnNaveEnemiga(); // Declaraci�n de la funci�n SpawnNaveEnemiga
void ModificarNaves(); // Declaraci�n de la funci�n ModificarNaves
//void EliminarNavesPeriodicamente(); // Declaraci�n de la funci�n EliminarNavesPeriodicamente

FTimerHandle SpawnTimerHandle; // Manejador del temporizador de spawn
FTimerHandle ModifyTimerHandle; // Manejador del temporizador de agregar fila
FTimerHandle DeleteTimerHandle; // Manejador del temporizador de eliminar naves
int32 Cont;
float TimerController;

//UPROPERTY(VisibleAnywhere, Category = "GameModeBase")


//UPROPERTY(VisibleAnywhere, Category = "GameModeBase")

class ADefensaDirector* DirectorNodriza;
class ABNaveNodrizaConcreto* BNave1;
class AConstructorNave* BNave;
//clase adapter
UPROPERTY(VisibleAnywhere, Category = "Game mode")
class AGalaga_USFX_LAB1Pawn* Jugador;

UPROPERTY(VisibleAnywhere, Category = "Game mode")
class AAdapter* Adaptador;
};



