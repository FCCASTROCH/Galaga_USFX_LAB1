// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Capsula.h"
#include "ComponenteActor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_LAB1_API UComponenteActor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteActor();
	//TArray<ACapsula*> CurrentInventory;

	TQueue<ACapsula*>CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(ACapsula* AxtorAdd);
	UFUNCTION()
	void RemoveFromInventory(ACapsula* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
