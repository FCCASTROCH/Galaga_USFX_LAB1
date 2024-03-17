// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigocazaExplosiva.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigocazaExplosiva() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigocazaExplosiva_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigocazaExplosiva();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigocaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigocazaExplosiva::StaticRegisterNativesANaveEnemigocazaExplosiva()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigocazaExplosiva_NoRegister()
	{
		return ANaveEnemigocazaExplosiva::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveExplosiva_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveExplosiva;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigocaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigocazaExplosiva.h" },
		{ "ModuleRelativePath", "NaveEnemigocazaExplosiva.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::NewProp_MeshNaveExplosiva_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "Comment", "//Mesh de la nave enemiga caza explosiva\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigocazaExplosiva.h" },
		{ "ToolTip", "Mesh de la nave enemiga caza explosiva" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::NewProp_MeshNaveExplosiva = { "MeshNaveExplosiva", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigocazaExplosiva, MeshNaveExplosiva), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::NewProp_MeshNaveExplosiva_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::NewProp_MeshNaveExplosiva_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::NewProp_MeshNaveExplosiva,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigocazaExplosiva>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::ClassParams = {
		&ANaveEnemigocazaExplosiva::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigocazaExplosiva()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigocazaExplosiva_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigocazaExplosiva, 3051681846);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigocazaExplosiva>()
	{
		return ANaveEnemigocazaExplosiva::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigocazaExplosiva(Z_Construct_UClass_ANaveEnemigocazaExplosiva, &ANaveEnemigocazaExplosiva::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigocazaExplosiva"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigocazaExplosiva);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
