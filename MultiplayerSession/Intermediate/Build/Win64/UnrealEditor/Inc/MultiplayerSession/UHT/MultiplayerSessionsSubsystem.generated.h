// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSION_MultiplayerSessionsSubsystem_generated_h
#error "MultiplayerSessionsSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionsSubsystem.h"
#endif
#define MULTIPLAYERSESSION_MultiplayerSessionsSubsystem_generated_h

#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_13_DELEGATE \
MULTIPLAYERSESSION_API void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful);


#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_16_DELEGATE \
MULTIPLAYERSESSION_API void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccessful);


#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_17_DELEGATE \
MULTIPLAYERSESSION_API void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccessful);


#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSession"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&); \
	UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	NO_API virtual ~UMultiplayerSessionsSubsystem();


#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_22_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSION_API UClass* StaticClass<class UMultiplayerSessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_TP2Reseau_Plugins_MultiplayerSession_Source_MultiplayerSession_Public_MultiplayerSessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
