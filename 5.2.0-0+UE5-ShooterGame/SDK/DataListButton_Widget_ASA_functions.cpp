#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButton_Widget_ASA.DataListButton_Widget_ASA_C
// (None)

class UClass* UDataListButton_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButton_Widget_ASA_C");

	return Clss;
}


// DataListButton_Widget_ASA_C DataListButton_Widget_ASA.Default__DataListButton_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButton_Widget_ASA_C* UDataListButton_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButton_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButton_Widget_ASA_C*>(UDataListButton_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetIsAlternativeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (Edit, ZeroConstructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_1                                 (Edit, ZeroConstructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_2                                 (Edit, ZeroConstructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_3                                 (Edit, ZeroConstructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_4                                 (Edit, ZeroConstructor)
// int32                              CallFunc_GetVisibleChildIndex_Index                              (None)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ZeroConstructor)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_5                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              CallFunc_GetVisibleChildIndex_Index_1                            (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UDataListButton_Widget_ASA_C::GetIsAlternativeColor(bool ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, class UPanelWidget* CallFunc_GetParent_ReturnValue_2, class UPanelWidget* CallFunc_GetParent_ReturnValue_3, class UPanelWidget* CallFunc_GetParent_ReturnValue_4, int32 CallFunc_GetVisibleChildIndex_Index, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetVisibleChildIndex_Index_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetIsAlternativeColor");

	Params::UDataListButton_Widget_ASA_C_GetIsAlternativeColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue_1 = CallFunc_GetParent_ReturnValue_1;
	Parms.CallFunc_GetParent_ReturnValue_2 = CallFunc_GetParent_ReturnValue_2;
	Parms.CallFunc_GetParent_ReturnValue_3 = CallFunc_GetParent_ReturnValue_3;
	Parms.CallFunc_GetParent_ReturnValue_4 = CallFunc_GetParent_ReturnValue_4;
	Parms.CallFunc_GetVisibleChildIndex_Index = CallFunc_GetVisibleChildIndex_Index;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue_5 = CallFunc_GetParent_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetVisibleChildIndex_Index_1 = CallFunc_GetVisibleChildIndex_Index_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetVisibleChildIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Parent                                                           (Edit, ZeroConstructor)
// class UWidget*                     Widget                                                           (Edit, ZeroConstructor)
// int32                              Index                                                            (None)
// int32                              ChildrenIndex                                                    (None)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Variable                                                (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              Temp_int_Variable_1                                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)

void UDataListButton_Widget_ASA_C::GetVisibleChildIndex(class UPanelWidget* Parent, class UWidget* Widget, int32 Index, int32 ChildrenIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "GetVisibleChildIndex");

	Params::UDataListButton_Widget_ASA_C_GetVisibleChildIndex_Params Parms{};

	Parms.Parent = Parent;
	Parms.Widget = Widget;
	Parms.Index = Index;
	Parms.ChildrenIndex = ChildrenIndex;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.UpdateColorBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)

void UDataListButton_Widget_ASA_C::UpdateColorBrush(const struct FLinearColor& InBrushColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "UpdateColorBrush");

	Params::UDataListButton_Widget_ASA_C_UpdateColorBrush_Params Parms{};

	Parms.InBrushColor = InBrushColor;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetupToggledState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (None)
// bool                               FromSelectOtherOption                                            (None)
// bool                               CallFunc_GetIsAlternativeColor_ReturnValue                       (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (None)

void UDataListButton_Widget_ASA_C::SetupToggledState(bool Condition, bool FromSelectOtherOption, bool CallFunc_GetIsAlternativeColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetupToggledState");

	Params::UDataListButton_Widget_ASA_C_SetupToggledState_Params Parms{};

	Parms.Condition = Condition;
	Parms.FromSelectOtherOption = FromSelectOtherOption;
	Parms.CallFunc_GetIsAlternativeColor_ReturnValue = CallFunc_GetIsAlternativeColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListButton_Widget_ASA_C::BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButton_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UDataListButton_Widget_ASA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "PreConstruct");

	Params::UDataListButton_Widget_ASA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetTextButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (None)
// bool                               CanEditTextVariable                                              (None)
// bool                               UseOverrideValueText                                             (None)

void UDataListButton_Widget_ASA_C::SetTextButton(class FText NewText, bool CanEditTextVariable, bool UseOverrideValueText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetTextButton");

	Params::UDataListButton_Widget_ASA_C_SetTextButton_Params Parms{};

	Parms.NewText = NewText;
	Parms.CanEditTextVariable = CanEditTextVariable;
	Parms.UseOverrideValueText = UseOverrideValueText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetValueText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ValueText                                                        (None)

void UDataListButton_Widget_ASA_C::SetValueText(class FText ValueText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "SetValueText");

	Params::UDataListButton_Widget_ASA_C_SetValueText_Params Parms{};

	Parms.ValueText = ValueText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UDataListButton_Widget_ASA_C::BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UDataListButton_Widget_ASA_C_BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UDataListButton_Widget_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "Tick");

	Params::UDataListButton_Widget_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ExecuteUbergraph_DataListButton_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// class FText                        K2Node_CustomEvent_NewText                                       (AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_CustomEvent_CanEditTextVariable                           (None)
// bool                               K2Node_CustomEvent_UseOverrideValueText                          (None)
// class FText                        K2Node_CustomEvent_ValueText                                     (ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (None)
// bool                               CallFunc_GetToggledState_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (None)

void UDataListButton_Widget_ASA_C::ExecuteUbergraph_DataListButton_Widget_ASA(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class FText K2Node_CustomEvent_NewText, bool K2Node_CustomEvent_CanEditTextVariable, bool K2Node_CustomEvent_UseOverrideValueText, class FText K2Node_CustomEvent_ValueText, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_GetToggledState_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_HasKeyboardFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ExecuteUbergraph_DataListButton_Widget_ASA");

	Params::UDataListButton_Widget_ASA_C_ExecuteUbergraph_DataListButton_Widget_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CustomEvent_NewText = K2Node_CustomEvent_NewText;
	Parms.K2Node_CustomEvent_CanEditTextVariable = K2Node_CustomEvent_CanEditTextVariable;
	Parms.K2Node_CustomEvent_UseOverrideValueText = K2Node_CustomEvent_UseOverrideValueText;
	Parms.K2Node_CustomEvent_ValueText = K2Node_CustomEvent_ValueText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_GetToggledState_ReturnValue = CallFunc_GetToggledState_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ToggledState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Set                                                              (None)
// bool                               FromSelectOtherOption                                            (None)

void UDataListButton_Widget_ASA_C::ToggledState__DelegateSignature(bool Set, bool FromSelectOtherOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_Widget_ASA_C", "ToggledState__DelegateSignature");

	Params::UDataListButton_Widget_ASA_C_ToggledState__DelegateSignature_Params Parms{};

	Parms.Set = Set;
	Parms.FromSelectOtherOption = FromSelectOtherOption;

	UObject::ProcessEvent(Func, &Parms);

}

}


