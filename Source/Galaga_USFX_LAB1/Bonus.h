// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonus.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API ABonus : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABonus();
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BonusMesh;
private:
	FString Nombre;
	float duracion;
	FString tipo;
	bool activo;

public:
	FORCEINLINE FString GetNombre() const { return Nombre; }
	FORCEINLINE float Getduracion() const { return duracion; }
	FORCEINLINE FString GetTipo() const { return tipo; }
	FORCEINLINE bool GetActivo() const { return activo; }
	FORCEINLINE void SetNombre(FString nombre) { Nombre = nombre; }
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
