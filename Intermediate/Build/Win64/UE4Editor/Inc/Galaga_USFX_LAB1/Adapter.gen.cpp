// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/Adapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapter() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AAdapter_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_ABall_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UIBounceBall_NoRegister();
// End Cross Module References
	void AAdapter::StaticRegisterNativesAAdapter()
	{
	}
	UClass* Z_Construct_UClass_AAdapter_NoRegister()
	{
		return AAdapter::StaticClass();
	}
	struct Z_Construct_UClass_AAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Adapter.h" },
		{ "ModuleRelativePath", "Adapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapter_Statics::NewProp_ball_MetaData[] = {
		{ "Category", "Ball Adapter" },
		{ "ModuleRelativePath", "Adapter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapter_Statics::NewProp_ball = { "ball", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapter, ball), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapter_Statics::NewProp_ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapter_Statics::NewProp_ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapter_Statics::NewProp_ball,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBounceBall_NoRegister, (int32)VTABLE_OFFSET(AAdapter, IIBounceBall), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapter_Statics::ClassParams = {
		&AAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdapter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdapter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapter, 3592942969);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<AAdapter>()
	{
		return AAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapter(Z_Construct_UClass_AAdapter, &AAdapter::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("AAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
