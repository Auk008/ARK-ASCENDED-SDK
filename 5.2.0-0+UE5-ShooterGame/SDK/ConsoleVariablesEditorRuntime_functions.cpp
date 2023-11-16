#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
// (None)

class UClass* UConsoleVariablesAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleVariablesAsset");

	return Clss;
}


// ConsoleVariablesAsset ConsoleVariablesEditorRuntime.Default__ConsoleVariablesAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UConsoleVariablesAsset* UConsoleVariablesAsset::GetDefaultObj()
{
	static class UConsoleVariablesAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleVariablesAsset*>(UConsoleVariablesAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableCollectionDescription                                  (None)

void UConsoleVariablesAsset::SetVariableCollectionDescription(const class FString& InVariableCollectionDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "SetVariableCollectionDescription");

	Params::UConsoleVariablesAsset_SetVariableCollectionDescription_Params Parms{};

	Parms.InVariableCollectionDescription = InVariableCollectionDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>Replacement                                                      (None)

void UConsoleVariablesAsset::ReplaceSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& Replacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ReplaceSavedCommands");

	Params::UConsoleVariablesAsset_ReplaceSavedCommands_Params Parms{};

	Parms.Replacement = Replacement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InCommandString                                                  (None)
// bool                               ReturnValue                                                      (None)

void UConsoleVariablesAsset::RemoveConsoleVariable(const class FString& InCommandString, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "RemoveConsoleVariable");

	Params::UConsoleVariablesAsset_RemoveConsoleVariable_Params Parms{};

	Parms.InCommandString = InCommandString;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UConsoleVariablesAsset::GetVariableCollectionDescription(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetVariableCollectionDescription");

	Params::UConsoleVariablesAsset_GetVariableCollectionDescription_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UConsoleVariablesAsset::GetSavedCommandsCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsCount");

	Params::UConsoleVariablesAsset_GetSavedCommandsCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (None)
// TArray<class FString>              ReturnValue                                                      (None)

void UConsoleVariablesAsset::GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked, const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsStringArray");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params Parms{};

	Parms.bOnlyIncludeChecked = bOnlyIncludeChecked;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOnlyIncludeChecked                                              (None)
// class FString                      ReturnValue                                                      (None)

void UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommandsAsCommaSeparatedString");

	Params::UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params Parms{};

	Parms.bOnlyIncludeChecked = bOnlyIncludeChecked;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FConsoleVariablesEditorAssetSaveData>ReturnValue                                                      (None)

void UConsoleVariablesAsset::GetSavedCommands(const TArray<struct FConsoleVariablesEditorAssetSaveData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "GetSavedCommands");

	Params::UConsoleVariablesAsset_GetSavedCommands_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InCommandString                                                  (None)
// struct FConsoleVariablesEditorAssetSaveDataOutValue                                                         (None)
// enum class ESearchCase             SearchCase                                                       (None)
// bool                               ReturnValue                                                      (None)

void UConsoleVariablesAsset::FindSavedDataByCommandString(const class FString& InCommandString, const struct FConsoleVariablesEditorAssetSaveData& OutValue, enum class ESearchCase SearchCase, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "FindSavedDataByCommandString");

	Params::UConsoleVariablesAsset_FindSavedDataByCommandString_Params Parms{};

	Parms.InCommandString = InCommandString;
	Parms.OutValue = OutValue;
	Parms.SearchCase = SearchCase;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// bool                               bOnlyIncludeChecked                                              (None)

void UConsoleVariablesAsset::ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "ExecuteSavedCommands");

	Params::UConsoleVariablesAsset_ExecuteSavedCommands_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bOnlyIncludeChecked = bOnlyIncludeChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConsoleVariablesAsset*      InAssetToCopy                                                    (None)

void UConsoleVariablesAsset::CopyFrom(class UConsoleVariablesAsset* InAssetToCopy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "CopyFrom");

	Params::UConsoleVariablesAsset_CopyFrom_Params Parms{};

	Parms.InAssetToCopy = InAssetToCopy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FConsoleVariablesEditorAssetSaveDataInData                                                           (None)

void UConsoleVariablesAsset::AddOrSetConsoleObjectSavedData(const struct FConsoleVariablesEditorAssetSaveData& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleVariablesAsset", "AddOrSetConsoleObjectSavedData");

	Params::UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params Parms{};

	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


