#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeSlot_SideBar.UI_CustomizeSlot_SideBar_C
// (None)

class UClass* UUI_CustomizeSlot_SideBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeSlot_SideBar_C");

	return Clss;
}


// UI_CustomizeSlot_SideBar_C UI_CustomizeSlot_SideBar.Default__UI_CustomizeSlot_SideBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeSlot_SideBar_C* UUI_CustomizeSlot_SideBar_C::GetDefaultObj()
{
	static class UUI_CustomizeSlot_SideBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeSlot_SideBar_C*>(UUI_CustomizeSlot_SideBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeSlot_SideBar.UI_CustomizeSlot_SideBar_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_CustomizeSlot_SideBar_C::SetColor(const struct FLinearColor& Color, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_SideBar_C", "SetColor");

	Params::UUI_CustomizeSlot_SideBar_C_SetColor_Params Parms{};

	Parms.Color = Color;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeSlot_SideBar.UI_CustomizeSlot_SideBar_C.GetColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (None)
// struct FCFCoreThemeRowData         CallFunc_GetCurrentTheme_CurrentTheme                            (None)

void UUI_CustomizeSlot_SideBar_C::GetColor(const struct FLinearColor& Color, const struct FCFCoreThemeRowData& CallFunc_GetCurrentTheme_CurrentTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_SideBar_C", "GetColor");

	Params::UUI_CustomizeSlot_SideBar_C_GetColor_Params Parms{};

	Parms.Color = Color;
	Parms.CallFunc_GetCurrentTheme_CurrentTheme = CallFunc_GetCurrentTheme_CurrentTheme;

	UObject::ProcessEvent(Func, &Parms);

}

}


