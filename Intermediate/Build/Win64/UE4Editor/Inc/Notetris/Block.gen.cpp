// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Block.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ABlock();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABlock::StaticRegisterNativesABlock()
	{
	}
	UClass* Z_Construct_UClass_ABlock_NoRegister()
	{
		return ABlock::StaticClass();
	}
	struct Z_Construct_UClass_ABlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpriteColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockSpriteColour;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockStartingPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockStartingPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockStartingPositions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Block.h" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BlockRoot_MetaData[] = {
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockRoot = { "BlockRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, BlockRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_BlockRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BlockRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BlockSprite_MetaData[] = {
		{ "Category", "Block" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockSprite = { "BlockSprite", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, BlockSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_BlockSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BlockSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BlockSpriteColour_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockSpriteColour = { "BlockSpriteColour", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, BlockSpriteColour), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_BlockSpriteColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BlockSpriteColour_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions_Inner = { "BlockStartingPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions_MetaData[] = {
		{ "Category", "Block" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "Block.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions = { "BlockStartingPositions", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock, BlockStartingPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockSpriteColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Statics::NewProp_BlockStartingPositions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlock_Statics::ClassParams = {
		&ABlock::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock, 2469141161);
	template<> NOTETRIS_API UClass* StaticClass<ABlock>()
	{
		return ABlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock(Z_Construct_UClass_ABlock, &ABlock::StaticClass, TEXT("/Script/Notetris"), TEXT("ABlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
