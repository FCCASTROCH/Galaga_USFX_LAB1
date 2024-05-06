// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/BNaveNodrizaConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBNaveNodrizaConcreto() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ABNaveNodrizaConcreto_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ABNaveNodrizaConcreto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UBNaveNodriza_NoRegister();
// End Cross Module References
	void ABNaveNodrizaConcreto::StaticRegisterNativesABNaveNodrizaConcreto()
	{
	}
	UClass* Z_Construct_UClass_ABNaveNodrizaConcreto_NoRegister()
	{
		return ABNaveNodrizaConcreto::StaticClass();
	}
	struct Z_Construct_UClass_ABNaveNodrizaConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BNaveNodrizaConcreto.h" },
		{ "ModuleRelativePath", "BNaveNodrizaConcreto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBNaveNodriza_NoRegister, (int32)VTABLE_OFFSET(ABNaveNodrizaConcreto, IBNaveNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABNaveNodrizaConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::ClassParams = {
		&ABNaveNodrizaConcreto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABNaveNodrizaConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABNaveNodrizaConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABNaveNodrizaConcreto, 373710825);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<ABNaveNodrizaConcreto>()
	{
		return ABNaveNodrizaConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABNaveNodrizaConcreto(Z_Construct_UClass_ABNaveNodrizaConcreto, &ABNaveNodrizaConcreto::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("ABNaveNodrizaConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABNaveNodrizaConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
