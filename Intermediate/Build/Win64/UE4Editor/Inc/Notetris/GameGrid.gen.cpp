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
	NOTETRIS_API UScriptStruct* Z_Construct_UScriptStruct_FGridCoordinates();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FGridCoordinates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NOTETRIS_API uint32 Get_Z_Construct_UScriptStruct_FGridCoordinates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCoordinates, Z_Construct_UPackage__Script_Notetris(), TEXT("GridCoordinates"), sizeof(FGridCoordinates), Get_Z_Construct_UScriptStruct_FGridCoordinates_Hash());
	}
	return Singleton;
}
template<> NOTETRIS_API UScriptStruct* StaticStruct<FGridCoordinates>()
{
	return FGridCoordinates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridCoordinates(FGridCoordinates::StaticStruct, TEXT("/Script/Notetris"), TEXT("GridCoordinates"), false, nullptr, nullptr);
static struct FScriptStruct_Notetris_StaticRegisterNativesFGridCoordinates
{
	FScriptStruct_Notetris_StaticRegisterNativesFGridCoordinates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GridCoordinates")),new UScriptStruct::TCppStructOps<FGridCoordinates>);
	}
} ScriptStruct_Notetris_StaticRegisterNativesFGridCoordinates;
	struct Z_Construct_UScriptStruct_FGridCoordinates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCoordinates>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
		nullptr,
		&NewStructOps,
		"GridCoordinates",
		sizeof(FGridCoordinates),
		alignof(FGridCoordinates),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridCoordinates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCoordinates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridCoordinates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridCoordinates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Notetris();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridCoordinates"), sizeof(FGridCoordinates), Get_Z_Construct_UScriptStruct_FGridCoordinates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridCoordinates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridCoordinates_Hash() { return 1992107793U; }
	void AGameGrid::StaticRegisterNativesAGameGrid()
	{
	}
	UClass* Z_Construct_UClass_AGameGrid_NoRegister()
	{
		return AGameGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGameGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameGrid.h" },
		{ "ModuleRelativePath", "GameGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameGrid_Statics::ClassParams = {
		&AGameGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AGameGrid, 2294926028);
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
