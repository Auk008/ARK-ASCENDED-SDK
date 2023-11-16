#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomComboBoxOption.UI_CustomComboBoxOption_C
// (None)

class UClass* UUI_CustomComboBoxOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomComboBoxOption_C");

	return Clss;
}


// UI_CustomComboBoxOption_C UI_CustomComboBoxOption.Default__UI_CustomComboBoxOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomComboBoxOption_C* UUI_CustomComboBoxOption_C::GetDefaultObj()
{
	static class UUI_CustomComboBoxOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomComboBoxOption_C*>(UUI_CustomComboBoxOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)
// int64                              ID                                                               (None)
// TScriptInterface<class IBPI_CustomComboBoxInterface_C>K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface              (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_CustomComboBoxOption_C::OnOptionSelected(const class FString& Option, int64 ID, TScriptInterface<class IBPI_CustomComboBoxInterface_C> K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnOptionSelected");

	Params::UUI_CustomComboBoxOption_C_OnOptionSelected_Params Parms{};

	Parms.Option = Option;
	Parms.ID = ID;
	Parms.K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface = K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.UpdateHoveredOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UUI_CustomComboBoxOption_C::UpdateHoveredOption(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "UpdateHoveredOption");

	Params::UUI_CustomComboBoxOption_C_UpdateHoveredOption_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnNavRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor)
// class UUI_SubMinusCategory_C*      K2Node_DynamicCast_AsUI_Sub__Category                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_CustomComboBoxOption_C::OnNavRight(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_SubMinusCategory_C* K2Node_DynamicCast_AsUI_Sub__Category, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnNavRight");

	Params::UUI_CustomComboBoxOption_C_OnNavRight_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Sub__Category = K2Node_DynamicCast_AsUI_Sub__Category;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UUI_CustomComboBoxOption_C::RemoveSpacingIfNotHaveArrow(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "RemoveSpacingIfNotHaveArrow");

	Params::UUI_CustomComboBoxOption_C_RemoveSpacingIfNotHaveArrow_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::RemoveSpacingIfNotHaveImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "RemoveSpacingIfNotHaveImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.CheckIfSubCategorySelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SelectedOption                                                   (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               IsSelected                                                       (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)

void UUI_CustomComboBoxOption_C::CheckIfSubCategorySelected(const class FString& SelectedOption, bool IsSelected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "CheckIfSubCategorySelected");

	Params::UUI_CustomComboBoxOption_C_CheckIfSubCategorySelected_Params Parms{};

	Parms.SelectedOption = SelectedOption;
	Parms.IsSelected = IsSelected;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (None)

void UUI_CustomComboBoxOption_C::OnUpdate(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_HasAnyUserFocus_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnUpdate");

	Params::UUI_CustomComboBoxOption_C_OnUpdate_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ContinueUpdating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (None)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (None)

void UUI_CustomComboBoxOption_C::ContinueUpdating(bool CallFunc_K2_TimerExists_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "ContinueUpdating");

	Params::UUI_CustomComboBoxOption_C_ContinueUpdating_Params Parms{};

	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.StopUpdating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::StopUpdating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "StopUpdating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnFail_2F79E7094E3FA19CAF12DEBE91370E8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_CustomComboBoxOption_C::OnFail_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnFail_2F79E7094E3FA19CAF12DEBE91370E8A");

	Params::UUI_CustomComboBoxOption_C_OnFail_2F79E7094E3FA19CAF12DEBE91370E8A_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_CustomComboBoxOption_C::OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A");

	Params::UUI_CustomComboBoxOption_C_OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event On Sub Option Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (None)
// int64                              SubCategoryID                                                    (None)

void UUI_CustomComboBoxOption_C::Event_On_Sub_Option_Clicked(const class FString& SubCategory, int64 SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event On Sub Option Clicked");

	Params::UUI_CustomComboBoxOption_C_Event_On_Sub_Option_Clicked_Params Parms{};

	Parms.SubCategory = SubCategory;
	Parms.SubCategoryID = SubCategoryID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Check If Still Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Check_If_Still_Hovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Check If Still Hovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Check If Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Check_If_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Check If Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUI_CustomComboBoxOption_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnAddedToFocusPath");

	Params::UUI_CustomComboBoxOption_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (None)

void UUI_CustomComboBoxOption_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnRemovedFromFocusPath");

	Params::UUI_CustomComboBoxOption_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Update Navigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLast                                                           (None)

void UUI_CustomComboBoxOption_C::Event_Update_Navigation(bool IsLast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Update Navigation");

	Params::UUI_CustomComboBoxOption_C_Event_Update_Navigation_Params Parms{};

	Parms.IsLast = IsLast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Remove Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Remove_Scroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Remove Scroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_CustomComboBoxOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "PreConstruct");

	Params::UUI_CustomComboBoxOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ExecuteUbergraph_UI_CustomComboBoxOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// enum class EUINavigationRule       Temp_byte_Variable                                               (None)
// enum class EUINavigationRule       Temp_byte_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               Temp_bool_Variable_2                                             (None)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ZeroConstructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// class FString                      K2Node_CustomEvent_SubCategory                                   (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (None)
// bool                               CallFunc_CheckIfSubCategorySelected_IsSelected                   (None)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (None)
// float                              CallFunc_GetViewportScale_ReturnValue                            (None)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (None)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ZeroConstructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (None)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor)
// bool                               K2Node_CustomEvent_IsLast                                        (None)
// class UUI_SubMinusCategories_Scroll_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor)
// enum class EUINavigationRule       K2Node_Select_Default                                            (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor)
// bool                               Temp_bool_Variable_3                                             (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (None)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)

void UUI_CustomComboBoxOption_C::ExecuteUbergraph_UI_CustomComboBoxOption(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class EUINavigationRule Temp_byte_Variable, enum class EUINavigationRule Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility Temp_byte_Variable_2, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_CheckIfSubCategorySelected_IsSelected, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_Array_Length_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_CustomEvent_IsLast, class UUI_SubMinusCategories_Scroll_C* CallFunc_Create_ReturnValue, enum class EUINavigationRule K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable_3, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, enum class ESlateVisibility Temp_byte_Variable_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "ExecuteUbergraph_UI_CustomComboBoxOption");

	Params::UUI_CustomComboBoxOption_C_ExecuteUbergraph_UI_CustomComboBoxOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CustomEvent_SubCategory = K2Node_CustomEvent_SubCategory;
	Parms.K2Node_CustomEvent_SubCategoryID = K2Node_CustomEvent_SubCategoryID;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_CheckIfSubCategorySelected_IsSelected = CallFunc_CheckIfSubCategorySelected_IsSelected;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_GetViewportScale_ReturnValue = CallFunc_GetViewportScale_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_IsLast = K2Node_CustomEvent_IsLast;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


