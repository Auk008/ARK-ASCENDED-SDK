#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C
// (None)

class UClass* UASAUIWidget_HorizontalListSelector_Main_Style1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUIWidget_HorizontalListSelector_Main_Style1_C");

	return Clss;
}


// ASAUIWidget_HorizontalListSelector_Main_Style1_C ASAUIWidget_HorizontalListSelector_Main_Style1.Default__ASAUIWidget_HorizontalListSelector_Main_Style1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUIWidget_HorizontalListSelector_Main_Style1_C* UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetDefaultObj()
{
	static class UASAUIWidget_HorizontalListSelector_Main_Style1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUIWidget_HorizontalListSelector_Main_Style1_C*>(UASAUIWidget_HorizontalListSelector_Main_Style1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (None)
// bool                               Valid                                                            (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UASAUIWidget_Button_Style2A_C*K2Node_Select_Default                                            (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::SetToIndex(int32 NewIndex, bool Valid, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C* K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SetToIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToIndex_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.Valid = Valid;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetEnabledStateOfButtonIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)
// bool                               Enabled_                                                         (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::SetEnabledStateOfButtonIndex(int32 Index, bool Enabled_, bool CallFunc_Array_IsValidIndex_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SetEnabledStateOfButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetEnabledStateOfButtonIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Enabled_ = Enabled_;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetPreviousAvailableButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartingIndex                                                    (None)
// int32                              FirstButton                                                      (None)
// int32                              FoundNextButton                                                  (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_GetLastAvailableButtonIndex_FirstButton                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              CallFunc_GetLastAvailableButtonIndex_FirstButton_1               (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetPreviousAvailableButtonIndex(int32 StartingIndex, int32 FirstButton, int32 FoundNextButton, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton_1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "GetPreviousAvailableButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetPreviousAvailableButtonIndex_Params Parms{};

	Parms.StartingIndex = StartingIndex;
	Parms.FirstButton = FirstButton;
	Parms.FoundNextButton = FoundNextButton;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLastAvailableButtonIndex_FirstButton = CallFunc_GetLastAvailableButtonIndex_FirstButton;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLastAvailableButtonIndex_FirstButton_1 = CallFunc_GetLastAvailableButtonIndex_FirstButton_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetNextAvailableButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartingIndex                                                    (None)
// int32                              FirstButton                                                      (None)
// int32                              FoundNextButton                                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              CallFunc_Get_First_Available_Button_Index_FirstButton            (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Get_First_Available_Button_Index_FirstButton_1          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetNextAvailableButtonIndex(int32 StartingIndex, int32 FirstButton, int32 FoundNextButton, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Get_First_Available_Button_Index_FirstButton, int32 Temp_int_Variable, int32 CallFunc_Get_First_Available_Button_Index_FirstButton_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "GetNextAvailableButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetNextAvailableButtonIndex_Params Parms{};

	Parms.StartingIndex = StartingIndex;
	Parms.FirstButton = FirstButton;
	Parms.FoundNextButton = FoundNextButton;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_First_Available_Button_Index_FirstButton = CallFunc_Get_First_Available_Button_Index_FirstButton;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Get_First_Available_Button_Index_FirstButton_1 = CallFunc_Get_First_Available_Button_Index_FirstButton_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetLastAvailableButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FirstButton                                                      (None)
// int32                              FoundFirstButton                                                 (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::GetLastAvailableButtonIndex(int32 FirstButton, int32 FoundFirstButton, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "GetLastAvailableButtonIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetLastAvailableButtonIndex_Params Parms{};

	Parms.FirstButton = FirstButton;
	Parms.FoundFirstButton = FoundFirstButton;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Get First Available Button Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FirstButton                                                      (None)
// int32                              FoundFirstButton                                                 (None)
// bool                               Temp_bool_Variable                                               (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::Get_First_Available_Button_Index(int32 FirstButton, int32 FoundFirstButton, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Get First Available Button Index");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Get_First_Available_Button_Index_Params Parms{};

	Parms.FirstButton = FirstButton;
	Parms.FoundFirstButton = FoundFirstButton;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.FixConsoleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// class ABasePlayerController*       K2Node_DynamicCast_AsBase_Player_Controller                      (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::FixConsoleIcons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "FixConsoleIcons");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_FixConsoleIcons_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Player_Controller = K2Node_DynamicCast_AsBase_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsImage = K2Node_DynamicCast_AsImage;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SwitchButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (None)
// class UWidget*                     Widget                                                           (Edit, ZeroConstructor)
// class UASAUIWidget_Button_Style2A_C*NewLocalVar                                                      (Edit, ZeroConstructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// int32                              CallFunc_GetPreviousAvailableButtonIndex_FirstButton             (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_GetNextAvailableButtonIndex_FirstButton                 (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item_1                                        (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::SwitchButton(bool Next, class UWidget* Widget, class UASAUIWidget_Button_Style2A_C* NewLocalVar, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetPreviousAvailableButtonIndex_FirstButton, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, int32 CallFunc_GetNextAvailableButtonIndex_FirstButton, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SwitchButton");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SwitchButton_Params Parms{};

	Parms.Next = Next;
	Parms.Widget = Widget;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetPreviousAvailableButtonIndex_FirstButton = CallFunc_GetPreviousAvailableButtonIndex_FirstButton;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNextAvailableButtonIndex_FirstButton = CallFunc_GetNextAvailableButtonIndex_FirstButton;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Set All Buttons Inactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::Set_All_Buttons_Inactive(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Set All Buttons Inactive");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Set_All_Buttons_Inactive_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "PreConstruct");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.UpdateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::UpdateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "UpdateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "Tick");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToSpecificIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::SetToSpecificIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "SetToSpecificIndex");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToSpecificIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Variable                                                (None)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UPrimalUI*                   K2Node_DynamicCast_AsPrimal_UI                                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (None)
// int32                              Temp_int_Variable_1                                              (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_4                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_5                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_6                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_7                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_8                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_9                           (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_10                          (None)
// TArray<class UASAUIWidget_Button_Style2A_C*>K2Node_MakeArray_Array                                           (Edit, ZeroConstructor)
// class UASAUIWidget_Button_Style2A_C*CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// int32                              Temp_int_Variable_2                                              (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (None)
// class UTexture2D*                  CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// int32                              K2Node_ComponentBoundEvent_Index                                 (None)
// bool                               CallFunc_SetToIndex_Valid                                        (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1(int32 EntryPoint, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item, class UPrimalUI* K2Node_DynamicCast_AsPrimal_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue_8, bool CallFunc_NotEqual_IntInt_ReturnValue_9, bool CallFunc_NotEqual_IntInt_ReturnValue_10, const TArray<class UASAUIWidget_Button_Style2A_C*>& K2Node_MakeArray_Array, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, class UTexture2D* CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_SetToIndex_Valid, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPrimal_UI = K2Node_DynamicCast_AsPrimal_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_4 = CallFunc_NotEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_5 = CallFunc_NotEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_6 = CallFunc_NotEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_7 = CallFunc_NotEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_8 = CallFunc_NotEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_9 = CallFunc_NotEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_10 = CallFunc_NotEqual_IntInt_ReturnValue_10;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_SetToIndex_Valid = CallFunc_SetToIndex_Valid;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChangedIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChangedIndex__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChangedIndex__DelegateSignature");

	Params::UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChangedIndex__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_10__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_10__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_10__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_9__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_9__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_9__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_8__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_8__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_8__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_7__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_7__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_7__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_6__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_6__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_6__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_5__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_5__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_4__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_3__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_1__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUIWidget_HorizontalListSelector_Main_Style1_C::OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUIWidget_HorizontalListSelector_Main_Style1_C", "OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


