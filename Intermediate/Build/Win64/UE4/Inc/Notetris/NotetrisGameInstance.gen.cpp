// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Notetris/NotetrisGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotetrisGameInstance() {}
// Cross Module References
	NOTETRIS_API UClass* Z_Construct_UClass_UNotetrisGameInstance_NoRegister();
	NOTETRIS_API UClass* Z_Construct_UClass_UNotetrisGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Notetris();
// End Cross Module References
	DEFINE_FUNCTION(UNotetrisGameInstance::execGetQuinHighScores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetQuinHighScores();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNotetrisGameInstance::execGetClassicHighScores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetClassicHighScores();
		P_NATIVE_END;
	}
	void UNotetrisGameInstance::StaticRegisterNativesUNotetrisGameInstance()
	{
		UClass* Class = UNotetrisGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClassicHighScores", &UNotetrisGameInstance::execGetClassicHighScores },
			{ "GetQuinHighScores", &UNotetrisGameInstance::execGetQuinHighScores },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics
	{
		struct NotetrisGameInstance_eventGetClassicHighScores_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NotetrisGameInstance_eventGetClassicHighScores_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotetrisGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotetrisGameInstance, nullptr, "GetClassicHighScores", nullptr, nullptr, sizeof(NotetrisGameInstance_eventGetClassicHighScores_Parms), Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics
	{
		struct NotetrisGameInstance_eventGetQuinHighScores_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NotetrisGameInstance_eventGetQuinHighScores_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotetrisGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotetrisGameInstance, nullptr, "GetQuinHighScores", nullptr, nullptr, sizeof(NotetrisGameInstance_eventGetQuinHighScores_Parms), Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNotetrisGameInstance_NoRegister()
	{
		return UNotetrisGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNotetrisGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotetrisGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Notetris,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNotetrisGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotetrisGameInstance_GetClassicHighScores, "GetClassicHighScores" }, // 2819897119
		{ &Z_Construct_UFunction_UNotetrisGameInstance_GetQuinHighScores, "GetQuinHighScores" }, // 2235927063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotetrisGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NotetrisGameInstance.h" },
		{ "ModuleRelativePath", "NotetrisGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotetrisGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotetrisGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNotetrisGameInstance_Statics::ClassParams = {
		&UNotetrisGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNotetrisGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotetrisGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotetrisGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNotetrisGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNotetrisGameInstance, 4010472838);
	template<> NOTETRIS_API UClass* StaticClass<UNotetrisGameInstance>()
	{
		return UNotetrisGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNotetrisGameInstance(Z_Construct_UClass_UNotetrisGameInstance, &UNotetrisGameInstance::StaticClass, TEXT("/Script/Notetris"), TEXT("UNotetrisGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotetrisGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
