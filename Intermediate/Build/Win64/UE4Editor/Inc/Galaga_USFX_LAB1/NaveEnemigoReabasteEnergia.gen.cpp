// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoReabasteEnergia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoReabasteEnergia() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoReabasteEnergia_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoReabasteEnergia();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoReabastecimiento();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ANaveEnemigoReabasteEnergia::StaticRegisterNativesANaveEnemigoReabasteEnergia()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoReabasteEnergia_NoRegister()
	{
		return ANaveEnemigoReabasteEnergia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoReabasteEnergia.h" },
		{ "ModuleRelativePath", "NaveEnemigoReabasteEnergia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoReabasteEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::ClassParams = {
		&ANaveEnemigoReabasteEnergia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoReabasteEnergia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoReabasteEnergia, 405991161);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoReabasteEnergia>()
	{
		return ANaveEnemigoReabasteEnergia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoReabasteEnergia(Z_Construct_UClass_ANaveEnemigoReabasteEnergia, &ANaveEnemigoReabasteEnergia::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoReabasteEnergia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoReabasteEnergia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
