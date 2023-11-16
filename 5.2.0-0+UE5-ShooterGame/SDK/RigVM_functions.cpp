#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RigVM.RigVMHost
// (None)

class UClass* URigVMHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMHost");

	return Clss;
}


// RigVMHost RigVM.Default__RigVMHost
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMHost* URigVMHost::GetDefaultObj()
{
	static class URigVMHost* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMHost*>(URigVMHost::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVMHost.SupportsEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InEventName                                                      (None)
// bool                               ReturnValue                                                      (None)

void URigVMHost::SupportsEvent(class FName InEventName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SupportsEvent");

	Params::URigVMHost_SupportsEvent_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.SetVariableFromString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (None)
// class FString                      InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigVMHost::SetVariableFromString(class FName InVariableName, const class FString& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetVariableFromString");

	Params::URigVMHost_SetVariableFromString_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.SetFramesPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFramesPerSecond                                                (None)

void URigVMHost::SetFramesPerSecond(float InFramesPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetFramesPerSecond");

	Params::URigVMHost_SetFramesPerSecond_Params Parms{};

	Parms.InFramesPerSecond = InFramesPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.SetDeltaTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDeltaTime                                                      (None)

void URigVMHost::SetDeltaTime(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetDeltaTime");

	Params::URigVMHost_SetDeltaTime_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.SetAbsoluteTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAbsoluteTime                                                   (None)
// bool                               InSetDeltaTimeZero                                               (None)

void URigVMHost::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetAbsoluteTime");

	Params::URigVMHost_SetAbsoluteTime_Params Parms{};

	Parms.InAbsoluteTime = InAbsoluteTime;
	Parms.InSetDeltaTimeZero = InSetDeltaTimeZero;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.SetAbsoluteAndDeltaTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAbsoluteTime                                                   (None)
// float                              InDeltaTime                                                      (None)

void URigVMHost::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetAbsoluteAndDeltaTime");

	Params::URigVMHost_SetAbsoluteAndDeltaTime_Params Parms{};

	Parms.InAbsoluteTime = InAbsoluteTime;
	Parms.InDeltaTime = InDeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.RequestRunOnceEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (None)
// int32                              InEventIndex                                                     (None)

void URigVMHost::RequestRunOnceEvent(class FName InEventName, int32 InEventIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RequestRunOnceEvent");

	Params::URigVMHost_RequestRunOnceEvent_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InEventIndex = InEventIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.RequestInit
// (Native, Public, BlueprintCallable)
// Parameters:

void URigVMHost::RequestInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RequestInit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.RemoveRunOnceEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (None)
// bool                               ReturnValue                                                      (None)

void URigVMHost::RemoveRunOnceEvent(class FName InEventName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RemoveRunOnceEvent");

	Params::URigVMHost_RemoveRunOnceEvent_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigVM*                      ReturnValue                                                      (None)

void URigVMHost::GetVM(class URigVM* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVM");

	Params::URigVMHost_GetVM_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetVariableType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InVariableName                                                   (None)
// class FName                        ReturnValue                                                      (None)

void URigVMHost::GetVariableType(class FName InVariableName, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVariableType");

	Params::URigVMHost_GetVariableType_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetVariableAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InVariableName                                                   (None)
// class FString                      ReturnValue                                                      (None)

void URigVMHost::GetVariableAsString(class FName InVariableName, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVariableAsString");

	Params::URigVMHost_GetVariableAsString_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetSupportedEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (None)

void URigVMHost::GetSupportedEvents(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetSupportedEvents");

	Params::URigVMHost_GetSupportedEvents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetScriptAccessibleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (None)

void URigVMHost::GetScriptAccessibleVariables(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetScriptAccessibleVariables");

	Params::URigVMHost_GetScriptAccessibleVariables_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetDeltaTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void URigVMHost::GetDeltaTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetDeltaTime");

	Params::URigVMHost_GetDeltaTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetCurrentFramesPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void URigVMHost::GetCurrentFramesPerSecond(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetCurrentFramesPerSecond");

	Params::URigVMHost_GetCurrentFramesPerSecond_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void URigVMHost::GetAbsoluteTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetAbsoluteTime");

	Params::URigVMHost_GetAbsoluteTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.FindRigVMHosts
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ZeroConstructor)
// class UClass*                      OptionalClass                                                    (ZeroConstructor)
// TArray<class URigVMHost*>          ReturnValue                                                      (None)

void URigVMHost::FindRigVMHosts(class UObject* Outer, class UClass* OptionalClass, const TArray<class URigVMHost*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "FindRigVMHosts");

	Params::URigVMHost_FindRigVMHosts_Params Parms{};

	Parms.Outer = Outer;
	Parms.OptionalClass = OptionalClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.ExecuteEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (None)
// bool                               ReturnValue                                                      (None)

void URigVMHost::ExecuteEvent(class FName InEventName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "ExecuteEvent");

	Params::URigVMHost_ExecuteEvent_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.Execute
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (None)
// bool                               ReturnValue                                                      (None)

void URigVMHost::Execute(class FName InEventName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "Execute");

	Params::URigVMHost_Execute_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.CanExecute
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void URigVMHost::CanExecute(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "CanExecute");

	Params::URigVMHost_CanExecute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RigVM.RigVMBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* URigVMBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMBlueprintGeneratedClass");

	return Clss;
}


// RigVMBlueprintGeneratedClass RigVM.Default__RigVMBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMBlueprintGeneratedClass* URigVMBlueprintGeneratedClass::GetDefaultObj()
{
	static class URigVMBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMBlueprintGeneratedClass*>(URigVMBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVMUserWorkflowOptions
// (None)

class UClass* URigVMUserWorkflowOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMUserWorkflowOptions");

	return Clss;
}


// RigVMUserWorkflowOptions RigVM.Default__RigVMUserWorkflowOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMUserWorkflowOptions* URigVMUserWorkflowOptions::GetDefaultObj()
{
	static class URigVMUserWorkflowOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMUserWorkflowOptions*>(URigVMUserWorkflowOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVMUserWorkflowOptions.RequiresDialog
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void URigVMUserWorkflowOptions::RequiresDialog(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "RequiresDialog");

	Params::URigVMUserWorkflowOptions_RequiresDialog_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMUserWorkflowOptions.ReportWarning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (None)

void URigVMUserWorkflowOptions::ReportWarning(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportWarning");

	Params::URigVMUserWorkflowOptions_ReportWarning_Params Parms{};

	Parms.InMessage = InMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMUserWorkflowOptions.ReportInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (None)

void URigVMUserWorkflowOptions::ReportInfo(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportInfo");

	Params::URigVMUserWorkflowOptions_ReportInfo_Params Parms{};

	Parms.InMessage = InMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMUserWorkflowOptions.ReportError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (None)

void URigVMUserWorkflowOptions::ReportError(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportError");

	Params::URigVMUserWorkflowOptions_ReportError_Params Parms{};

	Parms.InMessage = InMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMUserWorkflowOptions.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void URigVMUserWorkflowOptions::IsValid(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "IsValid");

	Params::URigVMUserWorkflowOptions_IsValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RigVM.RigVMGraphFunctionHost
// (None)

class UClass* IRigVMGraphFunctionHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMGraphFunctionHost");

	return Clss;
}


// RigVMGraphFunctionHost RigVM.Default__RigVMGraphFunctionHost
// (Public, ClassDefaultObject, ArchetypeObject)

class IRigVMGraphFunctionHost* IRigVMGraphFunctionHost::GetDefaultObj()
{
	static class IRigVMGraphFunctionHost* Default = nullptr;

	if (!Default)
		Default = static_cast<IRigVMGraphFunctionHost*>(IRigVMGraphFunctionHost::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVM
// (None)

class UClass* URigVM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVM");

	return Clss;
}


// RigVM RigVM.Default__RigVM
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVM* URigVM::GetDefaultObj()
{
	static class URigVM* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVM*>(URigVM::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVM.SetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// struct FVector2D                   InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueVector2D(class FName InParameterName, const struct FVector2D& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector2D");

	Params::URigVM_SetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// struct FVector                     InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueVector(class FName InParameterName, const struct FVector& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector");

	Params::URigVM_SetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// struct FTransform                  InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueTransform(class FName InParameterName, const struct FTransform& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueTransform");

	Params::URigVM_SetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// class FString                      InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueString(class FName InParameterName, const class FString& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueString");

	Params::URigVM_SetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// struct FQuat                       InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueQuat(class FName InParameterName, const struct FQuat& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueQuat");

	Params::URigVM_SetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// class FName                        InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueName(class FName InParameterName, class FName InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueName");

	Params::URigVM_SetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueInt(class FName InParameterName, int32 InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueInt");

	Params::URigVM_SetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// float                              InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueFloat(class FName InParameterName, float InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueFloat");

	Params::URigVM_SetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// double                             InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueDouble(class FName InParameterName, double InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueDouble");

	Params::URigVM_SetParameterValueDouble_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// bool                               InValue                                                          (None)
// int32                              InArrayIndex                                                     (None)

void URigVM::SetParameterValueBool(class FName InParameterName, bool InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueBool");

	Params::URigVM_SetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetStatistics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigVMStatistics            ReturnValue                                                      (None)

void URigVM::GetStatistics(const struct FRigVMStatistics& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetStatistics");

	Params::URigVM_GetStatistics_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetRigVMFunctionName
// (Native, Public, Const)
// Parameters:
// int32                              InFunctionIndex                                                  (None)
// class FString                      ReturnValue                                                      (None)

void URigVM::GetRigVMFunctionName(int32 InFunctionIndex, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetRigVMFunctionName");

	Params::URigVM_GetRigVMFunctionName_Params Parms{};

	Parms.InFunctionIndex = InFunctionIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// struct FVector2D                   ReturnValue                                                      (None)

void URigVM::GetParameterValueVector2D(class FName InParameterName, int32 InArrayIndex, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector2D");

	Params::URigVM_GetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// struct FVector                     ReturnValue                                                      (None)

void URigVM::GetParameterValueVector(class FName InParameterName, int32 InArrayIndex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector");

	Params::URigVM_GetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigVM::GetParameterValueTransform(class FName InParameterName, int32 InArrayIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueTransform");

	Params::URigVM_GetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// class FString                      ReturnValue                                                      (None)

void URigVM::GetParameterValueString(class FName InParameterName, int32 InArrayIndex, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueString");

	Params::URigVM_GetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// struct FQuat                       ReturnValue                                                      (None)

void URigVM::GetParameterValueQuat(class FName InParameterName, int32 InArrayIndex, const struct FQuat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueQuat");

	Params::URigVM_GetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// class FName                        ReturnValue                                                      (None)

void URigVM::GetParameterValueName(class FName InParameterName, int32 InArrayIndex, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueName");

	Params::URigVM_GetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// int32                              ReturnValue                                                      (None)

void URigVM::GetParameterValueInt(class FName InParameterName, int32 InArrayIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueInt");

	Params::URigVM_GetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// float                              ReturnValue                                                      (None)

void URigVM::GetParameterValueFloat(class FName InParameterName, int32 InArrayIndex, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueFloat");

	Params::URigVM_GetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// double                             ReturnValue                                                      (None)

void URigVM::GetParameterValueDouble(class FName InParameterName, int32 InArrayIndex, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueDouble");

	Params::URigVM_GetParameterValueDouble_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (None)
// int32                              InArrayIndex                                                     (None)
// bool                               ReturnValue                                                      (None)

void URigVM::GetParameterValueBool(class FName InParameterName, int32 InArrayIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueBool");

	Params::URigVM_GetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.Execute
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEntryName                                                      (None)
// bool                               ReturnValue                                                      (None)

void URigVM::Execute(class FName InEntryName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "Execute");

	Params::URigVM_Execute_Params Parms{};

	Parms.InEntryName = InEntryName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.AddRigVMFunction
// (Native, Public, HasOutParams)
// Parameters:
// class UScriptStruct*               InRigVMStruct                                                    (None)
// class FName                        InMethodName                                                     (None)
// int32                              ReturnValue                                                      (None)

void URigVM::AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName InMethodName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "AddRigVMFunction");

	Params::URigVM_AddRigVMFunction_Params Parms{};

	Parms.InRigVMStruct = InRigVMStruct;
	Parms.InMethodName = InMethodName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RigVM.RigVMMemoryStorageGeneratorClass
// (Field, Struct, Class)

class UClass* URigVMMemoryStorageGeneratorClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemoryStorageGeneratorClass");

	return Clss;
}


// RigVMMemoryStorageGeneratorClass RigVM.Default__RigVMMemoryStorageGeneratorClass
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMMemoryStorageGeneratorClass* URigVMMemoryStorageGeneratorClass::GetDefaultObj()
{
	static class URigVMMemoryStorageGeneratorClass* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemoryStorageGeneratorClass*>(URigVMMemoryStorageGeneratorClass::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVMMemoryStorage
// (None)

class UClass* URigVMMemoryStorage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemoryStorage");

	return Clss;
}


// RigVMMemoryStorage RigVM.Default__RigVMMemoryStorage
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMMemoryStorage* URigVMMemoryStorage::GetDefaultObj()
{
	static class URigVMMemoryStorage* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemoryStorage*>(URigVMMemoryStorage::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVMNativized
// (None)

class UClass* URigVMNativized::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMNativized");

	return Clss;
}


// RigVMNativized RigVM.Default__RigVMNativized
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMNativized* URigVMNativized::GetDefaultObj()
{
	static class URigVMNativized* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMNativized*>(URigVMNativized::StaticClass()->DefaultObject);

	return Default;
}

}


