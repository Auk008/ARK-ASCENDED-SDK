#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C
// (None)

class UClass* UUI_CustomComboBoxSpacer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomComboBoxSpacer_C");

	return Clss;
}


// UI_CustomComboBoxSpacer_C UI_CustomComboBoxSpacer.Default__UI_CustomComboBoxSpacer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomComboBoxSpacer_C* UUI_CustomComboBoxSpacer_C::GetDefaultObj()
{
	static class UUI_CustomComboBoxSpacer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomComboBoxSpacer_C*>(UUI_CustomComboBoxSpacer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_CustomComboBoxSpacer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxSpacer_C", "PreConstruct");

	Params::UUI_CustomComboBoxSpacer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.ExecuteUbergraph_UI_CustomComboBoxSpacer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)

void UUI_CustomComboBoxSpacer_C::ExecuteUbergraph_UI_CustomComboBoxSpacer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxSpacer_C", "ExecuteUbergraph_UI_CustomComboBoxSpacer");

	Params::UUI_CustomComboBoxSpacer_C_ExecuteUbergraph_UI_CustomComboBoxSpacer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


