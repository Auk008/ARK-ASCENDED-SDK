#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CFCoreUIModel.BP_CFCoreUIModel_C
// (None)

class UClass* UBP_CFCoreUIModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CFCoreUIModel_C");

	return Clss;
}


// BP_CFCoreUIModel_C BP_CFCoreUIModel.Default__BP_CFCoreUIModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CFCoreUIModel_C* UBP_CFCoreUIModel_C::GetDefaultObj()
{
	static class UBP_CFCoreUIModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CFCoreUIModel_C*>(UBP_CFCoreUIModel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FCFCoreMod>          InModsList                                                       (AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// TArray<struct FInstallProgressMod> OutModsList                                                      (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// bool                               ReturnValue                                                      (None)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_OutModsList                             (None)
// bool                               CallFunc_OnEventReceived_ReturnValue                             (None)

void UBP_CFCoreUIModel_C::OnEventReceived(enum class EGameModsEvent Evt, const TArray<struct FCFCoreMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_OutModsList, bool CallFunc_OnEventReceived_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_Params Parms{};

	Parms.Evt = Evt;
	Parms.InModsList = InModsList;
	Parms.OutModsList = OutModsList;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_OnEventReceived_OutModsList = CallFunc_OnEventReceived_OutModsList;
	Parms.CallFunc_OnEventReceived_ReturnValue = CallFunc_OnEventReceived_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// struct FLibraryProgress            Progress                                                         (AutoWeak, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// TArray<struct FInstallProgressMod> OutModsList                                                      (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// bool                               ReturnValue                                                      (None)
// TArray<struct FInstallProgressMod> CallFunc_OnEventReceived_LibraryProgress_OutModsList             (None)
// bool                               CallFunc_OnEventReceived_LibraryProgress_ReturnValue             (None)

void UBP_CFCoreUIModel_C::OnEventReceived_LibraryProgress(enum class EGameModsEvent Evt, const struct FLibraryProgress& Progress, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_OnEventReceived_LibraryProgress_OutModsList, bool CallFunc_OnEventReceived_LibraryProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CFCoreUIModel_C", "OnEventReceived_LibraryProgress");

	Params::UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params Parms{};

	Parms.Evt = Evt;
	Parms.Progress = Progress;
	Parms.OutModsList = OutModsList;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_OnEventReceived_LibraryProgress_OutModsList = CallFunc_OnEventReceived_LibraryProgress_OutModsList;
	Parms.CallFunc_OnEventReceived_LibraryProgress_ReturnValue = CallFunc_OnEventReceived_LibraryProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


