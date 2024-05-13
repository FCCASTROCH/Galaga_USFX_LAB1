// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BNaveNodriza.h"
#include "ConstructorNave.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AConstructorNave : public AActor,public IBNaveNodriza
{
	GENERATED_BODY()
	
public:	
	ANaveEnemigoNodriza* naveNodriza;
	// Sets default values for this actor's properties
	//UStaticMeshComponent* NaveEnemigoMesh;
	AConstructorNave();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirMovimientoDeNave() override;
	virtual void ConstruirPocisionNaves() override;
	virtual void ConstruirBarreraEscudo() override; //tipos de barrera
	virtual void ConstruirSpawnNaves() override;

	virtual class ANaveEnemigoNodriza* getNaveNodriza() override;
};
