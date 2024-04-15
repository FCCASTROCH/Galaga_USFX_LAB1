//
#include "Galaga_USFX_LAB1Pawn.h"
#include "Galaga_USFX_LAB1Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Capsula.h"
#include "CapsulaArmas.h"
#include "CapsulaEnergia.h"
#include "componenteActor.h"
#include "NaveEnemigo.h"
#include "NaveEnemigocaza.h"
#include "NaveEnemigoEspia.h"
#include "NaveEnemigoTransporte.h"
#include "SceneComponentSpawn.h"
#include "Escudo.h"
// Declara los nombres de las acciones de entrada
const FName AGalaga_USFX_LAB1Pawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFX_LAB1Pawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFX_LAB1Pawn::FireForwardBinding("FireForward");
const FName AGalaga_USFX_LAB1Pawn::FireRightBinding("FireRight");

AGalaga_USFX_LAB1Pawn::AGalaga_USFX_LAB1Pawn()
{
	// Configura el componente de malla del actor
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Configura el sonido de disparo
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Configura el brazo de la cámara
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false;

	// Configura la cámara
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;

	// Configura el movimiento
	MoveSpeed = 1000.0f;
	// Configura el arma
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;


	MyInventor = CreateDefaultSubobject<UComponenteActor>("MyInventory");


	lastInput = FVector2D::ZeroVector;
	NumItems = 0;
	PresionarTecla = 0;
	Multiplicador = 0;
	//Inicializar Banderas
	bDisparoDoble = false;
	bChocaYDestruye = false;
	bChocaYControla = false;
	bChocaYMeDestruyo = false;
	bChocarYAtravesar = false;

	// Inicializacion para componente de Escudo
	SceneComponentSpawn = CreateDefaultSubobject<USceneComponentSpawn>(TEXT("ActorSpawnerComponent"));
	if (SceneComponentSpawn)
	{
		// Adjunta el ActorSpawnerComponent al RootComponent o a cualquier componente que desees
		SceneComponentSpawn->SetupAttachment(RootComponent);
	}

	NumProyectilesDisparados = 0;
	MaxProyectilesDisparados = 25; //Establece el número máximo de proyectiles disparados

	//NumItems = 0;
	InicialPosicion = FVector(-790.0f, 10.0f, 215.0f);
	AlturaSalto = 215 + 300.0f;
	//Entrada para movimiento diagonal

	Retornar = FInputActionKeyMapping("ReturnToInitialPosition", EKeys::G, 0, 0, 0, 0);
	Jump = FInputActionKeyMapping("Saltar", EKeys::T, 0, 0, 0, 0);
	OnSpawn = FInputActionKeyMapping("OnSpawnActor", EKeys::K, 0, 0, 0, 0);
	DisparoDoble = FInputActionKeyMapping("ActivarDisparoDoble", EKeys::J, 0, 0, 0, 0);//Disparo doble
	ChocaDestruye = FInputActionKeyMapping("ChocaYDestruye", EKeys::V, 0, 0, 0, 0);
	ChocaControla = FInputActionKeyMapping("ChocaYControla", EKeys::B, 0, 0, 0, 0);
	ChocaMeDestruyo = FInputActionKeyMapping("ChocaYMeDestruyo", EKeys::N, 0, 0, 0, 0);
	ChocarAtravesar = FInputActionKeyMapping("ChocarYAtravesar", EKeys::M, 0, 0, 0, 0);
	// Configura los bindings de las teclas de movimiento diagonal
	MoveDiagonalBindingForward = FInputAxisKeyMapping("MoveDiagonalForward", EKeys::Q, 1.f);
	MoveDiagonalBindingForward2 = FInputAxisKeyMapping("MoveDiagonalForward", EKeys::C, -1.f);
	MoveDiagonalBindingRight = FInputAxisKeyMapping("MoveDiagonalRight", EKeys::E, 1.f);
	MoveDiagonalBindingRight2 = FInputAxisKeyMapping("MoveDiagonalRight", EKeys::Z, -1.f);
}

void AGalaga_USFX_LAB1Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// Agrega los bindings de las teclas de movimiento diagonal al controlador de entrada del jugador
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(MoveDiagonalBindingForward);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(MoveDiagonalBindingForward2);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(MoveDiagonalBindingRight);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(MoveDiagonalBindingRight2);
	
	UPlayerInput::AddEngineDefinedActionMapping(Retornar);
	UPlayerInput::AddEngineDefinedActionMapping(Jump);
	UPlayerInput::AddEngineDefinedActionMapping(OnSpawn);
	//UPlayerInput::AddEngineDefinedActionMapping()
	UPlayerInput::AddEngineDefinedActionMapping(DisparoDoble);
	UPlayerInput::AddEngineDefinedActionMapping(ChocaControla);
	UPlayerInput::AddEngineDefinedActionMapping(ChocaDestruye);
	UPlayerInput::AddEngineDefinedActionMapping(ChocaMeDestruyo);
	UPlayerInput::AddEngineDefinedActionMapping(ChocarAtravesar);
	// Configura los bindings de las acciones de juego
	PlayerInputComponent->BindAxis("MoveForward");
	PlayerInputComponent->BindAxis("MoveRight");
	PlayerInputComponent->BindAxis("FireForward");
	PlayerInputComponent->BindAxis("FireRight");

	// Configura las acciones adicionales
	PlayerInputComponent->BindAction("DropItem", EInputEvent::IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::DropItem);
	PlayerInputComponent->BindAction("ReloadAmmo", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ReloadAmmo);
	PlayerInputComponent->BindAction("ReloadEnergy", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ReloadEnergy);
	// Configura las acciones de movimiento diagonal
	PlayerInputComponent->BindAxis("MoveDiagonalRight", this, &AGalaga_USFX_LAB1Pawn::MoveDiagonalRight);
	PlayerInputComponent->BindAxis("MoveDiagonalForward", this, &AGalaga_USFX_LAB1Pawn::MoveDiagonalForward);
	PlayerInputComponent->BindAction("ReturnToInitialPosition", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ReturnToInitialPosition);
	PlayerInputComponent->BindAction("Saltar", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::Saltar);
	PlayerInputComponent->BindAction("TeleportToMouse", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::TeleportToMouse);
	PlayerInputComponent->BindAction("OnSpawnActor", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::OnSpawnActor);
	PlayerInputComponent->BindAction("ActivarDisparoDoble", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ActivarDisparoDoble);
	PlayerInputComponent->BindAction("ChocaYDestruye", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ChocaYDestruye);
	PlayerInputComponent->BindAction("ChocaYControla", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ChocaYControla);
	PlayerInputComponent->BindAction("ChocaYMeDestruyo", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ChocaYMeDestruyo);
	PlayerInputComponent->BindAction("ChocarYAtravesar", IE_Pressed, this, &AGalaga_USFX_LAB1Pawn::ChocarYAtravesar);

}


void AGalaga_USFX_LAB1Pawn::MoveDiagonalRight(float amount)
{
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);
	// Define la dirección del movimiento diagonal basándose en la cantidad recibida
	//FVector2D DiagonalInput(lastInput.X + amount, lastInput.Y + amount);
	FVector MoveDirection = FVector(ForwardValue +amount, RightValue + amount, 0.f).GetClampedToMaxSize(1.0f);

	MoveDirection.Normalize();
	// Normaliza el vector para aseguewrarse de que la velocidad del movimiento diagonal sea uniforme
	//DiagonalInput.Normalize();

	// Asigna el vector de entrada diagonal a lastInput
	//lastInput = DiagonalInput;
	 // Asigna la dirección resultante como la dirección de movimiento
	lastInput = FVector2D(MoveDirection.Y, MoveDirection.X);

}

void AGalaga_USFX_LAB1Pawn::MoveDiagonalForward(float amount)
{
	// Define la dirección del movimiento diagonal basándose en la cantidad recibida
	FVector2D DiagonalInput(lastInput.X - amount, lastInput.Y + amount);

	// Normaliza el vector para asegurarse de que la velocidad del movimiento diagonal sea uniforme
	DiagonalInput.Normalize();

	// Asigna el vector de entrada diagonal a lastInput
	lastInput = DiagonalInput;
	//lastInput = FVector2D(MoveDirection.Y, MoveDirection.X);
}


void AGalaga_USFX_LAB1Pawn::Tick(float DeltaSeconds)
{
	// Encuentra la dirección de movimiento estándar
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Combina el vector lastInput con la entrada de movimiento
	FVector CombinedMovement = FVector(lastInput.Y, lastInput.X, 0.f) + FVector(ForwardValue, RightValue, 0.f);

	// Ajusta el tamaño máximo para que (X=1, Y=1) no cause un movimiento más rápido en direcciones diagonales
	const FVector MoveDirection = CombinedMovement.GetClampedToMaxSize(1.0f);

	// Calcula el movimiento
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// Si el tamaño no es cero, mueve este actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())//si choca con algo falla algo
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	// Normaliza lastInput si su magnitud es mayor que 1
	float len = lastInput.Size();
	if (len > 1.f)
	{
		lastInput /= len;
	}
	// Restablece lastInput a cero
	lastInput = FVector2D(0.f, 0.f);

	// Crea un vector de dirección de disparo
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Intenta disparar un proyectil
	FireShot(FireDirection);
}


void AGalaga_USFX_LAB1Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true && NumProyectilesDisparados < MaxProyectilesDisparados)
	{
		// Incrementa el contador de proyectiles disparados
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
			UWorld* const World = GetWorld();
			if (bDisparoDoble) {

				if (World != nullptr)
				{
					// Calcula la posición de spawn para el primer proyectil (a la izquierda de la nave)
					const FVector SpawnLocationLeft = SpawnLocation - FireRotation.RotateVector(FVector(0.f, 20.f, 0.f));

					// Spawnea el primer proyectil
					World->SpawnActor<AGalaga_USFX_LAB1Projectile>(SpawnLocationLeft, FireRotation);

					// Calcula la posición de spawn para el segundo proyectil (a la derecha de la nave)
					const FVector SpawnLocationRight = SpawnLocation + FireRotation.RotateVector(FVector(0.f, 20.f, 0.f));

					// Spawnea el segundo proyectil
					World->SpawnActor<AGalaga_USFX_LAB1Projectile>(SpawnLocationRight, FireRotation);

					// Intenta reproducir el sonido si está especificado
					if (FireSound != nullptr)
					{
						UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
					}

				}
			}
			else
			{

				if (World != nullptr)
				{
					for (int i = 0; i < 1; ++i)
					{
						FRotator ModifiedRotation = FireRotation;
						// Modify rotation for each projectile
						ModifiedRotation.Yaw += (i - 1) * 0.0f; // Offset rotation by 10 degrees

						const FVector ModifiedSpawnLocation = GetActorLocation() + ModifiedRotation.RotateVector(GunOffset);

						//// Spawn the projectile
						World->SpawnActor<AGalaga_USFX_LAB1Projectile>(ModifiedSpawnLocation, ModifiedRotation);
					}
				}
			}
			
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_LAB1Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGalaga_USFX_LAB1Pawn::ShotTimerExpired()
{
	bCanFire = true;
}



//suelta
void AGalaga_USFX_LAB1Pawn::DropItem()
{
	if (MyInventor->CurrentInventory.IsEmpty()) {
		if (GEngine) {
			FString Message = FString::Printf(TEXT("Tienes %d objetos en tu inventario "));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, Message);
		}
		return;

	}
	ACapsula* Item = nullptr;
	MyInventor->CurrentInventory.Dequeue(Item);//MyInventory->CurrentInventory.Last();
	NumItems -= 1;
	// Obtén la ubicación actual de la nave
	FVector ShipLocation = GetActorLocation();
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);

	// Ajusta la posición para centrar el objeto con respecto a la nave
	float DropDistance = 200.0f; // Distancia adicional para dejar caer el objeto
	FVector DropOffset = FVector(0.0f, 0.0f, ItemBounds.Z * 0.5f); // Ajusta la posición verticalmente para centrar el objeto
	FTransform PutDownLocation = FTransform(GetActorRotation(), ShipLocation + DropOffset +
	(RootComponent->GetForwardVector() * DropDistance)); // Combina la ubicación de la nave con el desplazamiento vertical y horizontal

	Item->PutDown(PutDownLocation); // Coloca el objeto en la ubicación especificada

	//Verifica el inventario después de soltar un objeto
	CheckInventory();
}


//recoger
void AGalaga_USFX_LAB1Pawn::TakeItem(ACapsula* InventoryItem)
{
	
	InventoryItem->PickUp();
	MyInventor->AddToInventory(InventoryItem);
	// Configurar el temporizador con SetTimer
	float DelayInSeconds = 10.0f; // Tiempo de retraso en segundos
	bool bLooping = false; // Si el temporizador debe repetirse automáticamente o no
	ACapsulaArmas* AmmoItem = Cast<ACapsulaArmas>(InventoryItem);
	if (AmmoItem)
	{
		FTimerHandle MyTimerHandle1;
		GetWorldTimerManager().SetTimer(MyTimerHandle1, this, &AGalaga_USFX_LAB1Pawn::ReloadAmmo, DelayInSeconds, bLooping);
	}

	ACapsulaEnergia* EnergyItem = Cast<ACapsulaEnergia>(InventoryItem);
	if (EnergyItem)
	{
		FTimerHandle MyTimerHandle2;
		GetWorldTimerManager().SetTimer(MyTimerHandle2, this, &AGalaga_USFX_LAB1Pawn::ReloadEnergy, DelayInSeconds, bLooping);
	}

	//GetWorldTimerManager().SetTimer(MyTimerHandle1, this, &AGalaga_USFX_L01Pawn::ReloadAmmo, DelayInSeconds, bLooping);
	NumItems += 1;
	//Verifica el inventario después de recoger un objeto
	FString Message = FString::Printf(TEXT("Has recogido %d objetos"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
	}
	CheckInventory();
}

void AGalaga_USFX_LAB1Pawn::ReloadEnergy()
{
	// Bandera para verificar si se encontró un objeto de munición
	bool bFoundEnergy = false;
	// Itera sobre los objetos en el inventario para encontrar uno de Energia
	ACapsula* InventoryItem = nullptr;
	//for (AInventoryActor* InventoryItem : MyInventory->CurrentInventory)
	while (MyInventor->CurrentInventory.Dequeue(InventoryItem))
	{
		// Intenta hacer un cast a AInventoryActorEnergy
		ACapsulaEnergia* EnergyItem = Cast<ACapsulaEnergia>(InventoryItem);
		if (EnergyItem)
		{
			// Se encontró un objeto de munición en el inventario
			bFoundEnergy = true;
			// Se encontró un objeto de Energia en el inventario
			// Elimina el objeto de munición del inventario
			//MyInventory->RemoveFromInventory(EnergyItem);

			// Muestra un mensaje de depuración
			if (GEngine)
			{
				//FString Message = FString::Printf(TEXT("Se recargaron %d de municion"), MaxProyectilesDisparados);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Se restablecio 100 pts de vida");
			}
			NumItems -= 1;
			CheckInventory();
			// Sal del bucle ya que encontraste y manejaste un objeto de munición
			break;
		}

	}
	// Verifica si no se encontró ningún objeto de munición
	if (!bFoundEnergy)
	{
		// Muestra un mensaje indicando que no se encontró ninguna capsula de energia
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "No tienes Energia para recargar");
		}
	}
}

void AGalaga_USFX_LAB1Pawn::OnSpawnActor()
{
	// Verifica si el ActorSpawnerComponent está válido
	if (SceneComponentSpawn)
	{
		// Llama a la función SpawnEscudo del ActorSpawnerComponent
		SceneComponentSpawn->SpawnEscudo();
	}
}

void AGalaga_USFX_LAB1Pawn::ActivarDisparoDoble()
{
	if (PresionarTecla == 0)
	{
		bDisparoDoble = true;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Disparo Doble Activado");
		}
		PresionarTecla = 1;
	}
	else
	{
		bDisparoDoble = false;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Disparo Doble Desactivado");
		}
		PresionarTecla = 0;
	}
}

void AGalaga_USFX_LAB1Pawn::RepeatMovement()
{
}

void AGalaga_USFX_LAB1Pawn::RecordMovement()
{

}

void AGalaga_USFX_LAB1Pawn::ChocaYDestruye()
{

	bChocaYDestruye = true;
	//Descactivo las banderas activadas por otras teclas
	bChocarYAtravesar = false;
	bChocaYControla = false;
	bChocaYMeDestruyo = false;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Choca y Destruye: Activado");
		//informar al jugador que se desactivaron las otras banderas
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Se desactivaron las demas colisiones");
	}
}

void AGalaga_USFX_LAB1Pawn::ChocaYControla()
{
	bChocaYControla = true;
	//Descactivo las banderas activadas por otras teclas
	bChocaYDestruye = false;
	bChocaYMeDestruyo = false;
	bChocarYAtravesar = false;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Choca y Controla: Activado");
		//informar al jugador que se desactivaron las otras banderas
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Se desactivaron las demas colisiones");
	}
}

void AGalaga_USFX_LAB1Pawn::ChocaYMeDestruyo()
{
	bChocaYMeDestruyo = true;
	//Descactivo las banderas activadas por otras teclas
	bChocaYDestruye = false;
	bChocaYControla = false;
	bChocarYAtravesar = false;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Choca y Me Destruyo: Activado");
		//informar al jugador que se desactivaron las otras banderas
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Se desactivaron las demas colisiones");
	}
}

void AGalaga_USFX_LAB1Pawn::ChocarYAtravesar()
{
	bChocarYAtravesar = true;
	//Descactivo las banderas activadas por otras teclas
	bChocaYDestruye = false;
	bChocaYControla = false;
	bChocaYMeDestruyo = false;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Chocar y Atravesar: Activado");
		//informar al jugador que se desactivaron las otras banderas
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Se desactivaron las demas colisiones");
	}
}

void AGalaga_USFX_LAB1Pawn::CheckInventory()
{
	// Verifica si el componente de inventario existe
	if (MyInventor)
	{
		if (GEngine)
		{
			FString Message = FString::Printf(TEXT("Tienes %d objetos en tu inventario"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, Message);
		}
	}
	else
	{

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "No tienes un Items de municion en el inventario");
		}
	}
}

void AGalaga_USFX_LAB1Pawn::ReloadAmmo()
{
	// Bandera para verificar si se encontró un objeto de munición
	bool bFoundAmmo = false;

	// Itera sobre los objetos en el inventario para encontrar uno de munición
	ACapsula* InventoryItem = nullptr;

	//for (AInventoryActor* InventoryItem : MyInventory->CurrentInventory)
	while (MyInventor->CurrentInventory.Dequeue(InventoryItem))
	{
		// Intenta hacer un cast a AInventoryActorMunicion
		ACapsulaArmas* AmmoItem = Cast<ACapsulaArmas>(InventoryItem);
		if (AmmoItem)
		{
			// Se encontró un objeto de munición en el inventario
			bFoundAmmo = true;

			// Se encontró un objeto de munición en el inventario
			// Elimina el objeto de munición del inventario			
			//MyInventory->RemoveFromInventory(AmmoItem);
			NumProye = 0; // Restablece el contador de proyectiles disparados.
			MaxProye = 20; // Establece el número máximo de proyectiles disparados
			bCanFire = true; // Permite al jugador disparar nuevamente.

			if (GEngine)
			{
				FString Message = FString::Printf(TEXT("Se recargaron +%d de municion"), MaxProye);//max proyectiles disparados
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
			}

			NumItems -= 1; // Disminuye el contador de objetos en el inventario
			CheckInventory();

			// Sal del bucle ya que encontraste y manejaste un objeto de munición
			break;
		}
	}

	// Verifica si no se encontró ningún objeto de munición
	if (!bFoundAmmo)
	{
		// Muestra un mensaje indicando que no se encontró ningún objeto de munición
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "No tienes municion para recargar");
		}
	}
}

void AGalaga_USFX_LAB1Pawn::NotifyHit(class UPrimitiveComponent*
	MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
	bool bSelfMoved, FVector HitLocation, FVector HitNormal,
	FVector NormalImpulse, const FHitResult& Hit)
{
	// Intenta convertir el actor 'Other' en un puntero a un objeto
	ACapsula* InventoryItem =Cast<ACapsula>(Other);
	if (InventoryItem != nullptr)
	{
		TakeItem(InventoryItem);
	}
	ANaveEnemigo* NaveEnemigo = Cast<ANaveEnemigo>(Other);
	//ANaveEnemigoEspia* NaveEnemigoEspia = Cast<ANaveEnemigoEspia>(Other);
	if (NaveEnemigo != nullptr)
	{

		if (bChocaYControla)
		{
			//NaveEnemigo= Cast<ANaveEnemigoEspia>(Other);
			NaveEnemigo->movimiento = true;
			NaveEnemigo->distanciaObs = Multiplicador * 125;
			NaveEnemigo->movimientoObstaculo();
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "	Tomas el Control de la Nave");
			}
			Multiplicador += 1;
			return;
		}
		else
		{
			NaveEnemigo->movimiento = false;// falla algo
		}
	//	 NaveEnemigo->movimiento = false;// falla algo

		if (bChocarYAtravesar)
		{
			NaveEnemigo->SetActorEnableCollision(false);
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "ATRAVESAS");
			}
			return;
		}
		if (!bChocarYAtravesar) NaveEnemigo->SetActorEnableCollision(true);

		if (bChocaYDestruye)
		{
			NaveEnemigo->Destroy();
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "SE DESTRUYO ");
			}
			return;
		}
		if (bChocaYMeDestruyo)
		{
			Destroy();

			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "NAVE DESTRUIDA: FIN DEL JUEGO");
			}
			return;
		}
	}
}

void AGalaga_USFX_LAB1Pawn::Saltar()
{
	//AlturaSalto = GetActorLocation().Z+300.0f; // Ajusta la altura del salto según sea necesario	
// Mueve la nave en la dirección de regreso a la posición inicial

	const float ReturnSpeed = 1000.0f; // Velocidad de retorno ajustable según sea necesario
	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	const FVector ReturnMovement = FVector(0, 0, 1) * ReturnSpeed * DeltaTime;
	if (GetActorLocation().Z <= AlturaSalto)
	{
		SetActorLocation(GetActorLocation() + ReturnMovement);

		// Llama a esta función nuevamente en el siguiente fotograma
		GetWorldTimerManager().SetTimerForNextTick([this]() {Saltar(); });

	}
	else
	{
		FinSaltar();
	}
}

void AGalaga_USFX_LAB1Pawn::FinSaltar()
{
	const float ReturnSpeed = 1000.0f; // Velocidad de retorno ajustable según sea necesario
	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	const FVector ReturnMovement = FVector(0, 0, -1) * ReturnSpeed * DeltaTime;
	if (GetActorLocation().Z >= AlturaSalto - 300.0f)
	{

		SetActorLocation(GetActorLocation() + ReturnMovement);

		// Llama a esta función nuevamente en el siguiente fotograma
		GetWorldTimerManager().SetTimerForNextTick([this]() {FinSaltar(); });

	}
}
void AGalaga_USFX_LAB1Pawn::TeleportToMouse()
{
	// Obtener el controlador del jugador
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (!PlayerController)
	{
		return;
	}

	// Verificar si se ha hecho clic
	if (!PlayerController->IsInputKeyDown(EKeys::LeftMouseButton))
	{
		return;
	}

	// Obtener la posición del clic en el mundo
	FVector ClickWorldLocation, ClickWorldDirection;
	PlayerController->DeprojectMousePositionToWorld(ClickWorldLocation, ClickWorldDirection);

	// Encontrar la intersección con el plano XY a la altura deseada (Z = 215)
	FVector CameraLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
	FVector RayEnd = ClickWorldLocation + (ClickWorldDirection * 10000.f); // Ajusta la distancia máxima del rayo según sea necesario

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // Ignorar la propia nave en la intersección
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, ClickWorldLocation, RayEnd, ECC_Visibility, CollisionParams);

	if (bHit)
	{
		// Asegurarse de que la altura Z sea 215
		HitResult.ImpactPoint.Z = 215;

		// Teletransportar la nave al punto de intersección
		SetActorLocation(HitResult.ImpactPoint);
	}
}

void AGalaga_USFX_LAB1Pawn::ReturnToInitialPosition()
{
	// Calcula la dirección desde la posición actual hasta la posición inicial
	FVector ReturnDirection = InicialPosicion - GetActorLocation();
	ReturnDirection.Normalize();

	// Calcula la rotación necesaria para que la nave apunte hacia la posición inicial
	FRotator TargetRotation = ReturnDirection.Rotation();

	// Interpola gradualmente la rotación actual de la nave hacia la rotación objetivo
	const float RotationInterpSpeed = 5.0f; // Velocidad de interpolación de rotación ajustable según sea necesario
	FRotator NewRotation = FMath::RInterpTo(GetActorRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), RotationInterpSpeed);

	// Aplica la nueva rotación a la nave
	SetActorRotation(NewRotation);

	// Mueve la nave en la dirección de regreso a la posición inicial
	const float ReturnSpeed = 1000.0f; // Velocidad de retorno ajustable según sea necesario
	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	const FVector ReturnMovement = ReturnDirection * ReturnSpeed * DeltaTime;

	// Comprueba si la nave está lo suficientemente cerca de la posición inicial
	const float ReturnDistanceThreshold = 10.0f; // Umbral de distancia ajustable según sea necesario
	if (FVector::DistSquared(GetActorLocation(), InicialPosicion) <= FMath::Square(ReturnDistanceThreshold))
	{
		// La nave está lo suficientemente cerca de la posición inicial, así que establece su posición y rotación exactamente en la posición inicial
		SetActorLocationAndRotation(InicialPosicion, FRotator(0, 0, 0));
	}
	else
	{
		// La nave todavía no está lo suficientemente cerca de la posición inicial, así que sigue moviéndola hacia allí
		SetActorLocation(GetActorLocation() + ReturnMovement);

		// Llama a esta función nuevamente en el siguiente fotograma
		GetWorldTimerManager().SetTimerForNextTick([this]() { ReturnToInitialPosition(); });
	}
}
