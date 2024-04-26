// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMR/Public/PXR_MRFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MRFunctionLibrary() {}
// Cross Module References
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOXRMRFunctionLibrary_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOXRMRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PICOXRMR();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOAnchorComponent_NoRegister();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorLoadResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_FromUUIDToString)
	{
		P_GET_STRUCT_REF(FPICOAnchorUUID,Z_Param_Out_AnchorUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_FromUUIDToString(Z_Param_Out_AnchorUUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_FromAnchorToString)
	{
		P_GET_STRUCT_REF(FPICOAnchor,Z_Param_Out_Anchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_FromAnchorToString(Z_Param_Out_Anchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_IsAnchorValidForComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_BoundComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_IsAnchorValidForComponent(Z_Param_BoundComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_IsAnchorValidForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_IsAnchorValidForActor(Z_Param_BoundActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_SpawnActorFromLoadResult)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FAnchorLoadResult,Z_Param_Out_LoadResult);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_SpawnActorFromLoadResult(Z_Param_WorldContext,Z_Param_Out_LoadResult,Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorPoseByActor)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorPoseByActor(Z_Param_BoundActor,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorPoseByComponent)
	{
		P_GET_OBJECT(UPICOAnchorComponent,Z_Param_BoundComponent);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorPoseByComponent(Z_Param_BoundComponent,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorVolumeInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_STRUCT_REF(FPICOAnchorVolumeInfo,Z_Param_Out_OutAnchorVolumeInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorVolumeInfo(Z_Param_BoundActor,Z_Param_Out_OutAnchorVolumeInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorPlanePolygonInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_STRUCT_REF(FPICOAnchorPlanePolygonInfo,Z_Param_Out_OutAnchorPlanePolygonInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorPlanePolygonInfo(Z_Param_BoundActor,Z_Param_Out_OutAnchorPlanePolygonInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorPlaneBoundaryInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_STRUCT_REF(FPICOAnchorPlaneBoundaryInfo,Z_Param_Out_OutAnchorPlaneBoundaryInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorPlaneBoundaryInfo(Z_Param_BoundActor,Z_Param_Out_OutAnchorPlaneBoundaryInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorSceneLabel)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_ENUM_REF(EPICOAnchorSceneLabel,Z_Param_Out_OutAnchorSceneLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorSceneLabel(Z_Param_BoundActor,(EPICOAnchorSceneLabel&)(Z_Param_Out_OutAnchorSceneLabel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorComponentFlags)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_TARRAY_REF(EPICOAnchorComponentTypeFlag,Z_Param_Out_OutAnchorComponentFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorComponentFlags(Z_Param_BoundActor,Z_Param_Out_OutAnchorComponentFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMRFunctionLibrary::execPXR_GetAnchorEntityUuid)
	{
		P_GET_OBJECT(AActor,Z_Param_BoundActor);
		P_GET_STRUCT_REF(FPICOAnchorUUID,Z_Param_Out_OutAnchorUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMRFunctionLibrary::PXR_GetAnchorEntityUuid(Z_Param_BoundActor,Z_Param_Out_OutAnchorUUID);
		P_NATIVE_END;
	}
	void UPICOXRMRFunctionLibrary::StaticRegisterNativesUPICOXRMRFunctionLibrary()
	{
		UClass* Class = UPICOXRMRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PXR_FromAnchorToString", &UPICOXRMRFunctionLibrary::execPXR_FromAnchorToString },
			{ "PXR_FromUUIDToString", &UPICOXRMRFunctionLibrary::execPXR_FromUUIDToString },
			{ "PXR_GetAnchorComponentFlags", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorComponentFlags },
			{ "PXR_GetAnchorEntityUuid", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorEntityUuid },
			{ "PXR_GetAnchorPlaneBoundaryInfo", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorPlaneBoundaryInfo },
			{ "PXR_GetAnchorPlanePolygonInfo", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorPlanePolygonInfo },
			{ "PXR_GetAnchorPoseByActor", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorPoseByActor },
			{ "PXR_GetAnchorPoseByComponent", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorPoseByComponent },
			{ "PXR_GetAnchorSceneLabel", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorSceneLabel },
			{ "PXR_GetAnchorVolumeInfo", &UPICOXRMRFunctionLibrary::execPXR_GetAnchorVolumeInfo },
			{ "PXR_IsAnchorValidForActor", &UPICOXRMRFunctionLibrary::execPXR_IsAnchorValidForActor },
			{ "PXR_IsAnchorValidForComponent", &UPICOXRMRFunctionLibrary::execPXR_IsAnchorValidForComponent },
			{ "PXR_SpawnActorFromLoadResult", &UPICOXRMRFunctionLibrary::execPXR_SpawnActorFromLoadResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_FromAnchorToString_Parms
		{
			FPICOAnchor Anchor;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anchor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_Anchor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_FromAnchorToString_Parms, Anchor), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_Anchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_Anchor_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_FromAnchorToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_Anchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "PXR|PXRMR" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (Anchor Handle)" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_FromAnchorToString", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_FromAnchorToString_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_FromUUIDToString_Parms
		{
			FPICOAnchorUUID AnchorUUID;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_AnchorUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_FromUUIDToString_Parms, AnchorUUID), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_AnchorUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_AnchorUUID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_FromUUIDToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_AnchorUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "PXR|PXRMR" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (Anchor UUID)" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_FromUUIDToString", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_FromUUIDToString_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorComponentFlags_Parms
		{
			AActor* BoundActor;
			TArray<EPICOAnchorComponentTypeFlag> OutAnchorComponentFlags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutAnchorComponentFlags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutAnchorComponentFlags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAnchorComponentFlags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorComponentFlags_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_OutAnchorComponentFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_OutAnchorComponentFlags_Inner = { "OutAnchorComponentFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_OutAnchorComponentFlags = { "OutAnchorComponentFlags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorComponentFlags_Parms, OutAnchorComponentFlags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorComponentFlags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorComponentFlags_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_OutAnchorComponentFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_OutAnchorComponentFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_OutAnchorComponentFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the components supported by an anchor entity.\n/// </summary>\n/// <param name=\"BoundActor\">Specifies the actor of the anchor entity to get supported components for.</param>\n/// <param name=\"OutAnchorComponentFlags\">Returns the flags of the supported components. For details, see [EPICOAnchorComponentTypeFlag](https://developer-cn.pico-interactive.com/en/document/unreal/space-calibration/#185193e6) enum.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the components supported by an anchor entity.\n</summary>\n<param name=\"BoundActor\">Specifies the actor of the anchor entity to get supported components for.</param>\n<param name=\"OutAnchorComponentFlags\">Returns the flags of the supported components. For details, see [EPICOAnchorComponentTypeFlag](https:developer-cn.pico-interactive.com/en/document/unreal/space-calibration/#185193e6) enum.</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorComponentFlags", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorComponentFlags_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorEntityUuid_Parms
		{
			AActor* BoundActor;
			FPICOAnchorUUID OutAnchorUUID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAnchorUUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorEntityUuid_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_OutAnchorUUID = { "OutAnchorUUID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorEntityUuid_Parms, OutAnchorUUID), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorEntityUuid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorEntityUuid_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_OutAnchorUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the universally unique identifier (UUID) of an anchor entity.\n/// </summary>\n/// <param name=\"BoundActor\">The the bound actor of the anchor entity to get UUID for.</param>\n/// <param name=\"OutAnchorUUID\">Returns the UUID of the anchor entity.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the universally unique identifier (UUID) of an anchor entity.\n</summary>\n<param name=\"BoundActor\">The the bound actor of the anchor entity to get UUID for.</param>\n<param name=\"OutAnchorUUID\">Returns the UUID of the anchor entity.</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorEntityUuid", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorEntityUuid_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlaneBoundaryInfo_Parms
		{
			AActor* BoundActor;
			FPICOAnchorPlaneBoundaryInfo OutAnchorPlaneBoundaryInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAnchorPlaneBoundaryInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlaneBoundaryInfo_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_OutAnchorPlaneBoundaryInfo = { "OutAnchorPlaneBoundaryInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlaneBoundaryInfo_Parms, OutAnchorPlaneBoundaryInfo), Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlaneBoundaryInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlaneBoundaryInfo_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_OutAnchorPlaneBoundaryInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the information about the boundary (rectangle) for an anchor entity.\n/// Before calling this method, you need to load anchor entities and get the anchor entity load result first. The result contains the actors and UUIDs of anchor entities loaded.\n/// </summary>\n/// <param name=\"BoundActor\">Specifies the actor of the anchor entity. </param>\n/// <param name=\"OutAnchorPlaneBoundaryInfo\">\n/// * `Center`: Returns the offset of the boundary's position relative to the anchor entity's position.\n/// * `Extent`: Returns the width and height of the boundary.\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li> `true` - success</li>\n/// <li> `false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the information about the boundary (rectangle) for an anchor entity.\nBefore calling this method, you need to load anchor entities and get the anchor entity load result first. The result contains the actors and UUIDs of anchor entities loaded.\n</summary>\n<param name=\"BoundActor\">Specifies the actor of the anchor entity. </param>\n<param name=\"OutAnchorPlaneBoundaryInfo\">\n* `Center`: Returns the offset of the boundary's position relative to the anchor entity's position.\n* `Extent`: Returns the width and height of the boundary.\n</param>\n<returns>Bool:\n<ul>\n<li> `true` - success</li>\n<li> `false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorPlaneBoundaryInfo", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlaneBoundaryInfo_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlanePolygonInfo_Parms
		{
			AActor* BoundActor;
			FPICOAnchorPlanePolygonInfo OutAnchorPlanePolygonInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAnchorPlanePolygonInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlanePolygonInfo_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_OutAnchorPlanePolygonInfo = { "OutAnchorPlanePolygonInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlanePolygonInfo_Parms, OutAnchorPlanePolygonInfo), Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlanePolygonInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlanePolygonInfo_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_OutAnchorPlanePolygonInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the information about the polygon (irregular plane) for an anchor entity.\n/// Before calling this method, you need to load anchor entities and get the anchor entity load result first.\n/// </summary>\n/// <param name=\"BoundActor\">Specifies the actor of the anchor entity. </param>\n/// <param name=\"OutAnchorPlanePolygonInfo\">\n/// * `Vertices Num`: The number of vertices.\n/// * `Vertices`: The positions of the polygon's vertices on the X, Y, and Z axis.\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the information about the polygon (irregular plane) for an anchor entity.\nBefore calling this method, you need to load anchor entities and get the anchor entity load result first.\n</summary>\n<param name=\"BoundActor\">Specifies the actor of the anchor entity. </param>\n<param name=\"OutAnchorPlanePolygonInfo\">\n* `Vertices Num`: The number of vertices.\n* `Vertices`: The positions of the polygon's vertices on the X, Y, and Z axis.\n</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorPlanePolygonInfo", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPlanePolygonInfo_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByActor_Parms
		{
			AActor* BoundActor;
			FTransform OutTransform;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByActor_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByActor_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByActor_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_OutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the pose of an actor's anchor entity.\n/// </summary>\n/// <param name=\"BoundActor\">Specifies the actor for which you want to get anchor entity pose information.</param>\n/// <param name=\"OutTransform\">\n/// * `Location`: The location of the anchor entity.\n/// * `Rotation`: The rotation of the anchor entity.\n/// * `Scale`: The scale of the anchor entity. `1` by default.\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the pose of an actor's anchor entity.\n</summary>\n<param name=\"BoundActor\">Specifies the actor for which you want to get anchor entity pose information.</param>\n<param name=\"OutTransform\">\n* `Location`: The location of the anchor entity.\n* `Rotation`: The rotation of the anchor entity.\n* `Scale`: The scale of the anchor entity. `1` by default.\n</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorPoseByActor", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByActor_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByComponent_Parms
		{
			UPICOAnchorComponent* BoundComponent;
			FTransform OutTransform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_BoundComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_BoundComponent = { "BoundComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByComponent_Parms, BoundComponent), Z_Construct_UClass_UPICOAnchorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_BoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_BoundComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByComponent_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByComponent_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_BoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_OutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the pose of a component's anchor entity.\n/// </summary>\n/// <param name=\"BoundComponent\">Specifies the component for which you want to get anchor entity pose information.</param>\n/// <param name=\"OutTransform\">\n/// * `Location`: The location of the anchor entity.\n/// * `Rotation`: The rotation of the anchor entity.\n/// * `Scale`: The scale of the anchor entity. `1` by default.\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the pose of a component's anchor entity.\n</summary>\n<param name=\"BoundComponent\">Specifies the component for which you want to get anchor entity pose information.</param>\n<param name=\"OutTransform\">\n* `Location`: The location of the anchor entity.\n* `Rotation`: The rotation of the anchor entity.\n* `Scale`: The scale of the anchor entity. `1` by default.\n</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorPoseByComponent", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorPoseByComponent_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorSceneLabel_Parms
		{
			AActor* BoundActor;
			EPICOAnchorSceneLabel OutAnchorSceneLabel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutAnchorSceneLabel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutAnchorSceneLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorSceneLabel_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_OutAnchorSceneLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_OutAnchorSceneLabel = { "OutAnchorSceneLabel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorSceneLabel_Parms, OutAnchorSceneLabel), Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorSceneLabel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorSceneLabel_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_OutAnchorSceneLabel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_OutAnchorSceneLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary> Gets the scene label of an anchor entity. </summary>\n/// <param name=\"BoundActor\">Specifies the actor of the anchor entity.</param>\n/// <param name=\"OutAnchorSceneLabel\">Returns the anchor entity's scene label. For details, see [EPICOAnchorSceneLabel](https://developer-cn.pico-interactive.com/en/document/unreal/space-calibration/#8f95bfea) enum.</param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary> Gets the scene label of an anchor entity. </summary>\n<param name=\"BoundActor\">Specifies the actor of the anchor entity.</param>\n<param name=\"OutAnchorSceneLabel\">Returns the anchor entity's scene label. For details, see [EPICOAnchorSceneLabel](https:developer-cn.pico-interactive.com/en/document/unreal/space-calibration/#8f95bfea) enum.</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorSceneLabel", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorSceneLabel_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_GetAnchorVolumeInfo_Parms
		{
			AActor* BoundActor;
			FPICOAnchorVolumeInfo OutAnchorVolumeInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAnchorVolumeInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorVolumeInfo_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_OutAnchorVolumeInfo = { "OutAnchorVolumeInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_GetAnchorVolumeInfo_Parms, OutAnchorVolumeInfo), Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_GetAnchorVolumeInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorVolumeInfo_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_OutAnchorVolumeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// <summary>\n/// Gets the information about the volume for an anchor entity.\n/// Before calling this method, you need to load anchor entities and get the anchor entity load result first.\n/// </summary>\n/// <param name=\"BoundActor\">Specifies the actor of the anchor entity.</param>\n/// <param name=\"OutAnchorVolumeInfo\">\n/// * `Center`: The offset of the volume's position relative to the anchor entity's position.\n/// * `Extent`: The length, width, and height of the volume.\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true` - success</li>\n/// <li>`false` - failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "<summary>\nGets the information about the volume for an anchor entity.\nBefore calling this method, you need to load anchor entities and get the anchor entity load result first.\n</summary>\n<param name=\"BoundActor\">Specifies the actor of the anchor entity.</param>\n<param name=\"OutAnchorVolumeInfo\">\n* `Center`: The offset of the volume's position relative to the anchor entity's position.\n* `Extent`: The length, width, and height of the volume.\n</param>\n<returns>Bool:\n<ul>\n<li>`true` - success</li>\n<li>`false` - failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_GetAnchorVolumeInfo", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_GetAnchorVolumeInfo_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForActor_Parms
		{
			AActor* BoundActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForActor_Parms, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForActor_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::NewProp_BoundActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// @brief Checks if an actor's anchor is valid.\n/// @param BoundActor Specifies the actor for which you want to check.\n/// @return True if the anchor is valid, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "@brief Checks if an actor's anchor is valid.\n@param BoundActor Specifies the actor for which you want to check.\n@return True if the anchor is valid, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_IsAnchorValidForActor", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForActor_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForComponent_Parms
		{
			UActorComponent* BoundComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_BoundComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_BoundComponent = { "BoundComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForComponent_Parms, BoundComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_BoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_BoundComponent_MetaData)) };
	void Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForComponent_Parms), &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_BoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// @brief Checks if a component's anchor is valid.\n/// @param BoundComponent Specifies the component for which you want to check.\n/// @return True if the anchor is valid, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "@brief Checks if a component's anchor is valid.\n@param BoundComponent Specifies the component for which you want to check.\n@return True if the anchor is valid, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_IsAnchorValidForComponent", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_IsAnchorValidForComponent_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics
	{
		struct PICOXRMRFunctionLibrary_eventPXR_SpawnActorFromLoadResult_Parms
		{
			UObject* WorldContext;
			FAnchorLoadResult LoadResult;
			UClass* ActorClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadResult;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_SpawnActorFromLoadResult_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_LoadResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_LoadResult = { "LoadResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_SpawnActorFromLoadResult_Parms, LoadResult), Z_Construct_UScriptStruct_FAnchorLoadResult, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_LoadResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_LoadResult_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_SpawnActorFromLoadResult_Parms, ActorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMRFunctionLibrary_eventPXR_SpawnActorFromLoadResult_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_LoadResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRMR" },
		{ "Comment", "/// @brief  Spawns an actor from the specified anchor load result.\n/// @param WorldContext The world context in which the actor will be spawned.\n/// @param LoadResult The anchor load result containing information for spawning, including the anchor's handle, UUID, and location.\n/// @param ActorClass The class of the actor to be spawned.\n/// @return The spawned actor, or nullptr if spawning fails.\n" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
		{ "ToolTip", "@brief  Spawns an actor from the specified anchor load result.\n@param WorldContext The world context in which the actor will be spawned.\n@param LoadResult The anchor load result containing information for spawning, including the anchor's handle, UUID, and location.\n@param ActorClass The class of the actor to be spawned.\n@return The spawned actor, or nullptr if spawning fails." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMRFunctionLibrary, nullptr, "PXR_SpawnActorFromLoadResult", nullptr, nullptr, sizeof(PICOXRMRFunctionLibrary_eventPXR_SpawnActorFromLoadResult_Parms), Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOXRMRFunctionLibrary_NoRegister()
	{
		return UPICOXRMRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromAnchorToString, "PXR_FromAnchorToString" }, // 2764552136
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_FromUUIDToString, "PXR_FromUUIDToString" }, // 2196785623
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorComponentFlags, "PXR_GetAnchorComponentFlags" }, // 2614689687
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorEntityUuid, "PXR_GetAnchorEntityUuid" }, // 3201929931
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlaneBoundaryInfo, "PXR_GetAnchorPlaneBoundaryInfo" }, // 2798915020
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPlanePolygonInfo, "PXR_GetAnchorPlanePolygonInfo" }, // 3539335735
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByActor, "PXR_GetAnchorPoseByActor" }, // 1419855758
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorPoseByComponent, "PXR_GetAnchorPoseByComponent" }, // 3105167493
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorSceneLabel, "PXR_GetAnchorSceneLabel" }, // 1532112387
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_GetAnchorVolumeInfo, "PXR_GetAnchorVolumeInfo" }, // 526187384
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForActor, "PXR_IsAnchorValidForActor" }, // 1946042323
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_IsAnchorValidForComponent, "PXR_IsAnchorValidForComponent" }, // 2767095842
		{ &Z_Construct_UFunction_UPICOXRMRFunctionLibrary_PXR_SpawnActorFromLoadResult, "PXR_SpawnActorFromLoadResult" }, // 2270351543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_MRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_MRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRMRFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::ClassParams = {
		&UPICOXRMRFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRMRFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRMRFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRMRFunctionLibrary, 3333711539);
	template<> PICOXRMR_API UClass* StaticClass<UPICOXRMRFunctionLibrary>()
	{
		return UPICOXRMRFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRMRFunctionLibrary(Z_Construct_UClass_UPICOXRMRFunctionLibrary, &UPICOXRMRFunctionLibrary::StaticClass, TEXT("/Script/PICOXRMR"), TEXT("UPICOXRMRFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRMRFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
