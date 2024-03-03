// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NivelJuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelJuego() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANivelJuego_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANivelJuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ANivelJuego::StaticRegisterNativesANivelJuego()
	{
	}
	UClass* Z_Construct_UClass_ANivelJuego_NoRegister()
	{
		return ANivelJuego::StaticClass();
	}
	struct Z_Construct_UClass_ANivelJuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivelJuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivelJuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NivelJuego.h" },
		{ "ModuleRelativePath", "NivelJuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivelJuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivelJuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivelJuego_Statics::ClassParams = {
		&ANivelJuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANivelJuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivelJuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivelJuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivelJuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivelJuego, 200040107);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANivelJuego>()
	{
		return ANivelJuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivelJuego(Z_Construct_UClass_ANivelJuego, &ANivelJuego::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANivelJuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivelJuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
