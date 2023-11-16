#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapSelect_Entry.MapSelect_Entry_C
// (None)

class UClass* UMapSelect_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapSelect_Entry_C");

	return Clss;
}


// MapSelect_Entry_C MapSelect_Entry.Default__MapSelect_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapSelect_Entry_C* UMapSelect_Entry_C::GetDefaultObj()
{
	static class UMapSelect_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapSelect_Entry_C*>(UMapSelect_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapSelect_Entry.MapSelect_Entry_C.FixupComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UMapSelect_Entry_C::FixupComboBox(int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "FixupComboBox");

	Params::UMapSelect_Entry_C_FixupComboBox_Params Parms{};

	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.UpdateDeleteSaveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_HasSaveForMapIndex_ReturnValue                          (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UMapSelect_Entry_C::UpdateDeleteSaveButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasSaveForMapIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "UpdateDeleteSaveButton");

	Params::UMapSelect_Entry_C_UpdateDeleteSaveButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasSaveForMapIndex_ReturnValue = CallFunc_HasSaveForMapIndex_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)

void UMapSelect_Entry_C::IsSelected(bool Selected, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "IsSelected");

	Params::UMapSelect_Entry_C_IsSelected_Params Parms{};

	Parms.Selected = Selected;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.Set To Map Select View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMapSelectView                                                  (None)
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (None)

void UMapSelect_Entry_C::Set_To_Map_Select_View(bool IsMapSelectView, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Set To Map Select View");

	Params::UMapSelect_Entry_C_Set_To_Map_Select_View_Params Parms{};

	Parms.IsMapSelectView = IsMapSelectView;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.Show Hide Locked Images
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLocked                                                         (None)
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UMapSelect_Entry_C::Show_Hide_Locked_Images(bool IsLocked, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Show Hide Locked Images");

	Params::UMapSelect_Entry_C_Show_Hide_Locked_Images_Params Parms{};

	Parms.IsLocked = IsLocked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.SetupUsingHostSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HostSession*             HostSession                                                      (Edit, ZeroConstructor)
// class UMapSelect_Session_C*        MapSelectSession                                                 (Edit, ZeroConstructor)
// int32                              WithIndex                                                        (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (None)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UMapSelect_Entry_C::SetupUsingHostSession(class UUI_HostSession* HostSession, class UMapSelect_Session_C* MapSelectSession, int32 WithIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class FText CallFunc_GetMapInfo_OutMapName, const struct FMapDescription& CallFunc_GetMapInfo_OutDescription, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "SetupUsingHostSession");

	Params::UMapSelect_Entry_C_SetupUsingHostSession_Params Parms{};

	Parms.HostSession = HostSession;
	Parms.MapSelectSession = MapSelectSession;
	Parms.WithIndex = WithIndex;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetMapInfo_OutMapName = CallFunc_GetMapInfo_OutMapName;
	Parms.CallFunc_GetMapInfo_OutDescription = CallFunc_GetMapInfo_OutDescription;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (None)

void UMapSelect_Entry_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "SetSelected");

	Params::UMapSelect_Entry_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");

	Params::UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UMapSelect_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Tick");

	Params::UMapSelect_Entry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Entry.MapSelect_Entry_C.ExecuteUbergraph_MapSelect_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Sin_ReturnValue                                         (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// bool                               K2Node_CustomEvent_IsSelected                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (None)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (None)
// int32                              CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (None)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (None)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)

void UMapSelect_Entry_C::ExecuteUbergraph_MapSelect_Entry(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Sin_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_IsSelected, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, int32 CallFunc_GetSelectedIndex_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "ExecuteUbergraph_MapSelect_Entry");

	Params::UMapSelect_Entry_C_ExecuteUbergraph_MapSelect_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_IsSelected = K2Node_CustomEvent_IsSelected;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


