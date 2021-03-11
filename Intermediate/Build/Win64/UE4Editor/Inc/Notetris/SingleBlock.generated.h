// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTETRIS_SingleBlock_generated_h
#error "SingleBlock.generated.h already included, missing '#pragma once' in SingleBlock.h"
#endif
#define NOTETRIS_SingleBlock_generated_h

#define Notetris_Source_Notetris_SingleBlock_h_14_SPARSE_DATA
#define Notetris_Source_Notetris_SingleBlock_h_14_RPC_WRAPPERS
#define Notetris_Source_Notetris_SingleBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Notetris_Source_Notetris_SingleBlock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASingleBlock(); \
	friend struct Z_Construct_UClass_ASingleBlock_Statics; \
public: \
	DECLARE_CLASS(ASingleBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ASingleBlock)


#define Notetris_Source_Notetris_SingleBlock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASingleBlock(); \
	friend struct Z_Construct_UClass_ASingleBlock_Statics; \
public: \
	DECLARE_CLASS(ASingleBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ASingleBlock)


#define Notetris_Source_Notetris_SingleBlock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASingleBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASingleBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleBlock(ASingleBlock&&); \
	NO_API ASingleBlock(const ASingleBlock&); \
public:


#define Notetris_Source_Notetris_SingleBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleBlock(ASingleBlock&&); \
	NO_API ASingleBlock(const ASingleBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASingleBlock)


#define Notetris_Source_Notetris_SingleBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlockRoot() { return STRUCT_OFFSET(ASingleBlock, BlockRoot); } \
	FORCEINLINE static uint32 __PPO__BlockSprite() { return STRUCT_OFFSET(ASingleBlock, BlockSprite); } \
	FORCEINLINE static uint32 __PPO__GameGrid() { return STRUCT_OFFSET(ASingleBlock, GameGrid); }


#define Notetris_Source_Notetris_SingleBlock_h_11_PROLOG
#define Notetris_Source_Notetris_SingleBlock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_SingleBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_SingleBlock_h_14_SPARSE_DATA \
	Notetris_Source_Notetris_SingleBlock_h_14_RPC_WRAPPERS \
	Notetris_Source_Notetris_SingleBlock_h_14_INCLASS \
	Notetris_Source_Notetris_SingleBlock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_SingleBlock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_SingleBlock_h_14_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_SingleBlock_h_14_SPARSE_DATA \
	Notetris_Source_Notetris_SingleBlock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_SingleBlock_h_14_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_SingleBlock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class ASingleBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_SingleBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
