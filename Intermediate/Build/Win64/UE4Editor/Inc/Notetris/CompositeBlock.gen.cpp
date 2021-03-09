// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/CompositeBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeBlock() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ACompositeBlock_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ACompositeBlock();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NOTETRIS_API UClass* Z_Construct_UClass_ASingleBlock_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACompositeBlock::StaticRegisterNativesACompositeBlock()
	{
	}
	UClass* Z_Construct_UClass_ACompositeBlock_NoRegister()
	{
		return ACompositeBlock::StaticClass();
	}
	struct Z_Construct_UClass_ACompositeBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleBlockActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SingleBlockActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockUnitPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockUnitPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockUnitPositions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SingleBlocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleBlocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SingleBlocks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompositeBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositeBlock_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CompositeBlock.h" },
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlockActor_MetaData[] = {
		{ "Category", "CompositeBlock" },
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlockActor = { "SingleBlockActor", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompositeBlock, SingleBlockActor), Z_Construct_UClass_ASingleBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlockActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlockActor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions_Inner = { "BlockUnitPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions_MetaData[] = {
		{ "Category", "CompositeBlock" },
		{ "Comment", "//Multiplied by Sprite Size (e.g. (1, 0, 0) would be one block to the left)\n" },
		{ "ModuleRelativePath", "CompositeBlock.h" },
		{ "ToolTip", "Multiplied by Sprite Size (e.g. (1, 0, 0) would be one block to the left)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions = { "BlockUnitPositions", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompositeBlock, BlockUnitPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks_Inner = { "SingleBlocks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASingleBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks_MetaData[] = {
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks = { "SingleBlocks", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompositeBlock, SingleBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositeBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlockActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeBlock_Statics::NewProp_BlockUnitPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeBlock_Statics::NewProp_SingleBlocks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompositeBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositeBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACompositeBlock_Statics::ClassParams = {
		&ACompositeBlock::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACompositeBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeBlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACompositeBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompositeBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACompositeBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACompositeBlock, 2616511775);
	template<> NOTETRIS_API UClass* StaticClass<ACompositeBlock>()
	{
		return ACompositeBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACompositeBlock(Z_Construct_UClass_ACompositeBlock, &ACompositeBlock::StaticClass, TEXT("/Script/Notetris"), TEXT("ACompositeBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositeBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
