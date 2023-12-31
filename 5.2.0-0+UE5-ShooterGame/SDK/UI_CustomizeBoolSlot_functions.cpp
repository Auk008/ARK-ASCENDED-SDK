#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C
// (None)

class UClass* UUI_CustomizeBoolSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeBoolSlot_C");

	return Clss;
}


// UI_CustomizeBoolSlot_C UI_CustomizeBoolSlot.Default__UI_CustomizeBoolSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeBoolSlot_C* UUI_CustomizeBoolSlot_C::GetDefaultObj()
{
	static class UUI_CustomizeBoolSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeBoolSlot_C*>(UUI_CustomizeBoolSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetCurrentTheme
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCFCoreThemeRowData         CurrentTheme                                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_CustomizeBoolSlot_C::GetCurrentTheme(const struct FCFCoreThemeRowData& CurrentTheme, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "GetCurrentTheme");

	Params::UUI_CustomizeBoolSlot_C_GetCurrentTheme_Params Parms{};

	Parms.CurrentTheme = CurrentTheme;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UUI_CustomizeBoolSlot_C::GetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "GetColor");

	Params::UUI_CustomizeBoolSlot_C_GetColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UUI_CustomizeBoolSlot_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "SetColor");

	Params::UUI_CustomizeBoolSlot_C_SetColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CustomizeBoolSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_CustomizeBoolSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "PreConstruct");

	Params::UUI_CustomizeBoolSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UUI_CustomizeBoolSlot_C::BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_CustomizeBoolSlot_C_BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.ExecuteUbergraph_UI_CustomizeBoolSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// enum class ECheckBoxState          Temp_byte_Variable                                               (None)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (None)
// enum class ECheckBoxState          K2Node_Select_Default                                            (None)
// TArray<class UUI_ThemeCustomizer_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ZeroConstructor)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class UUI_ThemeCustomizer_C*       CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_CustomizeBoolSlot_C::ExecuteUbergraph_UI_CustomizeBoolSlot(int32 EntryPoint, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState K2Node_Select_Default, const TArray<class UUI_ThemeCustomizer_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool K2Node_Event_IsDesignTime, class UUI_ThemeCustomizer_C* CallFunc_Array_Get_Item, bool K2Node_ComponentBoundEvent_bIsChecked, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeBoolSlot_C", "ExecuteUbergraph_UI_CustomizeBoolSlot");

	Params::UUI_CustomizeBoolSlot_C_ExecuteUbergraph_UI_CustomizeBoolSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


