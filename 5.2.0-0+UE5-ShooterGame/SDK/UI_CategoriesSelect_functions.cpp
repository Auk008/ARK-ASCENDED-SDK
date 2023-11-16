#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CategoriesSelect.UI_CategoriesSelect_C
// (None)

class UClass* UUI_CategoriesSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CategoriesSelect_C");

	return Clss;
}


// UI_CategoriesSelect_C UI_CategoriesSelect.Default__UI_CategoriesSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CategoriesSelect_C* UUI_CategoriesSelect_C::GetDefaultObj()
{
	static class UUI_CategoriesSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CategoriesSelect_C*>(UUI_CategoriesSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.CreateAllCategoriesCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption_1                  (None)

void UUI_CategoriesSelect_C::CreateAllCategoriesCategory(const class FString& CallFunc_MakeLiteralString_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "CreateAllCategoriesCategory");

	Params::UUI_CategoriesSelect_C_CreateAllCategoriesCategory_Params Parms{};

	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption = K2Node_MakeStruct_STRUCT_CustomComboBoxOption;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1 = K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCategory>           Categories                                                       (None)

void UUI_CategoriesSelect_C::OnCategoriesInfoFound(const TArray<struct FCategory>& Categories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "OnCategoriesInfoFound");

	Params::UUI_CategoriesSelect_C_OnCategoriesInfoFound_Params Parms{};

	Parms.Categories = Categories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound_Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_CategoriesSelect_C::OnCategoriesInfoFound_Error(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "OnCategoriesInfoFound_Error");

	Params::UUI_CategoriesSelect_C_OnCategoriesInfoFound_Error_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.UpdateOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Current_Class_Category_ID                                        (None)

void UUI_CategoriesSelect_C::UpdateOptions(int64 Current_Class_Category_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "UpdateOptions");

	Params::UUI_CategoriesSelect_C_UpdateOptions_Params Parms{};

	Parms.Current_Class_Category_ID = Current_Class_Category_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_CategoriesSelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "PreConstruct");

	Params::UUI_CategoriesSelect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnOptionSelectedInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)
// int64                              ID                                                               (None)
// class UUI_CustomComboBoxOption_C*  OptionWidget                                                     (None)

void UUI_CategoriesSelect_C::OnOptionSelectedInterface(const class FString& Option, int64 ID, class UUI_CustomComboBoxOption_C* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "OnOptionSelectedInterface");

	Params::UUI_CategoriesSelect_C_OnOptionSelectedInterface_Params Parms{};

	Parms.Option = Option;
	Parms.ID = ID;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.ExecuteUbergraph_UI_CategoriesSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// struct FCategory                   CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FSTRUCT_SubOptions          K2Node_MakeStruct_STRUCT_SubOptions                              (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              K2Node_Event_Current_Class_Category_ID                           (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// struct FCFCoreGetCategoriesFilter  CallFunc_MakeGetCategoriesFilter_ReturnValue                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// struct FSTRUCT_CustomComboBoxOptionCallFunc_Array_Get_Item_1                                        (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (Edit, ZeroConstructor)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class FString                      K2Node_Event_Option                                              (AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              K2Node_Event_ID                                                  (None)
// class UUI_CustomComboBoxOption_C*  K2Node_Event_OptionWidget                                        (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// struct FCategory                   CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue_1                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (None)

void UUI_CategoriesSelect_C::ExecuteUbergraph_UI_CategoriesSelect(int32 EntryPoint, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<struct FCategory>& K2Node_CustomEvent_categories, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FCFCoreError& K2Node_CustomEvent_error, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FCategory& CallFunc_Array_Get_Item, const struct FSTRUCT_SubOptions& K2Node_MakeStruct_STRUCT_SubOptions, int64 K2Node_Event_Current_Class_Category_ID, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_Event_IsDesignTime, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, int32 Temp_int_Array_Index_Variable_1, const struct FCategory& CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, bool CallFunc_EqualEqual_Int64Int64_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "ExecuteUbergraph_UI_CategoriesSelect");

	Params::UUI_CategoriesSelect_C_ExecuteUbergraph_UI_CategoriesSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_categories = K2Node_CustomEvent_categories;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_STRUCT_SubOptions = K2Node_MakeStruct_STRUCT_SubOptions;
	Parms.K2Node_Event_Current_Class_Category_ID = K2Node_Event_Current_Class_Category_ID;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_MakeGetCategoriesFilter_ReturnValue = CallFunc_MakeGetCategoriesFilter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentActivePage_CurrentPage = CallFunc_GetCurrentActivePage_CurrentPage;
	Parms.CallFunc_GetCurrentActivePage_CurrentActiveTab = CallFunc_GetCurrentActivePage_CurrentActiveTab;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Option = K2Node_Event_Option;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_Event_OptionWidget = K2Node_Event_OptionWidget;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption = K2Node_MakeStruct_STRUCT_CustomComboBoxOption;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue_1 = CallFunc_EqualEqual_Int64Int64_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnGenerated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CategoriesSelect_C::OnGenerated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CategoriesSelect_C", "OnGenerated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


