#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// (None)

class UClass* UAchievementBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementBlueprintLibrary");

	return Clss;
}


// AchievementBlueprintLibrary OnlineSubsystemUtils.Default__AchievementBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAchievementBlueprintLibrary* UAchievementBlueprintLibrary::GetDefaultObj()
{
	static class UAchievementBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementBlueprintLibrary*>(UAchievementBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (None)
// class FName                        AchievementID                                                    (None)
// bool                               bFoundID                                                         (None)
// float                              Progress                                                         (None)

void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool bFoundID, float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementProgress");

	Params::UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementID = AchievementID;
	Parms.bFoundID = bFoundID;
	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (None)
// class FName                        AchievementID                                                    (None)
// bool                               bFoundID                                                         (None)
// class FText                        Title                                                            (None)
// class FText                        LockedDescription                                                (None)
// class FText                        UnlockedDescription                                              (None)
// bool                               bHidden                                                          (None)

void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool bFoundID, class FText Title, class FText LockedDescription, class FText UnlockedDescription, bool bHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementBlueprintLibrary", "GetCachedAchievementDescription");

	Params::UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementID = AchievementID;
	Parms.bFoundID = bFoundID;
	Parms.Title = Title;
	Parms.LockedDescription = LockedDescription;
	Parms.UnlockedDescription = UnlockedDescription;
	Parms.bHidden = bHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// (None)

class UClass* UAchievementQueryCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementQueryCallbackProxy");

	return Clss;
}


// AchievementQueryCallbackProxy OnlineSubsystemUtils.Default__AchievementQueryCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::GetDefaultObj()
{
	static class UAchievementQueryCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementQueryCallbackProxy*>(UAchievementQueryCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UAchievementQueryCallbackProxy*ReturnValue                                                      (None)

void UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, class UAchievementQueryCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementQueryCallbackProxy", "CacheAchievements");

	Params::UAchievementQueryCallbackProxy_CacheAchievements_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UAchievementQueryCallbackProxy*ReturnValue                                                      (None)

void UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController, class UAchievementQueryCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementQueryCallbackProxy", "CacheAchievementDescriptions");

	Params::UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// (None)

class UClass* UAchievementWriteCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementWriteCallbackProxy");

	return Clss;
}


// AchievementWriteCallbackProxy OnlineSubsystemUtils.Default__AchievementWriteCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::GetDefaultObj()
{
	static class UAchievementWriteCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementWriteCallbackProxy*>(UAchievementWriteCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class FName                        AchievementName                                                  (None)
// float                              Progress                                                         (None)
// int32                              UserTag                                                          (None)
// class UAchievementWriteCallbackProxy*ReturnValue                                                      (None)

void UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag, class UAchievementWriteCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementWriteCallbackProxy", "WriteAchievementProgress");

	Params::UAchievementWriteCallbackProxy_WriteAchievementProgress_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementName = AchievementName;
	Parms.Progress = Progress;
	Parms.UserTag = UserTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// (None)

class UClass* UConnectionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConnectionCallbackProxy");

	return Clss;
}


// ConnectionCallbackProxy OnlineSubsystemUtils.Default__ConnectionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UConnectionCallbackProxy* UConnectionCallbackProxy::GetDefaultObj()
{
	static class UConnectionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UConnectionCallbackProxy*>(UConnectionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UConnectionCallbackProxy*    ReturnValue                                                      (None)

void UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController, class UConnectionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConnectionCallbackProxy", "ConnectToService");

	Params::UConnectionCallbackProxy_ConnectToService_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// (None)

class UClass* UCreateSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateSessionCallbackProxy");

	return Clss;
}


// CreateSessionCallbackProxy OnlineSubsystemUtils.Default__CreateSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::GetDefaultObj()
{
	static class UCreateSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateSessionCallbackProxy*>(UCreateSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// int32                              PublicConnections                                                (None)
// bool                               bUseLAN                                                          (None)
// class UCreateSessionCallbackProxy* ReturnValue                                                      (None)

void UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, class UCreateSessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateSessionCallbackProxy", "CreateSession");

	Params::UCreateSessionCallbackProxy_CreateSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.PublicConnections = PublicConnections;
	Parms.bUseLAN = bUseLAN;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// (None)

class UClass* UDestroySessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestroySessionCallbackProxy");

	return Clss;
}


// DestroySessionCallbackProxy OnlineSubsystemUtils.Default__DestroySessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::GetDefaultObj()
{
	static class UDestroySessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestroySessionCallbackProxy*>(UDestroySessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UDestroySessionCallbackProxy*ReturnValue                                                      (None)

void UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController, class UDestroySessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestroySessionCallbackProxy", "DestroySession");

	Params::UDestroySessionCallbackProxy_DestroySession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// (None)

class UClass* UEndMatchCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndMatchCallbackProxy");

	return Clss;
}


// EndMatchCallbackProxy OnlineSubsystemUtils.Default__EndMatchCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UEndMatchCallbackProxy* UEndMatchCallbackProxy::GetDefaultObj()
{
	static class UEndMatchCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndMatchCallbackProxy*>(UEndMatchCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// TScriptInterface<class ITurnBasedMatchInterface>MatchActor                                                       (ZeroConstructor)
// class FString                      MatchID                                                          (None)
// enum class EMPMatchOutcome         LocalPlayerOutcome                                               (None)
// enum class EMPMatchOutcome         OtherPlayersOutcome                                              (None)
// class UEndMatchCallbackProxy*      ReturnValue                                                      (None)

void UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome, class UEndMatchCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndMatchCallbackProxy", "EndMatch");

	Params::UEndMatchCallbackProxy_EndMatch_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchActor = MatchActor;
	Parms.MatchID = MatchID;
	Parms.LocalPlayerOutcome = LocalPlayerOutcome;
	Parms.OtherPlayersOutcome = OtherPlayersOutcome;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// (None)

class UClass* UEndTurnCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndTurnCallbackProxy");

	return Clss;
}


// EndTurnCallbackProxy OnlineSubsystemUtils.Default__EndTurnCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UEndTurnCallbackProxy* UEndTurnCallbackProxy::GetDefaultObj()
{
	static class UEndTurnCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndTurnCallbackProxy*>(UEndTurnCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class FString                      MatchID                                                          (None)
// TScriptInterface<class ITurnBasedMatchInterface>TurnBasedMatchInterface                                          (ZeroConstructor)
// class UEndTurnCallbackProxy*       ReturnValue                                                      (None)

void UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface, class UEndTurnCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndTurnCallbackProxy", "EndTurn");

	Params::UEndTurnCallbackProxy_EndTurn_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.TurnBasedMatchInterface = TurnBasedMatchInterface;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// (None)

class UClass* UFindSessionsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindSessionsCallbackProxy");

	return Clss;
}


// FindSessionsCallbackProxy OnlineSubsystemUtils.Default__FindSessionsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::GetDefaultObj()
{
	static class UFindSessionsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindSessionsCallbackProxy*>(UFindSessionsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (None)
// class FString                      ReturnValue                                                      (None)

void UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetServerName");

	Params::UFindSessionsCallbackProxy_GetServerName_Params Parms{};

	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (None)
// int32                              ReturnValue                                                      (None)

void UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetPingInMs");

	Params::UFindSessionsCallbackProxy_GetPingInMs_Params Parms{};

	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (None)
// int32                              ReturnValue                                                      (None)

void UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetMaxPlayers");

	Params::UFindSessionsCallbackProxy_GetMaxPlayers_Params Parms{};

	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     Result                                                           (None)
// int32                              ReturnValue                                                      (None)

void UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "GetCurrentPlayers");

	Params::UFindSessionsCallbackProxy_GetCurrentPlayers_Params Parms{};

	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// int32                              MaxResults                                                       (None)
// bool                               bUseLAN                                                          (None)
// class UFindSessionsCallbackProxy*  ReturnValue                                                      (None)

void UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, class UFindSessionsCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxy", "FindSessions");

	Params::UFindSessionsCallbackProxy_FindSessions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MaxResults = MaxResults;
	Parms.bUseLAN = bUseLAN;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// (None)

class UClass* UFindTurnBasedMatchCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindTurnBasedMatchCallbackProxy");

	return Clss;
}


// FindTurnBasedMatchCallbackProxy OnlineSubsystemUtils.Default__FindTurnBasedMatchCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::GetDefaultObj()
{
	static class UFindTurnBasedMatchCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindTurnBasedMatchCallbackProxy*>(UFindTurnBasedMatchCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// TScriptInterface<class ITurnBasedMatchInterface>MatchActor                                                       (ZeroConstructor)
// int32                              MinPlayers                                                       (None)
// int32                              MaxPlayers                                                       (None)
// int32                              PlayerGroup                                                      (None)
// bool                               ShowExistingMatches                                              (None)
// class UFindTurnBasedMatchCallbackProxy*ReturnValue                                                      (None)

void UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches, class UFindTurnBasedMatchCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindTurnBasedMatchCallbackProxy", "FindTurnBasedMatch");

	Params::UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchActor = MatchActor;
	Parms.MinPlayers = MinPlayers;
	Parms.MaxPlayers = MaxPlayers;
	Parms.PlayerGroup = PlayerGroup;
	Parms.ShowExistingMatches = ShowExistingMatches;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// (None)

class UClass* UInAppPurchaseCallbackProxy2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseCallbackProxy2");

	return Clss;
}


// InAppPurchaseCallbackProxy2 OnlineSubsystemUtils.Default__InAppPurchaseCallbackProxy2
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::GetDefaultObj()
{
	static class UInAppPurchaseCallbackProxy2* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseCallbackProxy2*>(UInAppPurchaseCallbackProxy2::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (None)

void UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (None)

void UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchaseQueryOwned");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// struct FInAppPurchaseProductRequest2ProductRequest                                                   (None)
// class UInAppPurchaseCallbackProxy2*ReturnValue                                                      (None)

void UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest, class UInAppPurchaseCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseCallbackProxy2", "CreateProxyObjectForInAppPurchase");

	Params::UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ProductRequest = ProductRequest;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// (None)

class UClass* UInAppPurchaseQueryCallbackProxy2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseQueryCallbackProxy2");

	return Clss;
}


// InAppPurchaseQueryCallbackProxy2 OnlineSubsystemUtils.Default__InAppPurchaseQueryCallbackProxy2
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::GetDefaultObj()
{
	static class UInAppPurchaseQueryCallbackProxy2* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseQueryCallbackProxy2*>(UInAppPurchaseQueryCallbackProxy2::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// TArray<class FString>              ProductIdentifiers                                               (None)
// class UInAppPurchaseQueryCallbackProxy2*ReturnValue                                                      (None)

void UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<class FString>& ProductIdentifiers, class UInAppPurchaseQueryCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseQueryCallbackProxy2", "CreateProxyObjectForInAppPurchaseQuery");

	Params::UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ProductIdentifiers = ProductIdentifiers;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// (None)

class UClass* UInAppPurchaseRestoreCallbackProxy2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InAppPurchaseRestoreCallbackProxy2");

	return Clss;
}


// InAppPurchaseRestoreCallbackProxy2 OnlineSubsystemUtils.Default__InAppPurchaseRestoreCallbackProxy2
// (Public, ClassDefaultObject, ArchetypeObject)

class UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::GetDefaultObj()
{
	static class UInAppPurchaseRestoreCallbackProxy2* Default = nullptr;

	if (!Default)
		Default = static_cast<UInAppPurchaseRestoreCallbackProxy2*>(UInAppPurchaseRestoreCallbackProxy2::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest2>ConsumableProductFlags                                           (None)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UInAppPurchaseRestoreCallbackProxy2*ReturnValue                                                      (None)

void UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(const TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController, class UInAppPurchaseRestoreCallbackProxy2* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InAppPurchaseRestoreCallbackProxy2", "CreateProxyObjectForInAppPurchaseRestore");

	Params::UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params Parms{};

	Parms.ConsumableProductFlags = ConsumableProductFlags;
	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.IpConnection
// (None)

class UClass* UIpConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpConnection");

	return Clss;
}


// IpConnection OnlineSubsystemUtils.Default__IpConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpConnection* UIpConnection::GetDefaultObj()
{
	static class UIpConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpConnection*>(UIpConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.IpNetDriver
// (None)

class UClass* UIpNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpNetDriver");

	return Clss;
}


// IpNetDriver OnlineSubsystemUtils.Default__IpNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpNetDriver* UIpNetDriver::GetDefaultObj()
{
	static class UIpNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpNetDriver*>(UIpNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// (None)

class UClass* UJoinSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinSessionCallbackProxy");

	return Clss;
}


// JoinSessionCallbackProxy OnlineSubsystemUtils.Default__JoinSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::GetDefaultObj()
{
	static class UJoinSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinSessionCallbackProxy*>(UJoinSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// struct FBlueprintSessionResult     SearchResult                                                     (None)
// class UJoinSessionCallbackProxy*   ReturnValue                                                      (None)

void UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult, class UJoinSessionCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinSessionCallbackProxy", "JoinSession");

	Params::UJoinSessionCallbackProxy_JoinSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.SearchResult = SearchResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// (None)

class UClass* ULeaderboardBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardBlueprintLibrary");

	return Clss;
}


// LeaderboardBlueprintLibrary OnlineSubsystemUtils.Default__LeaderboardBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeaderboardBlueprintLibrary* ULeaderboardBlueprintLibrary::GetDefaultObj()
{
	static class ULeaderboardBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardBlueprintLibrary*>(ULeaderboardBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)
// class FName                        StatName                                                         (None)
// int32                              StatValue                                                        (None)
// bool                               ReturnValue                                                      (None)

void ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, class FName StatName, int32 StatValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardBlueprintLibrary", "WriteLeaderboardInteger");

	Params::ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.StatName = StatName;
	Parms.StatValue = StatValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// (None)

class UClass* ULeaderboardFlushCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardFlushCallbackProxy");

	return Clss;
}


// LeaderboardFlushCallbackProxy OnlineSubsystemUtils.Default__LeaderboardFlushCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::GetDefaultObj()
{
	static class ULeaderboardFlushCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardFlushCallbackProxy*>(ULeaderboardFlushCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class FName                        SessionName                                                      (None)
// class ULeaderboardFlushCallbackProxy*ReturnValue                                                      (None)

void ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, class FName SessionName, class ULeaderboardFlushCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardFlushCallbackProxy", "CreateProxyObjectForFlush");

	Params::ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SessionName = SessionName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// (None)

class UClass* ULeaderboardQueryCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardQueryCallbackProxy");

	return Clss;
}


// LeaderboardQueryCallbackProxy OnlineSubsystemUtils.Default__LeaderboardQueryCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::GetDefaultObj()
{
	static class ULeaderboardQueryCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardQueryCallbackProxy*>(ULeaderboardQueryCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class FName                        StatName                                                         (None)
// class ULeaderboardQueryCallbackProxy*ReturnValue                                                      (None)

void ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, class FName StatName, class ULeaderboardQueryCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardQueryCallbackProxy", "CreateProxyObjectForIntQuery");

	Params::ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.StatName = StatName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// (None)

class UClass* ULogoutCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LogoutCallbackProxy");

	return Clss;
}


// LogoutCallbackProxy OnlineSubsystemUtils.Default__LogoutCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ULogoutCallbackProxy* ULogoutCallbackProxy::GetDefaultObj()
{
	static class ULogoutCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULogoutCallbackProxy*>(ULogoutCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class ULogoutCallbackProxy*        ReturnValue                                                      (None)

void ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController, class ULogoutCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LogoutCallbackProxy", "Logout");

	Params::ULogoutCallbackProxy_Logout_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.OnlineBeacon
// (Actor)

class UClass* AOnlineBeacon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeacon");

	return Clss;
}


// OnlineBeacon OnlineSubsystemUtils.Default__OnlineBeacon
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeacon* AOnlineBeacon::GetDefaultObj()
{
	static class AOnlineBeacon* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeacon*>(AOnlineBeacon::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeaconClient
// (Actor)

class UClass* AOnlineBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconClient");

	return Clss;
}


// OnlineBeaconClient OnlineSubsystemUtils.Default__OnlineBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeaconClient* AOnlineBeaconClient::GetDefaultObj()
{
	static class AOnlineBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeaconClient*>(AOnlineBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void AOnlineBeaconClient::ClientOnConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineBeaconClient", "ClientOnConnected");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.OnlineBeaconHost
// (Actor)

class UClass* AOnlineBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconHost");

	return Clss;
}


// OnlineBeaconHost OnlineSubsystemUtils.Default__OnlineBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeaconHost* AOnlineBeaconHost::GetDefaultObj()
{
	static class AOnlineBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeaconHost*>(AOnlineBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// (Actor)

class UClass* AOnlineBeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconHostObject");

	return Clss;
}


// OnlineBeaconHostObject OnlineSubsystemUtils.Default__OnlineBeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AOnlineBeaconHostObject* AOnlineBeaconHostObject::GetDefaultObj()
{
	static class AOnlineBeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AOnlineBeaconHostObject*>(AOnlineBeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// (None)

class UClass* UOnlineEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");

	return Clss;
}


// OnlineEngineInterfaceImpl OnlineSubsystemUtils.Default__OnlineEngineInterfaceImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineEngineInterfaceImpl* UOnlineEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineEngineInterfaceImpl*>(UOnlineEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlinePIESettings
// (None)

class UClass* UOnlinePIESettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlinePIESettings");

	return Clss;
}


// OnlinePIESettings OnlineSubsystemUtils.Default__OnlinePIESettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlinePIESettings* UOnlinePIESettings::GetDefaultObj()
{
	static class UOnlinePIESettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlinePIESettings*>(UOnlinePIESettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
// (None)

class UClass* UOnlineServicesEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineServicesEngineInterfaceImpl");

	return Clss;
}


// OnlineServicesEngineInterfaceImpl OnlineSubsystemUtils.Default__OnlineServicesEngineInterfaceImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineServicesEngineInterfaceImpl* UOnlineServicesEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineServicesEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineServicesEngineInterfaceImpl*>(UOnlineServicesEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineSessionClient
// (None)

class UClass* UOnlineSessionClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSessionClient");

	return Clss;
}


// OnlineSessionClient OnlineSubsystemUtils.Default__OnlineSessionClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSessionClient* UOnlineSessionClient::GetDefaultObj()
{
	static class UOnlineSessionClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSessionClient*>(UOnlineSessionClient::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.PartyBeaconClient
// (Actor)

class UClass* APartyBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyBeaconClient");

	return Clss;
}


// PartyBeaconClient OnlineSubsystemUtils.Default__PartyBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class APartyBeaconClient* APartyBeaconClient::GetDefaultObj()
{
	static class APartyBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<APartyBeaconClient*>(APartyBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (None)
// struct FPartyReservation           ReservationUpdate                                                (None)

void APartyBeaconClient::ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerUpdateReservationRequest");

	Params::APartyBeaconClient_ServerUpdateReservationRequest_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.ReservationUpdate = ReservationUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (None)
// struct FPartyReservation           Reservation                                                      (None)

void APartyBeaconClient::ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerReservationRequest");

	Params::APartyBeaconClient_ServerReservationRequest_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (None)
// struct FPartyReservation           ReservationUpdate                                                (None)

void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerRemoveMemberFromReservationRequest");

	Params::APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.ReservationUpdate = ReservationUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PartyLeader                                                      (None)

void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerCancelReservationRequest");

	Params::APartyBeaconClient_ServerCancelReservationRequest_Params Parms{};

	Parms.PartyLeader = PartyLeader;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (None)
// struct FPartyReservation           Reservation                                                      (None)

void APartyBeaconClient::ServerAddOrUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ServerAddOrUpdateReservationRequest");

	Params::APartyBeaconClient_ServerAddOrUpdateReservationRequest_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int32                              NumRemainingReservations                                         (None)

void APartyBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientSendReservationUpdates");

	Params::APartyBeaconClient_ClientSendReservationUpdates_Params Parms{};

	Parms.NumRemainingReservations = NumRemainingReservations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void APartyBeaconClient::ClientSendReservationFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientSendReservationFull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EPartyReservationResult ReservationResponse                                              (None)

void APartyBeaconClient::ClientReservationResponse(enum class EPartyReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientReservationResponse");

	Params::APartyBeaconClient_ClientReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EPartyReservationResult ReservationResponse                                              (None)

void APartyBeaconClient::ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyBeaconClient", "ClientCancelReservationResponse");

	Params::APartyBeaconClient_ClientCancelReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.PartyBeaconHost
// (Actor)

class UClass* APartyBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyBeaconHost");

	return Clss;
}


// PartyBeaconHost OnlineSubsystemUtils.Default__PartyBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class APartyBeaconHost* APartyBeaconHost::GetDefaultObj()
{
	static class APartyBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<APartyBeaconHost*>(APartyBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.PartyBeaconState
// (None)

class UClass* UPartyBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyBeaconState");

	return Clss;
}


// PartyBeaconState OnlineSubsystemUtils.Default__PartyBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartyBeaconState* UPartyBeaconState::GetDefaultObj()
{
	static class UPartyBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyBeaconState*>(UPartyBeaconState::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// (None)

class UClass* UQuitMatchCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuitMatchCallbackProxy");

	return Clss;
}


// QuitMatchCallbackProxy OnlineSubsystemUtils.Default__QuitMatchCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::GetDefaultObj()
{
	static class UQuitMatchCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuitMatchCallbackProxy*>(UQuitMatchCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class FString                      MatchID                                                          (None)
// enum class EMPMatchOutcome         Outcome                                                          (None)
// int32                              TurnTimeoutInSeconds                                             (None)
// class UQuitMatchCallbackProxy*     ReturnValue                                                      (None)

void UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds, class UQuitMatchCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitMatchCallbackProxy", "QuitMatch");

	Params::UQuitMatchCallbackProxy_QuitMatch_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.Outcome = Outcome;
	Parms.TurnTimeoutInSeconds = TurnTimeoutInSeconds;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// (None)

class UClass* UShowLoginUICallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowLoginUICallbackProxy");

	return Clss;
}


// ShowLoginUICallbackProxy OnlineSubsystemUtils.Default__ShowLoginUICallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::GetDefaultObj()
{
	static class UShowLoginUICallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowLoginUICallbackProxy*>(UShowLoginUICallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           InPlayerController                                               (ZeroConstructor)
// class UShowLoginUICallbackProxy*   ReturnValue                                                      (None)

void UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController, class UShowLoginUICallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowLoginUICallbackProxy", "ShowExternalLoginUI");

	Params::UShowLoginUICallbackProxy_ShowExternalLoginUI_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InPlayerController = InPlayerController;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// (Actor)

class UClass* ASpectatorBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpectatorBeaconClient");

	return Clss;
}


// SpectatorBeaconClient OnlineSubsystemUtils.Default__SpectatorBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpectatorBeaconClient* ASpectatorBeaconClient::GetDefaultObj()
{
	static class ASpectatorBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpectatorBeaconClient*>(ASpectatorBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      SessionId                                                        (None)
// struct FSpectatorReservation       Reservation                                                      (None)

void ASpectatorBeaconClient::ServerReservationRequest(const class FString& SessionId, const struct FSpectatorReservation& Reservation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ServerReservationRequest");

	Params::ASpectatorBeaconClient_ServerReservationRequest_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            Spectator                                                        (None)

void ASpectatorBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ServerCancelReservationRequest");

	Params::ASpectatorBeaconClient_ServerCancelReservationRequest_Params Parms{};

	Parms.Spectator = Spectator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int32                              NumRemainingReservations                                         (None)

void ASpectatorBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientSendReservationUpdates");

	Params::ASpectatorBeaconClient_ClientSendReservationUpdates_Params Parms{};

	Parms.NumRemainingReservations = NumRemainingReservations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ASpectatorBeaconClient::ClientSendReservationFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientSendReservationFull");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ESpectatorReservationResultReservationResponse                                              (None)

void ASpectatorBeaconClient::ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientReservationResponse");

	Params::ASpectatorBeaconClient_ClientReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class ESpectatorReservationResultReservationResponse                                              (None)

void ASpectatorBeaconClient::ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpectatorBeaconClient", "ClientCancelReservationResponse");

	Params::ASpectatorBeaconClient_ClientCancelReservationResponse_Params Parms{};

	Parms.ReservationResponse = ReservationResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// (Actor)

class UClass* ASpectatorBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpectatorBeaconHost");

	return Clss;
}


// SpectatorBeaconHost OnlineSubsystemUtils.Default__SpectatorBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpectatorBeaconHost* ASpectatorBeaconHost::GetDefaultObj()
{
	static class ASpectatorBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpectatorBeaconHost*>(ASpectatorBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.SpectatorBeaconState
// (None)

class UClass* USpectatorBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpectatorBeaconState");

	return Clss;
}


// SpectatorBeaconState OnlineSubsystemUtils.Default__SpectatorBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class USpectatorBeaconState* USpectatorBeaconState::GetDefaultObj()
{
	static class USpectatorBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<USpectatorBeaconState*>(USpectatorBeaconState::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.TestBeaconClient
// (Actor)

class UClass* ATestBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestBeaconClient");

	return Clss;
}


// TestBeaconClient OnlineSubsystemUtils.Default__TestBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ATestBeaconClient* ATestBeaconClient::GetDefaultObj()
{
	static class ATestBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ATestBeaconClient*>(ATestBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void ATestBeaconClient::ServerPong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestBeaconClient", "ServerPong");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ATestBeaconClient::ClientPing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestBeaconClient", "ClientPing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.TestBeaconHost
// (Actor)

class UClass* ATestBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestBeaconHost");

	return Clss;
}


// TestBeaconHost OnlineSubsystemUtils.Default__TestBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ATestBeaconHost* ATestBeaconHost::GetDefaultObj()
{
	static class ATestBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ATestBeaconHost*>(ATestBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// (None)

class UClass* UTurnBasedBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurnBasedBlueprintLibrary");

	return Clss;
}


// TurnBasedBlueprintLibrary OnlineSubsystemUtils.Default__TurnBasedBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTurnBasedBlueprintLibrary* UTurnBasedBlueprintLibrary::GetDefaultObj()
{
	static class UTurnBasedBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTurnBasedBlueprintLibrary*>(UTurnBasedBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (ZeroConstructor)
// class UObject*                     Object                                                           (None)

void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "RegisterTurnBasedMatchInterfaceObject");

	Params::UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (None)
// class FString                      MatchID                                                          (None)
// int32                              PlayerIndex                                                      (None)
// class FString                      PlayerDisplayName                                                (None)

void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, const class FString& PlayerDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetPlayerDisplayName");

	Params::UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.PlayerIndex = PlayerIndex;
	Parms.PlayerDisplayName = PlayerDisplayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (None)
// class FString                      MatchID                                                          (None)
// int32                              PlayerIndex                                                      (None)

void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetMyPlayerIndex");

	Params::UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class APlayerController*           PlayerController                                                 (None)
// class FString                      MatchID                                                          (None)
// bool                               bIsMyTurn                                                        (None)

void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool bIsMyTurn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedBlueprintLibrary", "GetIsMyTurn");

	Params::UTurnBasedBlueprintLibrary_GetIsMyTurn_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.bIsMyTurn = bIsMyTurn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// (SceneComponent)

class UClass* UVoipListenerSynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipListenerSynthComponent");

	return Clss;
}


// VoipListenerSynthComponent OnlineSubsystemUtils.Default__VoipListenerSynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipListenerSynthComponent* UVoipListenerSynthComponent::GetDefaultObj()
{
	static class UVoipListenerSynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipListenerSynthComponent*>(UVoipListenerSynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UVoipListenerSynthComponent::IsIdling(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipListenerSynthComponent", "IsIdling");

	Params::UVoipListenerSynthComponent_IsIdling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// (None)

class UClass* UOnlineEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");

	return Clss;
}


// OnlineEngineInterfaceImpl RedpointEOSUtils.Default__OnlineEngineInterfaceEOS
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineEngineInterfaceImpl* UOnlineEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineEngineInterfaceImpl*>(UOnlineEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}

}


