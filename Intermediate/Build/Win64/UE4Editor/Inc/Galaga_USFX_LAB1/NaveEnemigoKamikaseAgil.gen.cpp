// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/NaveEnemigoKamikaseAgil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoKamikaseAgil() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoKamikaseAgil_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoKamikaseAgil();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ANaveEnemigoKamikase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigoKamikaseAgil::StaticRegisterNativesANaveEnemigoKamikaseAgil()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoKamikaseAgil_NoRegister()
	{
		return ANaveEnemigoKamikaseAgil::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveEnemigoKamikaseAgil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveEnemigoKamikaseAgil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigoKamikase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigoKamikaseAgil.h" },
		{ "ModuleRelativePath", "NaveEnemigoKamikaseAgil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::NewProp_MeshNaveEnemigoKamikaseAgil_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigoKamikaseAgil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::NewProp_MeshNaveEnemigoKamikaseAgil = { "MeshNaveEnemigoKamikaseAgil", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigoKamikaseAgil, MeshNaveEnemigoKamikaseAgil), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::NewProp_MeshNaveEnemigoKamikaseAgil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::NewProp_MeshNaveEnemigoKamikaseAgil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::NewProp_MeshNaveEnemigoKamikaseAgil,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoKamikaseAgil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::ClassParams = {
		&ANaveEnemigoKamikaseAgil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoKamikaseAgil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoKamikaseAgil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoKamikaseAgil, 2883877875);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ANaveEnemigoKamikaseAgil>()
	{
		return ANaveEnemigoKamikaseAgil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoKamikaseAgil(Z_Construct_UClass_ANaveEnemigoKamikaseAgil, &ANaveEnemigoKamikaseAgil::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ANaveEnemigoKamikaseAgil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoKamikaseAgil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
