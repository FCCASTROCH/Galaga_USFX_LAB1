// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "construcNave.h"
#include "ConstructorNave.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AConstructorNave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//UStaticMeshComponent* NaveEnemigoMesh;
	AConstructorNave();
	int vida;
	int vidaescudo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	 //void SetNaveEscudo() override;
	 //void SetNaveVelocidad() override;
	 //void SetNaveDisparar() override;

};
