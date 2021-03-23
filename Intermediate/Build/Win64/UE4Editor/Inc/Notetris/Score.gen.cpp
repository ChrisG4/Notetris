// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Score.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScore() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_AScore_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_AScore();
	NOTETRIS_API UClass* Z_Construct_UClass_ADynamicText();
	UPackage* Z_Construct_UPackage__Script_Notetris();
// End Cross Module References
	void AScore::StaticRegisterNativesAScore()
	{
	}
	UClass* Z_Construct_UClass_AScore_NoRegister()
	{
		return AScore::StaticClass();
	}
	struct Z_Construct_UClass_AScore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADynamicText,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Score.h" },
		{ "ModuleRelativePath", "Score.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScore_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Score.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AScore_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScore, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_AScore_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScore_Statics::NewProp_PlayerScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScore_Statics::NewProp_PlayerScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScore_Statics::ClassParams = {
		&AScore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScore, 1155154079);
	template<> NOTETRIS_API UClass* StaticClass<AScore>()
	{
		return AScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScore(Z_Construct_UClass_AScore, &AScore::StaticClass, TEXT("/Script/Notetris"), TEXT("AScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
