// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_RoomInviteNotificationArray;
class UObject;
struct FDateTime;
class UPico_RoomInviteNotification;
#ifdef ONLINESUBSYSTEMPICO_Pico_Notification_generated_h
#error "Pico_Notification.generated.h already included, missing '#pragma once' in Pico_Notification.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Notification_generated_h

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_26_DELEGATE \
struct _Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FNotificationMarkAsRead_DelegateWrapper(const FScriptDelegate& NotificationMarkAsRead, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventNotificationMarkAsRead_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	NotificationMarkAsRead.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_25_DELEGATE \
struct _Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_RoomInviteNotificationArray* RoomInviteNotificationArray; \
}; \
static inline void FNotificationRoomInviteNotifications_DelegateWrapper(const FScriptDelegate& NotificationRoomInviteNotifications, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_RoomInviteNotificationArray* RoomInviteNotificationArray) \
{ \
	_Script_OnlineSubsystemPico_eventNotificationRoomInviteNotifications_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.RoomInviteNotificationArray=RoomInviteNotificationArray; \
	NotificationRoomInviteNotifications.ProcessDelegate<UObject>(&Parms); \
}


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMarkAsRead); \
	DECLARE_FUNCTION(execGetRoomInviteNotifications);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMarkAsRead); \
	DECLARE_FUNCTION(execGetRoomInviteNotifications);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoNotificationFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoNotificationFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoNotificationFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoNotificationFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoNotificationFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoNotificationFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoNotificationFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoNotificationFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoNotificationFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoNotificationFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoNotificationFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoNotificationFunction(UOnlinePicoNotificationFunction&&); \
	NO_API UOnlinePicoNotificationFunction(const UOnlinePicoNotificationFunction&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoNotificationFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoNotificationFunction(UOnlinePicoNotificationFunction&&); \
	NO_API UOnlinePicoNotificationFunction(const UOnlinePicoNotificationFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoNotificationFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoNotificationFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoNotificationFunction)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_94_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoNotificationFunction>();

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetSentDateTime); \
	DECLARE_FUNCTION(execGetSentTime); \
	DECLARE_FUNCTION(execGetSenderID); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetID);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetSentDateTime); \
	DECLARE_FUNCTION(execGetSentTime); \
	DECLARE_FUNCTION(execGetSenderID); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetID);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_RoomInviteNotification(); \
	friend struct Z_Construct_UClass_UPico_RoomInviteNotification_Statics; \
public: \
	DECLARE_CLASS(UPico_RoomInviteNotification, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RoomInviteNotification)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUPico_RoomInviteNotification(); \
	friend struct Z_Construct_UClass_UPico_RoomInviteNotification_Statics; \
public: \
	DECLARE_CLASS(UPico_RoomInviteNotification, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RoomInviteNotification)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RoomInviteNotification(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RoomInviteNotification) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RoomInviteNotification); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RoomInviteNotification); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RoomInviteNotification(UPico_RoomInviteNotification&&); \
	NO_API UPico_RoomInviteNotification(const UPico_RoomInviteNotification&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RoomInviteNotification(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RoomInviteNotification(UPico_RoomInviteNotification&&); \
	NO_API UPico_RoomInviteNotification(const UPico_RoomInviteNotification&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RoomInviteNotification); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RoomInviteNotification); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RoomInviteNotification)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_PRIVATE_PROPERTY_OFFSET
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_122_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_RoomInviteNotification>();

#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_SPARSE_DATA
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_RoomInviteNotificationArray(); \
	friend struct Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics; \
public: \
	DECLARE_CLASS(UPico_RoomInviteNotificationArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RoomInviteNotificationArray)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_INCLASS \
private: \
	static void StaticRegisterNativesUPico_RoomInviteNotificationArray(); \
	friend struct Z_Construct_UClass_UPico_RoomInviteNotificationArray_Statics; \
public: \
	DECLARE_CLASS(UPico_RoomInviteNotificationArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RoomInviteNotificationArray)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RoomInviteNotificationArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RoomInviteNotificationArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RoomInviteNotificationArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RoomInviteNotificationArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RoomInviteNotificationArray(UPico_RoomInviteNotificationArray&&); \
	NO_API UPico_RoomInviteNotificationArray(const UPico_RoomInviteNotificationArray&); \
public:


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RoomInviteNotificationArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RoomInviteNotificationArray(UPico_RoomInviteNotificationArray&&); \
	NO_API UPico_RoomInviteNotificationArray(const UPico_RoomInviteNotificationArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RoomInviteNotificationArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RoomInviteNotificationArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RoomInviteNotificationArray)


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RoomInviteNotificationArray() { return STRUCT_OFFSET(UPico_RoomInviteNotificationArray, RoomInviteNotificationArray); }


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_165_PROLOG
#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_RPC_WRAPPERS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_INCLASS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_PRIVATE_PROPERTY_OFFSET \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_SPARSE_DATA \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_INCLASS_NO_PURE_DECLS \
	PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_RoomInviteNotificationArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PicoVidTest_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Notification_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
