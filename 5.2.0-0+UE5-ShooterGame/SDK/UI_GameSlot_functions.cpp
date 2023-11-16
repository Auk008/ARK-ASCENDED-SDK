#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_GameSlot.UI_GameSlot_C
// (None)

class UClass* UUI_GameSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_GameSlot_C");

	return Clss;
}


// UI_GameSlot_C UI_GameSlot.Default__UI_GameSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_GameSlot_C* UUI_GameSlot_C::GetDefaultObj()
{
	static class UUI_GameSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_GameSlot_C*>(UUI_GameSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_GameSlot.UI_GameSlot_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// struct FInstallProgressMod         NewInformation                                                   (ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)

void UUI_GameSlot_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const struct FInstallProgressMod& NewInformation, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnEventBroadcasted");

	Params::UUI_GameSlot_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.NewInformation = NewInformation;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.SequenceEvent__ENTRYPOINTUI_GameSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_GameImage                                                    (None)

void UUI_GameSlot_C::SequenceEvent__ENTRYPOINTUI_GameSlot(class UImage* IMG_GameImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "SequenceEvent__ENTRYPOINTUI_GameSlot");

	Params::UUI_GameSlot_C_SequenceEvent__ENTRYPOINTUI_GameSlot_Params Parms{};

	Parms.IMG_GameImage = IMG_GameImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.VisualFeedbacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Selection                                                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)

void UUI_GameSlot_C::VisualFeedbacks(enum class EGameModsEvent Selection, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "VisualFeedbacks");

	Params::UUI_GameSlot_C_VisualFeedbacks_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.PlayStartingAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_GameSlot_C::PlayStartingAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "PlayStartingAnimation");

	Params::UUI_GameSlot_C_PlayStartingAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.GetDownloadCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        FinalAmount                                                      (AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (None)

void UUI_GameSlot_C::GetDownloadCount(class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetDownloadCount");

	Params::UUI_GameSlot_C_GetDownloadCount_Params Parms{};

	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_FormatDownloadNumber_FinalAmount = CallFunc_FormatDownloadNumber_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateModCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (None)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void UUI_GameSlot_C::UpdateModCard(bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateModCard");

	Params::UUI_GameSlot_C_UpdateModCard_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.GetModSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FFile                       CallFunc_Array_Get_Item                                          (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_GameSlot_C::GetModSize(class FText Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetModSize");

	Params::UUI_GameSlot_C_GetModSize_Params Parms{};

	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.GetAuthors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      CombinedAuthorsNames                                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      Local_TotalAuthors                                               (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_StringLimit_NewString                                   (SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)

void UUI_GameSlot_C::GetAuthors(const class FString& CombinedAuthorsNames, const class FString& Local_TotalAuthors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, const struct FModAuthor& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetAuthors");

	Params::UUI_GameSlot_C_GetAuthors_Params Parms{};

	Parms.CombinedAuthorsNames = CombinedAuthorsNames;
	Parms.Local_TotalAuthors = Local_TotalAuthors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.GetModName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (None)

void UUI_GameSlot_C::GetModName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GetModName");

	Params::UUI_GameSlot_C_GetModName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.ClearAllModsInAllPages
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_ParentPage_C*            CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_GameSlot_C::ClearAllModsInAllPages(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "ClearAllModsInAllPages");

	Params::UUI_GameSlot_C_ClearAllModsInAllPages_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateDownloadCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (None)

void UUI_GameSlot_C::UpdateDownloadCount(class FText CallFunc_FormatDownloadNumber_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateDownloadCount");

	Params::UUI_GameSlot_C_UpdateDownloadCount_Params Parms{};

	Parms.CallFunc_FormatDownloadNumber_FinalAmount = CallFunc_FormatDownloadNumber_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.ChangeSlotEnableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (None)
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UUI_GameSlot_C::ChangeSlotEnableState(bool Enable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "ChangeSlotEnableState");

	Params::UUI_GameSlot_C_ChangeSlotEnableState_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateModSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FFile                       CallFunc_Array_Get_Item                                          (AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (AutoWeak, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_GameSlot_C::UpdateModSize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateModSize");

	Params::UUI_GameSlot_C_UpdateModSize_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.Update LikeStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_GameSlot_C::Update_LikeStatus(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Update LikeStatus");

	Params::UUI_GameSlot_C_Update_LikeStatus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateThemeSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_GameSlot_C::UpdateImage(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateImage");

	Params::UUI_GameSlot_C_UpdateImage_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateAuthors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Local_Authors                                                    (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_StringLimit_NewString                                   (ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)

void UUI_GameSlot_C::UpdateAuthors(const class FString& Local_Authors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FModAuthor& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateAuthors");

	Params::UUI_GameSlot_C_UpdateAuthors_Params Parms{};

	Parms.Local_Authors = Local_Authors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateModName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateModName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateModName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Try Set Game Version
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNumericallySet                                                 (None)
// class FString                      Temp                                                             (AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<int32>                      Result                                                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FFileIndex                  CallFunc_Array_Get_Item                                          (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_LeftS                                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_RightS                                            (None)
// bool                               CallFunc_Split_ReturnValue                                       (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UUI_GameSlot_C::Try_Set_Game_Version(bool IsNumericallySet, const class FString& Temp, const TArray<int32>& Result, bool CallFunc_Not_PreBool_ReturnValue, const struct FFileIndex& CallFunc_Array_Get_Item, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Try Set Game Version");

	Params::UUI_GameSlot_C_Try_Set_Game_Version_Params Parms{};

	Parms.IsNumericallySet = IsNumericallySet;
	Parms.Temp = Temp;
	Parms.Result = Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.FormatDownloadNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Downloads                                                        (None)
// class FText                        FinalAmount                                                      (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (None)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_2                         (None)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_3                          (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_4                          (None)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (None)

void UUI_GameSlot_C::FormatDownloadNumber(int64 Downloads, class FText FinalAmount, bool CallFunc_Less_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class FText CallFunc_Conv_Int64ToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_4, bool CallFunc_Less_Int64Int64_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "FormatDownloadNumber");

	Params::UUI_GameSlot_C_FormatDownloadNumber_Params Parms{};

	Parms.Downloads = Downloads;
	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue = CallFunc_Divide_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_1 = CallFunc_Divide_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_2 = CallFunc_Divide_Int64Int64_ReturnValue_2;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_3 = CallFunc_Divide_Int64Int64_ReturnValue_3;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_2 = CallFunc_Conv_Int64ToText_ReturnValue_2;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_3 = CallFunc_Conv_Int64ToText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetSubstring_ReturnValue_1 = CallFunc_GetSubstring_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_4 = CallFunc_Conv_Int64ToText_ReturnValue_4;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_1 = CallFunc_Less_Int64Int64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.GenerateModNameToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_ToolTipWidget_C*         CallFunc_Create_ReturnValue                                      (None)

void UUI_GameSlot_C::GenerateModNameToolTipWidget(class UWidget* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ToolTipWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GenerateModNameToolTipWidget");

	Params::UUI_GameSlot_C_GenerateModNameToolTipWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.GenerateAuthorNameToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor)
// class UUI_ToolTipWidget_C*         CallFunc_Create_ReturnValue                                      (None)

void UUI_GameSlot_C::GenerateAuthorNameToolTipWidget(class UWidget* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ToolTipWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "GenerateAuthorNameToolTipWidget");

	Params::UUI_GameSlot_C_GenerateAuthorNameToolTipWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.Init Mod Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         NewModInfo                                                       (None)

void UUI_GameSlot_C::Init_Mod_Info(const struct FInstallProgressMod& NewModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Init Mod Info");

	Params::UUI_GameSlot_C_Init_Mod_Info_Params Parms{};

	Parms.NewModInfo = NewModInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)
// class UUI_RightClickMenu_C*        CallFunc_CreateRightClickMenu_MenuRef                            (ZeroConstructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (None)
// float                              CallFunc_GetMousePosition_LocationX                              (None)
// float                              CallFunc_GetMousePosition_LocationY                              (None)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (None)

void UUI_GameSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, class UUI_RightClickMenu_C* CallFunc_CreateRightClickMenu_MenuRef, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnMouseButtonDown");

	Params::UUI_GameSlot_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;
	Parms.CallFunc_CreateRightClickMenu_MenuRef = CallFunc_CreateRightClickMenu_MenuRef;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnFail_43AE79A54293550780DEB087EC94A5BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_GameSlot_C::OnFail_43AE79A54293550780DEB087EC94A5BA(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnFail_43AE79A54293550780DEB087EC94A5BA");

	Params::UUI_GameSlot_C_OnFail_43AE79A54293550780DEB087EC94A5BA_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_43AE79A54293550780DEB087EC94A5BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_GameSlot_C::OnSuccess_43AE79A54293550780DEB087EC94A5BA(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnSuccess_43AE79A54293550780DEB087EC94A5BA");

	Params::UUI_GameSlot_C_OnSuccess_43AE79A54293550780DEB087EC94A5BA_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnFail_9D95364741CA1B5428249F8ACB4C6143
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_GameSlot_C::OnFail_9D95364741CA1B5428249F8ACB4C6143(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnFail_9D95364741CA1B5428249F8ACB4C6143");

	Params::UUI_GameSlot_C_OnFail_9D95364741CA1B5428249F8ACB4C6143_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_9D95364741CA1B5428249F8ACB4C6143
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_GameSlot_C::OnSuccess_9D95364741CA1B5428249F8ACB4C6143(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnSuccess_9D95364741CA1B5428249F8ACB4C6143");

	Params::UUI_GameSlot_C_OnSuccess_9D95364741CA1B5428249F8ACB4C6143_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.RequestDownloadImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL_String                                                       (None)

void UUI_GameSlot_C::RequestDownloadImage(const class FString& URL_String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "RequestDownloadImage");

	Params::UUI_GameSlot_C_RequestDownloadImage_Params Parms{};

	Parms.URL_String = URL_String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.Uninstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Uninstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Uninstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.CheckDiskSpaceToInstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::CheckDiskSpaceToInstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CheckDiskSpaceToInstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (None)

void UUI_GameSlot_C::CustomEvent(const struct FModsDirInfo& ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CustomEvent");

	Params::UUI_GameSlot_C_CustomEvent_Params Parms{};

	Parms.ModsDirInfo = ModsDirInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_GameSlot_C::CustomEvent_1(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CustomEvent_1");

	Params::UUI_GameSlot_C_CustomEvent_1_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.Animation_UpdateModImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_GameImage                                                    (None)

void UUI_GameSlot_C::Animation_UpdateModImage(class UImage* IMG_GameImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Animation_UpdateModImage");

	Params::UUI_GameSlot_C_Animation_UpdateModImage_Params Parms{};

	Parms.IMG_GameImage = IMG_GameImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event View Mod Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_View_Mod_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event View Mod Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event On Sub Menu Report
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_On_Sub_Menu_Report()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event On Sub Menu Report");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event On Uninstall Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_On_Uninstall_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event On Uninstall Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Event On Uninstall Aprroved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Event_On_Uninstall_Aprroved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Event On Uninstall Aprroved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.InstallMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::InstallMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "InstallMod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (None)

void UUI_GameSlot_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnListItemObjectSet");

	Params::UUI_GameSlot_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.UpdateInstallSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::UpdateInstallSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "UpdateInstallSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (None)

void UUI_GameSlot_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BP_OnItemSelectionChanged");

	Params::UUI_GameSlot_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.CancelInstallation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::CancelInstallation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "CancelInstallation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (None)

void UUI_GameSlot_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BP_OnItemExpansionChanged");

	Params::UUI_GameSlot_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.JustDownloadAndPlaceImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::JustDownloadAndPlaceImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "JustDownloadAndPlaceImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.ExecuteUbergraph_UI_GameSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// class UObject*                     Temp_object_Variable                                             (Edit, ZeroConstructor)
// class UUI_Prompt_Report_C*         CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class UUI_Prompt_Uninstall_C*      CallFunc_Create_ReturnValue_1                                    (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ZeroConstructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (None)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable_1                                           (Edit, ZeroConstructor)
// bool                               Temp_bool_Variable_1                                             (None)
// class UObject*                     Temp_object_Variable_2                                           (Edit, ZeroConstructor)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue_2                                    (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (Edit, ZeroConstructor)
// class FString                      K2Node_CustomEvent_URL_String                                    (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UTexture2DDynamic*           Temp_object_Variable_3                                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (None)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ZeroConstructor)
// bool                               CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace        (None)
// class UImage*                      K2Node_CustomEvent_IMG_GameImage                                 (Edit, ZeroConstructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (None)
// class UObject*                     K2Node_Select_Default                                            (Edit, ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_2                                     (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ZeroConstructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_3                                     (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (None)
// bool                               K2Node_Event_bIsSelected                                         (None)
// bool                               K2Node_Event_bIsExpanded                                         (None)
// class UUI_ModPage_C*               CallFunc_CreateModPageMenu_ModPageRef                            (Edit, ZeroConstructor)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_StringLimit_NewString                                   (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_StringLimit_NewString_1                                 (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (None)
// class UObject*                     K2Node_Select_Default_1                                          (Edit, ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (Edit, ZeroConstructor)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (None)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_1                             (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (None)
// bool                               CallFunc_InitializeModView_ReturnValue                           (None)

void UUI_GameSlot_C::ExecuteUbergraph_UI_GameSlot(int32 EntryPoint, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UUI_Prompt_Report_C* CallFunc_Create_ReturnValue, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTexture2DDynamic* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_2, class UUI_ModPage_C* CallFunc_Create_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const class FString& K2Node_CustomEvent_URL_String, class UTexture2DDynamic* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue_6, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, const struct FCFCoreError& K2Node_CustomEvent_error, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, class UImage* K2Node_CustomEvent_IMG_GameImage, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UObject* K2Node_Event_ListItemObject, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_9, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, class UUI_ModPage_C* CallFunc_CreateModPageMenu_ModPageRef, bool CallFunc_SubscribeViewToEvents_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, class UObject* K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_InitializeModView_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "ExecuteUbergraph_UI_GameSlot");

	Params::UUI_GameSlot_C_ExecuteUbergraph_UI_GameSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CustomEvent_URL_String = K2Node_CustomEvent_URL_String;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_ModsDirInfo = K2Node_CustomEvent_ModsDirInfo;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace = CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace;
	Parms.K2Node_CustomEvent_IMG_GameImage = K2Node_CustomEvent_IMG_GameImage;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_CustomEvent_Texture_2 = K2Node_CustomEvent_Texture_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_CustomEvent_Texture_3 = K2Node_CustomEvent_Texture_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_CreateModPageMenu_ModPageRef = CallFunc_CreateModPageMenu_ModPageRef;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_StringLimit_NewString_1 = CallFunc_StringLimit_NewString_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_DownloadImage_ReturnValue_1 = CallFunc_DownloadImage_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_InitializeModView_ReturnValue = CallFunc_InitializeModView_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModUnInstall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModUnInstall__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModUnInstall__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnDisableClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnDisableClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnDisableClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModUninstalledComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModUninstalledComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModUninstalledComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModInstall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModInstall__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModInstall__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.OnModInstalledComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::OnModInstalledComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "OnModInstalledComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_GameSlot.UI_GameSlot_C.Like__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_GameSlot_C::Like__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_GameSlot_C", "Like__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


