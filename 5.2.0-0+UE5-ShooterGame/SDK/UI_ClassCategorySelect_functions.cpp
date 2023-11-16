#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ClassCategorySelect.UI_ClassCategorySelect_C
// (None)

class UClass* UUI_ClassCategorySelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ClassCategorySelect_C");

	return Clss;
}


// UI_ClassCategorySelect_C UI_ClassCategorySelect.Default__UI_ClassCategorySelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ClassCategorySelect_C* UUI_ClassCategorySelect_C::GetDefaultObj()
{
	static class UUI_ClassCategorySelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ClassCategorySelect_C*>(UUI_ClassCategorySelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.DoesModBelongToCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstalledMod               Mod_List                                                         (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FCategory                   Category                                                         (None)
// bool                               IsPresent                                                        (None)
// int32                              CurrentNum                                                       (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UUI_ClassCategorySelect_C::DoesModBelongToCategory(const struct FInstalledMod& Mod_List, const struct FCategory& Category, bool IsPresent, int32 CurrentNum, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "DoesModBelongToCategory");

	Params::UUI_ClassCategorySelect_C_DoesModBelongToCategory_Params Parms{};

	Parms.Mod_List = Mod_List;
	Parms.Category = Category;
	Parms.IsPresent = IsPresent;
	Parms.CurrentNum = CurrentNum;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.FilterToModsOfClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FInstallProgressMod> Mod_List                                                         (ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FCategory                   Category                                                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FInstallProgressMod> ListOfMods                                                       (ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FInstallProgressMod> TempListToReturn                                                 (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CurrentNum                                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (None)

void UUI_ClassCategorySelect_C::FilterToModsOfClass(const TArray<struct FInstallProgressMod>& Mod_List, const struct FCategory& Category, const TArray<struct FInstallProgressMod>& ListOfMods, const TArray<struct FInstallProgressMod>& TempListToReturn, int32 CurrentNum, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "FilterToModsOfClass");

	Params::UUI_ClassCategorySelect_C_FilterToModsOfClass_Params Parms{};

	Parms.Mod_List = Mod_List;
	Parms.Category = Category;
	Parms.ListOfMods = ListOfMods;
	Parms.TempListToReturn = TempListToReturn;
	Parms.CurrentNum = CurrentNum;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.SetCategoryUnderlineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Button_ClassCategory_C*  SelectedCategoryWidgetRef                                        (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UUI_Button_ClassCategory_C*  CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UUI_ClassCategorySelect_C::SetCategoryUnderlineColor(class UUI_Button_ClassCategory_C* SelectedCategoryWidgetRef, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUI_Button_ClassCategory_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "SetCategoryUnderlineColor");

	Params::UUI_ClassCategorySelect_C_SetCategoryUnderlineColor_Params Parms{};

	Parms.SelectedCategoryWidgetRef = SelectedCategoryWidgetRef;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.Check Num Of Mods In Each Class
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCategory                   Category                                                         (ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              NumberInInt                                                      (None)
// class FText                        NumberInTXT                                                      (AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CurrentNum                                                       (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)

void UUI_ClassCategorySelect_C::Check_Num_Of_Mods_In_Each_Class(const struct FCategory& Category, int32 NumberInInt, class FText NumberInTXT, int32 CurrentNum, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "Check Num Of Mods In Each Class");

	Params::UUI_ClassCategorySelect_C_Check_Num_Of_Mods_In_Each_Class_Params Parms{};

	Parms.Category = Category;
	Parms.NumberInInt = NumberInInt;
	Parms.NumberInTXT = NumberInTXT;
	Parms.CurrentNum = CurrentNum;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCategory>           Categories                                                       (None)

void UUI_ClassCategorySelect_C::OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassCategoriesInfoFound");

	Params::UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Params Parms{};

	Parms.Categories = Categories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound_Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_ClassCategorySelect_C::OnClassCategoriesInfoFound_Error(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassCategoriesInfoFound_Error");

	Params::UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Error_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.SortClassCategories
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::SortClassCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "SortClassCategories");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_ClassCategorySelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "PreConstruct");

	Params::UUI_ClassCategorySelect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.UpdateNumOfModsInCategories
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClassCategoriesLocal_                                            (None)

void UUI_ClassCategorySelect_C::UpdateNumOfModsInCategories(bool ClassCategoriesLocal_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "UpdateNumOfModsInCategories");

	Params::UUI_ClassCategorySelect_C_UpdateNumOfModsInCategories_Params Parms{};

	Parms.ClassCategoriesLocal_ = ClassCategoriesLocal_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ClearNumOfModsInCategories
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClassCategoriesLocal_                                            (None)

void UUI_ClassCategorySelect_C::ClearNumOfModsInCategories(bool ClassCategoriesLocal_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "ClearNumOfModsInCategories");

	Params::UUI_ClassCategorySelect_C_ClearNumOfModsInCategories_Params Parms{};

	Parms.ClassCategoriesLocal_ = ClassCategoriesLocal_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ConstructClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::ConstructClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "ConstructClass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ExecuteUbergraph_UI_ClassCategorySelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FText                        Temp_text_Variable                                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// struct FCFCoreGetCategoriesFilter  CallFunc_MakeGetCategoriesFilter_ReturnValue                     (None)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// int32                              Temp_int_Array_Index_Variable_3                                  (None)
// struct FCategory                   CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FCategory                   CallFunc_Array_Get_Item_1                                        (SimpleDisplay, BlueprintCallable, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// bool                               K2Node_CustomEvent_ClassCategoriesLocal__1                       (None)
// class UUI_Button_ClassCategory_C*  CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt             (None)
// class FText                        CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT             (SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// class UUI_Button_ClassCategory_C*  CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// bool                               K2Node_CustomEvent_ClassCategoriesLocal_                         (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (Edit, ZeroConstructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class UUI_Button_ClassCategory_C*  CallFunc_Array_Get_Item_3                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (None)

void UUI_ClassCategorySelect_C::ExecuteUbergraph_UI_ClassCategorySelect(int32 EntryPoint, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, const TArray<struct FCategory>& K2Node_CustomEvent_categories, int32 CallFunc_Array_Length_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, const struct FCategory& CallFunc_Array_Get_Item, const struct FCategory& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_ClassCategoriesLocal__1, class UUI_Button_ClassCategory_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_Button_ClassCategory_C* CallFunc_Create_ReturnValue, bool K2Node_CustomEvent_ClassCategoriesLocal_, int32 CallFunc_Array_Add_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable_1, class UUI_Button_ClassCategory_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "ExecuteUbergraph_UI_ClassCategorySelect");

	Params::UUI_ClassCategorySelect_C_ExecuteUbergraph_UI_ClassCategorySelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeGetCategoriesFilter_ReturnValue = CallFunc_MakeGetCategoriesFilter_ReturnValue;
	Parms.K2Node_CustomEvent_categories = K2Node_CustomEvent_categories;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_ClassCategoriesLocal__1 = K2Node_CustomEvent_ClassCategoriesLocal__1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt = CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt;
	Parms.CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT = CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_ClassCategoriesLocal_ = K2Node_CustomEvent_ClassCategoriesLocal_;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassesInit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::OnClassesInit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassesInit__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnSelectionChanged_ED__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::OnSelectionChanged_ED__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnSelectionChanged_ED__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


