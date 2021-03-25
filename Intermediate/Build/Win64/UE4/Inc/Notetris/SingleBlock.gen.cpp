// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Blocks/SingleBlock.h"
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
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NOTETRIS_API UClass* Z_Construct_UClass_AGhostBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASingleBlock::execSetGridIndex)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewGridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGridIndex(Z_Param_NewGridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASingleBlock::execSetGameGrid)
	{
		P_GET_OBJECT(AGameGrid,Z_Param_NewGameGrid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameGrid(Z_Param_NewGameGrid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASingleBlock::execCanMoveDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanMoveDown();
		P_NATIVE_END;
	}
	void ASingleBlock::StaticRegisterNativesASingleBlock()
	{
		UClass* Class = ASingleBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanMoveDown", &ASingleBlock::execCanMoveDown },
			{ "SetGameGrid", &ASingleBlock::execSetGameGrid },
			{ "SetGridIndex", &ASingleBlock::execSetGridIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics
	{
		struct SingleBlock_eventCanMoveDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SingleBlock_eventCanMoveDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SingleBlock_eventCanMoveDown_Parms), &Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleBlock, nullptr, "CanMoveDown", nullptr, nullptr, sizeof(SingleBlock_eventCanMoveDown_Parms), Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingleBlock_CanMoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingleBlock_CanMoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics
	{
		struct SingleBlock_eventSetGameGrid_Parms
		{
			AGameGrid* NewGameGrid;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGameGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::NewProp_NewGameGrid = { "NewGameGrid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingleBlock_eventSetGameGrid_Parms, NewGameGrid), Z_Construct_UClass_AGameGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::NewProp_NewGameGrid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleBlock, nullptr, "SetGameGrid", nullptr, nullptr, sizeof(SingleBlock_eventSetGameGrid_Parms), Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingleBlock_SetGameGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingleBlock_SetGameGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics
	{
		struct SingleBlock_eventSetGridIndex_Parms
		{
			FVector2D NewGridIndex;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGridIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::NewProp_NewGridIndex = { "NewGridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SingleBlock_eventSetGridIndex_Parms, NewGridIndex), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::NewProp_NewGridIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASingleBlock, nullptr, "SetGridIndex", nullptr, nullptr, sizeof(SingleBlock_eventSetGridIndex_Parms), Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASingleBlock_SetGridIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASingleBlock_SetGridIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASingleBlock_NoRegister()
	{
		return ASingleBlock::StaticClass();
	}
	struct Z_Construct_UClass_ASingleBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostBlockType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GhostBlockType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingleBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASingleBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASingleBlock_CanMoveDown, "CanMoveDown" }, // 1152947148
		{ &Z_Construct_UFunction_ASingleBlock_SetGameGrid, "SetGameGrid" }, // 2716392041
		{ &Z_Construct_UFunction_ASingleBlock_SetGridIndex, "SetGridIndex" }, // 883550906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blocks/SingleBlock.h" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot = { "BlockRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, BlockRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite = { "BlockSprite", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, BlockSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid = { "GameGrid", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, GameGrid), Z_Construct_UClass_AGameGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_GridIndex_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, GridIndex), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GridIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GridIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlockType_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlockType = { "GhostBlockType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, GhostBlockType), Z_Construct_UClass_AGhostBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlockType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlock_MetaData[] = {
		{ "Category", "SingleBlock" },
		{ "ModuleRelativePath", "Blocks/SingleBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlock = { "GhostBlock", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleBlock, GhostBlock), Z_Construct_UClass_AGhostBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingleBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_BlockSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_GameGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_GridIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlockType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleBlock_Statics::NewProp_GhostBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingleBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingleBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingleBlock_Statics::ClassParams = {
		&ASingleBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASingleBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASingleBlock, 2772529855);
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
