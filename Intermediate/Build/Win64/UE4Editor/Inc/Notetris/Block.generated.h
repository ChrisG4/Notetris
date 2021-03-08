// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTETRIS_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define NOTETRIS_Block_generated_h

#define Notetris_Source_Notetris_Block_h_14_SPARSE_DATA
#define Notetris_Source_Notetris_Block_h_14_RPC_WRAPPERS
#define Notetris_Source_Notetris_Block_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Notetris_Source_Notetris_Block_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define Notetris_Source_Notetris_Block_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define Notetris_Source_Notetris_Block_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public:


#define Notetris_Source_Notetris_Block_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock)


#define Notetris_Source_Notetris_Block_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlockRoot() { return STRUCT_OFFSET(ABlock, BlockRoot); } \
	FORCEINLINE static uint32 __PPO__BlockSprite() { return STRUCT_OFFSET(ABlock, BlockSprite); } \
	FORCEINLINE static uint32 __PPO__BlockSpriteColour() { return STRUCT_OFFSET(ABlock, BlockSpriteColour); } \
	FORCEINLINE static uint32 __PPO__BlockStartingPositions() { return STRUCT_OFFSET(ABlock, BlockStartingPositions); }


#define Notetris_Source_Notetris_Block_h_11_PROLOG
#define Notetris_Source_Notetris_Block_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Block_h_14_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Block_h_14_SPARSE_DATA \
	Notetris_Source_Notetris_Block_h_14_RPC_WRAPPERS \
	Notetris_Source_Notetris_Block_h_14_INCLASS \
	Notetris_Source_Notetris_Block_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_Block_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_Block_h_14_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_Block_h_14_SPARSE_DATA \
	Notetris_Source_Notetris_Block_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Block_h_14_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_Block_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
