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
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NOTETRIS_API UClass* Z_Construct_UClass_AGridTriggerBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameGrid::execIsGridBoxOccupied)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GridBoxIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGridBoxOccupied(Z_Param_GridBoxIndex);
		P_NATIVE_END;
	}
	void AGameGrid::StaticRegisterNativesAGameGrid()
	{
		UClass* Class = AGameGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGridBoxOccupied", &AGameGrid::execIsGridBoxOccupied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics
	{
		struct GameGrid_eventIsGridBoxOccupied_Parms
		{
			int32 GridBoxIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridBoxIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_GridBoxIndex = { "GridBoxIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameGrid_eventIsGridBoxOccupied_Parms, GridBoxIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameGrid_eventIsGridBoxOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameGrid_eventIsGridBoxOccupied_Parms), &Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_GridBoxIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameGrid, nullptr, "IsGridBoxOccupied", nullptr, nullptr, sizeof(GameGrid_eventIsGridBoxOccupied_Parms), Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridBoxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridBoxes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameGrid_IsGridBoxOccupied, "IsGridBoxOccupied" }, // 2834813529
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes_Inner = { "GridBoxes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGridTriggerBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes_MetaData[] = {
		{ "Category", "GameGrid" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes = { "GridBoxes", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameGrid, GridBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGrid_Statics::NewProp_GridBoxes,
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
	IMPLEMENT_CLASS(AGameGrid, 247522653);
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
