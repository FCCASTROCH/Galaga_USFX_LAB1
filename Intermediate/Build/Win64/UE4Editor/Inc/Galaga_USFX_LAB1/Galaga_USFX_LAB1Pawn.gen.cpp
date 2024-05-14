// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/Galaga_USFX_LAB1Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_LAB1Pawn() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB1Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_USceneComponentSpawn_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UComponenteActor_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UIBounceBall_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGalaga_USFX_LAB1Pawn::execTakeItem)
	{
		P_GET_OBJECT(ACapsula,Z_Param_InventoryItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeItem(Z_Param_InventoryItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGalaga_USFX_LAB1Pawn::execDropItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem();
		P_NATIVE_END;
	}
	void AGalaga_USFX_LAB1Pawn::StaticRegisterNativesAGalaga_USFX_LAB1Pawn()
	{
		UClass* Class = AGalaga_USFX_LAB1Pawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &AGalaga_USFX_LAB1Pawn::execDropItem },
			{ "TakeItem", &AGalaga_USFX_LAB1Pawn::execTakeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGalaga_USFX_LAB1Pawn, nullptr, "DropItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics
	{
		struct Galaga_USFX_LAB1Pawn_eventTakeItem_Parms
		{
			ACapsula* InventoryItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Galaga_USFX_LAB1Pawn_eventTakeItem_Parms, InventoryItem), Z_Construct_UClass_ACapsula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::NewProp_InventoryItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGalaga_USFX_LAB1Pawn, nullptr, "TakeItem", nullptr, nullptr, sizeof(Galaga_USFX_LAB1Pawn_eventTakeItem_Parms), Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_NoRegister()
	{
		return AGalaga_USFX_LAB1Pawn::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponentSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponentSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyInventor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyInventor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_DropItem, "DropItem" }, // 725112450
		{ &Z_Construct_UFunction_AGalaga_USFX_LAB1Pawn_TakeItem, "TakeItem" }, // 4172385112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_ShipMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "/* The mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_ShipMeshComponent = { "ShipMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_ShipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_ShipMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Offset from the ships location to spawn projectiles */" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* How fast the weapon will fire */" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, FireRate), METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* The speed our ship moves around the level */" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_SceneComponentSpawn_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//TArray<ACapsula*>ACapsulaArmas;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "TArray<ACapsula*>ACapsulaArmas;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_SceneComponentSpawn = { "SceneComponentSpawn", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, SceneComponentSpawn), Z_Construct_UClass_USceneComponentSpawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_SceneComponentSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_SceneComponentSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MyInventor_MetaData[] = {
		{ "Comment", "//float NumItems;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1Pawn.h" },
		{ "ToolTip", "float NumItems;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MyInventor = { "MyInventor", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1Pawn, MyInventor), Z_Construct_UClass_UComponenteActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MyInventor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MyInventor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_ShipMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_SceneComponentSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::NewProp_MyInventor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBounceBall_NoRegister, (int32)VTABLE_OFFSET(AGalaga_USFX_LAB1Pawn, IIBounceBall), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_LAB1Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::ClassParams = {
		&AGalaga_USFX_LAB1Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_LAB1Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_LAB1Pawn, 3016345690);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<AGalaga_USFX_LAB1Pawn>()
	{
		return AGalaga_USFX_LAB1Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_LAB1Pawn(Z_Construct_UClass_AGalaga_USFX_LAB1Pawn, &AGalaga_USFX_LAB1Pawn::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("AGalaga_USFX_LAB1Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_LAB1Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
