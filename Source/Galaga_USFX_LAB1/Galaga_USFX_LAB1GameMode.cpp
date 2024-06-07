// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB1GameMode.h"
#include "Galaga_USFX_LAB1Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "NaveEnemigo.h"
#include "Nave.h"
#include "NaveEnemigoTransporte.h"
#include "MyNaveEnemigoTransporteDefensora.h"
#include "NaveEnemigoTransporteExplosivos.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigocazaAsesina.h"
#include "NaveEnemigocazaExplosiva.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoEspiaIncognito.h"
#include "NaveEnemigoEspiaSigiloso.h"
#include "NaveEnemigoKamikase.h"
#include "NaveEnemigoKamikaseExplosivo.h"
#include "NaveEnemigoKamikaseAgil.h"
#include "NaveEnemigoNodriza.h"
#include "NaveEnemigoNodrizaReparadora.h"
#include "NaveEnemigoNodrizaDisparadora.h"
#include "Capsula.h"
#include "CapsulaArmas.h"
#include "CapsulaEnergia.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "PeticionNaves.h"
#include "PeticionNavesAtaque.h"
#include "PeticionNavesSuicidas.h"
#include "PeticionNavesLogisticas.h"
#include "DefensaDirector.h"
#include "BNaveNodrizaConcreto.h"
#include "Adapter.h"

AGalaga_USFX_LAB1GameMode::AGalaga_USFX_LAB1GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_LAB1Pawn::StaticClass();
	NaveEnemigo1 = 0;
	Cont = 1;
	TimerController = 0.0f;

}
void AGalaga_USFX_LAB1GameMode::BeginPlay()
{
    Super::BeginPlay();
	//clase directora
	DirectorNodriza = GetWorld()->SpawnActor<ADefensaDirector>(ADefensaDirector::StaticClass());
	//builder
	BNave1 = GetWorld()->SpawnActor<ABNaveNodrizaConcreto>(ABNaveNodrizaConcreto::StaticClass());
	//builder2
	BNave = GetWorld()->SpawnActor<AConstructorNave>(AConstructorNave::StaticClass());
	//crea primer builder
	DirectorNodriza->Construyendo(BNave1);
	DirectorNodriza->construirNaveNodriza();
	ANaveEnemigoNodriza* Nave = DirectorNodriza->obtenerNave();
	//crea segundo bulder
	DirectorNodriza->Construyendo(BNave);
	DirectorNodriza->construirNaveNodriza();
	ANaveEnemigoNodriza* Nave2 = DirectorNodriza->obtenerNave();



	//Adaptador del bounce ball
	Jugador = Cast<AGalaga_USFX_LAB1Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Adaptador = GetWorld()->SpawnActor<AAdapter>(AAdapter::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	Jugador->SetBounceBall(Adaptador);
	Jugador->Lanzar();


	//posicionCapsulasEnemigas = NaveNodriza->GetPosicionesNaves();
	//NavesEnemigas = NaveNodriza->GetNavesEnemigas();
	/*ConstructorPaquetesEnergia = GetWorld()->SpawnActor<ABNaveNodrizaConcreto>(ABNaveNodrizaConcreto::StaticClass());
	Director = GetWorld()->SpawnActor<ADefensaDirector>(ADefensaDirector::StaticClass());*/
	
		
    //FVector ubicacionInicioNavesEnemigas = FVector(1850.0f, -1540.7f, 250.0f);
    //FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);
    //FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
    //



    //UWorld* const World = GetWorld();
    //if (World != nullptr)
    //{
    //    TArray<TSubclassOf<ANaveEnemigo>> Naves;//Crea un TArray de subclases de ANaveEnemiga
    //    Naves.Add(ANaveEnemigocaza::StaticClass()); //Agrega la subclase ANaveEnemigaCaza al TArray
    //    Naves.Add(ANaveEnemigocazaAsesina::StaticClass()); //Agrega la subclase ANaveEnemigaCazaAsesina al TArray
    //    Naves.Add(ANaveEnemigocazaExplosiva::StaticClass()); //Agrega la subclase ANaveEnemigaTransporte al TArray
    //    Naves.Add(ANaveEnemigoEspia::StaticClass()); //Agrega la subclase ANaveEnemigaEspia al TArray
    //    Naves.Add(ANaveEnemigoEspiaIncognito::StaticClass()); //Agrega la subclase ANaveEnemigaEspiaIncognito al TArray
    //    Naves.Add(ANaveEnemigoEspiaSigiloso::StaticClass()); //Agrega la subclase ANaveEnemigaEspiaSigiloso al TArray
    //    Naves.Add(ANaveEnemigoKamikase::StaticClass()); //Agrega la subclase ANaveEnemigaKamikase al TArray
    //    Naves.Add(ANaveEnemigoKamikaseExplosivo::StaticClass()); //Agrega la subclase ANaveEnemigaKamikaseExplosivo al TArray
    //    Naves.Add(ANaveEnemigoKamikaseAgil::StaticClass()); //Agrega la subclase ANaveEnemigaKamikaseAgil al TArray
    //    Naves.Add(ANaveEnemigoNodriza::StaticClass()); //Agrega la subclase ANaveEnemigaNodriza al TArray
    //    Naves.Add(ANaveEnemigoNodrizaReparadora::StaticClass()); //Agrega la subclase ANaveEnemigaNodrizaReparadora al TArray
    //    Naves.Add(ANaveEnemigoNodrizaDisparadora::StaticClass()); //Agrega la subclase ANaveEnemigaNodrizaDisparadora al TArray
    //    Naves.Add(ANaveEnemigoTransporte::StaticClass()); //Agrega la subclase ANaveEnemigaTransporte al TArray
    //    Naves.Add(ANaveEnemigoTransporteExplosivos::StaticClass()); //Agrega la subclase ANaveEnemigaTransporteExplosivos al TArray
    //    Naves.Add(AMyNaveEnemigoTransporteDefensora::StaticClass()); //Agrega la subclase ANaveEnemigaTransporteDefensora al TArray
    //    for (int i = 0; i < 6; i++) {
    //        FVector PosicionNaveActualX = FVector(ubicacionInicioNavesEnemigas.X, ubicacionInicioNavesEnemigas.Y + i * 600.0f, ubicacionInicioNavesEnemigas.Z);

    //        for (int j = 0; j < 5; j++) {
    //            FVector PosicionNaveActualY = FVector(PosicionNaveActualX.X - j * 528.5f, PosicionNaveActualX.Y, PosicionNaveActualX.Z);

    //            //tipo de nave aleatorio
    //            int32 RandomIndex = FMath::RandRange(0, Naves.Num() - 1);
    //            TSubclassOf<ANaveEnemigo> NaveClass = Naves[RandomIndex]; 

    //            // spawn
    //            ANaveEnemigo* NaveEnemigaTemporal = World->SpawnActor<ANaveEnemigo>(NaveClass, PosicionNaveActualY, rotacionNave);//Spawnea la nave enemiga en una posicion y rotacio<n especifica

    //           
    //        }
    //    }
    //    tiempotranscurrido = 0;
    //}
  // GetWorldTimerManager().SetTimer(TimerHandle_SpawnCapsulas, this, &AGalaga_USFX_LAB1GameMode::SpawnCapsulas, 5.0f, true);

	//GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AGalaga_USFX_LAB1GameMode::SpawnNaveEnemiga, 5.0f, true);
    //GetWorld()->GetTimerManager().SetTimer(ModifyTimerHandle, this, &AGalaga_USFX_LAB1GameMode::ModificarNaves, 6.0f, true);
     //GetWorld()->GetTimerManager().SetTimer(AgregarNaves, this, &AGalaga_USFX_LAB1GameMode::AgregarPeticiones, 7.0f, true);
}



void AGalaga_USFX_LAB1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	
}
void AGalaga_USFX_LAB1GameMode::SpawnCapsulas()
{

    FVector ubicacionCapsula = FVector(-900.0f, 1000.0f, 500.0f);
    FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
    //Para el spauwn de las objetos de inventario
    for (int i = 0; i < 6; i++) {
        FVector PosicionInventario = FVector(ubicacionCapsula.X, ubicacionCapsula.Y + i * 100.0f, ubicacionCapsula.Z);
        //Generar un número aleatorio entre 0 y 1
        float RandomNumber = FMath::FRandRange(0.0f, 1.0f);

        // Probabilidad de generar una nave caza o transporte (50% cada una)
        if (RandomNumber <= 0.5f) {
            ACapsula* ObjetoInventario = GetWorld()->SpawnActor<ACapsulaArmas>(ACapsulaArmas::StaticClass(), PosicionInventario, rotacionNave);
            //Spawnea el objeto de inventario en una posicion y rotacion especifica  
        }
        else {
            ACapsula* ObjetoInventario = GetWorld()->SpawnActor<ACapsulaEnergia>(ACapsulaEnergia::StaticClass(), PosicionInventario, rotacionNave);
            //Spawnea el objeto de inventario en una posicion y rotacion especifica  
        }

    }
}
void AGalaga_USFX_LAB1GameMode::AgregarPeticiones()
{
	const int32 NumeroDeColumnas = 4;
	const int32 NumeroDeFilas = 3;

	// Crear instancias de las fábricas de naves
	APeticionNavesAtaque* FabricaNavesAtaque = GetWorld()->SpawnActor<APeticionNavesAtaque>(FVector(40,20,314),FRotator(0,0,0));
	APeticionNavesLogisticas* FabricaNavesLogistica = GetWorld()->SpawnActor<APeticionNavesLogisticas>(FVector(400, 20, 314), FRotator(0, 0, 0));
	APeticionNavesSuicidas* FabricaNavesSuicidas = GetWorld()->SpawnActor<APeticionNavesSuicidas>(FVector(40, 200, 314), FRotator(0, 0, 0));
	naves.Add("NaveCaza");
	navetransporte.Add("transporte");
	abastecimiento.Add("abastecimiento");



	//for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
	//{
	//	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	//	{
	//		FVector SpawnLocation = FVector(Columna * 300.0f, Fila * 300.0f, 350.0f);
	//		FRotator SpawnRotation = FRotator::ZeroRotator;

	//		 //Agregar naves de ataque en la primera fila

	//	       ANaveEnemigo* NaveAtaque = FabricaNavesAtaque->CrearNaveEnemiga("Navecaza");
	//			ANaveEnemigo* NaveAtaqueAsesina = FabricaNavesAtaque->CrearNaveEnemiga("NavecazaAsesina");
	//			ANaveEnemigo* NaveAtaqueExplosiva = FabricaNavesAtaque->CrearNaveEnemiga("NaveNodrizaDisparadora");
	//		 

	//		 // Agregar naves logísticas en la segunda fila

	//	       ANaveEnemigo* NaveLogistica = FabricaNavesLogistica->CrearNaveEnemiga("NaveEspia");
	//			 ANaveEnemigo* NaveLogisticaDefensora = FabricaNavesLogistica->CrearNaveEnemiga("NaveEpiaIncognito");
	//			 ANaveEnemigo* NaveLogisticaSigilosa = FabricaNavesLogistica->CrearNaveEnemiga("NaveEspiaSigiloso");
	//		  

	//		  // Agregar naves suicidas en la tercera fila
	//		float RandomNumber = FMath::FRandRange(0.0f, 1.0f);

	//		// Probabilidad de generar una nave caza o transporte (50% cada una)
	//		if (RandomNumber <= 0.5f) {
	//			ANaveEnemigo* NavecazaExplosiva = FabricaNavesSuicidas->CrearNaveEnemiga("NaveKamikase");
	//		}
	//		else if (RandomNumber <= 0.75f) {
	//			ANaveEnemigo* NaveSuicida = FabricaNavesSuicidas->CrearNaveEnemiga("NaveKamikaseAgil");
	//			//NaveSuicida->GetActorRelativeScale3D(,,)
	//		}
	//		else {
	//			ANaveEnemigo* NaveKamikaseExplosivo = FabricaNavesSuicidas->CrearNaveEnemiga("NaveKamikaseExplosivo");
	//		}
	//	}
	//}

}

void AGalaga_USFX_LAB1GameMode::AgregarNaveEnemiga(int32 ID, ANaveEnemigo* NuevaNave)
{
	// Verificar si ya hay una nave enemiga con el mismo ID
	if (NaveEnemig.Contains(ID))
	{
		// Si ya existe, mostrar un mensaje de advertencia y no agregar la nueva nave
		UE_LOG(LogTemp, Warning, TEXT("Ya existe una nave enemiga con el ID %d"), ID);
	}
	else
	{
		// Si no existe, agregar la nueva nave al mapa
		NaveEnemig.Add(ID, NuevaNave);
	}
}
void AGalaga_USFX_LAB1GameMode::SpawnNaveEnemiga()
{
	const int32 NumeroDeColumnas = 2;
	const int32 NumeroDeFilas = 2;
	int32 NaveID = 1;

	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	{
		for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
		{
			FVector SpawnLocation = FVector(Columna * 200.0f, Fila * 100.0f, 210.0f);
			FRotator SpawnRotation = FRotator::ZeroRotator;

			// Verificar si ya existe una nave enemiga con el ID correspondiente
			if (!NaveEnemig.Contains(NaveID))
			{
				// Si no existe, crear una nueva nave enemiga
				ANaveEnemigo* NuevaNave = GetWorld()->SpawnActor<ANaveEnemigocaza>(SpawnLocation, SpawnRotation);
				if (NuevaNave)
				{
					// Agregar la nueva nave al mapa con su ID correspondiente
					AgregarNaveEnemiga(NaveID, NuevaNave);
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga caza."));
				}
			}

			++NaveID;
		}
	}
}

void AGalaga_USFX_LAB1GameMode::ModificarNaves()
{
	UE_LOG(LogTemp, Warning, TEXT("ModificarNaves() ejecutada"));
	for (auto& Pair : NaveEnemig)
	{
		int32 ID = Pair.Key;
		ANaveEnemigo* NuevaNave = Pair.Value;
		UE_LOG(LogTemp, Warning, TEXT("Modificando nave ID: %d"), ID);

	//caza
		ANaveEnemigo* NuevaNaveCaza = Cast<ANaveEnemigocaza>(NuevaNave);
		if (NuevaNaveCaza)
		{
		
			FVector SpawnLocation = NuevaNaveCaza->GetActorLocation();
			FRotator SpawnRotation = NuevaNaveCaza->GetActorRotation();

			// Destruye la nave enemiga actual
			NuevaNaveCaza->Destroy();
			//transporte
			ANaveEnemigo* NuevaNaveEspia = GetWorld()->SpawnActor<ANaveEnemigoEspia>(SpawnLocation, SpawnRotation);
			
			if (NuevaNaveEspia)
			{
				// Modifica el mapa para que apunte a la nueva nave enemiga de tipo transporte
				NaveEnemig[ID] = NuevaNaveEspia;
			}
			else
			{
				// Manejar errores si no se puede crear la nueva nave enemiga
				UE_LOG(LogTemp, Error, TEXT("No se pudo crear la nave enemiga transporte."));
			}
		}
	}
}



void AGalaga_USFX_LAB1GameMode::ModificarNaveEnemiga(int32 ID, ANaveEnemigo* NuevaNave)
{
	// Verificar si existe una nave enemiga con el ID proporcionado
	if (NaveEnemig.Contains(ID))
	{
		// Si existe, modificar la nave enemiga con la nueva nave proporcionada
		NaveEnemig[ID] = NuevaNave;
	}
	else
	{
		// Si no existe, mostrar un mensaje de advertencia
		UE_LOG(LogTemp, Warning, TEXT("No existe una nave enemiga con el ID %d para modificar"), ID);
	}
}
