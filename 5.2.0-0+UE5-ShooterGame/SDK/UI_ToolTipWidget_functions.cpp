#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ToolTipWidget.UI_ToolTipWidget_C
// (None)

class UClass* UUI_ToolTipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ToolTipWidget_C");

	return Clss;
}


// UI_ToolTipWidget_C UI_ToolTipWidget.Default__UI_ToolTipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ToolTipWidget_C* UUI_ToolTipWidget_C::GetDefaultObj()
{
	static class UUI_ToolTipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ToolTipWidget_C*>(UUI_ToolTipWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ToolTipWidget.UI_ToolTipWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_ToolTipWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "PreConstruct");

	Params::UUI_ToolTipWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ToolTipWidget.UI_ToolTipWidget_C.ExecuteUbergraph_UI_ToolTipWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)

void UUI_ToolTipWidget_C::ExecuteUbergraph_UI_ToolTipWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ToolTipWidget_C", "ExecuteUbergraph_UI_ToolTipWidget");

	Params::UUI_ToolTipWidget_C_ExecuteUbergraph_UI_ToolTipWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


