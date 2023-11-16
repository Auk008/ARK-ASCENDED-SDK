#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HelpPage.UI_HelpPage_C
// (None)

class UClass* UUI_HelpPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HelpPage_C");

	return Clss;
}


// UI_HelpPage_C UI_HelpPage.Default__UI_HelpPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HelpPage_C* UUI_HelpPage_C::GetDefaultObj()
{
	static class UUI_HelpPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HelpPage_C*>(UUI_HelpPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HelpPage.UI_HelpPage_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (None)

void UUI_HelpPage_C::GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "GetSizeboxForExtraHandheldScaling");

	Params::UUI_HelpPage_C_GetSizeboxForExtraHandheldScaling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HelpPage.UI_HelpPage_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UUI_HelpPage_C::GetWidgetToScaleForHandheld(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "GetWidgetToScaleForHandheld");

	Params::UUI_HelpPage_C_GetWidgetToScaleForHandheld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HelpPage.UI_HelpPage_C.BPHandleDockedModeChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsDocked                                                        (None)

void UUI_HelpPage_C::BPHandleDockedModeChange(bool bIsDocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "BPHandleDockedModeChange");

	Params::UUI_HelpPage_C_BPHandleDockedModeChange_Params Parms{};

	Parms.bIsDocked = bIsDocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HelpPage.UI_HelpPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_HelpPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               K2Node_Event_bIsDocked                                           (None)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (Edit, ZeroConstructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (None)
// struct FMargin                     K2Node_Select_Default                                            (None)

void UUI_HelpPage_C::ExecuteUbergraph_UI_HelpPage(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, bool K2Node_Event_bIsDocked, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, const struct FMargin& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HelpPage_C", "ExecuteUbergraph_UI_HelpPage");

	Params::UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bIsDocked = K2Node_Event_bIsDocked;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 = CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


