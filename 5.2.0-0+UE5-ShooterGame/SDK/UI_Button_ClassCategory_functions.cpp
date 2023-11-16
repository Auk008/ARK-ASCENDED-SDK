#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_ClassCategory.UI_Button_ClassCategory_C
// (None)

class UClass* UUI_Button_ClassCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_ClassCategory_C");

	return Clss;
}


// UI_Button_ClassCategory_C UI_Button_ClassCategory.Default__UI_Button_ClassCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_ClassCategory_C* UUI_Button_ClassCategory_C::GetDefaultObj()
{
	static class UUI_Button_ClassCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_ClassCategory_C*>(UUI_Button_ClassCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.UpdateAllThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UUI_Button_ClassCategory_C::UpdateAllThemeSettings(bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "UpdateAllThemeSettings");

	Params::UUI_Button_ClassCategory_C_UpdateAllThemeSettings_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.ResetNumOfModsInClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::ResetNumOfModsInClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "ResetNumOfModsInClass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.SetCurrentNumOfModesInClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              New_Num                                                          (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_Button_ClassCategory_C::SetCurrentNumOfModesInClass(int32 New_Num, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "SetCurrentNumOfModesInClass");

	Params::UUI_Button_ClassCategory_C_SetCurrentNumOfModesInClass_Params Parms{};

	Parms.New_Num = New_Num;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.SetCurrentCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentCount                                                     (None)

void UUI_Button_ClassCategory_C::SetCurrentCount(int32 CurrentCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "SetCurrentCount");

	Params::UUI_Button_ClassCategory_C_SetCurrentCount_Params Parms{};

	Parms.CurrentCount = CurrentCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.ResetModsCounts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::ResetModsCounts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "ResetModsCounts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.SetUnderlineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToShow                                                           (None)

void UUI_Button_ClassCategory_C::SetUnderlineColor(bool ToShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "SetUnderlineColor");

	Params::UUI_Button_ClassCategory_C_SetUnderlineColor_Params Parms{};

	Parms.ToShow = ToShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.Event Set Class Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClassCategoriesLocal_                                            (None)

void UUI_Button_ClassCategory_C::Event_Set_Class_Name(bool ClassCategoriesLocal_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "Event Set Class Name");

	Params::UUI_Button_ClassCategory_C_Event_Set_Class_Name_Params Parms{};

	Parms.ClassCategoriesLocal_ = ClassCategoriesLocal_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.On Search Pagination Info Failed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_Button_ClassCategory_C::On_Search_Pagination_Info_Failed(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "On Search Pagination Info Failed");

	Params::UUI_Button_ClassCategory_C_On_Search_Pagination_Info_Failed_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.On Search Pagination Info
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCFCoreMod>          Mods                                                             (None)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)

void UUI_Button_ClassCategory_C::On_Search_Pagination_Info(const TArray<struct FCFCoreMod>& Mods, const struct FCFCoreApiResponsePagination& Pagination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "On Search Pagination Info");

	Params::UUI_Button_ClassCategory_C_On_Search_Pagination_Info_Params Parms{};

	Parms.Mods = Mods;
	Parms.Pagination = Pagination;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.Update Pagination
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::Update_Pagination()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "Update Pagination");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Button_ClassCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ClassCategory.UI_Button_ClassCategory_C.ExecuteUbergraph_UI_Button_ClassCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// bool                               K2Node_CustomEvent_ClassCategoriesLocal_                         (None)
// bool                               CallFunc_IsHovered_ReturnValue                                   (None)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
// bool                               CallFunc_NotEqual_Int64Int64_ReturnValue                         (None)
// TArray<struct FCFCoreMod>          K2Node_CustomEvent_mods                                          (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FCFCoreApiResponsePaginationK2Node_CustomEvent_pagination                                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// struct FCFCoreSearchModsFilter     CallFunc_MakeSearchModsFilter_ReturnValue                        (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue_1                                    (AutoWeak, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_1                      (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_1                 (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (None)

void UUI_Button_ClassCategory_C::ExecuteUbergraph_UI_Button_ClassCategory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_ClassCategoriesLocal_, bool CallFunc_IsHovered_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, bool CallFunc_NotEqual_Int64Int64_ReturnValue, const TArray<struct FCFCoreMod>& K2Node_CustomEvent_mods, const struct FCFCoreApiResponsePagination& K2Node_CustomEvent_pagination, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage_1, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ClassCategory_C", "ExecuteUbergraph_UI_Button_ClassCategory");

	Params::UUI_Button_ClassCategory_C_ExecuteUbergraph_UI_Button_ClassCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ClassCategoriesLocal_ = K2Node_CustomEvent_ClassCategoriesLocal_;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_NotEqual_Int64Int64_ReturnValue = CallFunc_NotEqual_Int64Int64_ReturnValue;
	Parms.K2Node_CustomEvent_mods = K2Node_CustomEvent_mods;
	Parms.K2Node_CustomEvent_pagination = K2Node_CustomEvent_pagination;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_MakeSearchModsFilter_ReturnValue = CallFunc_MakeSearchModsFilter_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage_1 = CallFunc_GetCurrentActivePage_CurrentPage_1;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab_1 = CallFunc_GetCurrentActivePage_CurrentActiveTab_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


