// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBounceBall.h"
#include "Adapter.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API AAdapter : public AActor, public IIBounceBall
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	UPROPERTY(VisibleAnywhere, Category = "Ball Adapter");
	class ABall* ball;

public:
	void Lanzar() override;
};
