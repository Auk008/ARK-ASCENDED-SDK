#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TimeManagement.TimeSynchronizationSource
// (None)

class UClass* UTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynchronizationSource");

	return Clss;
}


// TimeSynchronizationSource TimeManagement.Default__TimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynchronizationSource* UTimeSynchronizationSource::GetDefaultObj()
{
	static class UTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynchronizationSource*>(UTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.FixedFrameRateCustomTimeStep
// (None)

class UClass* UFixedFrameRateCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedFrameRateCustomTimeStep");

	return Clss;
}


// FixedFrameRateCustomTimeStep TimeManagement.Default__FixedFrameRateCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedFrameRateCustomTimeStep* UFixedFrameRateCustomTimeStep::GetDefaultObj()
{
	static class UFixedFrameRateCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedFrameRateCustomTimeStep*>(UFixedFrameRateCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.GenlockedCustomTimeStep
// (None)

class UClass* UGenlockedCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenlockedCustomTimeStep");

	return Clss;
}


// GenlockedCustomTimeStep TimeManagement.Default__GenlockedCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenlockedCustomTimeStep* UGenlockedCustomTimeStep::GetDefaultObj()
{
	static class UGenlockedCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenlockedCustomTimeStep*>(UGenlockedCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// (None)

class UClass* UGenlockedFixedRateCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenlockedFixedRateCustomTimeStep");

	return Clss;
}


// GenlockedFixedRateCustomTimeStep TimeManagement.Default__GenlockedFixedRateCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenlockedFixedRateCustomTimeStep* UGenlockedFixedRateCustomTimeStep::GetDefaultObj()
{
	static class UGenlockedFixedRateCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenlockedFixedRateCustomTimeStep*>(UGenlockedFixedRateCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.GenlockedTimecodeProvider
// (None)

class UClass* UGenlockedTimecodeProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenlockedTimecodeProvider");

	return Clss;
}


// GenlockedTimecodeProvider TimeManagement.Default__GenlockedTimecodeProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UGenlockedTimecodeProvider* UGenlockedTimecodeProvider::GetDefaultObj()
{
	static class UGenlockedTimecodeProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenlockedTimecodeProvider*>(UGenlockedTimecodeProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.TimeManagementBlueprintLibrary
// (None)

class UClass* UTimeManagementBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeManagementBlueprintLibrary");

	return Clss;
}


// TimeManagementBlueprintLibrary TimeManagement.Default__TimeManagementBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeManagementBlueprintLibrary* UTimeManagementBlueprintLibrary::GetDefaultObj()
{
	static class UTimeManagementBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeManagementBlueprintLibrary*>(UTimeManagementBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime                  SourceTime                                                       (None)
// struct FFrameRate                  SourceRate                                                       (None)
// struct FFrameRate                  DestinationRate                                                  (None)
// struct FFrameTime                  ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "TransformTime");

	Params::UTimeManagementBlueprintLibrary_TransformTime_Params Parms{};

	Parms.SourceTime = SourceTime;
	Parms.SourceRate = SourceRate;
	Parms.DestinationRate = DestinationRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (None)
// int32                              B                                                                (None)
// struct FFrameNumber                ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Subtract_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (None)
// struct FFrameNumber                B                                                                (None)
// struct FFrameNumber                ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Subtract_FrameNumberFrameNumber");

	Params::UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime                  SourceTime                                                       (None)
// struct FFrameRate                  SourceRate                                                       (None)
// struct FFrameRate                  SnapToRate                                                       (None)
// struct FFrameTime                  ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "SnapFrameTimeToRate");

	Params::UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params Parms{};

	Parms.SourceTime = SourceTime;
	Parms.SourceRate = SourceRate;
	Parms.SnapToRate = SnapToRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              TimeInSeconds                                                    (None)
// struct FFrameRate                  FrameRate                                                        (None)
// struct FFrameTime                  ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate, const struct FFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Multiply_SecondsFrameRate");

	Params::UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params Parms{};

	Parms.TimeInSeconds = TimeInSeconds;
	Parms.FrameRate = FrameRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (None)
// int32                              B                                                                (None)
// struct FFrameNumber                ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Multiply_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (None)
// struct FFrameRate                  OtherFramerate                                                   (None)
// bool                               ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "IsValid_MultipleOf");

	Params::UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params Parms{};

	Parms.InFrameRate = InFrameRate;
	Parms.OtherFramerate = OtherFramerate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (None)
// bool                               ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::IsValid_Framerate(const struct FFrameRate& InFrameRate, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "IsValid_Framerate");

	Params::UTimeManagementBlueprintLibrary_IsValid_Framerate_Params Parms{};

	Parms.InFrameRate = InFrameRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::GetTimecodeFrameRate(const struct FFrameRate& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "GetTimecodeFrameRate");

	Params::UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::GetTimecode(const struct FTimecode& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "GetTimecode");

	Params::UTimeManagementBlueprintLibrary_GetTimecode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (None)
// int32                              B                                                                (None)
// struct FFrameNumber                ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Divide_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   InTimecode                                                       (None)
// bool                               bForceSignDisplay                                                (None)
// class FString                      ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_TimecodeToString");

	Params::UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params Parms{};

	Parms.InTimecode = InTimecode;
	Parms.bForceSignDisplay = bForceSignDisplay;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime         InFrameTime                                                      (None)
// float                              ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_QualifiedFrameTimeToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params Parms{};

	Parms.InFrameTime = InFrameTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (None)
// float                              ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameRateToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params Parms{};

	Parms.InFrameRate = InFrameRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                InFrameNumber                                                    (None)
// int32                              ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameNumberToInteger");

	Params::UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params Parms{};

	Parms.InFrameNumber = InFrameNumber;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (None)
// int32                              B                                                                (None)
// struct FFrameNumber                ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Add_FrameNumberInteger");

	Params::UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber                A                                                                (None)
// struct FFrameNumber                B                                                                (None)
// struct FFrameNumber                ReturnValue                                                      (None)

void UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B, const struct FFrameNumber& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Add_FrameNumberFrameNumber");

	Params::UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


