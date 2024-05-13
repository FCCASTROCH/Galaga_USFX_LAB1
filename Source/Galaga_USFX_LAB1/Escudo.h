// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "construcNave.h"
#include "Escudo.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AEscudo : public AActor , public IconstrucNave
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscudo();
	void SeguirNave(FVector posicion);
	void movimientoObstaculo();
	float VidaMaxima;
	float VidaActual;
	float distanciaObs;
	FString Barrera;
	FORCEINLINE FString GetBarrera() const { return Barrera; }
	FORCEINLINE void SetBarrera(FString _Barrera) { Barrera = _Barrera; }
	 void DisminuirResistencia(float Cantidad);
	 //
	 virtual void MovimientoDeNave() override;
	 virtual void PocisionNaves(FString forma) override;
	 virtual void BarreraEscudo() override; //tipos de barrera
	 virtual void SpawnNaves() override;
	 virtual void DestruirNave() override;// puede explota la nave nodriza
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
