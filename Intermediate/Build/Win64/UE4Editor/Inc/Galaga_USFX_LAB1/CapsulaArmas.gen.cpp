// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/CapsulaArmas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaArmas() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ACapsulaArmas_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ACapsulaArmas();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ACapsulaArmas::StaticRegisterNativesACapsulaArmas()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaArmas_NoRegister()
	{
		return ACapsulaArmas::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaArmas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaArmas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaArmas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsulaArmas.h" },
		{ "ModuleRelativePath", "CapsulaArmas.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaArmas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaArmas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaArmas_Statics::ClassParams = {
		&ACapsulaArmas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaArmas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaArmas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaArmas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaArmas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaArmas, 3707502039);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ACapsulaArmas>()
	{
		return ACapsulaArmas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaArmas(Z_Construct_UClass_ACapsulaArmas, &ACapsulaArmas::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ACapsulaArmas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaArmas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif