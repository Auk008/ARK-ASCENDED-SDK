#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel.ASAUI_NewsCarousel_C
// (None)

class UClass* UASAUI_NewsCarousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarousel_C");

	return Clss;
}


// ASAUI_NewsCarousel_C ASAUI_NewsCarousel.Default__ASAUI_NewsCarousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarousel_C* UASAUI_NewsCarousel_C::GetDefaultObj()
{
	static class UASAUI_NewsCarousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarousel_C*>(UASAUI_NewsCarousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.GetColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)

void UASAUI_NewsCarousel_C::GetColorAndOpacity(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "GetColorAndOpacity");

	Params::UASAUI_NewsCarousel_C_GetColorAndOpacity_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UASAUI_NewsCarousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "PreConstruct");

	Params::UASAUI_NewsCarousel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_NewsCarousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.ExecuteUbergraph_ASAUI_NewsCarousel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)

void UASAUI_NewsCarousel_C::ExecuteUbergraph_ASAUI_NewsCarousel(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "ExecuteUbergraph_ASAUI_NewsCarousel");

	Params::UASAUI_NewsCarousel_C_ExecuteUbergraph_ASAUI_NewsCarousel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


