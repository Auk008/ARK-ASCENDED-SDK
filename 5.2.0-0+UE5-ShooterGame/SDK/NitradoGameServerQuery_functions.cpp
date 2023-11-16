#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NitradoGameServerQuery.GameServerQuerySubsystem
// (None)

class UClass* UGameServerQuerySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameServerQuerySubsystem");

	return Clss;
}


// GameServerQuerySubsystem NitradoGameServerQuery.Default__GameServerQuerySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameServerQuerySubsystem* UGameServerQuerySubsystem::GetDefaultObj()
{
	static class UGameServerQuerySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameServerQuerySubsystem*>(UGameServerQuerySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UGameServerQuerySubsystem::Start(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "Start");

	Params::UGameServerQuerySubsystem_Start_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Version                                                          (None)

void UGameServerQuerySubsystem::SetVersion(const class FString& Version)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetVersion");

	Params::UGameServerQuerySubsystem_SetVersion_Params Parms{};

	Parms.Version = Version;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueID                                                         (None)

void UGameServerQuerySubsystem::SetUniqueID(const class FString& UniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetUniqueID");

	Params::UGameServerQuerySubsystem_SetUniqueID_Params Parms{};

	Parms.UniqueID = UniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (None)

void UGameServerQuerySubsystem::SetTicksPerSecond(int32 TickCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetTicksPerSecond");

	Params::UGameServerQuerySubsystem_SetTicksPerSecond_Params Parms{};

	Parms.TickCount = TickCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (None)

void UGameServerQuerySubsystem::SetServerName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetServerName");

	Params::UGameServerQuerySubsystem_SetServerName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Ready                                                            (None)

void UGameServerQuerySubsystem::SetReady(bool Ready)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetReady");

	Params::UGameServerQuerySubsystem_SetReady_Params Parms{};

	Parms.Ready = Ready;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (None)

void UGameServerQuerySubsystem::SetPlayerMax(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPlayerMax");

	Params::UGameServerQuerySubsystem_SetPlayerMax_Params Parms{};

	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Count                                                            (None)

void UGameServerQuerySubsystem::SetPlayerCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPlayerCount");

	Params::UGameServerQuerySubsystem_SetPlayerCount_Params Parms{};

	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)

void UGameServerQuerySubsystem::SetPasswordProtected(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetPasswordProtected");

	Params::UGameServerQuerySubsystem_SetPasswordProtected_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (None)

void UGameServerQuerySubsystem::SetMapName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "SetMapName");

	Params::UGameServerQuerySubsystem_SetMapName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameServerQuerySubsystem::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Tag                                                              (None)

void UGameServerQuerySubsystem::RemoveTag(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "RemoveTag");

	Params::UGameServerQuerySubsystem_RemoveTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPlatform               Platform                                                         (None)

void UGameServerQuerySubsystem::RemovePlatform(enum class EPlatform Platform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "RemovePlatform");

	Params::UGameServerQuerySubsystem_RemovePlatform_Params Parms{};

	Parms.Platform = Platform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.IncrementPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameServerQuerySubsystem::IncrementPlayerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "IncrementPlayerCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.DecrementPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameServerQuerySubsystem::DecrementPlayerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "DecrementPlayerCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Tag                                                              (None)

void UGameServerQuerySubsystem::AddTag(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddTag");

	Params::UGameServerQuerySubsystem_AddTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPlatform               Platform                                                         (None)

void UGameServerQuerySubsystem::AddPlatform(enum class EPlatform Platform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddPlatform");

	Params::UGameServerQuerySubsystem_AddPlatform_Params Parms{};

	Parms.Platform = Platform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (None)
// class FString                      Version                                                          (None)

void UGameServerQuerySubsystem::AddModInfo(const class FString& ID, const class FString& Version)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddModInfo");

	Params::UGameServerQuerySubsystem_AddModInfo_Params Parms{};

	Parms.ID = ID;
	Parms.Version = Version;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPortType               Type                                                             (None)
// int32                              Port                                                             (None)
// class FString                      Address                                                          (None)

void UGameServerQuerySubsystem::AddListenPortInfo(enum class EPortType Type, int32 Port, const class FString& Address)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameServerQuerySubsystem", "AddListenPortInfo");

	Params::UGameServerQuerySubsystem_AddListenPortInfo_Params Parms{};

	Parms.Type = Type;
	Parms.Port = Port;
	Parms.Address = Address;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


