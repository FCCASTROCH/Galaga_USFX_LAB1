// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/construcNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeconstrucNave() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UconstrucNave_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UconstrucNave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
// End Cross Module References
	void UconstrucNave::StaticRegisterNativesUconstrucNave()
	{
	}
	UClass* Z_Construct_UClass_UconstrucNave_NoRegister()
	{
		return UconstrucNave::StaticClass();
	}
	struct Z_Construct_UClass_UconstrucNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UconstrucNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UconstrucNave_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "construcNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UconstrucNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IconstrucNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UconstrucNave_Statics::ClassParams = {
		&UconstrucNave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UconstrucNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UconstrucNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UconstrucNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UconstrucNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UconstrucNave, 4082553070);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<UconstrucNave>()
	{
		return UconstrucNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UconstrucNave(Z_Construct_UClass_UconstrucNave, &UconstrucNave::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("UconstrucNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UconstrucNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
