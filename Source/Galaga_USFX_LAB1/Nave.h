// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave.generated.h"


UCLASS()
class GALAGA_USFX_LAB1_API ANave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANave();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* NaveMesh;
private:
	FString Nombre;
	float velocidad;//queda
	float danio;
	float tiempodisparo;
	FVector posicion;
	float resistencia;
	int trayectoria;
	int tipo;
	int capacidad;
	int capPasajero;
	float experiencia;


	float disparo;
	float movimiento;//
public:
	FORCEINLINE FString GetNombre() const { return Nombre; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDisparo() const { return disparo; }
	FORCEINLINE float GetMovimiento() const { return movimiento; }

	FORCEINLINE void SetNombre(FString nombre) { Nombre = nombre; }
	FORCEINLINE void SetVelocidad(float vel) { velocidad = vel; }
	FORCEINLINE void SetDisparo(float disp) { disparo = disp; }
	FORCEINLINE void SetMovimiento(float mov) { movimiento = mov; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; //override significa que sta sobre escrito

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
