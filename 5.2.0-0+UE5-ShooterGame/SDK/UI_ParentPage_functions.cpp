#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ParentPage.UI_ParentPage_C
// (None)

class UClass* UUI_ParentPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ParentPage_C");

	return Clss;
}


// UI_ParentPage_C UI_ParentPage.Default__UI_ParentPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ParentPage_C* UUI_ParentPage_C::GetDefaultObj()
{
	static class UUI_ParentPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ParentPage_C*>(UUI_ParentPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ParentPage.UI_ParentPage_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void UUI_ParentPage_C::GetClose_B(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetClose_B");

	Params::UUI_ParentPage_C_GetClose_B_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsAnyModInstalling_ReturnValue                          (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (None)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UUI_ParentPage_C::GetVisibility_0(enum class ESlateVisibility ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnyModInstalling_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetVisibility_0");

	Params::UUI_ParentPage_C_GetVisibility_0_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAnyModInstalling_ReturnValue = CallFunc_IsAnyModInstalling_ReturnValue;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.ReturnModsOfCurrentPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> Mod_List                                                         (ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FInstallProgressMod> TrueModInfo                                                      (ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FInstallProgressMod> FinalOutputArray                                                 (ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FInstallProgressMod> TempArray                                                        (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (None)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (None)
// int32                              CallFunc_Int32_SubOne_ReturnValue_1                              (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UUI_ParentPage_C::ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& Mod_List, const TArray<struct FInstallProgressMod>& TrueModInfo, const TArray<struct FInstallProgressMod>& FinalOutputArray, const TArray<struct FInstallProgressMod>& TempArray, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Int32_SubOne_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ReturnModsOfCurrentPage");

	Params::UUI_ParentPage_C_ReturnModsOfCurrentPage_Params Parms{};

	Parms.Mod_List = Mod_List;
	Parms.TrueModInfo = TrueModInfo;
	Parms.FinalOutputArray = FinalOutputArray;
	Parms.TempArray = TempArray;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Int32_SubOne_ReturnValue = CallFunc_Int32_SubOne_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Int32_SubOne_ReturnValue_1 = CallFunc_Int32_SubOne_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.MoreImagesLeftToDownload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)

void UUI_ParentPage_C::MoreImagesLeftToDownload(bool ReturnValue, int32 CallFunc_CalculateModsPerRow_Mods, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "MoreImagesLeftToDownload");

	Params::UUI_ParentPage_C_MoreImagesLeftToDownload_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CalculateModsPerRow_Mods = CallFunc_CalculateModsPerRow_Mods;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.GetModIndexesForCurrentRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              First                                                            (None)
// int32                              Last                                                             (None)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (None)

void UUI_ParentPage_C::GetModIndexesForCurrentRow(int32 First, int32 Last, int32 CallFunc_CalculateModsPerRow_Mods, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetModIndexesForCurrentRow");

	Params::UUI_ParentPage_C_GetModIndexesForCurrentRow_Params Parms{};

	Parms.First = First;
	Parms.Last = Last;
	Parms.CallFunc_CalculateModsPerRow_Mods = CallFunc_CalculateModsPerRow_Mods;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadNextBatchOfMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UUI_ParentPage_C::DownloadNextBatchOfMods(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadNextBatchOfMods");

	Params::UUI_ParentPage_C_DownloadNextBatchOfMods_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadBatchOfMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (None)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (None)

void UUI_ParentPage_C::DownloadBatchOfMods(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadBatchOfMods");

	Params::UUI_ParentPage_C_DownloadBatchOfMods_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_GetModIndexesForCurrentRow_Last = CallFunc_GetModIndexesForCurrentRow_Last;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CheckIfImagesAreReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_MoreImagesLeftToDownload_ReturnValue                    (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (None)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)

void UUI_ParentPage_C::CheckIfImagesAreReady(bool CallFunc_MoreImagesLeftToDownload_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CheckIfImagesAreReady");

	Params::UUI_ParentPage_C_CheckIfImagesAreReady_Params Parms{};

	Parms.CallFunc_MoreImagesLeftToDownload_ReturnValue = CallFunc_MoreImagesLeftToDownload_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_GetModIndexesForCurrentRow_Last = CallFunc_GetModIndexesForCurrentRow_Last;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadImagesInAllMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_InitiliazeImageDownloads_ReadyToStart                   (None)

void UUI_ParentPage_C::DownloadImagesInAllMods(bool CallFunc_InitiliazeImageDownloads_ReadyToStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadImagesInAllMods");

	Params::UUI_ParentPage_C_DownloadImagesInAllMods_Params Parms{};

	Parms.CallFunc_InitiliazeImageDownloads_ReadyToStart = CallFunc_InitiliazeImageDownloads_ReadyToStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CreateEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AtIndex                                                          (None)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (None)
// class UUI_EmptySlot_C*             CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (None)

void UUI_ParentPage_C::CreateEmptySlot(int32 AtIndex, int32 CallFunc_CalculateModsPerRow_Mods, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUI_EmptySlot_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CreateEmptySlot");

	Params::UUI_ParentPage_C_CreateEmptySlot_Params Parms{};

	Parms.AtIndex = AtIndex;
	Parms.CallFunc_CalculateModsPerRow_Mods = CallFunc_CalculateModsPerRow_Mods;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SwitchControllerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)

void UUI_ParentPage_C::SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SwitchControllerAction");

	Params::UUI_ParentPage_C_SwitchControllerAction_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)

void UUI_ParentPage_C::Nav_Down_from_DropdownTime(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget* CallFunc_Nav_to_Options_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownTime");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownTime_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Nav_to_Options_ReturnValue = CallFunc_Nav_to_Options_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownSort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)

void UUI_ParentPage_C::Nav_Down_from_DropdownSort(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget* CallFunc_Nav_to_Options_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownSort");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownSort_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Nav_to_Options_ReturnValue = CallFunc_Nav_to_Options_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)

void UUI_ParentPage_C::Nav_Down_from_DropdownCategory(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget* CallFunc_Nav_to_Options_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownCategory");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownCategory_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Nav_to_Options_ReturnValue = CallFunc_Nav_to_Options_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Nav for Up Move from List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (None)

void UUI_ParentPage_C::Nav_for_Up_Move_from_List(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav for Up Move from List");

	Params::UUI_ParentPage_C_Nav_for_Up_Move_from_List_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SetNavigationRuleForList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_ParentPage_C::SetNavigationRuleForList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetNavigationRuleForList");

	Params::UUI_ParentPage_C_SetNavigationRuleForList_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SetListFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_ParentPage_C::SetListFocus(class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetListFocus");

	Params::UUI_ParentPage_C_SetListFocus_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdatePaginations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> TotalList                                                        (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_FMod_Remainder                                          (None)
// int32                              CallFunc_FMod_ReturnValue                                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              K2Node_Select_Default                                            (None)

void UUI_ParentPage_C::UpdatePaginations(const TArray<struct FInstallProgressMod>& TotalList, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_CalculateModsPerPage_Mods, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdatePaginations");

	Params::UUI_ParentPage_C_UpdatePaginations_Params Parms{};

	Parms.TotalList = TotalList;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
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


// Function UI_ParentPage.UI_ParentPage_C.ClearImageCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Map_Length_ReturnValue                                  (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)

void UUI_ParentPage_C::ClearImageCache(int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ClearImageCache");

	Params::UUI_ParentPage_C_ClearImageCache_Params Parms{};

	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BindToDropdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Variable_1                                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)

void UUI_ParentPage_C::BindToDropdown(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindToDropdown");

	Params::UUI_ParentPage_C_BindToDropdown_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CloseNotAllDropdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CustomComboBox_C*        Dropdown                                                         (ZeroConstructor)
// TArray<class UUI_CustomComboBox_C*>Dropdowns                                                        (Edit, ZeroConstructor, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (None)

void UUI_ParentPage_C::CloseNotAllDropdown(class UUI_CustomComboBox_C* Dropdown, const TArray<class UUI_CustomComboBox_C*>& Dropdowns, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CloseNotAllDropdown");

	Params::UUI_ParentPage_C_CloseNotAllDropdown_Params Parms{};

	Parms.Dropdown = Dropdown;
	Parms.Dropdowns = Dropdowns;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_ParentPage_C::CloseAllDropDown(int32 Temp_int_Variable, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UUI_CustomComboBox_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CloseAllDropDown");

	Params::UUI_ParentPage_C_CloseAllDropDown_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SetEnableStageForGameSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableStage                                                      (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_ParentPage_C::SetEnableStageForGameSlot(bool EnableStage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetEnableStageForGameSlot");

	Params::UUI_ParentPage_C_SetEnableStageForGameSlot_Params Parms{};

	Parms.EnableStage = EnableStage;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BindToGameSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_ParentPage_C::BindToGameSlot(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindToGameSlot");

	Params::UUI_ParentPage_C_BindToGameSlot_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.ClearAllModsInPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UUI_ParentPage_C::ClearAllModsInPage(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ClearAllModsInPage");

	Params::UUI_ParentPage_C_ClearAllModsInPage_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateNotificationInSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (None)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)

void UUI_ParentPage_C::UpdateNotificationInSwitcher(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateNotificationInSwitcher");

	Params::UUI_ParentPage_C_UpdateNotificationInSwitcher_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.InitWidgetStoreMenuRefs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::InitWidgetStoreMenuRefs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "InitWidgetStoreMenuRefs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateAllThemeSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_ParentPage_C::UpdateAllThemeSettings(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateAllThemeSettings");

	Params::UUI_ParentPage_C_UpdateAllThemeSettings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.IsUrlValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      URL                                                              (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UUI_ParentPage_C::IsUrlValid(const class FString& URL, bool ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsUrlValid");

	Params::UUI_ParentPage_C_IsUrlValid_Params Parms{};

	Parms.URL = URL;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdatePagesPagination
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_ParentPage_C::UpdatePagesPagination(bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdatePagesPagination");

	Params::UUI_ParentPage_C_UpdatePagesPagination_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.FilterModInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (None)
// struct FCFCoreSearchModsFilter     CallFunc_MakeSearchModsFilter_ReturnValue                        (None)

void UUI_ParentPage_C::FilterModInfo(const struct FCFCoreSearchModsFilter& ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "FilterModInfo");

	Params::UUI_ParentPage_C_FilterModInfo_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_MakeSearchModsFilter_ReturnValue = CallFunc_MakeSearchModsFilter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.GetCurrentTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (None)

void UUI_ParentPage_C::GetCurrentTab(enum class ENUM_SideTabs CurrentActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetCurrentTab");

	Params::UUI_ParentPage_C_GetCurrentTab_Params Parms{};

	Parms.CurrentActiveTab = CurrentActiveTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateSearchText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UUI_ParentPage_C::UpdateSearchText(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateSearchText");

	Params::UUI_ParentPage_C_UpdateSearchText_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.LoadSavedUpImagesAsync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (None)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)

void UUI_ParentPage_C::LoadSavedUpImagesAsync(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "LoadSavedUpImagesAsync");

	Params::UUI_ParentPage_C_LoadSavedUpImagesAsync_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_GetModIndexesForCurrentRow_Last = CallFunc_GetModIndexesForCurrentRow_Last;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.InitiliazeImageDownloads
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyToStart                                                     (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UUI_ParentPage_C::InitiliazeImageDownloads(bool ReadyToStart, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "InitiliazeImageDownloads");

	Params::UUI_ParentPage_C_InitiliazeImageDownloads_Params Parms{};

	Parms.ReadyToStart = ReadyToStart;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Mods                                                             (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (None)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)

void UUI_ParentPage_C::CalculateModsPerRow(int32 Mods, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CalculateModsPerRow");

	Params::UUI_ParentPage_C_CalculateModsPerRow_Params Parms{};

	Parms.Mods = Mods;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Mods                                                             (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (None)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)

void UUI_ParentPage_C::CalculateModsPerPage(int32 Mods, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CalculateModsPerPage");

	Params::UUI_ParentPage_C_CalculateModsPerPage_Params Parms{};

	Parms.Mods = Mods;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.PrevPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)

void UUI_ParentPage_C::PrevPage(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PrevPage");

	Params::UUI_ParentPage_C_PrevPage_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_ParentPage_C::NextPage(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "NextPage");

	Params::UUI_ParentPage_C_NextPage_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.GetCurrentSearchInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        CurrentSearchInput                                               (None)

void UUI_ParentPage_C::GetCurrentSearchInput(class FText CurrentSearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetCurrentSearchInput");

	Params::UUI_ParentPage_C_GetCurrentSearchInput_Params Parms{};

	Parms.CurrentSearchInput = CurrentSearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.OnPageActiveted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (None)

void UUI_ParentPage_C::OnPageActiveted(class FText Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnPageActiveted");

	Params::UUI_ParentPage_C_OnPageActiveted_Params Parms{};

	Parms.Search_Input = Search_Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SetCurrentClassMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UUI_ParentPage_C::SetCurrentClassMods(bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetCurrentClassMods");

	Params::UUI_ParentPage_C_SetCurrentClassMods_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.ResetPageNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::ResetPageNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ResetPageNum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SetStypleOfPageArrowsButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)

void UUI_ParentPage_C::SetStypleOfPageArrowsButtons(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetStypleOfPageArrowsButtons");

	Params::UUI_ParentPage_C_SetStypleOfPageArrowsButtons_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateCategoriesSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsModsListEmpty_IsEmpty                                 (None)

void UUI_ParentPage_C::UpdateCategoriesSelect(bool CallFunc_IsModsListEmpty_IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateCategoriesSelect");

	Params::UUI_ParentPage_C_UpdateCategoriesSelect_Params Parms{};

	Parms.CallFunc_IsModsListEmpty_IsEmpty = CallFunc_IsModsListEmpty_IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CreateModSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AtIndex                                                          (None)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// struct FInstallProgressMod         K2Node_MakeStruct_InstallProgressMod                             (Edit, ZeroConstructor)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (None)

void UUI_ParentPage_C::CreateModSlot(int32 AtIndex, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FInstallProgressMod& K2Node_MakeStruct_InstallProgressMod, int32 CallFunc_CalculateModsPerRow_Mods, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CreateModSlot");

	Params::UUI_ParentPage_C_CreateModSlot_Params Parms{};

	Parms.AtIndex = AtIndex;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_InstallProgressMod = K2Node_MakeStruct_InstallProgressMod;
	Parms.CallFunc_CalculateModsPerRow_Mods = CallFunc_CalculateModsPerRow_Mods;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.IsSearchInputValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UUI_ParentPage_C::IsSearchInputValid(bool Return_Value, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsSearchInputValid");

	Params::UUI_ParentPage_C_IsSearchInputValid_Params Parms{};

	Parms.Return_Value = Return_Value;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.OnPageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::OnPageLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnPageLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SearchForAuthorsName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Input                                                            (AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FModAuthor>          Authors                                                          (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               AuthorFound                                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_FindSubstring_ReturnValue                               (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void UUI_ParentPage_C::SearchForAuthorsName(class FText Input, const TArray<struct FModAuthor>& Authors, bool AuthorFound, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FModAuthor& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SearchForAuthorsName");

	Params::UUI_ParentPage_C_SearchForAuthorsName_Params Parms{};

	Parms.Input = Input;
	Parms.Authors = Authors;
	Parms.AuthorFound = AuthorFound;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateClasses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::UpdateClasses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateClasses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SetupTimeFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_TimeFilters        SelectedDefaultOption                                            (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Variable_1                                              (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (None)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (None)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_ParentPage_C::SetupTimeFilter(enum class ENUM_TimeFilters SelectedDefaultOption, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetupTimeFilter");

	Params::UUI_ParentPage_C_SetupTimeFilter_Params Parms{};

	Parms.SelectedDefaultOption = SelectedDefaultOption;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption = K2Node_MakeStruct_STRUCT_CustomComboBoxOption;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SetupSortByOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECFCoreModsSearchSortFieldSelectedDefaultOption                                            (None)
// class FString                      Temp_string_Variable                                             (ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_1                                           (Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_2                                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_3                                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_4                                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_5                                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_6                                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_7                                           (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_8                                           (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_9                                           (AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_10                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_11                                          (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// enum class ECFCoreModsSearchSortFieldTemp_byte_Variable                                               (None)
// class FString                      Temp_string_Variable_12                                          (SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_13                                          (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_14                                          (SimpleDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_15                                          (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_16                                          (AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_17                                          (ContainsInstancedReference, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_18                                          (BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_19                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_20                                          (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_21                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_22                                          (SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_23                                          (AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// enum class ECFCoreModsSearchSortFieldTemp_byte_Variable_1                                             (None)
// TArray<enum class ECFCoreModsSearchSortField>K2Node_MakeArray_Array                                           (SimpleDisplay, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// enum class ECFCoreModsSearchSortFieldCallFunc_Array_Get_Item                                          (None)
// enum class ECFCoreModsSearchSortFieldCallFunc_Array_Get_Item_1                                        (None)
// class FString                      K2Node_Select_Default                                            (ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      K2Node_Select_Default_1                                          (AssetRegistrySearchable, Protected, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_ParentPage_C::SetupSortByOptions(enum class ECFCoreModsSearchSortField SelectedDefaultOption, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, enum class ECFCoreModsSearchSortField Temp_byte_Variable, const class FString& Temp_string_Variable_12, const class FString& Temp_string_Variable_13, const class FString& Temp_string_Variable_14, const class FString& Temp_string_Variable_15, const class FString& Temp_string_Variable_16, const class FString& Temp_string_Variable_17, const class FString& Temp_string_Variable_18, const class FString& Temp_string_Variable_19, const class FString& Temp_string_Variable_20, const class FString& Temp_string_Variable_21, const class FString& Temp_string_Variable_22, const class FString& Temp_string_Variable_23, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ECFCoreModsSearchSortField Temp_byte_Variable_1, const TArray<enum class ECFCoreModsSearchSortField>& K2Node_MakeArray_Array, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item_1, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetupSortByOptions");

	Params::UUI_ParentPage_C_SetupSortByOptions_Params Parms{};

	Parms.SelectedDefaultOption = SelectedDefaultOption;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable_12 = Temp_string_Variable_12;
	Parms.Temp_string_Variable_13 = Temp_string_Variable_13;
	Parms.Temp_string_Variable_14 = Temp_string_Variable_14;
	Parms.Temp_string_Variable_15 = Temp_string_Variable_15;
	Parms.Temp_string_Variable_16 = Temp_string_Variable_16;
	Parms.Temp_string_Variable_17 = Temp_string_Variable_17;
	Parms.Temp_string_Variable_18 = Temp_string_Variable_18;
	Parms.Temp_string_Variable_19 = Temp_string_Variable_19;
	Parms.Temp_string_Variable_20 = Temp_string_Variable_20;
	Parms.Temp_string_Variable_21 = Temp_string_Variable_21;
	Parms.Temp_string_Variable_22 = Temp_string_Variable_22;
	Parms.Temp_string_Variable_23 = Temp_string_Variable_23;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption = K2Node_MakeStruct_STRUCT_CustomComboBoxOption;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SelectClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UUI_ParentPage_C::SelectClass(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SelectClass");

	Params::UUI_ParentPage_C_SelectClass_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UUI_ParentPage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnMouseButtonDown");

	Params::UUI_ParentPage_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BuildPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UUI_ParentPage_C::BuildPage(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_CalculateModsPerPage_Mods, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BuildPage");

	Params::UUI_ParentPage_C_BuildPage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CalculateModsPerPage_Mods = CallFunc_CalculateModsPerPage_Mods;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.CheckWhichTextAppearsFirst
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        NameOne                                                          (TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FText                        NameTwo                                                          (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// bool                               Name_One_Appears_First                                           (None)
// int32                              _numOfLettersForCheck                                            (None)
// bool                               Temp_bool_Variable                                               (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_ToUpper_ReturnValue_1                                   (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_1               (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_GetCharacterAsNumber_ReturnValue                        (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              CallFunc_GetCharacterAsNumber_ReturnValue_1                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void UUI_ParentPage_C::CheckWhichTextAppearsFirst(class FText NameOne, class FText NameTwo, bool Name_One_Appears_First, int32 _numOfLettersForCheck, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_ToUpper_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetCharacterAsNumber_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetCharacterAsNumber_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CheckWhichTextAppearsFirst");

	Params::UUI_ParentPage_C_CheckWhichTextAppearsFirst_Params Parms{};

	Parms.NameOne = NameOne;
	Parms.NameTwo = NameTwo;
	Parms.Name_One_Appears_First = Name_One_Appears_First;
	Parms._numOfLettersForCheck = _numOfLettersForCheck;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_ToUpper_ReturnValue_1 = CallFunc_ToUpper_ReturnValue_1;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_1 = CallFunc_GetCharacterArrayFromString_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetCharacterAsNumber_ReturnValue = CallFunc_GetCharacterAsNumber_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAsNumber_ReturnValue_1 = CallFunc_GetCharacterAsNumber_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.IsModsListEmpty
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEmpty                                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UUI_ParentPage_C::IsModsListEmpty(bool IsEmpty, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsModsListEmpty");

	Params::UUI_ParentPage_C_IsModsListEmpty_Params Parms{};

	Parms.IsEmpty = IsEmpty;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)

void UUI_ParentPage_C::BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature");

	Params::UUI_ParentPage_C_BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)

void UUI_ParentPage_C::BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature");

	Params::UUI_ParentPage_C_BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Event On Input Device Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (None)

void UUI_ParentPage_C::Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event On Input Device Changed");

	Params::UUI_ParentPage_C_Event_On_Input_Device_Changed_Params Parms{};

	Parms.Device = Device;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Event Update Filter By Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Current_Class_Category_ID                                        (None)

void UUI_ParentPage_C::Event_Update_Filter_By_Options(int64 Current_Class_Category_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event Update Filter By Options");

	Params::UUI_ParentPage_C_Event_Update_Filter_By_Options_Params Parms{};

	Parms.Current_Class_Category_ID = Current_Class_Category_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__UI_ParentPage_Button_NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BndEvt__UI_ParentPage_Button_NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__UI_ParentPage_Button_NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__UI_ParentPage_Button_PrevPage_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BndEvt__UI_ParentPage_Button_PrevPage_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__UI_ParentPage_Button_PrevPage_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.Event On Class Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::Event_On_Class_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event On Class Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.Event Search Mods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::Event_Search_Mods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event Search Mods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.ConstructParentPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::ConstructParentPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ConstructParentPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.FillTheModList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::FillTheModList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "FillTheModList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.GetMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::GetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (None)

void UUI_ParentPage_C::UpdateSearch(class FText SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateSearch");

	Params::UUI_ParentPage_C_UpdateSearch_Params Parms{};

	Parms.SearchInput = SearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__UI_ParentPage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BndEvt__UI_ParentPage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__UI_ParentPage_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (None)

void UUI_ParentPage_C::OnSearch(class FText Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnSearch");

	Params::UUI_ParentPage_C_OnSearch_Params Parms{};

	Parms.Search_Input = Search_Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)

void UUI_ParentPage_C::ButtonCall(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ButtonCall");

	Params::UUI_ParentPage_C_ButtonCall_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.NextPageButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::NextPageButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "NextPageButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.PrevPageButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::PrevPageButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PrevPageButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_ParentPage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PreConstruct");

	Params::UUI_ParentPage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.ExecuteUbergraph_UI_ParentPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FString                      K2Node_ComponentBoundEvent_Option_1                              (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      K2Node_ComponentBoundEvent_Option                                (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// enum class ENUM_InputDevices       K2Node_CustomEvent_Device                                        (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// int64                              K2Node_CustomEvent_Current_Class_Category_ID                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class FText                        K2Node_Event_SearchInput                                         (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (None)
// class FText                        K2Node_Event_Search_Input                                        (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FKey                        K2Node_CustomEvent_Key                                           (None)
// enum class EViewState              K2Node_CustomEvent_State                                         (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// enum class ECFCoreModsSearchSortFieldCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void UUI_ParentPage_C::ExecuteUbergraph_UI_ParentPage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Option_1, const class FString& K2Node_ComponentBoundEvent_Option, enum class ENUM_InputDevices K2Node_CustomEvent_Device, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int64 K2Node_CustomEvent_Current_Class_Category_ID, bool CallFunc_IsValid_ReturnValue_1, class FText K2Node_Event_SearchInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText K2Node_Event_Search_Input, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_IsDesignTime, enum class ECFCoreModsSearchSortField CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ExecuteUbergraph_UI_ParentPage");

	Params::UUI_ParentPage_C_ExecuteUbergraph_UI_ParentPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Option_1 = K2Node_ComponentBoundEvent_Option_1;
	Parms.K2Node_ComponentBoundEvent_Option = K2Node_ComponentBoundEvent_Option;
	Parms.K2Node_CustomEvent_Device = K2Node_CustomEvent_Device;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Current_Class_Category_ID = K2Node_CustomEvent_Current_Class_Category_ID;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_SearchInput = K2Node_Event_SearchInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_Search_Input = K2Node_Event_Search_Input;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


