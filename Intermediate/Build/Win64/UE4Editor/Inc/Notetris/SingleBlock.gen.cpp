// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/SingleBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleBlock() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ASingleBlock_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ASingleBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
// End Cross Module References
	void ASingleBlock::StaticRegisterNativesASingleBlock()
	{
	}
	UClass* Z_Construct_UClass_ASingleBlock_NoRegister()
	{
		return ASingleBlock::StaticClass();
	}
	struct Z_Construct_UClass_ASingleBlock_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingleBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingleBlock.h" },
		{ "ModuleRelativePath", "SingleBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot = { "BlockRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, BlockRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite = { "BlockSprite", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, BlockSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "ModuleRelativePath", "SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid = { "GameGrid", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, GameGrid), Z_Construct_UClass_AGameGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingleBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingleBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingleBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingleBlock_Statics::ClassParams = {
		&ASingleBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASingleBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingleBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingleBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingleBlock, 278542996);
	template<> NOTETRIS_API UClass* StaticClass<ASingleBlock>()
	{
		return ASingleBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingleBlock(Z_Construct_UClass_ASingleBlock, &ASingleBlock::StaticClass, TEXT("/Script/Notetris"), TEXT("ASingleBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
