// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/DefensaDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefensaDirector() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ADefensaDirector_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ADefensaDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void ADefensaDirector::StaticRegisterNativesADefensaDirector()
	{
	}
	UClass* Z_Construct_UClass_ADefensaDirector_NoRegister()
	{
		return ADefensaDirector::StaticClass();
	}
	struct Z_Construct_UClass_ADefensaDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefensaDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefensaDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefensaDirector.h" },
		{ "ModuleRelativePath", "DefensaDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefensaDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefensaDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefensaDirector_Statics::ClassParams = {
		&ADefensaDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADefensaDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefensaDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefensaDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefensaDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefensaDirector, 3256218371);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ADefensaDirector>()
	{
		return ADefensaDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefensaDirector(Z_Construct_UClass_ADefensaDirector, &ADefensaDirector::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ADefensaDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefensaDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
