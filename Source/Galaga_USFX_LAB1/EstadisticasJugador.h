// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadisticasJugador.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AEstadisticasJugador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadisticasJugador();

private:
	int puntaje;
	int score;
	int vidas;
	int nivel;
public:
	FORCEINLINE void SetPuntaje(int _puntaje) { puntaje = _puntaje; }
	FORCEINLINE void SetVidas(int _vidas) { vidas = _vidas; }
	FORCEINLINE void SetNivel(int _nivel) { nivel = _nivel; }
	FORCEINLINE void SetScore(int _score) { score = _score; }

	FORCEINLINE int GetPuntaje() const { return puntaje; }
	FORCEINLINE int GetVidas() const { return vidas; }
    FORCEINLINE int GetNivel() const { return nivel; }
	FORCEINLINE int GetScore()const { return score; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
