// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoKamikaseExplosivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoKamikaseExplosivo() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoKamikase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigoKamikaseExplosivo::StaticRegisterNativesANaveEnemigoKamikaseExplosivo()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_NoRegister()
	{
		return ANaveEnemigoKamikaseExplosivo::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveEnemigoKamikaseExplosivo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveEnemigoKamikaseExplosivo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoKamikase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoKamikaseExplosivo.h" },
		{ "ModuleRelativePath", "NaveEnemigoKamikaseExplosivo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::NewProp_MeshNaveEnemigoKamikaseExplosivo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigoKamikaseExplosivo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::NewProp_MeshNaveEnemigoKamikaseExplosivo = { "MeshNaveEnemigoKamikaseExplosivo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigoKamikaseExplosivo, MeshNaveEnemigoKamikaseExplosivo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::NewProp_MeshNaveEnemigoKamikaseExplosivo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::NewProp_MeshNaveEnemigoKamikaseExplosivo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::NewProp_MeshNaveEnemigoKamikaseExplosivo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoKamikaseExplosivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::ClassParams = {
		&ANaveEnemigoKamikaseExplosivo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoKamikaseExplosivo, 2241898826);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoKamikaseExplosivo>()
	{
		return ANaveEnemigoKamikaseExplosivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoKamikaseExplosivo(Z_Construct_UClass_ANaveEnemigoKamikaseExplosivo, &ANaveEnemigoKamikaseExplosivo::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoKamikaseExplosivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoKamikaseExplosivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
