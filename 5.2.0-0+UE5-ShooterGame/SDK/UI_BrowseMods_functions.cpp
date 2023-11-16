#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BrowseMods.UI_BrowseMods_C
// (None)

class UClass* UUI_BrowseMods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BrowseMods_C");

	return Clss;
}


// UI_BrowseMods_C UI_BrowseMods.Default__UI_BrowseMods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BrowseMods_C* UUI_BrowseMods_C::GetDefaultObj()
{
	static class UUI_BrowseMods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BrowseMods_C*>(UUI_BrowseMods_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BrowseMods.UI_BrowseMods_C.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (None)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_BrowseMods_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "OnEventBroadcasted");

	Params::UUI_BrowseMods_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BrowseMods.UI_BrowseMods_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUI_BrowseMods_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "BPEscapeClosed");

	Params::UUI_BrowseMods_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BrowseMods.UI_BrowseMods_C.UpdatePageCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreApiResponsePaginationCFCoreApiResponsePagination                                      (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_FMod_Remainder                                          (None)
// int32                              CallFunc_FMod_ReturnValue                                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              K2Node_Select_Default                                            (None)

void UUI_BrowseMods_C::UpdatePageCount(const struct FCFCoreApiResponsePagination& CFCoreApiResponsePagination, bool Temp_bool_Variable, int32 CallFunc_CalculateModsPerPage_Mods, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "UpdatePageCount");

	Params::UUI_BrowseMods_C_UpdatePageCount_Params Parms{};

	Parms.CFCoreApiResponsePagination = CFCoreApiResponsePagination;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CalculateModsPerPage_Mods = CallFunc_CalculateModsPerPage_Mods;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BrowseMods.UI_BrowseMods_C.GetCurrentSearchInput
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        CurrentSearchInput                                               (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_BrowseMods_C::GetCurrentSearchInput(class FText CurrentSearchInput, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "GetCurrentSearchInput");

	Params::UUI_BrowseMods_C_GetCurrentSearchInput_Params Parms{};

	Parms.CurrentSearchInput = CurrentSearchInput;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BrowseMods.UI_BrowseMods_C.ResetPageNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::ResetPageNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "ResetPageNum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.GetMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::GetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "GetMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.ExecuteUbergraph_UI_BrowseMods
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (None)
// struct FCFCoreSearchModsFilter     CallFunc_FilterModInfo_ReturnValue                               (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (None)
// struct FCFCoreApiRequestPagination CallFunc_MakeApiRequestPagination_ReturnValue                    (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (None)

void UUI_BrowseMods_C::ExecuteUbergraph_UI_BrowseMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_CalculateModsPerPage_Mods, const struct FCFCoreSearchModsFilter& CallFunc_FilterModInfo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SubscribeViewToEvents_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, const struct FCFCoreApiRequestPagination& CallFunc_MakeApiRequestPagination_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "ExecuteUbergraph_UI_BrowseMods");

	Params::UUI_BrowseMods_C_ExecuteUbergraph_UI_BrowseMods_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_CalculateModsPerPage_Mods = CallFunc_CalculateModsPerPage_Mods;
	Parms.CallFunc_FilterModInfo_ReturnValue = CallFunc_FilterModInfo_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_MakeApiRequestPagination_ReturnValue = CallFunc_MakeApiRequestPagination_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


