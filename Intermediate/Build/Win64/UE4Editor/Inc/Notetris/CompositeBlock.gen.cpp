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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NOTETRIS_API UClass* Z_Construct_UClass_ASingleBlock_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ACompositeBlock::execPlaceBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositeBlock::execMoveBlockDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveBlockDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositeBlock::execMoveBlockRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveBlockRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositeBlock::execMoveBlockLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveBlockLeft();
		P_NATIVE_END;
	}
	void ACompositeBlock::StaticRegisterNativesACompositeBlock()
	{
		UClass* Class = ACompositeBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveBlockDown", &ACompositeBlock::execMoveBlockDown },
			{ "MoveBlockLeft", &ACompositeBlock::execMoveBlockLeft },
			{ "MoveBlockRight", &ACompositeBlock::execMoveBlockRight },
			{ "PlaceBlock", &ACompositeBlock::execPlaceBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACompositeBlock_MoveBlockDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositeBlock_MoveBlockDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeBlock_MoveBlockDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositeBlock, nullptr, "MoveBlockDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositeBlock_MoveBlockDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeBlock_MoveBlockDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositeBlock_MoveBlockDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompositeBlock_MoveBlockDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositeBlock, nullptr, "MoveBlockLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositeBlock_MoveBlockRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositeBlock_MoveBlockRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeBlock_MoveBlockRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositeBlock, nullptr, "MoveBlockRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositeBlock_MoveBlockRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeBlock_MoveBlockRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositeBlock_MoveBlockRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompositeBlock_MoveBlockRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositeBlock_PlaceBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositeBlock_PlaceBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeBlock_PlaceBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositeBlock, nullptr, "PlaceBlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositeBlock_PlaceBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeBlock_PlaceBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositeBlock_PlaceBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACompositeBlock_PlaceBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACompositeBlock_NoRegister()
	{
		return ACompositeBlock::StaticClass();
	}
	struct Z_Construct_UClass_ACompositeBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeBlockRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompositeBlockRoot;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ACompositeBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompositeBlock_MoveBlockDown, "MoveBlockDown" }, // 1316492273
		{ &Z_Construct_UFunction_ACompositeBlock_MoveBlockLeft, "MoveBlockLeft" }, // 214783627
		{ &Z_Construct_UFunction_ACompositeBlock_MoveBlockRight, "MoveBlockRight" }, // 2166710762
		{ &Z_Construct_UFunction_ACompositeBlock_PlaceBlock, "PlaceBlock" }, // 4130128484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositeBlock_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CompositeBlock.h" },
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositeBlock_Statics::NewProp_CompositeBlockRoot_MetaData[] = {
		{ "Category", "CompositeBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CompositeBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeBlock_Statics::NewProp_CompositeBlockRoot = { "CompositeBlockRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACompositeBlock, CompositeBlockRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_CompositeBlockRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeBlock_Statics::NewProp_CompositeBlockRoot_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeBlock_Statics::NewProp_CompositeBlockRoot,
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
		FuncInfo,
		Z_Construct_UClass_ACompositeBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ACompositeBlock, 944551488);
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
