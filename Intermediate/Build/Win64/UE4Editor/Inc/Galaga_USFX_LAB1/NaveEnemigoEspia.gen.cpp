// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoEspia() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoEspia_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoEspia();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigo();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ANaveEnemigoEspia::StaticRegisterNativesANaveEnemigoEspia()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoEspia_NoRegister()
	{
		return ANaveEnemigoEspia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoEspia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoEspia.h" },
		{ "ModuleRelativePath", "NaveEnemigoEspia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoEspia_Statics::ClassParams = {
		&ANaveEnemigoEspia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoEspia, 261428966);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoEspia>()
	{
		return ANaveEnemigoEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoEspia(Z_Construct_UClass_ANaveEnemigoEspia, &ANaveEnemigoEspia::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
