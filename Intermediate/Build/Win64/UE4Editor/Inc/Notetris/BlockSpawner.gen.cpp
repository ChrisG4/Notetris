// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Blocks/BlockSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockSpawner() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ABlockSpawner_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ABlockSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NOTETRIS_API UClass* Z_Construct_UClass_ACompositeBlock_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABlockSpawner::StaticRegisterNativesABlockSpawner()
	{
	}
	UClass* Z_Construct_UClass_ABlockSpawner_NoRegister()
	{
		return ABlockSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ABlockSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameGrid;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnableBlocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnableBlocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnableBlocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldBlockLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeldBlockLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blocks/BlockSpawner.h" },
		{ "ModuleRelativePath", "Blocks/BlockSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockSpawner_Statics::NewProp_GameGrid_MetaData[] = {
		{ "Category", "BlockSpawner" },
		{ "ModuleRelativePath", "Blocks/BlockSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_GameGrid = { "GameGrid", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockSpawner, GameGrid), Z_Construct_UClass_AGameGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockSpawner_Statics::NewProp_GameGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::NewProp_GameGrid_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks_Inner = { "SpawnableBlocks", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACompositeBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks_MetaData[] = {
		{ "Category", "BlockSpawner" },
		{ "ModuleRelativePath", "Blocks/BlockSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks = { "SpawnableBlocks", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockSpawner, SpawnableBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockSpawner_Statics::NewProp_HeldBlockLocation_MetaData[] = {
		{ "Category", "BlockSpawner" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "Blocks/BlockSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_HeldBlockLocation = { "HeldBlockLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockSpawner, HeldBlockLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABlockSpawner_Statics::NewProp_HeldBlockLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::NewProp_HeldBlockLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_GameGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnableBlocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_HeldBlockLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockSpawner_Statics::ClassParams = {
		&ABlockSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockSpawner, 10719029);
	template<> NOTETRIS_API UClass* StaticClass<ABlockSpawner>()
	{
		return ABlockSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockSpawner(Z_Construct_UClass_ABlockSpawner, &ABlockSpawner::StaticClass, TEXT("/Script/Notetris"), TEXT("ABlockSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
