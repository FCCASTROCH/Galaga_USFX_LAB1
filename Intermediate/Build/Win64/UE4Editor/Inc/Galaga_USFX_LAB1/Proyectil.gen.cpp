// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/Proyectil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectil() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AProyectil_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AProyectil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProyectil::StaticRegisterNativesAProyectil()
	{
	}
	UClass* Z_Construct_UClass_AProyectil_NoRegister()
	{
		return AProyectil::StaticClass();
	}
	struct Z_Construct_UClass_AProyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProyectilMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProyectilMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Proyectil.h" },
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Statics::NewProp_ProyectilMesh_MetaData[] = {
		{ "AllowPrivate", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectil_Statics::NewProp_ProyectilMesh = { "ProyectilMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectil, ProyectilMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectil_Statics::NewProp_ProyectilMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::NewProp_ProyectilMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectil_Statics::NewProp_ProyectilMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectil_Statics::ClassParams = {
		&AProyectil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProyectil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectil, 2255809012);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<AProyectil>()
	{
		return AProyectil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectil(Z_Construct_UClass_AProyectil, &AProyectil::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("AProyectil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif