#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EnhancedInput.EnhancedInputActionDelegateBinding
// (None)

class UClass* UEnhancedInputActionDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputActionDelegateBinding");

	return Clss;
}


// EnhancedInputActionDelegateBinding EnhancedInput.Default__EnhancedInputActionDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputActionDelegateBinding* UEnhancedInputActionDelegateBinding::GetDefaultObj()
{
	static class UEnhancedInputActionDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputActionDelegateBinding*>(UEnhancedInputActionDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputActionValueBinding
// (None)

class UClass* UEnhancedInputActionValueBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputActionValueBinding");

	return Clss;
}


// EnhancedInputActionValueBinding EnhancedInput.Default__EnhancedInputActionValueBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputActionValueBinding* UEnhancedInputActionValueBinding::GetDefaultObj()
{
	static class UEnhancedInputActionValueBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputActionValueBinding*>(UEnhancedInputActionValueBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputComponent
// (None)

class UClass* UEnhancedInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputComponent");

	return Clss;
}


// EnhancedInputComponent EnhancedInput.Default__EnhancedInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputComponent* UEnhancedInputComponent::GetDefaultObj()
{
	static class UEnhancedInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputComponent*>(UEnhancedInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (None)
// struct FInputActionValue           ReturnValue                                                      (None)

void UEnhancedInputComponent::GetBoundActionValue(class UInputAction* Action, const struct FInputActionValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputComponent", "GetBoundActionValue");

	Params::UEnhancedInputComponent_GetBoundActionValue_Params Parms{};

	Parms.Action = Action;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.EnhancedInputDeveloperSettings
// (None)

class UClass* UEnhancedInputDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputDeveloperSettings");

	return Clss;
}


// EnhancedInputDeveloperSettings EnhancedInput.Default__EnhancedInputDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputDeveloperSettings* UEnhancedInputDeveloperSettings::GetDefaultObj()
{
	static class UEnhancedInputDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputDeveloperSettings*>(UEnhancedInputDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputLibrary
// (None)

class UClass* UEnhancedInputLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputLibrary");

	return Clss;
}


// EnhancedInputLibrary EnhancedInput.Default__EnhancedInputLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputLibrary* UEnhancedInputLibrary::GetDefaultObj()
{
	static class UEnhancedInputLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputLibrary*>(UEnhancedInputLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        Context                                                          (None)
// bool                               bForceImmediately                                                (None)

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "RequestRebuildControlMappingsUsingContext");

	Params::UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params Parms{};

	Parms.Context = Context;
	Parms.bForceImmediately = bForceImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (None)
// double                             Y                                                                (None)
// double                             Z                                                                (None)
// enum class EInputActionValueType   ValueType                                                        (None)
// struct FInputActionValue           ReturnValue                                                      (None)

void UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType, const struct FInputActionValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValueOfType");

	Params::UEnhancedInputLibrary_MakeInputActionValueOfType_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.ValueType = ValueType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (None)
// double                             Y                                                                (None)
// double                             Z                                                                (None)
// struct FInputActionValue           MatchValueType                                                   (None)
// struct FInputActionValue           ReturnValue                                                      (None)

void UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType, const struct FInputActionValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValue");

	Params::UEnhancedInputLibrary_MakeInputActionValue_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.MatchValueType = MatchValueType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (None)
// bool                               ReturnValue                                                      (None)

void UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "IsActionKeyMappingPlayerMappable");

	Params::UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params Parms{};

	Parms.ActionKeyMapping = ActionKeyMapping;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetThirdPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetThirdPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetSecondPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetSecondPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (ZeroConstructor)
// class UPlayerMappableKeySettings*  ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping, class UPlayerMappableKeySettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetPlayerMappableKeySettings");

	Params::UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params Parms{};

	Parms.ActionKeyMapping = ActionKeyMapping;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetMappingName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (None)
// class FName                        ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetMappingName");

	Params::UEnhancedInputLibrary_GetMappingName_Params Parms{};

	Parms.ActionKeyMapping = ActionKeyMapping;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetFourthPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetFourthPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetFirstPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetFirstPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ZeroConstructor)
// class UInputAction*                Action                                                           (None)
// struct FInputActionValue           ReturnValue                                                      (None)

void UEnhancedInputLibrary::GetBoundActionValue(class AActor* Actor, class UInputAction* Action, const struct FInputActionValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetBoundActionValue");

	Params::UEnhancedInputLibrary_GetBoundActionValue_Params Parms{};

	Parms.Actor = Actor;
	Parms.Action = Action;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (None)
// class FString                      ReturnValue                                                      (None)

void UEnhancedInputLibrary::Conv_InputActionValueToString(const struct FInputActionValue& ActionValue, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToString");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToString_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void UEnhancedInputLibrary::Conv_InputActionValueToBool(const struct FInputActionValue& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToBool");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToBool_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (None)
// struct FVector                     ReturnValue                                                      (None)

void UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis3D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis2D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (None)
// double                             ReturnValue                                                      (None)

void UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis1D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InActionValue                                                    (None)
// double                             X                                                                (None)
// double                             Y                                                                (None)
// double                             Z                                                                (None)
// enum class EInputActionValueType   Type                                                             (None)

void UEnhancedInputLibrary::BreakInputActionValue(const struct FInputActionValue& InActionValue, double X, double Y, double Z, enum class EInputActionValueType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "BreakInputActionValue");

	Params::UEnhancedInputLibrary_BreakInputActionValue_Params Parms{};

	Parms.InActionValue = InActionValue;
	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.EnhancedInputPlatformData
// (None)

class UClass* UEnhancedInputPlatformData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputPlatformData");

	return Clss;
}


// EnhancedInputPlatformData EnhancedInput.Default__EnhancedInputPlatformData
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputPlatformData* UEnhancedInputPlatformData::GetDefaultObj()
{
	static class UEnhancedInputPlatformData* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputPlatformData*>(UEnhancedInputPlatformData::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        InContext                                                        (ZeroConstructor)
// class UInputMappingContext*        ReturnValue                                                      (None)

void UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext* InContext, class UInputMappingContext* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputPlatformData", "GetContextRedirect");

	Params::UEnhancedInputPlatformData_GetContextRedirect_Params Parms{};

	Parms.InContext = InContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.EnhancedInputPlatformSettings
// (None)

class UClass* UEnhancedInputPlatformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputPlatformSettings");

	return Clss;
}


// EnhancedInputPlatformSettings EnhancedInput.Default__EnhancedInputPlatformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputPlatformSettings* UEnhancedInputPlatformSettings::GetDefaultObj()
{
	static class UEnhancedInputPlatformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputPlatformSettings*>(UEnhancedInputPlatformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputSubsystemInterface
// (None)

class UClass* IEnhancedInputSubsystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputSubsystemInterface");

	return Clss;
}


// EnhancedInputSubsystemInterface EnhancedInput.Default__EnhancedInputSubsystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEnhancedInputSubsystemInterface* IEnhancedInputSubsystemInterface::GetDefaultObj()
{
	static class IEnhancedInputSubsystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEnhancedInputSubsystemInterface*>(IEnhancedInputSubsystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (None)
// enum class EInputMappingRebuildTypeRebuildType                                                      (None)

void IEnhancedInputSubsystemInterface::RequestRebuildControlMappings(const struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RequestRebuildControlMappings");

	Params::IEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params Parms{};

	Parms.Options = Options;
	Parms.RebuildType = RebuildType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (None)
// struct FModifyContextOptions       Options                                                          (None)

void IEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (None)
// struct FModifyContextOptions       Options                                                          (None)

void IEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveMappingContext");

	Params::IEnhancedInputSubsystemInterface_RemoveMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (None)
// struct FModifyContextOptions       Options                                                          (None)
// int32                              ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeysForMapping(class FName MappingName, const struct FModifyContextOptions& Options, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeysForMapping");

	Params::IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.Options = Options;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (None)

void IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeys");

	Params::IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UInputMappingContext*>PrioritizedActiveContexts                                        (ZeroConstructor)
// class UInputMappingContext*        InputContext                                                     (ZeroConstructor)
// class UInputAction*                Action                                                           (ZeroConstructor)
// struct FKey                        Key                                                              (None)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (None)
// enum class EMappingQueryIssue      BlockingIssues                                                   (None)
// enum class EMappingQueryResult     ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues, enum class EMappingQueryResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params Parms{};

	Parms.PrioritizedActiveContexts = PrioritizedActiveContexts;
	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.OutIssues = OutIssues;
	Parms.BlockingIssues = BlockingIssues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        InputContext                                                     (ZeroConstructor)
// class UInputAction*                Action                                                           (ZeroConstructor)
// struct FKey                        Key                                                              (None)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (None)
// enum class EMappingQueryIssue      BlockingIssues                                                   (None)
// enum class EMappingQueryResult     ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues, enum class EMappingQueryResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInActiveContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params Parms{};

	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.OutIssues = OutIssues;
	Parms.BlockingIssues = BlockingIssues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (None)
// TArray<struct FKey>                ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction* Action, const TArray<struct FKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryKeysMappedToAction");

	Params::IEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params Parms{};

	Parms.Action = Action;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (None)
// struct FPlayerMappableKeySlot      KeySlot                                                          (None)
// struct FModifyContextOptions       Options                                                          (None)
// int32                              ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::K2_RemovePlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_RemovePlayerMappedKeyInSlot");

	Params::IEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.KeySlot = KeySlot;
	Parms.Options = Options;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (None)
// struct FPlayerMappableKeySlot      KeySlot                                                          (None)
// struct FKey                        ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::K2_GetPlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_GetPlayerMappedKeyInSlot");

	Params::IEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.KeySlot = KeySlot;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (None)
// struct FKey                        NewKey                                                           (None)
// struct FPlayerMappableKeySlot      KeySlot                                                          (None)
// struct FModifyContextOptions       Options                                                          (None)
// int32                              ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_AddPlayerMappedKeyInSlot");

	Params::IEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.NewKey = NewKey;
	Parms.KeySlot = KeySlot;
	Parms.Options = Options;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ZeroConstructor)
// struct FVector                     Value                                                            (None)
// TArray<class UInputModifier*>      Modifiers                                                        (ZeroConstructor)
// TArray<class UInputTrigger*>       Triggers                                                         (None)

void IEnhancedInputSubsystemInterface::InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params Parms{};

	Parms.Action = Action;
	Parms.Value = Value;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ZeroConstructor)
// struct FInputActionValue           RawValue                                                         (None)
// TArray<class UInputModifier*>      Modifiers                                                        (ZeroConstructor)
// TArray<class UInputTrigger*>       Triggers                                                         (None)

void IEnhancedInputSubsystemInterface::InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputForAction_Params Parms{};

	Parms.Action = Action;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (None)
// int32                              OutFoundPriority                                                 (None)
// bool                               ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext, int32 OutFoundPriority, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "HasMappingContext");

	Params::IEnhancedInputSubsystemInterface_HasMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.OutFoundPriority = OutFoundPriority;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (None)
// TArray<struct FKey>                ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::GetAllPlayerMappedKeys(class FName MappingName, const TArray<struct FKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappedKeys");

	Params::IEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (None)

void IEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappableActionKeyMappings");

	Params::IEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void IEnhancedInputSubsystemInterface::ClearAllMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "ClearAllMappings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (None)
// struct FModifyContextOptions       Options                                                          (None)

void IEnhancedInputSubsystemInterface::AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (None)
// int32                              Priority                                                         (None)
// struct FModifyContextOptions       Options                                                          (None)

void IEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddMappingContext");

	Params::IEnhancedInputSubsystemInterface_AddMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Priority = Priority;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// (None)

class UClass* UEnhancedInputLocalPlayerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputLocalPlayerSubsystem");

	return Clss;
}


// EnhancedInputLocalPlayerSubsystem EnhancedInput.Default__EnhancedInputLocalPlayerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputLocalPlayerSubsystem* UEnhancedInputLocalPlayerSubsystem::GetDefaultObj()
{
	static class UEnhancedInputLocalPlayerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputLocalPlayerSubsystem*>(UEnhancedInputLocalPlayerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputWorldSubsystem
// (None)

class UClass* UEnhancedInputWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputWorldSubsystem");

	return Clss;
}


// EnhancedInputWorldSubsystem EnhancedInput.Default__EnhancedInputWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputWorldSubsystem* UEnhancedInputWorldSubsystem::GetDefaultObj()
{
	static class UEnhancedInputWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputWorldSubsystem*>(UEnhancedInputWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (None)
// bool                               ReturnValue                                                      (None)

void UEnhancedInputWorldSubsystem::RemoveActorInputComponent(class AActor* Actor, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputWorldSubsystem", "RemoveActorInputComponent");

	Params::UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params Parms{};

	Parms.Actor = Actor;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (None)

void UEnhancedInputWorldSubsystem::AddActorInputComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputWorldSubsystem", "AddActorInputComponent");

	Params::UEnhancedInputWorldSubsystem_AddActorInputComponent_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.EnhancedPlayerInput
// (None)

class UClass* UEnhancedPlayerInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedPlayerInput");

	return Clss;
}


// EnhancedPlayerInput EnhancedInput.Default__EnhancedPlayerInput
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEnhancedPlayerInput* UEnhancedPlayerInput::GetDefaultObj()
{
	static class UEnhancedPlayerInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedPlayerInput*>(UEnhancedPlayerInput::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputAction
// (None)

class UClass* UInputAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputAction");

	return Clss;
}


// InputAction EnhancedInput.Default__InputAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputAction* UInputAction::GetDefaultObj()
{
	static class UInputAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputAction*>(UInputAction::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputDebugKeyDelegateBinding
// (None)

class UClass* UInputDebugKeyDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputDebugKeyDelegateBinding");

	return Clss;
}


// InputDebugKeyDelegateBinding EnhancedInput.Default__InputDebugKeyDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputDebugKeyDelegateBinding* UInputDebugKeyDelegateBinding::GetDefaultObj()
{
	static class UInputDebugKeyDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputDebugKeyDelegateBinding*>(UInputDebugKeyDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputMappingContext
// (None)

class UClass* UInputMappingContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputMappingContext");

	return Clss;
}


// InputMappingContext EnhancedInput.Default__InputMappingContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputMappingContext* UInputMappingContext::GetDefaultObj()
{
	static class UInputMappingContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputMappingContext*>(UInputMappingContext::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputMappingContext.UnmapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (None)
// struct FKey                        Key                                                              (None)

void UInputMappingContext::UnmapKey(class UInputAction* Action, const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapKey");

	Params::UInputMappingContext_UnmapKey_Params Parms{};

	Parms.Action = Action;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (None)

void UInputMappingContext::UnmapAllKeysFromAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAllKeysFromAction");

	Params::UInputMappingContext_UnmapAllKeysFromAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInputMappingContext::UnmapAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (None)

void UInputMappingContext::UnmapAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAction");

	Params::UInputMappingContext_UnmapAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.MapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ZeroConstructor)
// struct FKey                        ToKey                                                            (None)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (None)

void UInputMappingContext::MapKey(class UInputAction* Action, const struct FKey& ToKey, const struct FEnhancedActionKeyMapping& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "MapKey");

	Params::UInputMappingContext_MapKey_Params Parms{};

	Parms.Action = Action;
	Parms.ToKey = ToKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.InputModifier
// (None)

class UClass* UInputModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifier");

	return Clss;
}


// InputModifier EnhancedInput.Default__InputModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifier* UInputModifier::GetDefaultObj()
{
	static class UInputModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifier*>(UInputModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputModifier.ModifyRaw
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (None)
// struct FInputActionValue           CurrentValue                                                     (None)
// float                              DeltaTime                                                        (None)
// struct FInputActionValue           ReturnValue                                                      (None)

void UInputModifier::ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime, const struct FInputActionValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "ModifyRaw");

	Params::UInputModifier_ModifyRaw_Params Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.CurrentValue = CurrentValue;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputModifier.GetVisualizationColor
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FInputActionValue           SampleValue                                                      (None)
// struct FInputActionValue           FinalValue                                                       (None)
// struct FLinearColor                ReturnValue                                                      (None)

void UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue, const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "GetVisualizationColor");

	Params::UInputModifier_GetVisualizationColor_Params Parms{};

	Parms.SampleValue = SampleValue;
	Parms.FinalValue = FinalValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.InputModifierDeadZone
// (None)

class UClass* UInputModifierDeadZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierDeadZone");

	return Clss;
}


// InputModifierDeadZone EnhancedInput.Default__InputModifierDeadZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierDeadZone* UInputModifierDeadZone::GetDefaultObj()
{
	static class UInputModifierDeadZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierDeadZone*>(UInputModifierDeadZone::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierScalar
// (None)

class UClass* UInputModifierScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierScalar");

	return Clss;
}


// InputModifierScalar EnhancedInput.Default__InputModifierScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierScalar* UInputModifierScalar::GetDefaultObj()
{
	static class UInputModifierScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierScalar*>(UInputModifierScalar::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierScaleByDeltaTime
// (None)

class UClass* UInputModifierScaleByDeltaTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierScaleByDeltaTime");

	return Clss;
}


// InputModifierScaleByDeltaTime EnhancedInput.Default__InputModifierScaleByDeltaTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierScaleByDeltaTime* UInputModifierScaleByDeltaTime::GetDefaultObj()
{
	static class UInputModifierScaleByDeltaTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierScaleByDeltaTime*>(UInputModifierScaleByDeltaTime::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierNegate
// (None)

class UClass* UInputModifierNegate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierNegate");

	return Clss;
}


// InputModifierNegate EnhancedInput.Default__InputModifierNegate
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierNegate* UInputModifierNegate::GetDefaultObj()
{
	static class UInputModifierNegate* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierNegate*>(UInputModifierNegate::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierSmooth
// (None)

class UClass* UInputModifierSmooth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierSmooth");

	return Clss;
}


// InputModifierSmooth EnhancedInput.Default__InputModifierSmooth
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierSmooth* UInputModifierSmooth::GetDefaultObj()
{
	static class UInputModifierSmooth* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierSmooth*>(UInputModifierSmooth::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierResponseCurveExponential
// (None)

class UClass* UInputModifierResponseCurveExponential::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierResponseCurveExponential");

	return Clss;
}


// InputModifierResponseCurveExponential EnhancedInput.Default__InputModifierResponseCurveExponential
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierResponseCurveExponential* UInputModifierResponseCurveExponential::GetDefaultObj()
{
	static class UInputModifierResponseCurveExponential* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierResponseCurveExponential*>(UInputModifierResponseCurveExponential::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierResponseCurveUser
// (None)

class UClass* UInputModifierResponseCurveUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierResponseCurveUser");

	return Clss;
}


// InputModifierResponseCurveUser EnhancedInput.Default__InputModifierResponseCurveUser
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierResponseCurveUser* UInputModifierResponseCurveUser::GetDefaultObj()
{
	static class UInputModifierResponseCurveUser* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierResponseCurveUser*>(UInputModifierResponseCurveUser::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierFOVScaling
// (None)

class UClass* UInputModifierFOVScaling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierFOVScaling");

	return Clss;
}


// InputModifierFOVScaling EnhancedInput.Default__InputModifierFOVScaling
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierFOVScaling* UInputModifierFOVScaling::GetDefaultObj()
{
	static class UInputModifierFOVScaling* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierFOVScaling*>(UInputModifierFOVScaling::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierToWorldSpace
// (None)

class UClass* UInputModifierToWorldSpace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierToWorldSpace");

	return Clss;
}


// InputModifierToWorldSpace EnhancedInput.Default__InputModifierToWorldSpace
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierToWorldSpace* UInputModifierToWorldSpace::GetDefaultObj()
{
	static class UInputModifierToWorldSpace* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierToWorldSpace*>(UInputModifierToWorldSpace::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierSwizzleAxis
// (None)

class UClass* UInputModifierSwizzleAxis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierSwizzleAxis");

	return Clss;
}


// InputModifierSwizzleAxis EnhancedInput.Default__InputModifierSwizzleAxis
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierSwizzleAxis* UInputModifierSwizzleAxis::GetDefaultObj()
{
	static class UInputModifierSwizzleAxis* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierSwizzleAxis*>(UInputModifierSwizzleAxis::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTrigger
// (None)

class UClass* UInputTrigger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTrigger");

	return Clss;
}


// InputTrigger EnhancedInput.Default__InputTrigger
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTrigger* UInputTrigger::GetDefaultObj()
{
	static class UInputTrigger* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTrigger*>(UInputTrigger::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputTrigger.UpdateState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (None)
// struct FInputActionValue           ModifiedValue                                                    (None)
// float                              DeltaTime                                                        (None)
// enum class ETriggerState           ReturnValue                                                      (None)

void UInputTrigger::UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime, enum class ETriggerState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "UpdateState");

	Params::UInputTrigger_UpdateState_Params Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.ModifiedValue = ModifiedValue;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputTrigger.IsActuated
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInputActionValue           ForValue                                                         (None)
// bool                               ReturnValue                                                      (None)

void UInputTrigger::IsActuated(const struct FInputActionValue& ForValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "IsActuated");

	Params::UInputTrigger_IsActuated_Params Parms{};

	Parms.ForValue = ForValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputTrigger.GetTriggerType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETriggerType            ReturnValue                                                      (None)

void UInputTrigger::GetTriggerType(enum class ETriggerType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "GetTriggerType");

	Params::UInputTrigger_GetTriggerType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.InputTriggerTimedBase
// (None)

class UClass* UInputTriggerTimedBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerTimedBase");

	return Clss;
}


// InputTriggerTimedBase EnhancedInput.Default__InputTriggerTimedBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerTimedBase* UInputTriggerTimedBase::GetDefaultObj()
{
	static class UInputTriggerTimedBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerTimedBase*>(UInputTriggerTimedBase::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerDown
// (None)

class UClass* UInputTriggerDown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerDown");

	return Clss;
}


// InputTriggerDown EnhancedInput.Default__InputTriggerDown
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerDown* UInputTriggerDown::GetDefaultObj()
{
	static class UInputTriggerDown* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerDown*>(UInputTriggerDown::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerPressed
// (None)

class UClass* UInputTriggerPressed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerPressed");

	return Clss;
}


// InputTriggerPressed EnhancedInput.Default__InputTriggerPressed
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerPressed* UInputTriggerPressed::GetDefaultObj()
{
	static class UInputTriggerPressed* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerPressed*>(UInputTriggerPressed::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerReleased
// (None)

class UClass* UInputTriggerReleased::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerReleased");

	return Clss;
}


// InputTriggerReleased EnhancedInput.Default__InputTriggerReleased
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerReleased* UInputTriggerReleased::GetDefaultObj()
{
	static class UInputTriggerReleased* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerReleased*>(UInputTriggerReleased::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerHold
// (None)

class UClass* UInputTriggerHold::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerHold");

	return Clss;
}


// InputTriggerHold EnhancedInput.Default__InputTriggerHold
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerHold* UInputTriggerHold::GetDefaultObj()
{
	static class UInputTriggerHold* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerHold*>(UInputTriggerHold::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerHoldAndRelease
// (None)

class UClass* UInputTriggerHoldAndRelease::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerHoldAndRelease");

	return Clss;
}


// InputTriggerHoldAndRelease EnhancedInput.Default__InputTriggerHoldAndRelease
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerHoldAndRelease* UInputTriggerHoldAndRelease::GetDefaultObj()
{
	static class UInputTriggerHoldAndRelease* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerHoldAndRelease*>(UInputTriggerHoldAndRelease::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerTap
// (None)

class UClass* UInputTriggerTap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerTap");

	return Clss;
}


// InputTriggerTap EnhancedInput.Default__InputTriggerTap
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerTap* UInputTriggerTap::GetDefaultObj()
{
	static class UInputTriggerTap* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerTap*>(UInputTriggerTap::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerPulse
// (None)

class UClass* UInputTriggerPulse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerPulse");

	return Clss;
}


// InputTriggerPulse EnhancedInput.Default__InputTriggerPulse
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerPulse* UInputTriggerPulse::GetDefaultObj()
{
	static class UInputTriggerPulse* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerPulse*>(UInputTriggerPulse::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerChordAction
// (None)

class UClass* UInputTriggerChordAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerChordAction");

	return Clss;
}


// InputTriggerChordAction EnhancedInput.Default__InputTriggerChordAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerChordAction* UInputTriggerChordAction::GetDefaultObj()
{
	static class UInputTriggerChordAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerChordAction*>(UInputTriggerChordAction::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerChordBlocker
// (None)

class UClass* UInputTriggerChordBlocker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerChordBlocker");

	return Clss;
}


// InputTriggerChordBlocker EnhancedInput.Default__InputTriggerChordBlocker
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerChordBlocker* UInputTriggerChordBlocker::GetDefaultObj()
{
	static class UInputTriggerChordBlocker* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerChordBlocker*>(UInputTriggerChordBlocker::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerCombo
// (None)

class UClass* UInputTriggerCombo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerCombo");

	return Clss;
}


// InputTriggerCombo EnhancedInput.Default__InputTriggerCombo
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerCombo* UInputTriggerCombo::GetDefaultObj()
{
	static class UInputTriggerCombo* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerCombo*>(UInputTriggerCombo::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.PlayerMappableInputConfig
// (None)

class UClass* UPlayerMappableInputConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerMappableInputConfig");

	return Clss;
}


// PlayerMappableInputConfig EnhancedInput.Default__PlayerMappableInputConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerMappableInputConfig* UPlayerMappableInputConfig::GetDefaultObj()
{
	static class UPlayerMappableInputConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerMappableInputConfig*>(UPlayerMappableInputConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayerMappableInputConfig::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UPlayerMappableInputConfig::IsDeprecated(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "IsDeprecated");

	Params::UPlayerMappableInputConfig_IsDeprecated_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetPlayerMappableKeys(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetPlayerMappableKeys");

	Params::UPlayerMappableInputConfig_GetPlayerMappableKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetMetadata(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMetadata");

	Params::UPlayerMappableInputConfig_GetMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class UInputMappingContext*, int32>ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetMappingContexts(TMap<class UInputMappingContext*, int32> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingContexts");

	Params::UPlayerMappableInputConfig_GetMappingContexts_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (None)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetMappingByName(class FName MappingName, const struct FEnhancedActionKeyMapping& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingByName");

	Params::UPlayerMappableInputConfig_GetMappingByName_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InAction                                                         (ZeroConstructor)
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetKeysBoundToAction(class UInputAction* InAction, const TArray<struct FEnhancedActionKeyMapping>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetKeysBoundToAction");

	Params::UPlayerMappableInputConfig_GetKeysBoundToAction_Params Parms{};

	Parms.InAction = InAction;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetDisplayName(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetDisplayName");

	Params::UPlayerMappableInputConfig_GetDisplayName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UPlayerMappableInputConfig::GetConfigName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetConfigName");

	Params::UPlayerMappableInputConfig_GetConfigName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EnhancedInput.PlayerMappableKeySettings
// (None)

class UClass* UPlayerMappableKeySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerMappableKeySettings");

	return Clss;
}


// PlayerMappableKeySettings EnhancedInput.Default__PlayerMappableKeySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerMappableKeySettings* UPlayerMappableKeySettings::GetDefaultObj()
{
	static class UPlayerMappableKeySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerMappableKeySettings*>(UPlayerMappableKeySettings::StaticClass()->DefaultObject);

	return Default;
}

}


