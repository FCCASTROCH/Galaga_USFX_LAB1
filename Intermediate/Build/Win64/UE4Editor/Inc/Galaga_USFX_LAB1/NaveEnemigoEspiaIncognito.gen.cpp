// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoEspiaIncognito.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoEspiaIncognito() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoEspiaIncognito_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoEspiaIncognito();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ANaveEnemigoEspiaIncognito::StaticRegisterNativesANaveEnemigoEspiaIncognito()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoEspiaIncognito_NoRegister()
	{
		return ANaveEnemigoEspiaIncognito::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoEspiaIncognito.h" },
		{ "ModuleRelativePath", "NaveEnemigoEspiaIncognito.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoEspiaIncognito>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::ClassParams = {
		&ANaveEnemigoEspiaIncognito::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoEspiaIncognito()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoEspiaIncognito_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoEspiaIncognito, 1790374538);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoEspiaIncognito>()
	{
		return ANaveEnemigoEspiaIncognito::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoEspiaIncognito(Z_Construct_UClass_ANaveEnemigoEspiaIncognito, &ANaveEnemigoEspiaIncognito::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoEspiaIncognito"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoEspiaIncognito);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
