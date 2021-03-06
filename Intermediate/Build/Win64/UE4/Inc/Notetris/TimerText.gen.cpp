// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/Text/TimerText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerText() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_ATimerText_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_ATimerText();
	NOTETRIS_API UClass* Z_Construct_UClass_ADynamicText();
	UPackage* Z_Construct_UPackage__Script_Notetris();
	NOTETRIS_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
// End Cross Module References
	void ATimerText::StaticRegisterNativesATimerText()
	{
	}
	UClass* Z_Construct_UClass_ATimerText_NoRegister()
	{
		return ATimerText::StaticClass();
	}
	struct Z_Construct_UClass_ATimerText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCountingUp_MetaData[];
#endif
		static void NewProp_IsCountingUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCountingUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGameGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGameGrid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADynamicText,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerText_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Text/TimerText.h" },
		{ "ModuleRelativePath", "Text/TimerText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp_MetaData[] = {
		{ "Category", "TimerText" },
		{ "ModuleRelativePath", "Text/TimerText.h" },
	};
#endif
	void Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp_SetBit(void* Obj)
	{
		((ATimerText*)Obj)->IsCountingUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp = { "IsCountingUp", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATimerText), &Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerText_Statics::NewProp_StartingTime_MetaData[] = {
		{ "Category", "TimerText" },
		{ "ModuleRelativePath", "Text/TimerText.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerText_Statics::NewProp_StartingTime = { "StartingTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerText, StartingTime), METADATA_PARAMS(Z_Construct_UClass_ATimerText_Statics::NewProp_StartingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerText_Statics::NewProp_StartingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerText_Statics::NewProp_CurrentGameGrid_MetaData[] = {
		{ "Category", "TimerText" },
		{ "ModuleRelativePath", "Text/TimerText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimerText_Statics::NewProp_CurrentGameGrid = { "CurrentGameGrid", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerText, CurrentGameGrid), Z_Construct_UClass_AGameGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATimerText_Statics::NewProp_CurrentGameGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerText_Statics::NewProp_CurrentGameGrid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerText_Statics::NewProp_IsCountingUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerText_Statics::NewProp_StartingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerText_Statics::NewProp_CurrentGameGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerText_Statics::ClassParams = {
		&ATimerText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATimerText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimerText_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerText, 2274521095);
	template<> NOTETRIS_API UClass* StaticClass<ATimerText>()
	{
		return ATimerText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerText(Z_Construct_UClass_ATimerText, &ATimerText::StaticClass, TEXT("/Script/Notetris"), TEXT("ATimerText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
