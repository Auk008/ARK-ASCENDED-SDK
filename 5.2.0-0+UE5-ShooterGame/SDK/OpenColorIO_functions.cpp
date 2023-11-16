#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenColorIO.OpenColorIOSettings
// (None)

class UClass* UOpenColorIOSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOSettings");

	return Clss;
}


// OpenColorIOSettings OpenColorIO.Default__OpenColorIOSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOSettings* UOpenColorIOSettings::GetDefaultObj()
{
	static class UOpenColorIOSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOSettings*>(UOpenColorIOSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenColorIO.OpenColorIOBlueprintLibrary
// (None)

class UClass* UOpenColorIOBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOBlueprintLibrary");

	return Clss;
}


// OpenColorIOBlueprintLibrary OpenColorIO.Default__OpenColorIOBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOBlueprintLibrary* UOpenColorIOBlueprintLibrary::GetDefaultObj()
{
	static class UOpenColorIOBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOBlueprintLibrary*>(UOpenColorIOBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FOpenColorIOColorConversionSettingsConversionSettings                                               (ZeroConstructor)
// class UTexture*                    InputTexture                                                     (ZeroConstructor)
// class UTextureRenderTarget2D*      OutputRenderTarget                                               (None)
// bool                               ReturnValue                                                      (None)

void UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIOBlueprintLibrary", "ApplyColorSpaceTransform");

	Params::UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ConversionSettings = ConversionSettings;
	Parms.InputTexture = InputTexture;
	Parms.OutputRenderTarget = OutputRenderTarget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OpenColorIO.OpenColorIOColorTransform
// (None)

class UClass* UOpenColorIOColorTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOColorTransform");

	return Clss;
}


// OpenColorIOColorTransform OpenColorIO.Default__OpenColorIOColorTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOColorTransform* UOpenColorIOColorTransform::GetDefaultObj()
{
	static class UOpenColorIOColorTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOColorTransform*>(UOpenColorIOColorTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenColorIO.OpenColorIOConfiguration
// (None)

class UClass* UOpenColorIOConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOConfiguration");

	return Clss;
}


// OpenColorIOConfiguration OpenColorIO.Default__OpenColorIOConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOConfiguration* UOpenColorIOConfiguration::GetDefaultObj()
{
	static class UOpenColorIOConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOConfiguration*>(UOpenColorIOConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOpenColorIOConfiguration::ReloadExistingColorspaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIOConfiguration", "ReloadExistingColorspaces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
// (None)

class UClass* UOpenColorIODisplayExtensionWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIODisplayExtensionWrapper");

	return Clss;
}


// OpenColorIODisplayExtensionWrapper OpenColorIO.Default__OpenColorIODisplayExtensionWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::GetDefaultObj()
{
	static class UOpenColorIODisplayExtensionWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIODisplayExtensionWrapper*>(UOpenColorIODisplayExtensionWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSceneViewExtensionIsActiveFunctor>IsActiveFunctions                                                (None)

void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(const TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetSceneExtensionIsActiveFunctions");

	Params::UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params Parms{};

	Parms.IsActiveFunctions = IsActiveFunctions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSceneViewExtensionIsActiveFunctorIsActiveFunction                                                 (None)

void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetSceneExtensionIsActiveFunction");

	Params::UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params Parms{};

	Parms.IsActiveFunction = IsActiveFunction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (None)

void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetOpenColorIOConfiguration");

	Params::UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params Parms{};

	Parms.InDisplayConfiguration = InDisplayConfiguration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "RemoveSceneExtension");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOpenColorIODisplayConfigurationReturnValue                                                      (None)

void UOpenColorIODisplayExtensionWrapper::GetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "GetOpenColorIOConfiguration");

	Params::UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (ZeroConstructor)
// struct FSceneViewExtensionIsActiveFunctorIsActiveFunction                                                 (None)
// class UOpenColorIODisplayExtensionWrapper*ReturnValue                                                      (None)

void UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction, class UOpenColorIODisplayExtensionWrapper* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "CreateOpenColorIODisplayExtension");

	Params::UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params Parms{};

	Parms.InDisplayConfiguration = InDisplayConfiguration;
	Parms.IsActiveFunction = IsActiveFunction;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (ZeroConstructor)
// class UOpenColorIODisplayExtensionWrapper*ReturnValue                                                      (None)

void UOpenColorIODisplayExtensionWrapper::CreateInGameOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, class UOpenColorIODisplayExtensionWrapper* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "CreateInGameOpenColorIODisplayExtension");

	Params::UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params Parms{};

	Parms.InDisplayConfiguration = InDisplayConfiguration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


