// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NivelJuego.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API ANivelJuego : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANivelJuego();
private:
	FString nombre;
	float tipoEnemigo;
	float tiempoNivel;
	float VelocidadEnemigo;
	float intervaloAparicion;
public:
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetTipoEnemigo() const { return tipoEnemigo; }
	FORCEINLINE float GetTiempoNivel() const { return tiempoNivel; }
	FORCEINLINE float GetVelocidadEnemigo() const { return VelocidadEnemigo; }
	FORCEINLINE float GetIntervaloAparicion() const { return intervaloAparicion; }

	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetTipoEnemigo(float _tipoEnemigo) { tipoEnemigo = _tipoEnemigo; }
	FORCEINLINE void SetTiempoNivel(float _tiempoNivel) { tiempoNivel = _tiempoNivel; }
	FORCEINLINE void SetVelocidadEnemigo(float _VelocidadEnemigo) { VelocidadEnemigo = _VelocidadEnemigo; }
	FORCEINLINE void SetIntervaloAparicion(float _intervaloAparicion) { intervaloAparicion = _intervaloAparicion; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
