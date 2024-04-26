// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPICOAnchorUUID;
struct FPICOAnchor;
class UActorComponent;
class AActor;
class UObject;
struct FAnchorLoadResult;
struct FTransform;
class UPICOAnchorComponent;
struct FPICOAnchorVolumeInfo;
struct FPICOAnchorPlanePolygonInfo;
struct FPICOAnchorPlaneBoundaryInfo;
enum class EPICOAnchorSceneLabel : uint8;
enum class EPICOAnchorComponentTypeFlag : uint8;
#ifdef PICOXRMR_PXR_MRFunctionLibrary_generated_h
#error "PXR_MRFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_MRFunctionLibrary.h"
#endif
#define PICOXRMR_PXR_MRFunctionLibrary_generated_h

#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_SPARSE_DATA
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_FromUUIDToString); \
	DECLARE_FUNCTION(execPXR_FromAnchorToString); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForComponent); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForActor); \
	DECLARE_FUNCTION(execPXR_SpawnActorFromLoadResult); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByActor); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByComponent); \
	DECLARE_FUNCTION(execPXR_GetAnchorVolumeInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlanePolygonInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlaneBoundaryInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorSceneLabel); \
	DECLARE_FUNCTION(execPXR_GetAnchorComponentFlags); \
	DECLARE_FUNCTION(execPXR_GetAnchorEntityUuid);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_FromUUIDToString); \
	DECLARE_FUNCTION(execPXR_FromAnchorToString); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForComponent); \
	DECLARE_FUNCTION(execPXR_IsAnchorValidForActor); \
	DECLARE_FUNCTION(execPXR_SpawnActorFromLoadResult); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByActor); \
	DECLARE_FUNCTION(execPXR_GetAnchorPoseByComponent); \
	DECLARE_FUNCTION(execPXR_GetAnchorVolumeInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlanePolygonInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorPlaneBoundaryInfo); \
	DECLARE_FUNCTION(execPXR_GetAnchorSceneLabel); \
	DECLARE_FUNCTION(execPXR_GetAnchorComponentFlags); \
	DECLARE_FUNCTION(execPXR_GetAnchorEntityUuid);


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRFunctionLibrary)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMRFunctionLibrary)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRFunctionLibrary(UPICOXRMRFunctionLibrary&&); \
	NO_API UPICOXRMRFunctionLibrary(const UPICOXRMRFunctionLibrary&); \
public:


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMRFunctionLibrary(UPICOXRMRFunctionLibrary&&); \
	NO_API UPICOXRMRFunctionLibrary(const UPICOXRMRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMRFunctionLibrary)


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_11_PROLOG
#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_SPARSE_DATA \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOXRMRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PicoVidTest_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
