// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorNave.h"

// Sets default values
AConstructorNave::AConstructorNave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshNaveEnemigocaza1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	NaveEnemigoMesh->SetStaticMesh(MeshNaveEnemigocaza1.Object);*/


}

// Called when the game starts or when spawned
void AConstructorNave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConstructorNave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//
//void AConstructorNave::SetNaveEscudo()
//{
//	}
//
//void AConstructorNave::SetNaveVelocidad()
//{
//	}
//
//void AConstructorNave::SetNaveDisparar()
//{
//}
//
