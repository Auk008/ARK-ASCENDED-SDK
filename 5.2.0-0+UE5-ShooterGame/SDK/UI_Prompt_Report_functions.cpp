#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Prompt_Report.UI_Prompt_Report_C
// (None)

class UClass* UUI_Prompt_Report_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Prompt_Report_C");

	return Clss;
}


// UI_Prompt_Report_C UI_Prompt_Report.Default__UI_Prompt_Report_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Prompt_Report_C* UUI_Prompt_Report_C::GetDefaultObj()
{
	static class UUI_Prompt_Report_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Prompt_Report_C*>(UUI_Prompt_Report_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Prompt_Report.UI_Prompt_Report_C.CheckIfDropLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Len_ReturnValue                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Len_ReturnValue_1                                       (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (None)
// int32                              CallFunc_Len_ReturnValue_2                                       (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)
// int32                              CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Variable_1                                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (None)

void UUI_Prompt_Report_C::CheckIfDropLine(class FText Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue_2, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "CheckIfDropLine");

	Params::UUI_Prompt_Report_C_CheckIfDropLine_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue_2 = CallFunc_Len_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.AddReasonOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FReportingReason            CallFunc_Array_Get_Item                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption_1                  (None)

void UUI_Prompt_Report_C::AddReasonOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, const struct FReportingReason& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "AddReasonOptions");

	Params::UUI_Prompt_Report_C_AddReasonOptions_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption = K2Node_MakeStruct_STRUCT_CustomComboBoxOption;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1 = K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)

void UUI_Prompt_Report_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "OnKeyDown");

	Params::UUI_Prompt_Report_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_MultiLineTextBox_Description_K2Node_ComponentBoundEvent_14_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)

void UUI_Prompt_Report_C::BndEvt__Report_UI_MultiLineTextBox_Description_K2Node_ComponentBoundEvent_14_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_MultiLineTextBox_Description_K2Node_ComponentBoundEvent_14_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UUI_Prompt_Report_C_BndEvt__Report_UI_MultiLineTextBox_Description_K2Node_ComponentBoundEvent_14_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_Submit_B_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::BndEvt__Report_UI_Submit_B_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_Submit_B_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.BndEvt__Report_UI_SortBySelect_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)

void UUI_Prompt_Report_C::BndEvt__Report_UI_SortBySelect_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "BndEvt__Report_UI_SortBySelect_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature");

	Params::UUI_Prompt_Report_C_BndEvt__Report_UI_SortBySelect_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.Event On Successfully Reported
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_Report_C::Event_On_Successfully_Reported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "Event On Successfully Reported");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.Event On Failed Reporting
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_Prompt_Report_C::Event_On_Failed_Reporting(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "Event On Failed Reporting");

	Params::UUI_Prompt_Report_C_Event_On_Failed_Reporting_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.Event On Failed Get Report Reasons
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_Prompt_Report_C::Event_On_Failed_Get_Report_Reasons(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "Event On Failed Get Report Reasons");

	Params::UUI_Prompt_Report_C_Event_On_Failed_Get_Report_Reasons_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.Event On Get Reporting Reasons
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FReportingReason>    Reasons                                                          (None)

void UUI_Prompt_Report_C::Event_On_Get_Reporting_Reasons(const TArray<struct FReportingReason>& Reasons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "Event On Get Reporting Reasons");

	Params::UUI_Prompt_Report_C_Event_On_Get_Reporting_Reasons_Params Parms{};

	Parms.Reasons = Reasons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_Report.UI_Prompt_Report_C.ExecuteUbergraph_UI_Prompt_Report
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsHovered_ReturnValue                                   (None)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      K2Node_ComponentBoundEvent_Option                                (ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FReportingReason>    K2Node_CustomEvent_reasons                                       (ContainsInstancedReference, AdvancedDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FReportingReason            CallFunc_Array_Get_Item                                          (AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (None)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue_1                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (None)

void UUI_Prompt_Report_C::ExecuteUbergraph_UI_Prompt_Report(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Option, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCFCoreError& K2Node_CustomEvent_error_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, const TArray<struct FReportingReason>& K2Node_CustomEvent_reasons, const struct FReportingReason& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Report_C", "ExecuteUbergraph_UI_Prompt_Report");

	Params::UUI_Prompt_Report_C_ExecuteUbergraph_UI_Prompt_Report_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Option = K2Node_ComponentBoundEvent_Option;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_reasons = K2Node_CustomEvent_reasons;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue_1 = CallFunc_NotEqual_StriStri_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


