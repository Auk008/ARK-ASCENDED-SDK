#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MetasoundFrontend.MetasoundParameterPack
// (None)

class UClass* UMetasoundParameterPack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetasoundParameterPack");

	return Clss;
}


// MetasoundParameterPack MetasoundFrontend.Default__MetasoundParameterPack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetasoundParameterPack* UMetasoundParameterPack::GetDefaultObj()
{
	static class UMetasoundParameterPack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetasoundParameterPack*>(UMetasoundParameterPack::StaticClass()->DefaultObject);

	return Default;
}


// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               OnlyIfExists                                                     (None)
// enum class ESetParamResult         ReturnValue                                                      (None)

void UMetasoundParameterPack::SetTrigger(class FName ParameterName, bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetTrigger");

	Params::UMetasoundParameterPack_SetTrigger_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// class FString                      InValue                                                          (None)
// bool                               OnlyIfExists                                                     (None)
// enum class ESetParamResult         ReturnValue                                                      (None)

void UMetasoundParameterPack::SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetString");

	Params::UMetasoundParameterPack_SetString_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// int32                              InValue                                                          (None)
// bool                               OnlyIfExists                                                     (None)
// enum class ESetParamResult         ReturnValue                                                      (None)

void UMetasoundParameterPack::SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetInt");

	Params::UMetasoundParameterPack_SetInt_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// float                              InValue                                                          (None)
// bool                               OnlyIfExists                                                     (None)
// enum class ESetParamResult         ReturnValue                                                      (None)

void UMetasoundParameterPack::SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetFloat");

	Params::UMetasoundParameterPack_SetFloat_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.SetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               InValue                                                          (None)
// bool                               OnlyIfExists                                                     (None)
// enum class ESetParamResult         ReturnValue                                                      (None)

void UMetasoundParameterPack::SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "SetBool");

	Params::UMetasoundParameterPack_SetBool_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.InValue = InValue;
	Parms.OnlyIfExists = OnlyIfExists;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMetasoundParameterPack*     ReturnValue                                                      (None)

void UMetasoundParameterPack::MakeMetasoundParameterPack(class UMetasoundParameterPack* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "MakeMetasoundParameterPack");

	Params::UMetasoundParameterPack_MakeMetasoundParameterPack_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::HasTrigger(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasTrigger");

	Params::UMetasoundParameterPack_HasTrigger_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::HasString(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasString");

	Params::UMetasoundParameterPack_HasString_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::HasInt(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasInt");

	Params::UMetasoundParameterPack_HasInt_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::HasFloat(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasFloat");

	Params::UMetasoundParameterPack_HasFloat_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.HasBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::HasBool(class FName ParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "HasBool");

	Params::UMetasoundParameterPack_HasBool_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// enum class ESetParamResult         Result                                                           (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::GetTrigger(class FName ParameterName, enum class ESetParamResult Result, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetTrigger");

	Params::UMetasoundParameterPack_GetTrigger_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// enum class ESetParamResult         Result                                                           (None)
// class FString                      ReturnValue                                                      (None)

void UMetasoundParameterPack::GetString(class FName ParameterName, enum class ESetParamResult Result, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetString");

	Params::UMetasoundParameterPack_GetString_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// enum class ESetParamResult         Result                                                           (None)
// int32                              ReturnValue                                                      (None)

void UMetasoundParameterPack::GetInt(class FName ParameterName, enum class ESetParamResult Result, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetInt");

	Params::UMetasoundParameterPack_GetInt_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// enum class ESetParamResult         Result                                                           (None)
// float                              ReturnValue                                                      (None)

void UMetasoundParameterPack::GetFloat(class FName ParameterName, enum class ESetParamResult Result, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetFloat");

	Params::UMetasoundParameterPack_GetFloat_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MetasoundFrontend.MetasoundParameterPack.GetBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (None)
// enum class ESetParamResult         Result                                                           (None)
// bool                               ReturnValue                                                      (None)

void UMetasoundParameterPack::GetBool(class FName ParameterName, enum class ESetParamResult Result, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetasoundParameterPack", "GetBool");

	Params::UMetasoundParameterPack_GetBool_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


