// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/GameGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameGrid() {}
// Cross Module References
	NOTETRIS_API UScriptStruct* Z_Construct_UScriptStruct_FGridBoxRow();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NOTETRIS_API UClass* Z_Construct_UClass_AGridTriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AScore_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FGridBoxRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOTETRIS_API uint32 Get_Z_Construct_UScriptStruct_FGridBoxRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridBoxRow, Z_Construct_UPackage__Script_Notetris(), TEXT("GridBoxRow"), sizeof(FGridBoxRow), Get_Z_Construct_UScriptStruct_FGridBoxRow_Hash());
	}
	return Singleton;
}
template<> NOTETRIS_API UScriptStruct* StaticStruct<FGridBoxRow>()
{
	return FGridBoxRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridBoxRow(FGridBoxRow::StaticStruct, TEXT("/Script/Notetris"), TEXT("GridBoxRow"), false, nullptr, nullptr);
static struct FScriptStruct_Notetris_StaticRegisterNativesFGridBoxRow
{
	FScriptStruct_Notetris_StaticRegisterNativesFGridBoxRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GridBoxRow")),new UScriptStruct::TCppStructOps<FGridBoxRow>);
	}
} ScriptStruct_Notetris_StaticRegisterNativesFGridBoxRow;
	struct Z_Construct_UScriptStruct_FGridBoxRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBlocksInRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBlocksInRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBoxRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridBoxRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridBoxRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBoxRow_Statics::NewProp_NumberOfBlocksInRow_MetaData[] = {
		{ "Category", "GridBoxRow" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridBoxRow_Statics::NewProp_NumberOfBlocksInRow = { "NumberOfBlocksInRow", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridBoxRow, NumberOfBlocksInRow), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBoxRow_Statics::NewProp_NumberOfBlocksInRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBoxRow_Statics::NewProp_NumberOfBlocksInRow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridBoxRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBoxRow_Statics::NewProp_NumberOfBlocksInRow,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridBoxRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
		nullptr,
		&NewStructOps,
		"GridBoxRow",
		sizeof(FGridBoxRow),
		alignof(FGridBoxRow),
		Z_Construct_UScriptStruct_FGridBoxRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBoxRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBoxRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBoxRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridBoxRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridBoxRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Notetris();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridBoxRow"), sizeof(FGridBoxRow), Get_Z_Construct_UScriptStruct_FGridBoxRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridBoxRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridBoxRow_Hash() { return 2962619162U; }
	DEFINE_FUNCTION(AGameGrid::execIsGridBoxOccupied)
	{
		P_GET_STRUCT(FVector2D,Z_Param_GridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGridBoxOccupied(Z_Param_GridIndex);
		P_NATIVE_END;
	}
	static FName NAME_AGameGrid_CallGameOver = FName(TEXT("CallGameOver"));
	void AGameGrid::CallGameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameGrid_CallGameOver),NULL);
	}
	void AGameGrid::StaticRegisterNativesAGameGrid()
	{
		UClass* Class = AGameGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGridBoxOccupied", &AGameGrid::execIsGridBoxOccupied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameGrid_CallGameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameGrid_CallGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGrid_CallGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameGrid, nullptr, "CallGameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameGrid_CallGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGrid_CallGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameGrid_CallGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameGrid_CallGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics
	{
		struct GameGrid_eventIsGridBoxOccupied_Parms
		{
			FVector2D GridIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameGrid_eventIsGridBoxOccupied_Parms, GridIndex), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameGrid_eventIsGridBoxOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameGrid_eventIsGridBoxOccupied_Parms), &Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_GridIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameGrid, nullptr, "IsGridBoxOccupied", nullptr, nullptr, sizeof(GameGrid_eventIsGridBoxOccupied_Parms), Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameGrid_NoRegister()
	{
		return AGameGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGameGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GridBox;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridRow_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameOverLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowFilledSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowFilledSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameOverSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameGrid_CallGameOver, "CallGameOver" }, // 1013383779
		{ &Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied, "IsGridBoxOccupied" }, // 3802918882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameGrid.h" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBox_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBox = { "GridBox", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, GridBox), Z_Construct_UClass_AGridTriggerBox_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBox_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow_Inner = { "GridRow", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridBoxRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow = { "GridRow", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, GridRow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverLine_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverLine = { "GameOverLine", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, GameOverLine), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_ScoreText_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, ScoreText), Z_Construct_UClass_AScore_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_GameMusic_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GameMusic = { "GameMusic", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, GameMusic), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_GameMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_GameMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_RowFilledSound_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_RowFilledSound = { "RowFilledSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, RowFilledSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_RowFilledSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_RowFilledSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverSound_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverSound = { "GameOverSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, GameOverSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_ScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GameMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_RowFilledSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GameOverSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameGrid_Statics::ClassParams = {
		&AGameGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameGrid, 1346270274);
	template<> NOTETRIS_API UClass* StaticClass<AGameGrid>()
	{
		return AGameGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameGrid(Z_Construct_UClass_AGameGrid, &AGameGrid::StaticClass, TEXT("/Script/Notetris"), TEXT("AGameGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
