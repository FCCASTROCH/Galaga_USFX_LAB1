// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigocaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigocaza() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigocaza_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigocaza();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigo();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ANaveEnemigocaza::StaticRegisterNativesANaveEnemigocaza()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigocaza_NoRegister()
	{
		return ANaveEnemigocaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigocaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigocaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigocaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n \n //crear nave trransporte\n\n */" },
		{ "IncludePath", "NaveEnemigocaza.h" },
		{ "ModuleRelativePath", "NaveEnemigocaza.h" },
		{ "ToolTip", "//crear nave trransporte" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigocaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigocaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigocaza_Statics::ClassParams = {
		&ANaveEnemigocaza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigocaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigocaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigocaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigocaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigocaza, 960821825);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigocaza>()
	{
		return ANaveEnemigocaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigocaza(Z_Construct_UClass_ANaveEnemigocaza, &ANaveEnemigocaza::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigocaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigocaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
