// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/BNaveNodriDisparadora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBNaveNodriDisparadora() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UBNaveNodriDisparadora_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UBNaveNodriDisparadora();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void UBNaveNodriDisparadora::StaticRegisterNativesUBNaveNodriDisparadora()
	{
	}
	UClass* Z_Construct_UClass_UBNaveNodriDisparadora_NoRegister()
	{
		return UBNaveNodriDisparadora::StaticClass();
	}
	struct Z_Construct_UClass_UBNaveNodriDisparadora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBNaveNodriDisparadora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBNaveNodriDisparadora_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BNaveNodriDisparadora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBNaveNodriDisparadora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBNaveNodriDisparadora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBNaveNodriDisparadora_Statics::ClassParams = {
		&UBNaveNodriDisparadora::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBNaveNodriDisparadora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBNaveNodriDisparadora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBNaveNodriDisparadora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBNaveNodriDisparadora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBNaveNodriDisparadora, 3013264);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<UBNaveNodriDisparadora>()
	{
		return UBNaveNodriDisparadora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBNaveNodriDisparadora(Z_Construct_UClass_UBNaveNodriDisparadora, &UBNaveNodriDisparadora::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("UBNaveNodriDisparadora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBNaveNodriDisparadora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
