// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/PeticionNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeticionNaves() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNaves_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_APeticionNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void APeticionNaves::StaticRegisterNativesAPeticionNaves()
	{
	}
	UClass* Z_Construct_UClass_APeticionNaves_NoRegister()
	{
		return APeticionNaves::StaticClass();
	}
	struct Z_Construct_UClass_APeticionNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeticionNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeticionNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PeticionNaves.h" },
		{ "ModuleRelativePath", "PeticionNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeticionNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeticionNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeticionNaves_Statics::ClassParams = {
		&APeticionNaves::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeticionNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeticionNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeticionNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeticionNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeticionNaves, 2594431961);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<APeticionNaves>()
	{
		return APeticionNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeticionNaves(Z_Construct_UClass_APeticionNaves, &APeticionNaves::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("APeticionNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeticionNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
