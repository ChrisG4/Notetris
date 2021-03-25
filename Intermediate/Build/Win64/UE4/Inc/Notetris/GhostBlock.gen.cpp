// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Blocks/GhostBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostBlock() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_AGhostBlock_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AGhostBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
// End Cross Module References
	void AGhostBlock::StaticRegisterNativesAGhostBlock()
	{
	}
	UClass* Z_Construct_UClass_AGhostBlock_NoRegister()
	{
		return AGhostBlock::StaticClass();
	}
	struct Z_Construct_UClass_AGhostBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhostBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blocks/GhostBlock.h" },
		{ "ModuleRelativePath", "Blocks/GhostBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBlock_Statics::NewProp_GhostRoot_MetaData[] = {
		{ "Category", "GhostBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Blocks/GhostBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostBlock_Statics::NewProp_GhostRoot = { "GhostRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBlock, GhostRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostBlock_Statics::NewProp_GhostRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBlock_Statics::NewProp_GhostRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostBlock_Statics::NewProp_BlockSprite_MetaData[] = {
		{ "Category", "GhostBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Blocks/GhostBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostBlock_Statics::NewProp_BlockSprite = { "BlockSprite", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhostBlock, BlockSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhostBlock_Statics::NewProp_BlockSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBlock_Statics::NewProp_BlockSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhostBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBlock_Statics::NewProp_GhostRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostBlock_Statics::NewProp_BlockSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhostBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGhostBlock_Statics::ClassParams = {
		&AGhostBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGhostBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGhostBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGhostBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGhostBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGhostBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGhostBlock, 4251038831);
	template<> NOTETRIS_API UClass* StaticClass<AGhostBlock>()
	{
		return AGhostBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhostBlock(Z_Construct_UClass_AGhostBlock, &AGhostBlock::StaticClass, TEXT("/Script/Notetris"), TEXT("AGhostBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
