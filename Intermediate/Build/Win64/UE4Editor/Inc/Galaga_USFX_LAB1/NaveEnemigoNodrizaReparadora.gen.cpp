// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoNodrizaReparadora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoNodrizaReparadora() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoNodrizaReparadora();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoNodriza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigoNodrizaReparadora::StaticRegisterNativesANaveEnemigoNodrizaReparadora()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_NoRegister()
	{
		return ANaveEnemigoNodrizaReparadora::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveEnemigoNodrizaReparadora_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveEnemigoNodrizaReparadora;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoNodriza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoNodrizaReparadora.h" },
		{ "ModuleRelativePath", "NaveEnemigoNodrizaReparadora.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::NewProp_MeshNaveEnemigoNodrizaReparadora_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigoNodrizaReparadora.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::NewProp_MeshNaveEnemigoNodrizaReparadora = { "MeshNaveEnemigoNodrizaReparadora", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigoNodrizaReparadora, MeshNaveEnemigoNodrizaReparadora), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::NewProp_MeshNaveEnemigoNodrizaReparadora_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::NewProp_MeshNaveEnemigoNodrizaReparadora_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::NewProp_MeshNaveEnemigoNodrizaReparadora,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoNodrizaReparadora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::ClassParams = {
		&ANaveEnemigoNodrizaReparadora::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoNodrizaReparadora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoNodrizaReparadora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoNodrizaReparadora, 1883690066);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoNodrizaReparadora>()
	{
		return ANaveEnemigoNodrizaReparadora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoNodrizaReparadora(Z_Construct_UClass_ANaveEnemigoNodrizaReparadora, &ANaveEnemigoNodrizaReparadora::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoNodrizaReparadora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoNodrizaReparadora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
