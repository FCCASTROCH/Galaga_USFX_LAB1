// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/PeticionNavesAtaque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionNavesAtaque() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNavesAtaque_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNavesAtaque();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void APeticionNavesAtaque::StaticRegisterNativesAPeticionNavesAtaque()
	{
	}
	UClass* Z_Construct_UClass_APeticionNavesAtaque_NoRegister()
	{
		return APeticionNavesAtaque::StaticClass();
	}
	struct Z_Construct_UClass_APeticionNavesAtaque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionNavesAtaque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APeticionNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionNavesAtaque_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PeticionNavesAtaque.h" },
		{ "ModuleRelativePath", "PeticionNavesAtaque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionNavesAtaque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionNavesAtaque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionNavesAtaque_Statics::ClassParams = {
		&APeticionNavesAtaque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeticionNavesAtaque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionNavesAtaque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionNavesAtaque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionNavesAtaque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionNavesAtaque, 4005818617);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<APeticionNavesAtaque>()
	{
		return APeticionNavesAtaque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionNavesAtaque(Z_Construct_UClass_APeticionNavesAtaque, &APeticionNavesAtaque::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("APeticionNavesAtaque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionNavesAtaque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
