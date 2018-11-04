// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAIA_GAIACharacter_generated_h
#error "GAIACharacter.generated.h already included, missing '#pragma once' in GAIACharacter.h"
#endif
#define GAIA_GAIACharacter_generated_h

#define GAIA_Source_GAIA_GAIACharacter_h_12_RPC_WRAPPERS
#define GAIA_Source_GAIA_GAIACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GAIA_Source_GAIA_GAIACharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAIACharacter(); \
	friend struct Z_Construct_UClass_AGAIACharacter_Statics; \
public: \
	DECLARE_CLASS(AGAIACharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAIA"), NO_API) \
	DECLARE_SERIALIZER(AGAIACharacter)


#define GAIA_Source_GAIA_GAIACharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGAIACharacter(); \
	friend struct Z_Construct_UClass_AGAIACharacter_Statics; \
public: \
	DECLARE_CLASS(AGAIACharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAIA"), NO_API) \
	DECLARE_SERIALIZER(AGAIACharacter)


#define GAIA_Source_GAIA_GAIACharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGAIACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGAIACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAIACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAIACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGAIACharacter(AGAIACharacter&&); \
	NO_API AGAIACharacter(const AGAIACharacter&); \
public:


#define GAIA_Source_GAIA_GAIACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGAIACharacter(AGAIACharacter&&); \
	NO_API AGAIACharacter(const AGAIACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAIACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAIACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAIACharacter)


#define GAIA_Source_GAIA_GAIACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGAIACharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGAIACharacter, FollowCamera); }


#define GAIA_Source_GAIA_GAIACharacter_h_9_PROLOG
#define GAIA_Source_GAIA_GAIACharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAIA_Source_GAIA_GAIACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GAIA_Source_GAIA_GAIACharacter_h_12_RPC_WRAPPERS \
	GAIA_Source_GAIA_GAIACharacter_h_12_INCLASS \
	GAIA_Source_GAIA_GAIACharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAIA_Source_GAIA_GAIACharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAIA_Source_GAIA_GAIACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GAIA_Source_GAIA_GAIACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GAIA_Source_GAIA_GAIACharacter_h_12_INCLASS_NO_PURE_DECLS \
	GAIA_Source_GAIA_GAIACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAIA_Source_GAIA_GAIACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
