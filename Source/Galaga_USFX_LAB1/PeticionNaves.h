// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigo.h"
#include "PeticionNaves.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API APeticionNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APeticionNaves();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual ANaveEnemigo* CrearNaves(FString NombreNave, FVector posicion, FRotator Rotacion) PURE_VIRTUAL(APeticionNaves::CrearNaves, return nullptr;);
	//Ordena la nave enemiga y retorne la nave enemiga de una categoria especifica
	//ANaveEnemigo* APeticionNaves::Peticion(FString Categoria, FVector pocicion, FRotator Rotacion);
};
