// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTETRIS_CompositeBlock_generated_h
#error "CompositeBlock.generated.h already included, missing '#pragma once' in CompositeBlock.h"
#endif
#define NOTETRIS_CompositeBlock_generated_h

#define Notetris_Source_Notetris_CompositeBlock_h_16_SPARSE_DATA
#define Notetris_Source_Notetris_CompositeBlock_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveBlockDown); \
	DECLARE_FUNCTION(execMoveBlockRight); \
	DECLARE_FUNCTION(execMoveBlockLeft);


#define Notetris_Source_Notetris_CompositeBlock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveBlockDown); \
	DECLARE_FUNCTION(execMoveBlockRight); \
	DECLARE_FUNCTION(execMoveBlockLeft);


#define Notetris_Source_Notetris_CompositeBlock_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositeBlock(); \
	friend struct Z_Construct_UClass_ACompositeBlock_Statics; \
public: \
	DECLARE_CLASS(ACompositeBlock, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ACompositeBlock)


#define Notetris_Source_Notetris_CompositeBlock_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACompositeBlock(); \
	friend struct Z_Construct_UClass_ACompositeBlock_Statics; \
public: \
	DECLARE_CLASS(ACompositeBlock, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Notetris"), NO_API) \
	DECLARE_SERIALIZER(ACompositeBlock)


#define Notetris_Source_Notetris_CompositeBlock_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompositeBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositeBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositeBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositeBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompositeBlock(ACompositeBlock&&); \
	NO_API ACompositeBlock(const ACompositeBlock&); \
public:


#define Notetris_Source_Notetris_CompositeBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompositeBlock(ACompositeBlock&&); \
	NO_API ACompositeBlock(const ACompositeBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositeBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositeBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACompositeBlock)


#define Notetris_Source_Notetris_CompositeBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CompositeBlockRoot() { return STRUCT_OFFSET(ACompositeBlock, CompositeBlockRoot); } \
	FORCEINLINE static uint32 __PPO__SingleBlockActor() { return STRUCT_OFFSET(ACompositeBlock, SingleBlockActor); } \
	FORCEINLINE static uint32 __PPO__BlockUnitPositions() { return STRUCT_OFFSET(ACompositeBlock, BlockUnitPositions); } \
	FORCEINLINE static uint32 __PPO__SingleBlocks() { return STRUCT_OFFSET(ACompositeBlock, SingleBlocks); }


#define Notetris_Source_Notetris_CompositeBlock_h_13_PROLOG
#define Notetris_Source_Notetris_CompositeBlock_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_CompositeBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_CompositeBlock_h_16_SPARSE_DATA \
	Notetris_Source_Notetris_CompositeBlock_h_16_RPC_WRAPPERS \
	Notetris_Source_Notetris_CompositeBlock_h_16_INCLASS \
	Notetris_Source_Notetris_CompositeBlock_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Notetris_Source_Notetris_CompositeBlock_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Notetris_Source_Notetris_CompositeBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	Notetris_Source_Notetris_CompositeBlock_h_16_SPARSE_DATA \
	Notetris_Source_Notetris_CompositeBlock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Notetris_Source_Notetris_CompositeBlock_h_16_INCLASS_NO_PURE_DECLS \
	Notetris_Source_Notetris_CompositeBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTETRIS_API UClass* StaticClass<class ACompositeBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Notetris_Source_Notetris_CompositeBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
