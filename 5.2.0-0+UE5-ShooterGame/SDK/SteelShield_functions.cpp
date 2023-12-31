#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SteelShield.SteelShieldTokenProvider
// (None)

class UClass* USteelShieldTokenProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteelShieldTokenProvider");

	return Clss;
}


// SteelShieldTokenProvider SteelShield.Default__SteelShieldTokenProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class USteelShieldTokenProvider* USteelShieldTokenProvider::GetDefaultObj()
{
	static class USteelShieldTokenProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<USteelShieldTokenProvider*>(USteelShieldTokenProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class SteelShield.ClientTokenProvider
// (None)

class UClass* UClientTokenProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientTokenProvider");

	return Clss;
}


// ClientTokenProvider SteelShield.Default__ClientTokenProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UClientTokenProvider* UClientTokenProvider::GetDefaultObj()
{
	static class UClientTokenProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UClientTokenProvider*>(UClientTokenProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class SteelShield.DefaultTokenProvider
// (None)

class UClass* UDefaultTokenProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultTokenProvider");

	return Clss;
}


// DefaultTokenProvider SteelShield.Default__DefaultTokenProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultTokenProvider* UDefaultTokenProvider::GetDefaultObj()
{
	static class UDefaultTokenProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultTokenProvider*>(UDefaultTokenProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class SteelShield.EOSTokenProvider
// (None)

class UClass* UEOSTokenProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSTokenProvider");

	return Clss;
}


// EOSTokenProvider SteelShield.Default__EOSTokenProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSTokenProvider* UEOSTokenProvider::GetDefaultObj()
{
	static class UEOSTokenProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSTokenProvider*>(UEOSTokenProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class SteelShield.SteelShieldJWT
// (None)

class UClass* USteelShieldJWT::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteelShieldJWT");

	return Clss;
}


// SteelShieldJWT SteelShield.Default__SteelShieldJWT
// (Public, ClassDefaultObject, ArchetypeObject)

class USteelShieldJWT* USteelShieldJWT::GetDefaultObj()
{
	static class USteelShieldJWT* Default = nullptr;

	if (!Default)
		Default = static_cast<USteelShieldJWT*>(USteelShieldJWT::StaticClass()->DefaultObject);

	return Default;
}


// Class SteelShield.SteelShieldRuntimeSettings
// (None)

class UClass* USteelShieldRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteelShieldRuntimeSettings");

	return Clss;
}


// SteelShieldRuntimeSettings SteelShield.Default__SteelShieldRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USteelShieldRuntimeSettings* USteelShieldRuntimeSettings::GetDefaultObj()
{
	static class USteelShieldRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USteelShieldRuntimeSettings*>(USteelShieldRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class SteelShield.SteelShieldSubsystem
// (None)

class UClass* USteelShieldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteelShieldSubsystem");

	return Clss;
}


// SteelShieldSubsystem SteelShield.Default__SteelShieldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USteelShieldSubsystem* USteelShieldSubsystem::GetDefaultObj()
{
	static class USteelShieldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USteelShieldSubsystem*>(USteelShieldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function SteelShield.SteelShieldSubsystem.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USteelShieldSubsystem::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SteelShield.SteelShieldSubsystem.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TokenNum                                                         (None)
// bool                               ReturnValue                                                      (None)

void USteelShieldSubsystem::Start(int32 TokenNum, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "Start");

	Params::USteelShieldSubsystem_Start_Params Parms{};

	Parms.TokenNum = TokenNum;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteelShield.SteelShieldSubsystem.SetTokenProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      TokenProviderClass                                               (ZeroConstructor)
// class USteelShieldTokenProvider*   ReturnValue                                                      (None)

void USteelShieldSubsystem::SetTokenProvider(class UClass* TokenProviderClass, class USteelShieldTokenProvider* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "SetTokenProvider");

	Params::USteelShieldSubsystem_SetTokenProvider_Params Parms{};

	Parms.TokenProviderClass = TokenProviderClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction SteelShield.SteelShieldSubsystem.OnInitializedBP__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccessful                                                      (None)

void USteelShieldSubsystem::OnInitializedBP__DelegateSignature(bool bSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "OnInitializedBP__DelegateSignature");

	Params::USteelShieldSubsystem_OnInitializedBP__DelegateSignature_Params Parms{};

	Parms.bSuccessful = bSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SteelShield.SteelShieldSubsystem.IsRolloverInProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void USteelShieldSubsystem::IsRolloverInProgress(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "IsRolloverInProgress");

	Params::USteelShieldSubsystem_IsRolloverInProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteelShield.SteelShieldSubsystem.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void USteelShieldSubsystem::IsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "IsEnabled");

	Params::USteelShieldSubsystem_IsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteelShield.SteelShieldSubsystem.GetTokenProvider
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USteelShieldTokenProvider*   ReturnValue                                                      (None)

void USteelShieldSubsystem::GetTokenProvider(class USteelShieldTokenProvider* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteelShieldSubsystem", "GetTokenProvider");

	Params::USteelShieldSubsystem_GetTokenProvider_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteelShield.SteelShieldTokenRequest
// (None)

class UClass* USteelShieldTokenRequest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteelShieldTokenRequest");

	return Clss;
}


// SteelShieldTokenRequest SteelShield.Default__SteelShieldTokenRequest
// (Public, ClassDefaultObject, ArchetypeObject)

class USteelShieldTokenRequest* USteelShieldTokenRequest::GetDefaultObj()
{
	static class USteelShieldTokenRequest* Default = nullptr;

	if (!Default)
		Default = static_cast<USteelShieldTokenRequest*>(USteelShieldTokenRequest::StaticClass()->DefaultObject);

	return Default;
}

}


