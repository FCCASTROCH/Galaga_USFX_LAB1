// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/SceneComponentSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneComponentSpawn() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_USceneComponentSpawn_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_USceneComponentSpawn();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void USceneComponentSpawn::StaticRegisterNativesUSceneComponentSpawn()
	{
	}
	UClass* Z_Construct_UClass_USceneComponentSpawn_NoRegister()
	{
		return USceneComponentSpawn::StaticClass();
	}
	struct Z_Construct_UClass_USceneComponentSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneComponentSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponentSpawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SceneComponentSpawn.h" },
		{ "ModuleRelativePath", "SceneComponentSpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneComponentSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneComponentSpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneComponentSpawn_Statics::ClassParams = {
		&USceneComponentSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneComponentSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneComponentSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneComponentSpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneComponentSpawn, 181619339);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<USceneComponentSpawn>()
	{
		return USceneComponentSpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneComponentSpawn(Z_Construct_UClass_USceneComponentSpawn, &USceneComponentSpawn::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("USceneComponentSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneComponentSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif