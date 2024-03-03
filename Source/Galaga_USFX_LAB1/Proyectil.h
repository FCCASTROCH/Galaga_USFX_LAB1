// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AProyectil : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProyectil();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivate="true"))
	UStaticMeshComponent* ProyectilMesh;
private:
	float velocidad;
	FString nombre;
	float tiempoDisparo;
	float posicionX;
	float posicionY;
	float posicionZ;
	FVector posicion;
public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
