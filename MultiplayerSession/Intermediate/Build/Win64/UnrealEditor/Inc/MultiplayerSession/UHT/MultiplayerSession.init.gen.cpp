// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSession_init() {}
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature();
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnDestroySessionComplete__DelegateSignature();
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerSession;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerSession()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerSession.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerSession",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x34C0EE23,
				0xFA4FCF35,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerSession.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerSession.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerSession(Z_Construct_UPackage__Script_MultiplayerSession, TEXT("/Script/MultiplayerSession"), Z_Registration_Info_UPackage__Script_MultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x34C0EE23, 0xFA4FCF35));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
