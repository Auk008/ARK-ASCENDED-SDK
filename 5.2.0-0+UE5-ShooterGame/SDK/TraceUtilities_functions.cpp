#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TraceUtilities.TraceUtilLibrary
// (None)

class UClass* UTraceUtilLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TraceUtilLibrary");

	return Clss;
}


// TraceUtilLibrary TraceUtilities.Default__TraceUtilLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTraceUtilLibrary* UTraceUtilLibrary::GetDefaultObj()
{
	static class UTraceUtilLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTraceUtilLibrary*>(UTraceUtilLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (None)

void UTraceUtilLibrary::TraceMarkRegionStart(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceMarkRegionStart");

	Params::UTraceUtilLibrary_TraceMarkRegionStart_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (None)

void UTraceUtilLibrary::TraceMarkRegionEnd(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceMarkRegionEnd");

	Params::UTraceUtilLibrary_TraceMarkRegionEnd_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.TraceBookmark
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (None)

void UTraceUtilLibrary::TraceBookmark(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceBookmark");

	Params::UTraceUtilLibrary_TraceBookmark_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.ToggleChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (None)
// bool                               Enabled                                                          (None)
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::ToggleChannel(const class FString& ChannelName, bool Enabled, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "ToggleChannel");

	Params::UTraceUtilLibrary_ToggleChannel_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.Enabled = Enabled;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.StopTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::StopTracing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StopTracing");

	Params::UTraceUtilLibrary_StopTracing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (None)
// TArray<class FString>              Channels                                                         (None)
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::StartTraceToFile(const class FString& Filename, const TArray<class FString>& Channels, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StartTraceToFile");

	Params::UTraceUtilLibrary_StartTraceToFile_Params Parms{};

	Parms.Filename = Filename;
	Parms.Channels = Channels;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Target                                                           (None)
// TArray<class FString>              Channels                                                         (None)
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::StartTraceSendTo(const class FString& Target, const TArray<class FString>& Channels, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StartTraceSendTo");

	Params::UTraceUtilLibrary_StartTraceSendTo_Params Parms{};

	Parms.Target = Target;
	Parms.Channels = Channels;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.ResumeTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::ResumeTracing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "ResumeTracing");

	Params::UTraceUtilLibrary_ResumeTracing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.PauseTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::PauseTracing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "PauseTracing");

	Params::UTraceUtilLibrary_PauseTracing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.IsTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::IsTracing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "IsTracing");

	Params::UTraceUtilLibrary_IsTracing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (None)
// bool                               ReturnValue                                                      (None)

void UTraceUtilLibrary::IsChannelEnabled(const class FString& ChannelName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "IsChannelEnabled");

	Params::UTraceUtilLibrary_IsChannelEnabled_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (None)

void UTraceUtilLibrary::GetEnabledChannels(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "GetEnabledChannels");

	Params::UTraceUtilLibrary_GetEnabledChannels_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TraceUtilities.TraceUtilLibrary.GetAllChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (None)

void UTraceUtilLibrary::GetAllChannels(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "GetAllChannels");

	Params::UTraceUtilLibrary_GetAllChannels_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


