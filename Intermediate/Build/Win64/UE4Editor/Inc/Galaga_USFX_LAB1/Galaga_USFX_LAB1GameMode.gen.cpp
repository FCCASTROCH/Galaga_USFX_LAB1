// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB1/Galaga_USFX_LAB1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_USFX_LAB1GameMode() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB1();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AAdapter_NoRegister();
// End Cross Module References
	void AGalaga_USFX_LAB1GameMode::StaticRegisterNativesAGalaga_USFX_LAB1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_NoRegister()
	{
		return AGalaga_USFX_LAB1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adaptador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Adaptador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class ADefensaDirector;\n//class ABNaveNodrizaConcreto;\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_USFX_LAB1GameMode.h" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "class ADefensaDirector;\nclass ABNaveNodrizaConcreto;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Jugador_MetaData[] = {
		{ "Category", "Game mode" },
		{ "Comment", "//clase adapter\n" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1GameMode.h" },
		{ "ToolTip", "clase adapter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1GameMode, Jugador), Z_Construct_UClass_AGalaga_USFX_LAB1Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Adaptador_MetaData[] = {
		{ "Category", "Game mode" },
		{ "ModuleRelativePath", "Galaga_USFX_LAB1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Adaptador = { "Adaptador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_USFX_LAB1GameMode, Adaptador), Z_Construct_UClass_AAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Adaptador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Adaptador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::NewProp_Adaptador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_USFX_LAB1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::ClassParams = {
		&AGalaga_USFX_LAB1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_USFX_LAB1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_USFX_LAB1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_USFX_LAB1GameMode, 1817259425);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<AGalaga_USFX_LAB1GameMode>()
	{
		return AGalaga_USFX_LAB1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_USFX_LAB1GameMode(Z_Construct_UClass_AGalaga_USFX_LAB1GameMode, &AGalaga_USFX_LAB1GameMode::StaticClass, TEXT("/Script/Galaga_USFX_LAB1"), TEXT("AGalaga_USFX_LAB1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_USFX_LAB1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
