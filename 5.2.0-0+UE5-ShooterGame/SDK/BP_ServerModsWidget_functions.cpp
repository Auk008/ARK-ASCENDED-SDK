#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerModsWidget.BP_ServerModsWidget_C
// (None)

class UClass* UBP_ServerModsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerModsWidget_C");

	return Clss;
}


// BP_ServerModsWidget_C BP_ServerModsWidget.Default__BP_ServerModsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerModsWidget_C* UBP_ServerModsWidget_C::GetDefaultObj()
{
	static class UBP_ServerModsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerModsWidget_C*>(UBP_ServerModsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (Edit, ZeroConstructor)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (None)

void UBP_ServerModsWidget_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnEventBroadcasted");

	Params::UBP_ServerModsWidget_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CheckIfAllInstalled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)

void UBP_ServerModsWidget_C::CheckIfAllInstalled(bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CheckIfAllInstalled");

	Params::UBP_ServerModsWidget_C_CheckIfAllInstalled_Params Parms{};

	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CheckIfEnoughSpaceOnDisk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::CheckIfEnoughSpaceOnDisk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CheckIfEnoughSpaceOnDisk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnRespone_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> Mods                                                             (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// struct FFile                       CallFunc_Array_Get_Item_1                                        (None)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (None)

void UBP_ServerModsWidget_C::OnRespone_0(const TArray<struct FInstallProgressMod>& Mods, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnRespone_0");

	Params::UBP_ServerModsWidget_C_OnRespone_0_Params Parms{};

	Parms.Mods = Mods;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)

void UBP_ServerModsWidget_C::UpdateInfo(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateInfo");

	Params::UBP_ServerModsWidget_C_UpdateInfo_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Get Server Mods Delegate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 JoinEvent                                                        (Edit, ZeroConstructor)
// FDelegateProperty_                 BackEvent                                                        (Edit, ZeroConstructor)
// FDelegateProperty_                 ReportEvent                                                      (Edit, ZeroConstructor)
// FDelegateProperty_                 FavoriteEvent                                                    (Edit, ZeroConstructor)
// FDelegateProperty_                 ErrorEvent                                                       (None)

void UBP_ServerModsWidget_C::Get_Server_Mods_Delegate(FDelegateProperty_ JoinEvent, FDelegateProperty_ BackEvent, FDelegateProperty_ ReportEvent, FDelegateProperty_ FavoriteEvent, FDelegateProperty_ ErrorEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Get Server Mods Delegate");

	Params::UBP_ServerModsWidget_C_Get_Server_Mods_Delegate_Params Parms{};

	Parms.JoinEvent = JoinEvent;
	Parms.BackEvent = BackEvent;
	Parms.ReportEvent = ReportEvent;
	Parms.FavoriteEvent = FavoriteEvent;
	Parms.ErrorEvent = ErrorEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.EndDownloadCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)

void UBP_ServerModsWidget_C::EndDownloadCheck(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "EndDownloadCheck");

	Params::UBP_ServerModsWidget_C_EndDownloadCheck_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UBP_ServerModsWidget_C::UpdateTexts(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateTexts");

	Params::UBP_ServerModsWidget_C_UpdateTexts_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateInstalledMods
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       Installed_mods                                                   (ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<int32>                      IDs                                                              (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// struct FInstalledMod               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// struct FFile                       CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UBP_ServerModsWidget_C::UpdateInstalledMods(const TArray<struct FInstalledMod>& Installed_mods, const TArray<int32>& IDs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FInstalledMod& CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FCFCoreMod& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FFile& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "UpdateInstalledMods");

	Params::UBP_ServerModsWidget_C_UpdateInstalledMods_Params Parms{};

	Parms.Installed_mods = Installed_mods;
	Parms.IDs = IDs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UBP_ServerModsWidget_C::OnError(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "OnError");

	Params::UBP_ServerModsWidget_C_OnError_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModsList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// int64                              ServerID                                                         (None)
// TArray<int64>                      ModsIds                                                          (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UBP_ServerModsWidget_C::CreateModsList(class FText ServerName, int64 ServerID, const TArray<int64>& ModsIds, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CreateModsList");

	Params::UBP_ServerModsWidget_C_CreateModsList_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.ServerID = ServerID;
	Parms.ModsIds = ModsIds;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_BACK_BUTTON_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_BACK_BUTTON_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_BACK_BUTTON_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)

void UBP_ServerModsWidget_C::ControllerAction(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "ControllerAction");

	Params::UBP_ServerModsWidget_C_ControllerAction_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.LoadingBackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::LoadingBackEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "LoadingBackEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CompletedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::CompletedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CompletedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ErrorEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::ErrorEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "ErrorEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.StartDowloadingMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::StartDowloadingMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "StartDowloadingMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.PullModsDirectoryInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::PullModsDirectoryInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "PullModsDirectoryInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (None)

void UBP_ServerModsWidget_C::CustomEvent(const struct FModsDirInfo& ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CustomEvent");

	Params::UBP_ServerModsWidget_C_CustomEvent_Params Parms{};

	Parms.ModsDirInfo = ModsDirInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UBP_ServerModsWidget_C::CustomEvent_1(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "CustomEvent_1");

	Params::UBP_ServerModsWidget_C_CustomEvent_1_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.NotifyAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::NotifyAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "NotifyAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_Button_ModInstalled_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_Button_ModInstalled_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_Button_ModInstalled_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BndEvt__BP_ServerModsWidget_JOIN_BUTTON_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BndEvt__BP_ServerModsWidget_JOIN_BUTTON_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BndEvt__BP_ServerModsWidget_JOIN_BUTTON_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UBP_ServerModsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Tick");

	Params::UBP_ServerModsWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ExecuteUbergraph_BP_ServerModsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// bool                               Temp_bool_IsClosed_Variable                                      (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FKey                        K2Node_CustomEvent_Key                                           (AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash)
// enum class EViewState              K2Node_CustomEvent_State                                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// class UBP_ServerModsLoading_C*     CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_1                        (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ZeroConstructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)

void UBP_ServerModsWidget_C::ExecuteUbergraph_BP_ServerModsWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, class UBP_ServerModsLoading_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool Temp_bool_Variable, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, const struct FCFCoreError& K2Node_CustomEvent_error, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "ExecuteUbergraph_BP_ServerModsWidget");

	Params::UBP_ServerModsWidget_C_ExecuteUbergraph_BP_ServerModsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_ModsDirInfo = K2Node_CustomEvent_ModsDirInfo;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Error__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::Error__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "Error__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.StartDownloads__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UBP_ServerModsWidget_C::StartDownloads__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "StartDownloads__DelegateSignature");

	Params::UBP_ServerModsWidget_C_StartDownloads__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsWidget_C::BackEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "BackEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.JoinEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UBP_ServerModsWidget_C::JoinEvent__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "JoinEvent__DelegateSignature");

	Params::UBP_ServerModsWidget_C_JoinEvent__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FavoriteEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UBP_ServerModsWidget_C::FavoriteEvent__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "FavoriteEvent__DelegateSignature");

	Params::UBP_ServerModsWidget_C_FavoriteEvent__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsWidget.BP_ServerModsWidget_C.RepotrEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UBP_ServerModsWidget_C::RepotrEvent__DelegateSignature(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsWidget_C", "RepotrEvent__DelegateSignature");

	Params::UBP_ServerModsWidget_C_RepotrEvent__DelegateSignature_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}

}


