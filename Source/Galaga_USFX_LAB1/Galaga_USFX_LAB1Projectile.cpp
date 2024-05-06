// Copyright Epic Games, Inc. All Rights Reserve

#include "Galaga_USFX_LAB1Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NaveEnemigo.h"
#include "Escudo.h"
AGalaga_USFX_LAB1Projectile::AGalaga_USFX_LAB1Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalaga_USFX_LAB1Projectile::OnHit);// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
	danio = 10.0f;
}

void AGalaga_USFX_LAB1Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	//{
	//	OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	//}

	//Destroy();
	if (OtherActor && OtherActor != this && OtherComp)
	{
		ANaveEnemigo* NaveEnemigo = Cast<ANaveEnemigo>(OtherActor);
		AEscudo* Escudo = Cast<AEscudo>(OtherActor);
		if (NaveEnemigo)
		{
			NaveEnemigo->DisminuirVida(danio); // Disminuir la vida de la nave enemiga
		}
		else if (Escudo)
		{
			Escudo->DisminuirResistencia(danio); // Disminuir la resistencia del escudo
		}

		Destroy(); // Destruir el proyectil despu�s de la colisi�n
	}
}