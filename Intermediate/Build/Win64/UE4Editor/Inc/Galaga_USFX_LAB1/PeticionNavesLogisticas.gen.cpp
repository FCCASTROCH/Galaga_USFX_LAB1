// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/PeticionNavesLogisticas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionNavesLogisticas() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNavesLogisticas_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNavesLogisticas();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void APeticionNavesLogisticas::StaticRegisterNativesAPeticionNavesLogisticas()
	{
	}
	UClass* Z_Construct_UClass_APeticionNavesLogisticas_NoRegister()
	{
		return APeticionNavesLogisticas::StaticClass();
	}
	struct Z_Construct_UClass_APeticionNavesLogisticas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionNavesLogisticas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APeticionNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionNavesLogisticas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PeticionNavesLogisticas.h" },
		{ "ModuleRelativePath", "PeticionNavesLogisticas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionNavesLogisticas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionNavesLogisticas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionNavesLogisticas_Statics::ClassParams = {
		&APeticionNavesLogisticas::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APeticionNavesLogisticas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionNavesLogisticas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionNavesLogisticas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionNavesLogisticas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionNavesLogisticas, 289224055);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<APeticionNavesLogisticas>()
	{
		return APeticionNavesLogisticas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionNavesLogisticas(Z_Construct_UClass_APeticionNavesLogisticas, &APeticionNavesLogisticas::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("APeticionNavesLogisticas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionNavesLogisticas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
