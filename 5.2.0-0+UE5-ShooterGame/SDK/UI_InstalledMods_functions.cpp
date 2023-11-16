#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InstalledMods.UI_InstalledMods_C
// (None)

class UClass* UUI_InstalledMods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InstalledMods_C");

	return Clss;
}


// UI_InstalledMods_C UI_InstalledMods.Default__UI_InstalledMods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InstalledMods_C* UUI_InstalledMods_C::GetDefaultObj()
{
	static class UUI_InstalledMods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InstalledMods_C*>(UUI_InstalledMods_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_InstalledMods.UI_InstalledMods_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (ZeroConstructor, AutoWeak, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// TArray<struct FInstallProgressMod> TempMods                                                         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_InstalledMods_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const TArray<struct FInstallProgressMod>& TempMods, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "OnEventBroadcasted");

	Params::UUI_InstalledMods_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.TempMods = TempMods;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstalledMods.UI_InstalledMods_C.Change Uninstall All Button Visiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::Change_Uninstall_All_Button_Visiblity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "Change Uninstall All Button Visiblity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.Event On Mod Installed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod                                                              (None)

void UUI_InstalledMods_C::Event_On_Mod_Installed(const struct FInstallProgressMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "Event On Mod Installed");

	Params::UUI_InstalledMods_C_Event_On_Mod_Installed_Params Parms{};

	Parms.Mod = Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstalledMods.UI_InstalledMods_C.Event On Mod Uninstalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod                                                              (None)

void UUI_InstalledMods_C::Event_On_Mod_Uninstalled(const struct FInstallProgressMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "Event On Mod Uninstalled");

	Params::UUI_InstalledMods_C_Event_On_Mod_Uninstalled_Params Parms{};

	Parms.Mod = Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstalledMods.UI_InstalledMods_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.ContinueUninstallAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::ContinueUninstallAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "ContinueUninstallAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.RemovePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::RemovePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "RemovePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.ShowUninstallAllPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::ShowUninstallAllPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "ShowUninstallAllPopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.GetMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::GetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "GetMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.PullModsFromAPI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_InstalledMods_C::PullModsFromAPI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "PullModsFromAPI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_InstalledMods.UI_InstalledMods_C.ExecuteUbergraph_UI_InstalledMods
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Variable_1                                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// class UUI_Prompt_Uninstall_C*      CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// TArray<struct FInstallProgressMod> CallFunc_ReturnModsOfCurrentPage_TrueModInfo                     (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, NativeAccessSpecifierPrivate)
// struct FInstallProgressMod         K2Node_CustomEvent_mod_1                                         (Edit, ZeroConstructor, SimpleDisplay, NativeAccessSpecifierPrivate)
// struct FInstallProgressMod         K2Node_CustomEvent_mod                                           (Edit, ZeroConstructor, AutoWeak, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (None)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)

void UUI_InstalledMods_C::ExecuteUbergraph_UI_InstalledMods(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, int32 Temp_int_Array_Index_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, const struct FInstallProgressMod& K2Node_CustomEvent_mod_1, const struct FInstallProgressMod& K2Node_CustomEvent_mod, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_SubscribeViewToEvents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstalledMods_C", "ExecuteUbergraph_UI_InstalledMods");

	Params::UUI_InstalledMods_C_ExecuteUbergraph_UI_InstalledMods_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ReturnModsOfCurrentPage_TrueModInfo = CallFunc_ReturnModsOfCurrentPage_TrueModInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_mod_1 = K2Node_CustomEvent_mod_1;
	Parms.K2Node_CustomEvent_mod = K2Node_CustomEvent_mod;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


