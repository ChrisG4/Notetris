// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/SaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_USaveData_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_USaveData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Notetris();
// End Cross Module References
	void USaveData::StaticRegisterNativesUSaveData()
	{
	}
	UClass* Z_Construct_UClass_USaveData_NoRegister()
	{
		return USaveData::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClassicHighScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassicHighScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassicHighScores;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuinHighScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuinHighScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuinHighScores;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDataName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveData.h" },
		{ "ModuleRelativePath", "SaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores_Inner = { "ClassicHighScores", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "SaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores = { "ClassicHighScores", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData, ClassicHighScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores_Inner = { "QuinHighScores", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "SaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores = { "QuinHighScores", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData, QuinHighScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::NewProp_SaveDataName_MetaData[] = {
		{ "ModuleRelativePath", "SaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_SaveDataName = { "SaveDataName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData, SaveDataName), METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::NewProp_SaveDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::NewProp_SaveDataName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::NewProp_UserIndex_MetaData[] = {
		{ "ModuleRelativePath", "SaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData, UserIndex), METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::NewProp_UserIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_ClassicHighScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_QuinHighScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_SaveDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_UserIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_Statics::ClassParams = {
		&USaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData, 1335056507);
	template<> NOTETRIS_API UClass* StaticClass<USaveData>()
	{
		return USaveData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData(Z_Construct_UClass_USaveData, &USaveData::StaticClass, TEXT("/Script/Notetris"), TEXT("USaveData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
