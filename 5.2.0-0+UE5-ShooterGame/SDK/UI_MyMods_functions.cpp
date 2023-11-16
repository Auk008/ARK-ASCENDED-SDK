#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MyMods.UI_MyMods_C
// (None)

class UClass* UUI_MyMods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MyMods_C");

	return Clss;
}


// UI_MyMods_C UI_MyMods.Default__UI_MyMods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MyMods_C* UUI_MyMods_C::GetDefaultObj()
{
	static class UUI_MyMods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MyMods_C*>(UUI_MyMods_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_MyMods.UI_MyMods_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// TArray<struct FInstallProgressMod> CallFunc_ReturnModsOfCurrentPage_TrueModInfo                     (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (None)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)

void UUI_MyMods_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "OnEventBroadcasted");

	Params::UUI_MyMods_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_ReturnModsOfCurrentPage_TrueModInfo = CallFunc_ReturnModsOfCurrentPage_TrueModInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MyMods.UI_MyMods_C.UpdatePagination
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// int32                              CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt             (None)
// class FText                        CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT             (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_FMod_Remainder                                          (None)
// int32                              CallFunc_FMod_ReturnValue                                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              K2Node_Select_Default                                            (None)

void UUI_MyMods_C::UpdatePagination(bool Temp_bool_Variable, int32 CallFunc_CalculateModsPerPage_Mods, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "UpdatePagination");

	Params::UUI_MyMods_C_UpdatePagination_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CalculateModsPerPage_Mods = CallFunc_CalculateModsPerPage_Mods;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt = CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt;
	Parms.CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT = CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MyMods.UI_MyMods_C.GetMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MyMods_C::GetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "GetMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MyMods.UI_MyMods_C.Event On Mod Installed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod                                                              (None)

void UUI_MyMods_C::Event_On_Mod_Installed(const struct FInstallProgressMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "Event On Mod Installed");

	Params::UUI_MyMods_C_Event_On_Mod_Installed_Params Parms{};

	Parms.Mod = Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MyMods.UI_MyMods_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MyMods_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MyMods.UI_MyMods_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MyMods_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MyMods.UI_MyMods_C.ExecuteUbergraph_UI_MyMods
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Variable_1                                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (Edit, ZeroConstructor)
// struct FInstallProgressMod         K2Node_CustomEvent_mod                                           (ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UUI_MyMods_C::ExecuteUbergraph_UI_MyMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FInstallProgressMod& K2Node_CustomEvent_mod, bool CallFunc_SubscribeViewToEvents_ReturnValue, const TArray<class UWidget*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MyMods_C", "ExecuteUbergraph_UI_MyMods");

	Params::UUI_MyMods_C_ExecuteUbergraph_UI_MyMods_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_mod = K2Node_CustomEvent_mod;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


