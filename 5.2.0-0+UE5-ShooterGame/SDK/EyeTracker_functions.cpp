#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EyeTracker.EyeTrackerFunctionLibrary
// (None)

class UClass* UEyeTrackerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EyeTrackerFunctionLibrary");

	return Clss;
}


// EyeTrackerFunctionLibrary EyeTracker.Default__EyeTrackerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEyeTrackerFunctionLibrary* UEyeTrackerFunctionLibrary::GetDefaultObj()
{
	static class UEyeTrackerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEyeTrackerFunctionLibrary*>(UEyeTrackerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (None)

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "SetEyeTrackedPlayer");

	Params::UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "IsStereoGazeDataAvailable");

	Params::UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UEyeTrackerFunctionLibrary::IsEyeTrackerConnected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "IsEyeTrackerConnected");

	Params::UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerStereoGazeData   OutGazeData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UEyeTrackerFunctionLibrary::GetStereoGazeData(const struct FEyeTrackerStereoGazeData& OutGazeData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");

	Params::UEyeTrackerFunctionLibrary_GetStereoGazeData_Params Parms{};

	Parms.OutGazeData = OutGazeData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerGazeData         OutGazeData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UEyeTrackerFunctionLibrary::GetGazeData(const struct FEyeTrackerGazeData& OutGazeData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");

	Params::UEyeTrackerFunctionLibrary_GetGazeData_Params Parms{};

	Parms.OutGazeData = OutGazeData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


