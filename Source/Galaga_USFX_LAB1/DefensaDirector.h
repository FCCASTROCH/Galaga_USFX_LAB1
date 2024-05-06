// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BNaveNodriza.h"
#include "NaveEnemigoNodriza.h"
#include "DefensaDirector.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API ADefensaDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefensaDirector();
public:
	IBNaveNodriza* ConstruyendoND;
	//IBNaveNodriza* BPE;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//void EstablecerConstructorPaquetes(AActor* _Constructor);
	//void ConstruirNave(int32 _Cont);
	void construirNaveNodriza();
	void Construyendo(AActor* constructor);
	class ANaveEnemigoNodriza* obtenerNave();

};