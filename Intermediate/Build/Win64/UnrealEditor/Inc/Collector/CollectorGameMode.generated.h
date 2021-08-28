// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLECTOR_CollectorGameMode_generated_h
#error "CollectorGameMode.generated.h already included, missing '#pragma once' in CollectorGameMode.h"
#endif
#define COLLECTOR_CollectorGameMode_generated_h

#define Collector_Source_Collector_CollectorGameMode_h_12_SPARSE_DATA
#define Collector_Source_Collector_CollectorGameMode_h_12_RPC_WRAPPERS
#define Collector_Source_Collector_CollectorGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Collector_Source_Collector_CollectorGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectorGameMode(); \
	friend struct Z_Construct_UClass_ACollectorGameMode_Statics; \
public: \
	DECLARE_CLASS(ACollectorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Collector"), COLLECTOR_API) \
	DECLARE_SERIALIZER(ACollectorGameMode)


#define Collector_Source_Collector_CollectorGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectorGameMode(); \
	friend struct Z_Construct_UClass_ACollectorGameMode_Statics; \
public: \
	DECLARE_CLASS(ACollectorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Collector"), COLLECTOR_API) \
	DECLARE_SERIALIZER(ACollectorGameMode)


#define Collector_Source_Collector_CollectorGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTOR_API ACollectorGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectorGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTOR_API, ACollectorGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectorGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTOR_API ACollectorGameMode(ACollectorGameMode&&); \
	COLLECTOR_API ACollectorGameMode(const ACollectorGameMode&); \
public:


#define Collector_Source_Collector_CollectorGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTOR_API ACollectorGameMode(ACollectorGameMode&&); \
	COLLECTOR_API ACollectorGameMode(const ACollectorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTOR_API, ACollectorGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectorGameMode)


#define Collector_Source_Collector_CollectorGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Collector_Source_Collector_CollectorGameMode_h_9_PROLOG
#define Collector_Source_Collector_CollectorGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collector_Source_Collector_CollectorGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Collector_Source_Collector_CollectorGameMode_h_12_SPARSE_DATA \
	Collector_Source_Collector_CollectorGameMode_h_12_RPC_WRAPPERS \
	Collector_Source_Collector_CollectorGameMode_h_12_INCLASS \
	Collector_Source_Collector_CollectorGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Collector_Source_Collector_CollectorGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Collector_Source_Collector_CollectorGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Collector_Source_Collector_CollectorGameMode_h_12_SPARSE_DATA \
	Collector_Source_Collector_CollectorGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Collector_Source_Collector_CollectorGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Collector_Source_Collector_CollectorGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTOR_API UClass* StaticClass<class ACollectorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Collector_Source_Collector_CollectorGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
