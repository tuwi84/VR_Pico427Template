// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_RecordInfo;
class UPico_SessionMedia;
class UPico_CaptureInfo;
class UObject;
#ifdef ONLINESUBSYSTEMPICO_Pico_Highlight_generated_h
#error "Pico_Highlight.generated.h already included, missing '#pragma once' in Pico_Highlight.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Highlight_generated_h

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_24_DELEGATE \
struct _Script_OnlineSubsystemPico_eventStopRecordResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_RecordInfo* RecordInfo; \
}; \
static inline void FStopRecordResult_DelegateWrapper(const FScriptDelegate& StopRecordResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_RecordInfo* RecordInfo) \
{ \
	_Script_OnlineSubsystemPico_eventStopRecordResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.RecordInfo=RecordInfo; \
	StopRecordResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventStartSessionResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	FString SessionId; \
}; \
static inline void FStartSessionResult_DelegateWrapper(const FScriptDelegate& StartSessionResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, const FString& SessionId) \
{ \
	_Script_OnlineSubsystemPico_eventStartSessionResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SessionId=SessionId; \
	StartSessionResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_22_DELEGATE \
struct _Script_OnlineSubsystemPico_eventStartRecordResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FStartRecordResult_DelegateWrapper(const FScriptDelegate& StartRecordResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventStartRecordResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	StartRecordResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_21_DELEGATE \
struct _Script_OnlineSubsystemPico_eventShareMediaResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FShareMediaResult_DelegateWrapper(const FScriptDelegate& ShareMediaResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventShareMediaResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	ShareMediaResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_20_DELEGATE \
struct _Script_OnlineSubsystemPico_eventSaveMediaResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FSaveMediaResult_DelegateWrapper(const FScriptDelegate& SaveMediaResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventSaveMediaResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	SaveMediaResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_19_DELEGATE \
struct _Script_OnlineSubsystemPico_eventListMediaResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_SessionMedia* SessionMedia; \
}; \
static inline void FListMediaResult_DelegateWrapper(const FScriptDelegate& ListMediaResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_SessionMedia* SessionMedia) \
{ \
	_Script_OnlineSubsystemPico_eventListMediaResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SessionMedia=SessionMedia; \
	ListMediaResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_18_DELEGATE \
struct _Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_CaptureInfo* CaptureInfo; \
}; \
static inline void FCaptureScreenResult_DelegateWrapper(const FScriptDelegate& CaptureScreenResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_CaptureInfo* CaptureInfo) \
{ \
	_Script_OnlineSubsystemPico_eventCaptureScreenResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.CaptureInfo=CaptureInfo; \
	CaptureScreenResult.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execStopRecord); \
	DECLARE_FUNCTION(execStartRecord); \
	DECLARE_FUNCTION(execShareMedia); \
	DECLARE_FUNCTION(execSaveMedia); \
	DECLARE_FUNCTION(execListMedia); \
	DECLARE_FUNCTION(execCaptureScreen);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execStopRecord); \
	DECLARE_FUNCTION(execStartRecord); \
	DECLARE_FUNCTION(execShareMedia); \
	DECLARE_FUNCTION(execSaveMedia); \
	DECLARE_FUNCTION(execListMedia); \
	DECLARE_FUNCTION(execCaptureScreen);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoHighlightFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoHighlightFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoHighlightFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoHighlightFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoHighlightFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoHighlightFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoHighlightFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoHighlightFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoHighlightFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoHighlightFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoHighlightFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoHighlightFunction(UOnlinePicoHighlightFunction&&); \
	NO_API UOnlinePicoHighlightFunction(const UOnlinePicoHighlightFunction&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoHighlightFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoHighlightFunction(UOnlinePicoHighlightFunction&&); \
	NO_API UOnlinePicoHighlightFunction(const UOnlinePicoHighlightFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoHighlightFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoHighlightFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoHighlightFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_153_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoHighlightFunction>();

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execGetImagePath);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execGetImagePath);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_CaptureInfo(); \
	friend struct Z_Construct_UClass_UPico_CaptureInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_CaptureInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_CaptureInfo)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_INCLASS \
private: \
	static void StaticRegisterNativesUPico_CaptureInfo(); \
	friend struct Z_Construct_UClass_UPico_CaptureInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_CaptureInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_CaptureInfo)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_CaptureInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_CaptureInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_CaptureInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_CaptureInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_CaptureInfo(UPico_CaptureInfo&&); \
	NO_API UPico_CaptureInfo(const UPico_CaptureInfo&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_CaptureInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_CaptureInfo(UPico_CaptureInfo&&); \
	NO_API UPico_CaptureInfo(const UPico_CaptureInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_CaptureInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_CaptureInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_CaptureInfo)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_272_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_276_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_CaptureInfo>();

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetDurationInMilliSeconds); \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execGetVideoPath);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetDurationInMilliSeconds); \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execGetVideoPath);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_RecordInfo(); \
	friend struct Z_Construct_UClass_UPico_RecordInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_RecordInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RecordInfo)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_INCLASS \
private: \
	static void StaticRegisterNativesUPico_RecordInfo(); \
	friend struct Z_Construct_UClass_UPico_RecordInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_RecordInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RecordInfo)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RecordInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RecordInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RecordInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RecordInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RecordInfo(UPico_RecordInfo&&); \
	NO_API UPico_RecordInfo(const UPico_RecordInfo&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RecordInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RecordInfo(UPico_RecordInfo&&); \
	NO_API UPico_RecordInfo(const UPico_RecordInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RecordInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RecordInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RecordInfo)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_293_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_297_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_RecordInfo>();

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVideosElement); \
	DECLARE_FUNCTION(execGetVideosSize); \
	DECLARE_FUNCTION(execGetImagesElement); \
	DECLARE_FUNCTION(execGetImagesSize);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVideosElement); \
	DECLARE_FUNCTION(execGetVideosSize); \
	DECLARE_FUNCTION(execGetImagesElement); \
	DECLARE_FUNCTION(execGetImagesSize);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SessionMedia(); \
	friend struct Z_Construct_UClass_UPico_SessionMedia_Statics; \
public: \
	DECLARE_CLASS(UPico_SessionMedia, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SessionMedia)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SessionMedia(); \
	friend struct Z_Construct_UClass_UPico_SessionMedia_Statics; \
public: \
	DECLARE_CLASS(UPico_SessionMedia, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SessionMedia)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SessionMedia(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SessionMedia) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SessionMedia); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SessionMedia); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SessionMedia(UPico_SessionMedia&&); \
	NO_API UPico_SessionMedia(const UPico_SessionMedia&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SessionMedia(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SessionMedia(UPico_SessionMedia&&); \
	NO_API UPico_SessionMedia(const UPico_SessionMedia&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SessionMedia); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SessionMedia); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SessionMedia)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_329_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h_333_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SessionMedia>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Highlight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
