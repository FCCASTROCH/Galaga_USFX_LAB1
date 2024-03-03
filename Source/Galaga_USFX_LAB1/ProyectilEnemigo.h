// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProyectilEnemigo();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivate="true"))
	UStaticMeshComponent* ProyectilEnemigoMesh;
private:
	float velocidad;
	float tiempoDisparo;
	float posicionX;
	float posicionY;
	float posicionZ;
	FVector posicion;
public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
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
