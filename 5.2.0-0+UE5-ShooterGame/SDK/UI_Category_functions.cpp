#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Category.UI_Category_C
// (None)

class UClass* UUI_Category_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Category_C");

	return Clss;
}


// UI_Category_C UI_Category.Default__UI_Category_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Category_C* UUI_Category_C::GetDefaultObj()
{
	static class UUI_Category_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Category_C*>(UUI_Category_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Category.UI_Category_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_Category_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "PreConstruct");

	Params::UUI_Category_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Category.UI_Category_C.ExecuteUbergraph_UI_Category
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)

void UUI_Category_C::ExecuteUbergraph_UI_Category(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Category_C", "ExecuteUbergraph_UI_Category");

	Params::UUI_Category_C_ExecuteUbergraph_UI_Category_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


