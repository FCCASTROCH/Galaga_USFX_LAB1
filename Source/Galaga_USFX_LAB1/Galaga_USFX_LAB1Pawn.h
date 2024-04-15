// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ComponenteActor.h"
#include "SceneComponentSpawn.h"
#include "GameFramework/PlayerInput.h"
#include "Galaga_USFX_LAB1Pawn.generated.h"


UCLASS(Blueprintable)
class AGalaga_USFX_LAB1Pawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AGalaga_USFX_LAB1Pawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;
	static const FName MoveDiagonalForwardBinding;
	static const FName MoveDiagonalRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
public:
	//TArray<ACapsula*>ACapsulaArmas;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponentSpawn* SceneComponentSpawn;
	float NumProyectilesDisparados;
	float MaxProyectilesDisparados;
	//float NumItems;




	UPROPERTY()
	UComponenteActor* MyInventor;
	UFUNCTION()
	void DropItem();
	UFUNCTION()
	void TakeItem(ACapsula* InventoryItem);




	//UFUNCTION()
	//void TakeItem(ACapsulaArmas* InventoryItem2);
	void ReloadEnergy();
	void CheckInventory();
	void ReloadAmmo();
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	float NumProye;
	float MaxProye;
	float NumItems;
	
	void Saltar();
	void FinSaltar();
	//Movimiento en diagonal
	void MoveDiagonalRight(float amount);
	FInputAxisKeyMapping MoveDiagonalBindingRight;
	FInputAxisKeyMapping MoveDiagonalBindingRight2;

	void MoveDiagonalForward(float amount);
	FInputAxisKeyMapping MoveDiagonalBindingForward;
	FInputAxisKeyMapping MoveDiagonalBindingForward2;

	//Funciones para los botones
	FInputActionKeyMapping  Retornar;
	FInputActionKeyMapping  Jump;	
	FInputActionKeyMapping  DisparoDoble; //Disparo doble
	FInputActionKeyMapping OnSpawn;

	FInputActionKeyMapping  ChocaDestruye;
	FInputActionKeyMapping  ChocaControla;
	FInputActionKeyMapping  ChocaMeDestruyo;
	FInputActionKeyMapping  ChocarAtravesar;
	//Saber el numero de inventario
	void OnSpawnActor();
	void ActivarDisparoDoble();//Disparo doble

	void RepeatMovement();
	void RecordMovement();
	//Funciones para los botones
	void ChocaYDestruye();
	void ChocaYControla();
	void ChocaYMeDestruyo();
	void ChocarYAtravesar();
	void TeleportToMouse();
    FVector InicialPosicion;
	float AlturaSalto;
	FVector2D lastInput;
   int PresionarTecla;
	float Multiplicador;

	//Banderas
	bool bDisparoDoble;//Disparo doble
	bool bChocaYDestruye;
	bool bChocaYControla;
	bool bChocaYMeDestruyo;
	bool bChocarYAtravesar;

	void ReturnToInitialPosition();


};

