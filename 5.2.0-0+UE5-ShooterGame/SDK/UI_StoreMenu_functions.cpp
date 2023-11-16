#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StoreMenu.UI_StoreMenu_C
// (None)

class UClass* UUI_StoreMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StoreMenu_C");

	return Clss;
}


// UI_StoreMenu_C UI_StoreMenu.Default__UI_StoreMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StoreMenu_C* UUI_StoreMenu_C::GetDefaultObj()
{
	static class UUI_StoreMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StoreMenu_C*>(UUI_StoreMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StoreMenu.UI_StoreMenu_C.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (None)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)

void UUI_StoreMenu_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnEventBroadcasted");

	Params::UUI_StoreMenu_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.NotificationHandled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod                                                              (ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// enum class EGameModsEvent          Selection                                                        (None)
// struct FInstallProgressMod         ModToHandle                                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void UUI_StoreMenu_C::NotificationHandled(const struct FInstallProgressMod& Mod, enum class EGameModsEvent Selection, const struct FInstallProgressMod& ModToHandle, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "NotificationHandled");

	Params::UUI_StoreMenu_C_NotificationHandled_Params Parms{};

	Parms.Mod = Mod;
	Parms.Selection = Selection;
	Parms.ModToHandle = ModToHandle;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.PlayNotificationInstalled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod_Info                                                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::PlayNotificationInstalled(const struct FInstallProgressMod& Mod_Info, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "PlayNotificationInstalled");

	Params::UUI_StoreMenu_C_PlayNotificationInstalled_Params Parms{};

	Parms.Mod_Info = Mod_Info;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUI_StoreMenu_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BPEscapeClosed");

	Params::UUI_StoreMenu_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::UI_StoreMenu_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UI_StoreMenu_AutoGenFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UUI_StoreMenu_C::UI_StoreMenu_AutoGenFunc4(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UI_StoreMenu_AutoGenFunc4");

	Params::UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc4_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UUI_StoreMenu_C::UI_StoreMenu_AutoGenFunc3(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UI_StoreMenu_AutoGenFunc3");

	Params::UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc3_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.RequestInstalledModsFromAPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::RequestInstalledModsFromAPI(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "RequestInstalledModsFromAPI");

	Params::UUI_StoreMenu_C_RequestInstalledModsFromAPI_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Back from Server Mods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::Back_from_Server_Mods(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Back from Server Mods");

	Params::UUI_StoreMenu_C_Back_from_Server_Mods_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.SwitchControllerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (None)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UUI_ParentPage_C*            K2Node_DynamicCast_AsUI_Parent_Page                              (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UUI_ParentPage_C*            K2Node_DynamicCast_AsUI_Parent_Page_1                            (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void UUI_StoreMenu_C::SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page, bool K2Node_DynamicCast_bSuccess, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SwitchControllerAction");

	Params::UUI_StoreMenu_C_SwitchControllerAction_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Parent_Page = K2Node_DynamicCast_AsUI_Parent_Page;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Parent_Page_1 = K2Node_DynamicCast_AsUI_Parent_Page_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.SetInitStoreFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ZeroConstructor)
// class UUI_ParentPage_C*            K2Node_DynamicCast_AsUI_Parent_Page                              (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_StoreMenu_C::SetInitStoreFocus(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SetInitStoreFocus");

	Params::UUI_StoreMenu_C_SetInitStoreFocus_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Parent_Page = K2Node_DynamicCast_AsUI_Parent_Page;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.PlayStartFadeInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::PlayStartFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "PlayStartFadeInAnimation");

	Params::UUI_StoreMenu_C_PlayStartFadeInAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.EnabledTabSwitching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (None)

void UUI_StoreMenu_C::EnabledTabSwitching(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "EnabledTabSwitching");

	Params::UUI_StoreMenu_C_EnabledTabSwitching_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateMyModsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UUI_StoreMenu_C::UpdateMyModsVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateMyModsVisibility");

	Params::UUI_StoreMenu_C_UpdateMyModsVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.SetCurrentActivePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (None)
// enum class ENUM_SideTabs           Temp_byte_Variable                                               (None)
// enum class ENUM_SideTabs           Temp_byte_Variable_1                                             (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_Button_Sidebar_C*        K2Node_Select_Default                                            (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UUI_ParentPage_C*            K2Node_Select_Default_1                                          (None)

void UUI_StoreMenu_C::SetCurrentActivePage(enum class ENUM_SideTabs CurrentActiveTab, enum class ENUM_SideTabs Temp_byte_Variable, enum class ENUM_SideTabs Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UUI_Button_Sidebar_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UUI_ParentPage_C* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SetCurrentActivePage");

	Params::UUI_StoreMenu_C_SetCurrentActivePage_Params Parms{};

	Parms.CurrentActiveTab = CurrentActiveTab;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.GetCurrentActivePage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ParentPage_C*            CurrentPage                                                      (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (None)
// enum class ENUM_SideTabs           Temp_byte_Variable                                               (None)
// class UUI_ParentPage_C*            K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::GetCurrentActivePage(class UUI_ParentPage_C* CurrentPage, enum class ENUM_SideTabs CurrentActiveTab, enum class ENUM_SideTabs Temp_byte_Variable, class UUI_ParentPage_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "GetCurrentActivePage");

	Params::UUI_StoreMenu_C_GetCurrentActivePage_Params Parms{};

	Parms.CurrentPage = CurrentPage;
	Parms.CurrentActiveTab = CurrentActiveTab;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateSearchFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Variable_1                                              (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FText                        CallFunc_Format_ReturnValue                                      (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (None)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               Temp_bool_Variable                                               (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (None)
// int32                              K2Node_Select_Default                                            (None)

void UUI_StoreMenu_C::UpdateSearchFilter(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateSearchFilter");

	Params::UUI_StoreMenu_C_UpdateSearchFilter_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.CreateModPageMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              UI_GameSlot                                                      (Edit, ZeroConstructor)
// struct FInstallProgressMod         ModInfo                                                          (Edit, ZeroConstructor)
// class UUI_ModPage_C*               ModPageRef                                                       (Edit, ZeroConstructor)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (None)

void UUI_StoreMenu_C::CreateModPageMenu(class UUI_GameSlot_C* UI_GameSlot, const struct FInstallProgressMod& ModInfo, class UUI_ModPage_C* ModPageRef, class UUI_ModPage_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "CreateModPageMenu");

	Params::UUI_StoreMenu_C_CreateModPageMenu_Params Parms{};

	Parms.UI_GameSlot = UI_GameSlot;
	Parms.ModInfo = ModInfo;
	Parms.ModPageRef = ModPageRef;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.DestroyModPageMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::DestroyModPageMenu(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DestroyModPageMenu");

	Params::UUI_StoreMenu_C_DestroyModPageMenu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.CreateRightClickMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              UI_GameSlot                                                      (Edit, ZeroConstructor)
// bool                               ShouldViewBeVisible                                              (None)
// bool                               SepareteReportWithLine                                           (None)
// double                             WidgetWidth                                                      (None)
// class UUI_RightClickMenu_C*        MenuRef                                                          (Edit, ZeroConstructor)
// class UUI_RightClickMenu_C*        CallFunc_Create_ReturnValue                                      (None)

void UUI_StoreMenu_C::CreateRightClickMenu(class UUI_GameSlot_C* UI_GameSlot, bool ShouldViewBeVisible, bool SepareteReportWithLine, double WidgetWidth, class UUI_RightClickMenu_C* MenuRef, class UUI_RightClickMenu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "CreateRightClickMenu");

	Params::UUI_StoreMenu_C_CreateRightClickMenu_Params Parms{};

	Parms.UI_GameSlot = UI_GameSlot;
	Parms.ShouldViewBeVisible = ShouldViewBeVisible;
	Parms.SepareteReportWithLine = SepareteReportWithLine;
	Parms.WidgetWidth = WidgetWidth;
	Parms.MenuRef = MenuRef;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.DestroyRightClickMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_StoreMenu_C::DestroyRightClickMenu(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DestroyRightClickMenu");

	Params::UUI_StoreMenu_C_DestroyRightClickMenu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateAllStoreMenuWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Temp_object_Variable                                             (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FButtonStyle                CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle            (Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FButtonStyle                CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1          (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UMaterialInterface*          Temp_object_Variable_1                                           (Edit, ZeroConstructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (Edit, ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)

void UUI_StoreMenu_C::UpdateAllStoreMenuWidgets(class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateAllStoreMenuWidgets");

	Params::UUI_StoreMenu_C_UpdateAllStoreMenuWidgets_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle = CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle;
	Parms.CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1 = CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.InitTheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (None)
// struct FCFCoreThemeRowData         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (None)

void UUI_StoreMenu_C::InitTheme(bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "InitTheme");

	Params::UUI_StoreMenu_C_InitTheme_Params Parms{};

	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.ShouldCustomizeTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ThemeCustomizer_C*       CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (None)

void UUI_StoreMenu_C::ShouldCustomizeTheme(class UUI_ThemeCustomizer_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "ShouldCustomizeTheme");

	Params::UUI_StoreMenu_C_ShouldCustomizeTheme_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.InitAllTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// class UUI_Button_Sidebar_C*        CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UUI_ParentPage_C*            CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// TArray<class UUI_ParentPage_C*>    K2Node_MakeArray_Array                                           (Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, PersistentInstance, NativeAccessSpecifierPrivate)
// TArray<class UUI_Button_Sidebar_C*>K2Node_MakeArray_Array_1                                         (None)

void UUI_StoreMenu_C::InitAllTabs(int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<class UUI_ParentPage_C*>& K2Node_MakeArray_Array, const TArray<class UUI_Button_Sidebar_C*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "InitAllTabs");

	Params::UUI_StoreMenu_C_InitAllTabs_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.RemoveExtraWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::RemoveExtraWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "RemoveExtraWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSearchedTextCommitted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             WidgetArray                                                      (ZeroConstructor, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// TScriptInterface<class IBPI_PageWidgets_C>K2Node_DynamicCast_AsBPI_Page_Widgets                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (None)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (None)

void UUI_StoreMenu_C::OnSearchedTextCommitted(const TArray<class UWidget*>& WidgetArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_PageWidgets_C> K2Node_DynamicCast_AsBPI_Page_Widgets, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSearchedTextCommitted");

	Params::UUI_StoreMenu_C_OnSearchedTextCommitted_Params Parms{};

	Parms.WidgetArray = WidgetArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Page_Widgets = K2Node_DynamicCast_AsBPI_Page_Widgets;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.CloseBNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ZeroConstructor)
// TScriptInterface<class IBPI_PageWidgets_C>K2Node_DynamicCast_AsBPI_Page_Widgets                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UWidget*                     CallFunc_GetClose_B_Widget                                       (None)

void UUI_StoreMenu_C::CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_PageWidgets_C> K2Node_DynamicCast_AsBPI_Page_Widgets, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetClose_B_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "CloseBNavigation");

	Params::UUI_StoreMenu_C_CloseBNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Page_Widgets = K2Node_DynamicCast_AsBPI_Page_Widgets;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClose_B_Widget = CallFunc_GetClose_B_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OpenCurrentActivePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void UUI_StoreMenu_C::OpenCurrentActivePage(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OpenCurrentActivePage");

	Params::UUI_StoreMenu_C_OpenCurrentActivePage_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateCloseButtonSearchVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)

void UUI_StoreMenu_C::UpdateCloseButtonSearchVisiblity(class FText SearchInput, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateCloseButtonSearchVisiblity");

	Params::UUI_StoreMenu_C_UpdateCloseButtonSearchVisiblity_Params Parms{};

	Parms.SearchInput = SearchInput;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.SelectPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Button_Sidebar_C*        Target                                                           (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UUI_Button_Sidebar_C*        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UUI_StoreMenu_C::SelectPage(class UUI_Button_Sidebar_C* Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SelectPage");

	Params::UUI_StoreMenu_C_SelectPage_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_StoreMenu_C::OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2");

	Params::UUI_StoreMenu_C_OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_StoreMenu_C::OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2");

	Params::UUI_StoreMenu_C_OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On CFCore Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_On_CFCore_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On CFCore Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On CFCore Init Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_StoreMenu_C::Event_On_CFCore_Init_Error(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On CFCore Init Error");

	Params::UUI_StoreMenu_C_Event_On_CFCore_Init_Error_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Init CF Core
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Init_CF_Core()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Init CF Core");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Open Browse Mods Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Open_Browse_Mods_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Open Browse Mods Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Open Installed Mods Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Open_Installed_Mods_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Open Installed Mods Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Close Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Close_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Close Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Open My Mods Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Open_My_Mods_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Open My Mods Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UUI_StoreMenu_C::BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UUI_StoreMenu_C_BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Result
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_authenticated                                                 (None)

void UUI_StoreMenu_C::Event_Result(bool Is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Result");

	Params::UUI_StoreMenu_C_Event_Result_Params Parms{};

	Parms.Is_authenticated = Is_authenticated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info Failed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_StoreMenu_C::Event_On_Get_User_Info_Failed(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Get User Info Failed");

	Params::UUI_StoreMenu_C_Event_On_Get_User_Info_Failed_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMe                         Me                                                               (None)

void UUI_StoreMenu_C::Event_On_Get_User_Info(const struct FMe& Me)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Get User Info");

	Params::UUI_StoreMenu_C_Event_On_Get_User_Info_Params Parms{};

	Parms.Me = Me;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Get Authentication And Me
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Get_Authentication_And_Me()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Get Authentication And Me");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Click On Sign In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Click_On_Sign_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Click On Sign In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Sync Installed Mods Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_StoreMenu_C::Event_On_Sync_Installed_Mods_Error(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Sync Installed Mods Error");

	Params::UUI_StoreMenu_C_Event_On_Sync_Installed_Mods_Error_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)

void UUI_StoreMenu_C::BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UUI_StoreMenu_C_BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Sync Installed Mods Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_On_Sync_Installed_Mods_Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Sync Installed Mods Success");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.DELETE_FocusableOnKeyDown_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (None)

void UUI_StoreMenu_C::DELETE_FocusableOnKeyDown_1(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DELETE_FocusableOnKeyDown_1");

	Params::UUI_StoreMenu_C_DELETE_FocusableOnKeyDown_1_Params Parms{};

	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.RequestThemeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::RequestThemeUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "RequestThemeUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.SetNewTextInSearch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (None)

void UUI_StoreMenu_C::SetNewTextInSearch(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SetNewTextInSearch");

	Params::UUI_StoreMenu_C_SetNewTextInSearch_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)

void UUI_StoreMenu_C::ButtonCall(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "ButtonCall");

	Params::UUI_StoreMenu_C_ButtonCall_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.PlayNotEnoughAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::PlayNotEnoughAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "PlayNotEnoughAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.GamepadChangeTab
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Forward                                                          (None)

void UUI_StoreMenu_C::GamepadChangeTab(bool Forward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "GamepadChangeTab");

	Params::UUI_StoreMenu_C_GamepadChangeTab_Params Parms{};

	Parms.Forward = Forward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnUserAuthenticated
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnUserAuthenticated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnUserAuthenticated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.ExecuteUbergraph_UI_StoreMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ZeroConstructor)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (ContainsInstancedReference, Protected, PersistentInstance, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// class UUI_Prompt_SignIn_C*         CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, NativeAccessSpecifierPrivate)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class FText                        CallFunc_Format_ReturnValue                                      (SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               K2Node_CustomEvent_is_authenticated                              (None)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FMe                         K2Node_CustomEvent_me                                            (AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FCFCoreSettings             CallFunc_MakeSettingsFromProjectConfig_ReturnValue               (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FKeyEvent                   K2Node_Event_KeyEvent                                            (AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ZeroConstructor)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_1                      (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_1                 (None)
// class FText                        K2Node_CustomEvent_InText                                        (TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (Edit, ZeroConstructor)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_2                      (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_2                 (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class UUI_ParentPage_C*            CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// struct FKey                        K2Node_CustomEvent_Key                                           (None)
// enum class EViewState              K2Node_CustomEvent_State                                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ZeroConstructor)
// bool                               K2Node_Event_forward                                             (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (Edit, ZeroConstructor)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (None)
// uint8                              CallFunc_Percent_ByteByte_ReturnValue                            (None)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_3                        (Edit, ZeroConstructor)
// uint8                              CallFunc_Subtract_ByteByte_ReturnValue                           (None)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (None)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (None)

void UUI_StoreMenu_C::ExecuteUbergraph_UI_StoreMenu(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FCFCoreError& K2Node_CustomEvent_error_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Prompt_SignIn_C* CallFunc_Create_ReturnValue, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, int32 Temp_int_Array_Index_Variable, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UPrimalUserWidget* CallFunc_Array_Get_Item, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_is_authenticated, const struct FCFCoreError& K2Node_CustomEvent_error_1, const struct FMe& K2Node_CustomEvent_me, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, const struct FCFCoreError& K2Node_CustomEvent_error, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const struct FKeyEvent& K2Node_Event_KeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage_1, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab_1, class FText K2Node_CustomEvent_InText, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage_2, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab_2, bool K2Node_SwitchEnum_CmpSuccess, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_forward, bool CallFunc_IsVisible_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Percent_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, uint8 CallFunc_Subtract_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "ExecuteUbergraph_UI_StoreMenu");

	Params::UUI_StoreMenu_C_ExecuteUbergraph_UI_StoreMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_error_2 = K2Node_CustomEvent_error_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_is_authenticated = K2Node_CustomEvent_is_authenticated;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.K2Node_CustomEvent_me = K2Node_CustomEvent_me;
	Parms.CallFunc_MakeSettingsFromProjectConfig_ReturnValue = CallFunc_MakeSettingsFromProjectConfig_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_Event_KeyEvent = K2Node_Event_KeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage_1 = CallFunc_GetCurrentActivePage_CurrentPage_1;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab_1 = CallFunc_GetCurrentActivePage_CurrentActiveTab_1;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage_2 = CallFunc_GetCurrentActivePage_CurrentPage_2;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab_2 = CallFunc_GetCurrentActivePage_CurrentActiveTab_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_forward = K2Node_Event_forward;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_2 = CallFunc_GetEngineSubsystem_ReturnValue_2;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Percent_ByteByte_ReturnValue = CallFunc_Percent_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_3 = CallFunc_GetEngineSubsystem_ReturnValue_3;
	Parms.CallFunc_Subtract_ByteByte_ReturnValue = CallFunc_Subtract_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_4 = CallFunc_GetEngineSubsystem_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateAllThemeSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::UpdateAllThemeSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateAllThemeSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnInputDeviceChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (None)

void UUI_StoreMenu_C::OnInputDeviceChanged__DelegateSignature(enum class ENUM_InputDevices Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnInputDeviceChanged__DelegateSignature");

	Params::UUI_StoreMenu_C_OnInputDeviceChanged__DelegateSignature_Params Parms{};

	Parms.Device = Device;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnCFCoreInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnCFCoreInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnCFCoreInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnModPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnModPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnModPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


