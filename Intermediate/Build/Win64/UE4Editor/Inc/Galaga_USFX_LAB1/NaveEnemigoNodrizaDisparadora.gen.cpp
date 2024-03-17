// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoNodrizaDisparadora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoNodrizaDisparadora() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoNodriza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigoNodrizaDisparadora::StaticRegisterNativesANaveEnemigoNodrizaDisparadora()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_NoRegister()
	{
		return ANaveEnemigoNodrizaDisparadora::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveEnemigoNodrizaDisparadora_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveEnemigoNodrizaDisparadora;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoNodriza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoNodrizaDisparadora.h" },
		{ "ModuleRelativePath", "NaveEnemigoNodrizaDisparadora.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::NewProp_MeshNaveEnemigoNodrizaDisparadora_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigoNodrizaDisparadora.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::NewProp_MeshNaveEnemigoNodrizaDisparadora = { "MeshNaveEnemigoNodrizaDisparadora", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigoNodrizaDisparadora, MeshNaveEnemigoNodrizaDisparadora), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::NewProp_MeshNaveEnemigoNodrizaDisparadora_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::NewProp_MeshNaveEnemigoNodrizaDisparadora_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::NewProp_MeshNaveEnemigoNodrizaDisparadora,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoNodrizaDisparadora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::ClassParams = {
		&ANaveEnemigoNodrizaDisparadora::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoNodrizaDisparadora, 3330036260);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoNodrizaDisparadora>()
	{
		return ANaveEnemigoNodrizaDisparadora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoNodrizaDisparadora(Z_Construct_UClass_ANaveEnemigoNodrizaDisparadora, &ANaveEnemigoNodrizaDisparadora::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoNodrizaDisparadora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoNodrizaDisparadora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
