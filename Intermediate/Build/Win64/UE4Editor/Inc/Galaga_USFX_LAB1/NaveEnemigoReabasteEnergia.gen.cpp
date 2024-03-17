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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveEnemigoReabasteEnergia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveEnemigoReabasteEnergia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::NewProp_MeshNaveEnemigoReabasteEnergia_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigoReabasteEnergia.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::NewProp_MeshNaveEnemigoReabasteEnergia = { "MeshNaveEnemigoReabasteEnergia", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigoReabasteEnergia, MeshNaveEnemigoReabasteEnergia), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::NewProp_MeshNaveEnemigoReabasteEnergia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::NewProp_MeshNaveEnemigoReabasteEnergia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::NewProp_MeshNaveEnemigoReabasteEnergia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoReabasteEnergia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::ClassParams = {
		&ANaveEnemigoReabasteEnergia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoReabasteEnergia_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ANaveEnemigoReabasteEnergia, 4083075291);
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
