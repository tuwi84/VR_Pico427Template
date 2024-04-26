// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPICOResult : uint8;
enum class EPICOSpatialSceneCaptureStatus : uint8;
struct FAnchorLoadResult;
class UPICOAnchorComponent;
class AActor;
struct FTransform;
class UPICOCreateAnchorEntity_AsyncAction;
class UPICODestroyAnchorEntityAction;
enum class EPICOPersistLocation : uint8;
class UPICOPersistAnchorEntity_AsyncAction;
class UPICOUnpersistAnchorEntity_AsyncAction;
class UPICOClearAnchorEntity_AsyncAction;
struct FPICOAnchorLoadInfo;
class UPICOLoadAnchorEntity_AsyncAction;
class UPICOStartSpatialSceneCapture_AsyncAction;
#ifdef PICOXRMR_PXR_AsyncAnchorAction_generated_h
#error "PXR_AsyncAnchorAction.generated.h already included, missing '#pragma once' in PXR_AsyncAnchorAction.h"
#endif
#define PICOXRMR_PXR_AsyncAnchorAction_generated_h

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_34_DELEGATE \
struct _Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOStartSpatialSceneCaptureActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOStartSpatialSceneCaptureActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOStartSpatialSceneCaptureActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_33_DELEGATE \
struct _Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms \
{ \
	EPICOResult Result; \
	EPICOSpatialSceneCaptureStatus SpatialSceneCaptureStatus; \
}; \
static inline void FPICOStartSpatialSceneCaptureActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOStartSpatialSceneCaptureActionSuccess, EPICOResult Result, EPICOSpatialSceneCaptureStatus SpatialSceneCaptureStatus) \
{ \
	_Script_PICOXRMR_eventPICOStartSpatialSceneCaptureActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.SpatialSceneCaptureStatus=SpatialSceneCaptureStatus; \
	PICOStartSpatialSceneCaptureActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_31_DELEGATE \
struct _Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOLoadAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOLoadAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOLoadAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOLoadAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_30_DELEGATE \
struct _Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	TArray<FAnchorLoadResult> AnchorLoadResults; \
}; \
static inline void FPICOLoadAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOLoadAnchorEntityActionSuccess, EPICOResult Result, TArray<FAnchorLoadResult> const& AnchorLoadResults) \
{ \
	_Script_PICOXRMR_eventPICOLoadAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorLoadResults=AnchorLoadResults; \
	PICOLoadAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_28_DELEGATE \
struct _Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOClearAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOClearAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOClearAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOClearAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_27_DELEGATE \
struct _Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOClearAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOClearAnchorEntityActionSuccess, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOClearAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	PICOClearAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_25_DELEGATE \
struct _Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOUnpersistAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOUnpersistAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOUnpersistAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_24_DELEGATE \
struct _Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	TArray<UPICOAnchorComponent*> AnchorList; \
}; \
static inline void FPICOUnpersistAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOUnpersistAnchorEntityActionSuccess, EPICOResult Result, TArray<UPICOAnchorComponent*> const& AnchorList) \
{ \
	_Script_PICOXRMR_eventPICOUnpersistAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorList=AnchorList; \
	PICOUnpersistAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_22_DELEGATE \
struct _Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOPersistAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOPersistAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOPersistAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOPersistAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_21_DELEGATE \
struct _Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	TArray<UPICOAnchorComponent*> AnchorList; \
}; \
static inline void FPICOPersistAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOPersistAnchorEntityActionSuccess, EPICOResult Result, TArray<UPICOAnchorComponent*> const& AnchorList) \
{ \
	_Script_PICOXRMR_eventPICOPersistAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorList=AnchorList; \
	PICOPersistAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_19_DELEGATE \
struct _Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICODestroyAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICODestroyAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICODestroyAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICODestroyAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_18_DELEGATE \
struct _Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICODestroyAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICODestroyAnchorEntityActionSuccess, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICODestroyAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	PICODestroyAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_16_DELEGATE \
struct _Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms \
{ \
	EPICOResult Result; \
}; \
static inline void FPICOCreateAnchorEntityActionFailure_DelegateWrapper(const FMulticastScriptDelegate& PICOCreateAnchorEntityActionFailure, EPICOResult Result) \
{ \
	_Script_PICOXRMR_eventPICOCreateAnchorEntityActionFailure_Parms Parms; \
	Parms.Result=Result; \
	PICOCreateAnchorEntityActionFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_15_DELEGATE \
struct _Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms \
{ \
	EPICOResult Result; \
	UPICOAnchorComponent* AnchorEntityComponent; \
}; \
static inline void FPICOCreateAnchorEntityActionSuccess_DelegateWrapper(const FMulticastScriptDelegate& PICOCreateAnchorEntityActionSuccess, EPICOResult Result, UPICOAnchorComponent* AnchorEntityComponent) \
{ \
	_Script_PICOXRMR_eventPICOCreateAnchorEntityActionSuccess_Parms Parms; \
	Parms.Result=Result; \
	Parms.AnchorEntityComponent=AnchorEntityComponent; \
	PICOCreateAnchorEntityActionSuccess.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_CreateAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_CreateAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOCreateAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOCreateAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOCreateAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUPICOCreateAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOCreateAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOCreateAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOCreateAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOCreateAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOCreateAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOCreateAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(UPICOCreateAnchorEntity_AsyncAction&&); \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const UPICOCreateAnchorEntity_AsyncAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOCreateAnchorEntity_AsyncAction(UPICOCreateAnchorEntity_AsyncAction&&); \
	NO_API UPICOCreateAnchorEntity_AsyncAction(const UPICOCreateAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOCreateAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOCreateAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOCreateAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_42_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOCreateAnchorEntity_AsyncAction>();

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_DestroyAnchorEntity);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_DestroyAnchorEntity);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICODestroyAnchorEntityAction(); \
	friend struct Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics; \
public: \
	DECLARE_CLASS(UPICODestroyAnchorEntityAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICODestroyAnchorEntityAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUPICODestroyAnchorEntityAction(); \
	friend struct Z_Construct_UClass_UPICODestroyAnchorEntityAction_Statics; \
public: \
	DECLARE_CLASS(UPICODestroyAnchorEntityAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICODestroyAnchorEntityAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICODestroyAnchorEntityAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICODestroyAnchorEntityAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICODestroyAnchorEntityAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICODestroyAnchorEntityAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICODestroyAnchorEntityAction(UPICODestroyAnchorEntityAction&&); \
	NO_API UPICODestroyAnchorEntityAction(const UPICODestroyAnchorEntityAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICODestroyAnchorEntityAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICODestroyAnchorEntityAction(UPICODestroyAnchorEntityAction&&); \
	NO_API UPICODestroyAnchorEntityAction(const UPICODestroyAnchorEntityAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICODestroyAnchorEntityAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICODestroyAnchorEntityAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICODestroyAnchorEntityAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_77_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICODestroyAnchorEntityAction>();

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_PersistAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_PersistAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOPersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOPersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOPersistAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUPICOPersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOPersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOPersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOPersistAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOPersistAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOPersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOPersistAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(UPICOPersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const UPICOPersistAnchorEntity_AsyncAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOPersistAnchorEntity_AsyncAction(UPICOPersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOPersistAnchorEntity_AsyncAction(const UPICOPersistAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOPersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOPersistAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOPersistAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_105_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOPersistAnchorEntity_AsyncAction>();

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_UnpersistAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_UnpersistAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOUnpersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOUnpersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOUnpersistAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_INCLASS \
private: \
	static void StaticRegisterNativesUPICOUnpersistAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOUnpersistAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOUnpersistAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOUnpersistAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOUnpersistAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOUnpersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOUnpersistAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(UPICOUnpersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const UPICOUnpersistAnchorEntity_AsyncAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(UPICOUnpersistAnchorEntity_AsyncAction&&); \
	NO_API UPICOUnpersistAnchorEntity_AsyncAction(const UPICOUnpersistAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOUnpersistAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOUnpersistAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOUnpersistAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_140_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOUnpersistAnchorEntity_AsyncAction>();

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_ClearAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_ClearAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOClearAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOClearAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOClearAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_INCLASS \
private: \
	static void StaticRegisterNativesUPICOClearAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOClearAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOClearAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOClearAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOClearAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOClearAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOClearAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(UPICOClearAnchorEntity_AsyncAction&&); \
	NO_API UPICOClearAnchorEntity_AsyncAction(const UPICOClearAnchorEntity_AsyncAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOClearAnchorEntity_AsyncAction(UPICOClearAnchorEntity_AsyncAction&&); \
	NO_API UPICOClearAnchorEntity_AsyncAction(const UPICOClearAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOClearAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOClearAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOClearAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_175_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOClearAnchorEntity_AsyncAction>();

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_LoadAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_LoadAnchorEntity_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOLoadAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOLoadAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOLoadAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_INCLASS \
private: \
	static void StaticRegisterNativesUPICOLoadAnchorEntity_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOLoadAnchorEntity_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOLoadAnchorEntity_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOLoadAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOLoadAnchorEntity_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOLoadAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOLoadAnchorEntity_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(UPICOLoadAnchorEntity_AsyncAction&&); \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const UPICOLoadAnchorEntity_AsyncAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOLoadAnchorEntity_AsyncAction(UPICOLoadAnchorEntity_AsyncAction&&); \
	NO_API UPICOLoadAnchorEntity_AsyncAction(const UPICOLoadAnchorEntity_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOLoadAnchorEntity_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOLoadAnchorEntity_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOLoadAnchorEntity_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_205_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOLoadAnchorEntity_AsyncAction>();

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_StartSpatialSceneCapture_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_StartSpatialSceneCapture_Async);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOStartSpatialSceneCapture_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOStartSpatialSceneCapture_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOStartSpatialSceneCapture_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUPICOStartSpatialSceneCapture_AsyncAction(); \
	friend struct Z_Construct_UClass_UPICOStartSpatialSceneCapture_AsyncAction_Statics; \
public: \
	DECLARE_CLASS(UPICOStartSpatialSceneCapture_AsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOStartSpatialSceneCapture_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOStartSpatialSceneCapture_AsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOStartSpatialSceneCapture_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOStartSpatialSceneCapture_AsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(UPICOStartSpatialSceneCapture_AsyncAction&&); \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const UPICOStartSpatialSceneCapture_AsyncAction&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(UPICOStartSpatialSceneCapture_AsyncAction&&); \
	NO_API UPICOStartSpatialSceneCapture_AsyncAction(const UPICOStartSpatialSceneCapture_AsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOStartSpatialSceneCapture_AsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOStartSpatialSceneCapture_AsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOStartSpatialSceneCapture_AsyncAction)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_243_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOStartSpatialSceneCapture_AsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AsyncAnchorAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
