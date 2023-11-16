#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapSelect_Session.MapSelect_Session_C
// (None)

class UClass* UMapSelect_Session_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapSelect_Session_C");

	return Clss;
}


// MapSelect_Session_C MapSelect_Session.Default__MapSelect_Session_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapSelect_Session_C* UMapSelect_Session_C::GetDefaultObj()
{
	static class UMapSelect_Session_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapSelect_Session_C*>(UMapSelect_Session_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapSelect_Session.MapSelect_Session_C.SearchAndCreateModMaps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UDataListEntryButton_HostSession*>CallFunc_GetModMaps_ReturnValue                                  (Edit, ZeroConstructor)
// class UMapSelect_Entry_C*          CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (None)

void UMapSelect_Session_C::SearchAndCreateModMaps(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UDataListEntryButton_HostSession*>& CallFunc_GetModMaps_ReturnValue, class UMapSelect_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "SearchAndCreateModMaps");

	Params::UMapSelect_Session_C_SearchAndCreateModMaps_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetModMaps_ReturnValue = CallFunc_GetModMaps_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.Select Map Button Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UUI_GenericConfirmationDialog*CallFunc_ShowDLCConfirmationDialog_ReturnValue                   (None)
// bool                               CallFunc_DoesOwnSelectedDLC_ReturnValue                          (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_IsSelected_Selected                                     (None)

void UMapSelect_Session_C::Select_Map_Button_Clicked(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUI_GenericConfirmationDialog* CallFunc_ShowDLCConfirmationDialog_ReturnValue, bool CallFunc_DoesOwnSelectedDLC_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsSelected_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Select Map Button Clicked");

	Params::UMapSelect_Session_C_Select_Map_Button_Clicked_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ShowDLCConfirmationDialog_ReturnValue = CallFunc_ShowDLCConfirmationDialog_ReturnValue;
	Parms.CallFunc_DoesOwnSelectedDLC_ReturnValue = CallFunc_DoesOwnSelectedDLC_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsSelected_Selected = CallFunc_IsSelected_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.MapButtonSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapSelect_Session_C::MapButtonSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "MapButtonSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Session.MapSelect_Session_C.GetSelectedMapIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_IsSelected_Selected                                     (None)

void UMapSelect_Session_C::GetSelectedMapIndex(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, int32 CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSelected_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "GetSelectedMapIndex");

	Params::UMapSelect_Session_C_GetSelectedMapIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsSelected_Selected = CallFunc_IsSelected_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.SetSelectedMapIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UMapSelect_Session_C::SetSelectedMapIndex(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, int32 CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "SetSelectedMapIndex");

	Params::UMapSelect_Session_C_SetSelectedMapIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.ScrollToHoveredItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapSelect_Entry_C*          EntryHovered                                                     (None)

void UMapSelect_Session_C::ScrollToHoveredItem(class UMapSelect_Entry_C* EntryHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "ScrollToHoveredItem");

	Params::UMapSelect_Session_C_ScrollToHoveredItem_Params Parms{};

	Parms.EntryHovered = EntryHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (ContainsInstancedReference, SimpleDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (None)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// bool                               CallFunc_PointerEvent_IsTouchEvent_ReturnValue                   (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (AdvancedDisplay, Protected, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_FMax_ReturnValue                                        (None)
// double                             CallFunc_FMin_ReturnValue                                        (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// double                             CallFunc_FMin_B_ImplicitCast                                     (None)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (None)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (None)

void UMapSelect_Session_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_GetScrollOffset_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_PointerEvent_IsTouchEvent_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_FMin_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_FMin_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "OnMouseMove");

	Params::UMapSelect_Session_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_PointerEvent_IsTouchEvent_ReturnValue = CallFunc_PointerEvent_IsTouchEvent_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_FMin_B_ImplicitCast = CallFunc_FMin_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UMapSelect_Session_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "OnMouseButtonDown");

	Params::UMapSelect_Session_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.Set Selected Map Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapSelect_Entry_C*          Entry                                                            (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ZeroConstructor)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UMapSelect_Session_C::Set_Selected_Map_Entry(class UMapSelect_Entry_C* Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UMapSelect_Entry_C*>& CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Set Selected Map Entry");

	Params::UMapSelect_Session_C_Set_Selected_Map_Entry_Params Parms{};

	Parms.Entry = Entry;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMapSelectEntries_MapSelectEntries = CallFunc_GetMapSelectEntries_MapSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.GetMapSelectEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMapSelect_Entry_C*>  MapSelectEntries                                                 (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
// TArray<class UMapSelect_Entry_C*>  TempMapSelectEntries                                             (Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UMapSelect_Entry_C*          K2Node_DynamicCast_AsMap_Select_Entry                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UMapSelect_Session_C::GetMapSelectEntries(const TArray<class UMapSelect_Entry_C*>& MapSelectEntries, const TArray<class UMapSelect_Entry_C*>& TempMapSelectEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMapSelect_Entry_C* K2Node_DynamicCast_AsMap_Select_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "GetMapSelectEntries");

	Params::UMapSelect_Session_C_GetMapSelectEntries_Params Parms{};

	Parms.MapSelectEntries = MapSelectEntries;
	Parms.TempMapSelectEntries = TempMapSelectEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMap_Select_Entry = K2Node_DynamicCast_AsMap_Select_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UMapSelect_Session_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Tick");

	Params::UMapSelect_Session_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MapSelect_Session.MapSelect_Session_C.BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Session_C::BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Session.MapSelect_Session_C.BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Session_C::BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Session.MapSelect_Session_C.ExecuteUbergraph_MapSelect_Session
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UMapSelect_Session_C::ExecuteUbergraph_MapSelect_Session(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "ExecuteUbergraph_MapSelect_Session");

	Params::UMapSelect_Session_C_ExecuteUbergraph_MapSelect_Session_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Menu = K2Node_DynamicCast_AsShooter_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


