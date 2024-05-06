// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/ConstructorNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorNave() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AConstructorNave_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AConstructorNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void AConstructorNave::StaticRegisterNativesAConstructorNave()
	{
	}
	UClass* Z_Construct_UClass_AConstructorNave_NoRegister()
	{
		return AConstructorNave::StaticClass();
	}
	struct Z_Construct_UClass_AConstructorNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructorNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructorNave.h" },
		{ "ModuleRelativePath", "ConstructorNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructorNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructorNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructorNave_Statics::ClassParams = {
		&AConstructorNave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AConstructorNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructorNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructorNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructorNave, 3906990940);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<AConstructorNave>()
	{
		return AConstructorNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructorNave(Z_Construct_UClass_AConstructorNave, &AConstructorNave::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("AConstructorNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructorNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
