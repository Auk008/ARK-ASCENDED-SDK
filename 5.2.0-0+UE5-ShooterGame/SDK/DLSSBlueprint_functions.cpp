#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DLSSBlueprint.DLSSLibrary
// (None)

class UClass* UDLSSLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLSSLibrary");

	return Clss;
}


// DLSSLibrary DLSSBlueprint.Default__DLSSLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLSSLibrary* UDLSSLibrary::GetDefaultObj()
{
	static class UDLSSLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLSSLibrary*>(UDLSSLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Sharpness                                                        (None)

void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSSharpness");

	Params::UDLSSLibrary_SetDLSSSharpness_Params Parms{};

	Parms.Sharpness = Sharpness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// enum class EUDLSSMode              DLSSMode                                                         (None)

void UDLSSLibrary::SetDLSSMode(class UObject* WorldContextObject, enum class EUDLSSMode DLSSMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSMode");

	Params::UDLSSLibrary_SetDLSSMode_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DLSSMode = DLSSMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (None)

void UDLSSLibrary::QueryDLSSSupport(enum class EUDLSSSupport ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "QueryDLSSSupport");

	Params::UDLSSLibrary_QueryDLSSSupport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (None)

void UDLSSLibrary::QueryDLSSRRSupport(enum class EUDLSSSupport ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "QueryDLSSRRSupport");

	Params::UDLSSLibrary_QueryDLSSRRSupport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDLSSLibrary::IsDLSSSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSSupported");

	Params::UDLSSLibrary_IsDLSSSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDLSSLibrary::IsDLSSRRSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSRRSupported");

	Params::UDLSSLibrary_IsDLSSRRSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDLSSLibrary::IsDLSSRREnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSRREnabled");

	Params::UDLSSLibrary_IsDLSSRREnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (None)
// bool                               ReturnValue                                                      (None)

void UDLSSLibrary::IsDLSSModeSupported(enum class EUDLSSMode DLSSMode, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSModeSupported");

	Params::UDLSSLibrary_IsDLSSModeSupported_Params Parms{};

	Parms.DLSSMode = DLSSMode;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDLSSLibrary::IsDLSSEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSEnabled");

	Params::UDLSSLibrary_IsDLSSEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDLSSLibrary::IsDLAAEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLAAEnabled");

	Params::UDLSSLibrary_IsDLAAEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUDLSSMode>      ReturnValue                                                      (None)

void UDLSSLibrary::GetSupportedDLSSModes(const TArray<enum class EUDLSSMode>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetSupportedDLSSModes");

	Params::UDLSSLibrary_GetSupportedDLSSModes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (None)

void UDLSSLibrary::GetDLSSSharpness(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSSharpness");

	Params::UDLSSLibrary_GetDLSSSharpness_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinScreenPercentage                                              (None)
// float                              MaxScreenPercentage                                              (None)

void UDLSSLibrary::GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSScreenPercentageRange");

	Params::UDLSSLibrary_GetDLSSScreenPercentageRange_Params Parms{};

	Parms.MinScreenPercentage = MinScreenPercentage;
	Parms.MaxScreenPercentage = MaxScreenPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (None)
// int32                              MinDriverVersionMinor                                            (None)

void UDLSSLibrary::GetDLSSRRMinimumDriverVersion(int32 MinDriverVersionMajor, int32 MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSRRMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Params Parms{};

	Parms.MinDriverVersionMajor = MinDriverVersionMajor;
	Parms.MinDriverVersionMinor = MinDriverVersionMinor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (None)
// struct FVector2D                   ScreenResolution                                                 (None)
// bool                               bIsSupported                                                     (None)
// float                              OptimalScreenPercentage                                          (None)
// bool                               bIsFixedScreenPercentage                                         (None)
// float                              MinScreenPercentage                                              (None)
// float                              MaxScreenPercentage                                              (None)
// float                              OptimalSharpness                                                 (None)

void UDLSSLibrary::GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSModeInformation");

	Params::UDLSSLibrary_GetDLSSModeInformation_Params Parms{};

	Parms.DLSSMode = DLSSMode;
	Parms.ScreenResolution = ScreenResolution;
	Parms.bIsSupported = bIsSupported;
	Parms.OptimalScreenPercentage = OptimalScreenPercentage;
	Parms.bIsFixedScreenPercentage = bIsFixedScreenPercentage;
	Parms.MinScreenPercentage = MinScreenPercentage;
	Parms.MaxScreenPercentage = MaxScreenPercentage;
	Parms.OptimalSharpness = OptimalSharpness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (None)

void UDLSSLibrary::GetDLSSMode(enum class EUDLSSMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMode");

	Params::UDLSSLibrary_GetDLSSMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (None)
// int32                              MinDriverVersionMinor                                            (None)

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32 MinDriverVersionMajor, int32 MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSMinimumDriverVersion_Params Parms{};

	Parms.MinDriverVersionMajor = MinDriverVersionMajor;
	Parms.MinDriverVersionMinor = MinDriverVersionMinor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (None)

void UDLSSLibrary::GetDefaultDLSSMode(enum class EUDLSSMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDefaultDLSSMode");

	Params::UDLSSLibrary_GetDefaultDLSSMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLSSRR
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)

void UDLSSLibrary::EnableDLSSRR(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLSSRR");

	Params::UDLSSLibrary_EnableDLSSRR_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)

void UDLSSLibrary::EnableDLSS(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLSS");

	Params::UDLSSLibrary_EnableDLSS_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)

void UDLSSLibrary::EnableDLAA(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLAA");

	Params::UDLSSLibrary_EnableDLAA_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


