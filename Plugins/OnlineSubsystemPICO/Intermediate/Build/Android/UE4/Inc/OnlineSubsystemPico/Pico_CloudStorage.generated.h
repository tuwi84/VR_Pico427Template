// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ONLINESUBSYSTEMPICO_Pico_CloudStorage_generated_h
#error "Pico_CloudStorage.generated.h already included, missing '#pragma once' in Pico_CloudStorage.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_CloudStorage_generated_h

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_16_DELEGATE \
struct _Script_OnlineSubsystemPico_eventStartNewCloud_Backup_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FStartNewCloud_Backup_DelegateWrapper(const FScriptDelegate& StartNewCloud_Backup, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventStartNewCloud_Backup_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	StartNewCloud_Backup.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartNewBackup);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartNewBackup);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoCloudStorageFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoCloudStorageFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoCloudStorageFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoCloudStorageFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoCloudStorageFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoCloudStorageFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoCloudStorageFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoCloudStorageFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoCloudStorageFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoCloudStorageFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoCloudStorageFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoCloudStorageFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoCloudStorageFunction(UOnlinePicoCloudStorageFunction&&); \
	NO_API UOnlinePicoCloudStorageFunction(const UOnlinePicoCloudStorageFunction&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoCloudStorageFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoCloudStorageFunction(UOnlinePicoCloudStorageFunction&&); \
	NO_API UOnlinePicoCloudStorageFunction(const UOnlinePicoCloudStorageFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoCloudStorageFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoCloudStorageFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoCloudStorageFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_73_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoCloudStorageFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_CloudStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
