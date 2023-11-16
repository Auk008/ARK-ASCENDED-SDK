#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C
// (None)

class UClass* UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C");

	return Clss;
}


// ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C ASAUI_NewsCarouselTemplate_Entry_ServerStatus.Default__ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C* UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::GetDefaultObj()
{
	static class UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C*>(UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.BlueprintInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      RawExtraData                                                     (None)

void UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::BlueprintInit(const class FString& RawExtraData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C", "BlueprintInit");

	Params::UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_BlueprintInit_Params Parms{};

	Parms.RawExtraData = RawExtraData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (None)

void UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::EntryFocusStart(bool bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C", "EntryFocusStart");

	Params::UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusStart_Params Parms{};

	Parms.bInstigatedByAutoRollover = bInstigatedByAutoRollover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (None)

void UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::EntryFocusEnd(bool bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C", "EntryFocusEnd");

	Params::UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusEnd_Params Parms{};

	Parms.bInstigatedByAutoRollover = bInstigatedByAutoRollover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.EntryFocusTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)

void UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::EntryFocusTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C", "EntryFocusTick");

	Params::UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_EntryFocusTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_ServerStatus.ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FString                      K2Node_Event_RawExtraData                                        (AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (None)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// float                              K2Node_Event_DeltaTime                                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// class FString                      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (None)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (None)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (None)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_FClamp_ReturnValue_1                                    (None)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (None)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (None)

void UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus(int32 EntryPoint, const class FString& K2Node_Event_RawExtraData, bool K2Node_Event_bInstigatedByAutoRollover_1, const TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool K2Node_Event_bInstigatedByAutoRollover, int32 CallFunc_Array_Length_ReturnValue, float K2Node_Event_DeltaTime, int32 Temp_int_Array_Index_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Percent_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_GetScrollOffset_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_ServerStatus_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus");

	Params::UASAUI_NewsCarouselTemplate_Entry_ServerStatus_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_ServerStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RawExtraData = K2Node_Event_RawExtraData;
	Parms.K2Node_Event_bInstigatedByAutoRollover_1 = K2Node_Event_bInstigatedByAutoRollover_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.K2Node_Event_bInstigatedByAutoRollover = K2Node_Event_bInstigatedByAutoRollover;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue_1 = CallFunc_Add_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast = CallFunc_Subtract_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


