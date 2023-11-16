#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StreamlineBlueprint.StreamlineLibrary
// (None)

class UClass* UStreamlineLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineLibrary");

	return Clss;
}


// StreamlineLibrary StreamlineBlueprint.Default__StreamlineLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineLibrary* UStreamlineLibrary::GetDefaultObj()
{
	static class UStreamlineLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineLibrary*>(UStreamlineLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (None)
// enum class EUStreamlineFeatureSupportReturnValue                                                      (None)

void UStreamlineLibrary::QueryStreamlineFeatureSupport(enum class EUStreamlineFeature Feature, enum class EUStreamlineFeatureSupport ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "QueryStreamlineFeatureSupport");

	Params::UStreamlineLibrary_QueryStreamlineFeatureSupport_Params Parms{};

	Parms.Feature = Feature;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (None)
// bool                               ReturnValue                                                      (None)

void UStreamlineLibrary::IsStreamlineFeatureSupported(enum class EUStreamlineFeature Feature, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "IsStreamlineFeatureSupported");

	Params::UStreamlineLibrary_IsStreamlineFeatureSupported_Params Parms{};

	Parms.Feature = Feature;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (None)
// struct FStreamlineFeatureRequirementsReturnValue                                                      (None)

void UStreamlineLibrary::GetStreamlineFeatureInformation(enum class EUStreamlineFeature Feature, const struct FStreamlineFeatureRequirements& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "GetStreamlineFeatureInformation");

	Params::UStreamlineLibrary_GetStreamlineFeatureInformation_Params Parms{};

	Parms.Feature = Feature;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureRequirementsFlagsRequirements                                                     (None)
// bool                               D3D11Supported                                                   (None)
// bool                               D3D12Supported                                                   (None)
// bool                               VulkanSupported                                                  (None)
// bool                               VSyncOffRequired                                                 (None)
// bool                               HardwareSchedulingRequired                                       (None)

void UStreamlineLibrary::BreakStreamlineFeatureRequirements(enum class EUStreamlineFeatureRequirementsFlags Requirements, bool D3D11Supported, bool D3D12Supported, bool VulkanSupported, bool VSyncOffRequired, bool HardwareSchedulingRequired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "BreakStreamlineFeatureRequirements");

	Params::UStreamlineLibrary_BreakStreamlineFeatureRequirements_Params Parms{};

	Parms.Requirements = Requirements;
	Parms.D3D11Supported = D3D11Supported;
	Parms.D3D12Supported = D3D12Supported;
	Parms.VulkanSupported = VulkanSupported;
	Parms.VSyncOffRequired = VSyncOffRequired;
	Parms.HardwareSchedulingRequired = HardwareSchedulingRequired;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class StreamlineBlueprint.StreamlineLibraryDLSSG
// (None)

class UClass* UStreamlineLibraryDLSSG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineLibraryDLSSG");

	return Clss;
}


// StreamlineLibraryDLSSG StreamlineBlueprint.Default__StreamlineLibraryDLSSG
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineLibraryDLSSG* UStreamlineLibraryDLSSG::GetDefaultObj()
{
	static class UStreamlineLibraryDLSSG* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineLibraryDLSSG*>(UStreamlineLibraryDLSSG::StaticClass()->DefaultObject);

	return Default;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineDLSSGMode   DLSSGMode                                                        (None)

void UStreamlineLibraryDLSSG::SetDLSSGMode(enum class EUStreamlineDLSSGMode DLSSGMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "SetDLSSGMode");

	Params::UStreamlineLibraryDLSSG_SetDLSSGMode_Params Parms{};

	Parms.DLSSGMode = DLSSGMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureSupportReturnValue                                                      (None)

void UStreamlineLibraryDLSSG::QueryDLSSGSupport(enum class EUStreamlineFeatureSupport ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "QueryDLSSGSupport");

	Params::UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UStreamlineLibraryDLSSG::IsDLSSGSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGSupported");

	Params::UStreamlineLibraryDLSSG_IsDLSSGSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   DLSSGMode                                                        (None)
// bool                               ReturnValue                                                      (None)

void UStreamlineLibraryDLSSG::IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode DLSSGMode, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGModeSupported");

	Params::UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params Parms{};

	Parms.DLSSGMode = DLSSGMode;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUStreamlineDLSSGMode>ReturnValue                                                      (None)

void UStreamlineLibraryDLSSG::GetSupportedDLSSGModes(const TArray<enum class EUStreamlineDLSSGMode>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetSupportedDLSSGModes");

	Params::UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   ReturnValue                                                      (None)

void UStreamlineLibraryDLSSG::GetDLSSGMode(enum class EUStreamlineDLSSGMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGMode");

	Params::UStreamlineLibraryDLSSG_GetDLSSGMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              FrameRateInHertz                                                 (None)
// int32                              FramesPresented                                                  (None)

void UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(float FrameRateInHertz, int32 FramesPresented)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGFrameTiming");

	Params::UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Params Parms{};

	Parms.FrameRateInHertz = FrameRateInHertz;
	Parms.FramesPresented = FramesPresented;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   ReturnValue                                                      (None)

void UStreamlineLibraryDLSSG::GetDefaultDLSSGMode(enum class EUStreamlineDLSSGMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDefaultDLSSGMode");

	Params::UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class StreamlineBlueprint.StreamlineLibraryReflex
// (None)

class UClass* UStreamlineLibraryReflex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineLibraryReflex");

	return Clss;
}


// StreamlineLibraryReflex StreamlineBlueprint.Default__StreamlineLibraryReflex
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineLibraryReflex* UStreamlineLibraryReflex::GetDefaultObj()
{
	static class UStreamlineLibraryReflex* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineLibraryReflex*>(UStreamlineLibraryReflex::StaticClass()->DefaultObject);

	return Default;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineReflexMode  Mode                                                             (None)

void UStreamlineLibraryReflex::SetReflexMode(enum class EUStreamlineReflexMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "SetReflexMode");

	Params::UStreamlineLibraryReflex_SetReflexMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureSupportReturnValue                                                      (None)

void UStreamlineLibraryReflex::QueryReflexSupport(enum class EUStreamlineFeatureSupport ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "QueryReflexSupport");

	Params::UStreamlineLibraryReflex_QueryReflexSupport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UStreamlineLibraryReflex::IsReflexSupported(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "IsReflexSupported");

	Params::UStreamlineLibraryReflex_IsReflexSupported_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (None)

void UStreamlineLibraryReflex::GetRenderLatencyInMs(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetRenderLatencyInMs");

	Params::UStreamlineLibraryReflex_GetRenderLatencyInMs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode  ReturnValue                                                      (None)

void UStreamlineLibraryReflex::GetReflexMode(enum class EUStreamlineReflexMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetReflexMode");

	Params::UStreamlineLibraryReflex_GetReflexMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (None)

void UStreamlineLibraryReflex::GetGameToRenderLatencyInMs(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetGameToRenderLatencyInMs");

	Params::UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (None)

void UStreamlineLibraryReflex::GetGameLatencyInMs(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetGameLatencyInMs");

	Params::UStreamlineLibraryReflex_GetGameLatencyInMs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode  ReturnValue                                                      (None)

void UStreamlineLibraryReflex::GetDefaultReflexMode(enum class EUStreamlineReflexMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetDefaultReflexMode");

	Params::UStreamlineLibraryReflex_GetDefaultReflexMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


