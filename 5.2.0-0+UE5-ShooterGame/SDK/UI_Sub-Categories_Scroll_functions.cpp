#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C
// (None)

class UClass* UUI_SubMinusCategories_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Sub-Categories_Scroll_C");

	return Clss;
}


// UI_Sub-Categories_Scroll_C UI_Sub-Categories_Scroll.Default__UI_Sub-Categories_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SubMinusCategories_Scroll_C* UUI_SubMinusCategories_Scroll_C::GetDefaultObj()
{
	static class UUI_SubMinusCategories_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SubMinusCategories_Scroll_C*>(UUI_SubMinusCategories_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)

void UUI_SubMinusCategories_Scroll_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnKeyDown");

	Params::UUI_SubMinusCategories_Scroll_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Create Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::Event_Create_Scroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Create Scroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event On Subcategory Select Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (None)
// int64                              SubCategoryID                                                    (None)

void UUI_SubMinusCategories_Scroll_C::Event_On_Subcategory_Select_Event(const class FString& SubCategory, int64 SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event On Subcategory Select Event");

	Params::UUI_SubMinusCategories_Scroll_C_Event_On_Subcategory_Select_Event_Params Parms{};

	Parms.SubCategory = SubCategory;
	Parms.SubCategoryID = SubCategoryID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Is Still Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::Event_Is_Still_Hovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Is Still Hovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Check If Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SubMinusCategory_C*      SubCategoryWidget_Ref                                            (None)
// class FString                      Text                                                             (None)

void UUI_SubMinusCategories_Scroll_C::Event_Check_If_Selected(class UUI_SubMinusCategory_C* SubCategoryWidget_Ref, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Check If Selected");

	Params::UUI_SubMinusCategories_Scroll_C_Event_Check_If_Selected_Params Parms{};

	Parms.SubCategoryWidget_Ref = SubCategoryWidget_Ref;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUI_SubMinusCategories_Scroll_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnRemovedFromFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUI_SubMinusCategories_Scroll_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnAddedToFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.ExecuteUbergraph_UI_Sub-Categories_Scroll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// class UUI_SubMinusCategory_C*      CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class FString                      K2Node_CustomEvent_SubCategory                                   (ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class UUI_SubMinusCategory_C*      K2Node_CustomEvent_SubCategoryWidget_Ref                         (Edit, ZeroConstructor)
// class FString                      K2Node_CustomEvent_Text                                          (BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (None)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)

void UUI_SubMinusCategories_Scroll_C::ExecuteUbergraph_UI_SubMinusCategories_Scroll(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class UUI_SubMinusCategory_C* CallFunc_Create_ReturnValue, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, int32 Temp_int_Array_Index_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_SubMinusCategory_C* K2Node_CustomEvent_SubCategoryWidget_Ref, const class FString& K2Node_CustomEvent_Text, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "ExecuteUbergraph_UI_Sub-Categories_Scroll");

	Params::UUI_SubMinusCategories_Scroll_C_ExecuteUbergraph_UI_SubMinusCategories_Scroll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_SubCategory = K2Node_CustomEvent_SubCategory;
	Parms.K2Node_CustomEvent_SubCategoryID = K2Node_CustomEvent_SubCategoryID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_SubCategoryWidget_Ref = K2Node_CustomEvent_SubCategoryWidget_Ref;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.PreRemoval__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::PreRemoval__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "PreRemoval__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnSubcategorySelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (None)
// int64                              SubCategoryID                                                    (None)

void UUI_SubMinusCategories_Scroll_C::OnSubcategorySelect__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnSubcategorySelect__DelegateSignature");

	Params::UUI_SubMinusCategories_Scroll_C_OnSubcategorySelect__DelegateSignature_Params Parms{};

	Parms.SubCategory = SubCategory;
	Parms.SubCategoryID = SubCategoryID;

	UObject::ProcessEvent(Func, &Parms);

}

}


