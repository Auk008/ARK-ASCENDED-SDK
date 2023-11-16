#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C
// (None)

class UClass* UDataListButtonVariable_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_Widget_ASA_C");

	return Clss;
}


// DataListButtonVariable_Widget_ASA_C DataListButtonVariable_Widget_ASA.Default__DataListButtonVariable_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_Widget_ASA_C* UDataListButtonVariable_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonVariable_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_Widget_ASA_C*>(UDataListButtonVariable_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.IsExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void UDataListButtonVariable_Widget_ASA_C::IsExpanded(bool ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "IsExpanded");

	Params::UDataListButtonVariable_Widget_ASA_C_IsExpanded_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.CloseSlider
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Widget_ASA_C::CloseSlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "CloseSlider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasSlider
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                     ReturnValue                                                      (ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class USlider_ASA_Widget_C*        K2Node_DynamicCast_AsSlider_ASA_Widget                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UDataListButtonVariable_Widget_ASA_C::HasSlider(class USlider* ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "HasSlider");

	Params::UDataListButtonVariable_Widget_ASA_C_HasSlider_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSlider_ASA_Widget = K2Node_DynamicCast_AsSlider_ASA_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasExpandedSlider
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                     ReturnValue                                                      (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class USlider_ASA_Widget_C*        K2Node_DynamicCast_AsSlider_ASA_Widget                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UDataListButtonVariable_Widget_ASA_C::HasExpandedSlider(class USlider* ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "HasExpandedSlider");

	Params::UDataListButtonVariable_Widget_ASA_C_HasExpandedSlider_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsSlider_ASA_Widget = K2Node_DynamicCast_AsSlider_ASA_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HideValueLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideValue                                                        (None)

void UDataListButtonVariable_Widget_ASA_C::HideValueLabel(bool HideValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "HideValueLabel");

	Params::UDataListButtonVariable_Widget_ASA_C_HideValueLabel_Params Parms{};

	Parms.HideValue = HideValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetIsSelectedBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDataListButtonVariable_Widget_ASA_C::GetIsSelectedBP(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "GetIsSelectedBP");

	Params::UDataListButtonVariable_Widget_ASA_C_GetIsSelectedBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetAllValueWidgets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (None)

void UDataListButtonVariable_Widget_ASA_C::GetAllValueWidgets(const TArray<class UWidget*>& ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "GetAllValueWidgets");

	Params::UDataListButtonVariable_Widget_ASA_C_GetAllValueWidgets_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValueOverride
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        ReturnText                                                       (Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_SelectString_ReturnValue                                (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UDataListButtonVariable_Widget_ASA_C::SetupTextValueOverride(class FText Text, class FText ReturnText, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupTextValueOverride");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupTextValueOverride_Params Parms{};

	Parms.Text = Text;
	Parms.ReturnText = ReturnText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupNewValueWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              InputPin                                                         (None)
// bool                               PreventParentCall                                                (None)
// class UUI_PCOptionsMenu*           CallFunc_GetLivePCOptionsMenu_ReturnValue                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable                                                (None)
// class FText                        CallFunc_SetupTextValue_ReturnText                               (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FText                        CallFunc_SetupTextValueOverride_ReturnText                       (None)
// float                              CallFunc_GetFloatValue_ReturnValue                               (None)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)

void UDataListButtonVariable_Widget_ASA_C::SetupNewValueWidget(const class FString& InString, int32 InputPin, bool PreventParentCall, class UUI_PCOptionsMenu* CallFunc_GetLivePCOptionsMenu_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable, class FText CallFunc_SetupTextValue_ReturnText, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_SetupTextValueOverride_ReturnText, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupNewValueWidget");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupNewValueWidget_Params Parms{};

	Parms.InString = InString;
	Parms.InputPin = InputPin;
	Parms.PreventParentCall = PreventParentCall;
	Parms.CallFunc_GetLivePCOptionsMenu_ReturnValue = CallFunc_GetLivePCOptionsMenu_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_SetupTextValue_ReturnText = CallFunc_SetupTextValue_ReturnText;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetupTextValueOverride_ReturnText = CallFunc_SetupTextValueOverride_ReturnText;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupToggledButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (None)
// bool                               FromSelectOtherOption                                            (None)

void UDataListButtonVariable_Widget_ASA_C::ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ExtraSetupToggledButton");

	Params::UDataListButtonVariable_Widget_ASA_C_ExtraSetupToggledButton_Params Parms{};

	Parms.Toggle = Toggle;
	Parms.FromSelectOtherOption = FromSelectOtherOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        ReturnText                                                       (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)

void UDataListButtonVariable_Widget_ASA_C::SetupTextValue(class FText Text, class FText ReturnText, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupTextValue_Params Parms{};

	Parms.Text = Text;
	Parms.ReturnText = ReturnText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalUserWidget*           UserWidget                                                       (None)
// int32                              Index                                                            (None)

void UDataListButtonVariable_Widget_ASA_C::ExtraSetupWidget(class UPrimalUserWidget* UserWidget, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ExtraSetupWidget");

	Params::UDataListButtonVariable_Widget_ASA_C_ExtraSetupWidget_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupOptionWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor)
// TArray<class UPrimalUserWidget*>   CallFunc_GetWidgetsToAdd_UserWidgets                             (None)

void UDataListButtonVariable_Widget_ASA_C::SetupOptionWidgets(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimalUserWidget* CallFunc_Array_Get_Item, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const TArray<class UPrimalUserWidget*>& CallFunc_GetWidgetsToAdd_UserWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetupOptionWidgets");

	Params::UDataListButtonVariable_Widget_ASA_C_SetupOptionWidgets_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetWidgetsToAdd_UserWidgets = CallFunc_GetWidgetsToAdd_UserWidgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetWidgetsToAdd
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimalUserWidget*>   UserWidgets                                                      (Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
// TArray<class UPrimalUserWidget*>   LocalWIdget                                                      (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UPrimalUserWidget*           CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UDataListButtonVariable_Widget_ASA_C::GetWidgetsToAdd(const TArray<class UPrimalUserWidget*>& UserWidgets, const TArray<class UPrimalUserWidget*>& LocalWIdget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "GetWidgetsToAdd");

	Params::UDataListButtonVariable_Widget_ASA_C_GetWidgetsToAdd_Params Parms{};

	Parms.UserWidgets = UserWidgets;
	Parms.LocalWIdget = LocalWIdget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Setup Values Index
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)
// bool                               PreventCallParent                                                (None)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_2                       (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (None)
// float                              K2Node_MakeStruct_FloatParam3_ImplicitCast                       (None)
// float                              K2Node_MakeStruct_FloatParam2_ImplicitCast                       (None)
// float                              K2Node_MakeStruct_FloatParam1_ImplicitCast                       (None)

void UDataListButtonVariable_Widget_ASA_C::Setup_Values_Index(int32 Index, bool PreventCallParent, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, double CallFunc_Conv_StringToDouble_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, float K2Node_MakeStruct_FloatParam3_ImplicitCast, float K2Node_MakeStruct_FloatParam2_ImplicitCast, float K2Node_MakeStruct_FloatParam1_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "Setup Values Index");

	Params::UDataListButtonVariable_Widget_ASA_C_Setup_Values_Index_Params Parms{};

	Parms.Index = Index;
	Parms.PreventCallParent = PreventCallParent;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_1 = CallFunc_Conv_StringToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_2 = CallFunc_Conv_StringToDouble_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.K2Node_MakeStruct_FloatParam3_ImplicitCast = K2Node_MakeStruct_FloatParam3_ImplicitCast;
	Parms.K2Node_MakeStruct_FloatParam2_ImplicitCast = K2Node_MakeStruct_FloatParam2_ImplicitCast;
	Parms.K2Node_MakeStruct_FloatParam1_ImplicitCast = K2Node_MakeStruct_FloatParam1_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UDataListButtonVariable_Widget_ASA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "PreConstruct");

	Params::UDataListButtonVariable_Widget_ASA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Set                                                              (None)
// bool                               FromSelectOtherOption                                            (None)

void UDataListButtonVariable_Widget_ASA_C::BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set, bool FromSelectOtherOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature");

	Params::UDataListButtonVariable_Widget_ASA_C_BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature_Params Parms{};

	Parms.Set = Set;
	Parms.FromSelectOtherOption = FromSelectOtherOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (None)
// struct FBPNetExecParams            ExecParams                                                       (None)

void UDataListButtonVariable_Widget_ASA_C::BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "BPExecutedCommandForPrimalUI");

	Params::UDataListButtonVariable_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Widget_ASA_C::BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetParameterValue
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (None)
// bool                               bPreventCallParent                                               (None)

void UDataListButtonVariable_Widget_ASA_C::SetParameterValue(const class FString& Value, bool bPreventCallParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetParameterValue");

	Params::UDataListButtonVariable_Widget_ASA_C_SetParameterValue_Params Parms{};

	Parms.Value = Value;
	Parms.bPreventCallParent = bPreventCallParent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.OnOverridedParameterValue
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (None)
// bool                               bPreventCallParent                                               (None)

void UDataListButtonVariable_Widget_ASA_C::OnOverridedParameterValue(const class FString& Value, bool bPreventCallParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "OnOverridedParameterValue");

	Params::UDataListButtonVariable_Widget_ASA_C_OnOverridedParameterValue_Params Parms{};

	Parms.Value = Value;
	Parms.bPreventCallParent = bPreventCallParent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetIsSelectedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (None)

void UDataListButtonVariable_Widget_ASA_C::SetIsSelectedBP(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "SetIsSelectedBP");

	Params::UDataListButtonVariable_Widget_ASA_C_SetIsSelectedBP_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.UpdateColorPicker
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ColorPickerSliderValue                                           (None)

void UDataListButtonVariable_Widget_ASA_C::UpdateColorPicker(const struct FVector2D& ColorPickerSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "UpdateColorPicker");

	Params::UDataListButtonVariable_Widget_ASA_C_UpdateColorPicker_Params Parms{};

	Parms.ColorPickerSliderValue = ColorPickerSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UDataListButtonVariable_Widget_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "Tick");

	Params::UDataListButtonVariable_Widget_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_ComponentBoundEvent_Set                                   (None)
// bool                               K2Node_ComponentBoundEvent_FromSelectOtherOption                 (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class FName                        K2Node_Event_CommandName                                         (None)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, ZeroConstructor, ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (None)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (None)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (None)
// class FString                      K2Node_Event_Value_1                                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_Event_bPreventCallParent_1                                (None)
// class FString                      K2Node_Event_Value                                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_Event_bPreventCallParent                                  (None)
// class FText                        CallFunc_SetupTextValueOverride_ReturnText                       (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
// TArray<class UDataListButtonVariable_Widget_ASA_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// bool                               K2Node_Event_Selected                                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (None)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_2                       (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_SelectString_ReturnValue                                (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_3                       (None)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FVector2D                   K2Node_Event_ColorPickerSliderValue                              (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UOverallFatMusclePicker_C*   K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ZeroConstructor)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, ZeroConstructor)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget_1                        (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// class UDataListButtonVariable_Widget_ASA_C*CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (None)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)

void UDataListButtonVariable_Widget_ASA_C::ExecuteUbergraph_DataListButtonVariable_Widget_ASA(int32 EntryPoint, bool K2Node_ComponentBoundEvent_Set, bool K2Node_ComponentBoundEvent_FromSelectOtherOption, int32 CallFunc_Array_Length_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_GetChildIndex_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const class FString& K2Node_Event_Value_1, bool K2Node_Event_bPreventCallParent_1, const class FString& K2Node_Event_Value, bool K2Node_Event_bPreventCallParent, class FText CallFunc_SetupTextValueOverride_ReturnText, const TArray<class UDataListButtonVariable_Widget_ASA_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_Selected, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_2, double CallFunc_Divide_DoubleFloat_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_Conv_StringToDouble_ReturnValue_3, class UPrimalUserWidget* CallFunc_Array_Get_Item, double CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& K2Node_Event_ColorPickerSliderValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOverallFatMusclePicker_C* K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_1, class UDataListButtonVariable_Widget_ASA_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ExecuteUbergraph_DataListButtonVariable_Widget_ASA");

	Params::UDataListButtonVariable_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Widget_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Set = K2Node_ComponentBoundEvent_Set;
	Parms.K2Node_ComponentBoundEvent_FromSelectOtherOption = K2Node_ComponentBoundEvent_FromSelectOtherOption;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_Event_Value_1 = K2Node_Event_Value_1;
	Parms.K2Node_Event_bPreventCallParent_1 = K2Node_Event_bPreventCallParent_1;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_bPreventCallParent = K2Node_Event_bPreventCallParent;
	Parms.CallFunc_SetupTextValueOverride_ReturnText = CallFunc_SetupTextValueOverride_ReturnText;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Selected = K2Node_Event_Selected;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_1 = CallFunc_Conv_StringToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_2 = CallFunc_Conv_StringToDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_3 = CallFunc_Conv_StringToDouble_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_ColorPickerSliderValue = K2Node_Event_ColorPickerSliderValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker = K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_MakeStruct_BPNetExecParams_1 = K2Node_MakeStruct_BPNetExecParams_1;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget_1 = K2Node_DynamicCast_AsPrimal_User_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ReturnValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UDataListButtonVariable_Widget_ASA_C::ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Widget_ASA_C", "ReturnValue__DelegateSignature");

	Params::UDataListButtonVariable_Widget_ASA_C_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


