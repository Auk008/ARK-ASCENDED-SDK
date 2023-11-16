#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C
// (None)

class UClass* UASAUI_NewsCarouselTemplate_Entry_CTA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarouselTemplate_Entry_CTA_C");

	return Clss;
}


// ASAUI_NewsCarouselTemplate_Entry_CTA_C ASAUI_NewsCarouselTemplate_Entry_CTA.Default__ASAUI_NewsCarouselTemplate_Entry_CTA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarouselTemplate_Entry_CTA_C* UASAUI_NewsCarouselTemplate_Entry_CTA_C::GetDefaultObj()
{
	static class UASAUI_NewsCarouselTemplate_Entry_CTA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarouselTemplate_Entry_CTA_C*>(UASAUI_NewsCarouselTemplate_Entry_CTA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.BlueprintInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      RawExtraData                                                     (None)

void UASAUI_NewsCarouselTemplate_Entry_CTA_C::BlueprintInit(const class FString& RawExtraData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "BlueprintInit");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_BlueprintInit_Params Parms{};

	Parms.RawExtraData = RawExtraData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (None)

void UASAUI_NewsCarouselTemplate_Entry_CTA_C::EntryFocusStart(bool bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "EntryFocusStart");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusStart_Params Parms{};

	Parms.bInstigatedByAutoRollover = bInstigatedByAutoRollover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (None)

void UASAUI_NewsCarouselTemplate_Entry_CTA_C::EntryFocusEnd(bool bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "EntryFocusEnd");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusEnd_Params Parms{};

	Parms.bInstigatedByAutoRollover = bInstigatedByAutoRollover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)

void UASAUI_NewsCarouselTemplate_Entry_CTA_C::EntryFocusTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "EntryFocusTick");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FString                      K2Node_Event_RawExtraData                                        (None)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (None)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (None)
// float                              K2Node_Event_DeltaTime                                           (None)

void UASAUI_NewsCarouselTemplate_Entry_CTA_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA(int32 EntryPoint, const class FString& K2Node_Event_RawExtraData, bool K2Node_Event_bInstigatedByAutoRollover_1, bool K2Node_Event_bInstigatedByAutoRollover, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RawExtraData = K2Node_Event_RawExtraData;
	Parms.K2Node_Event_bInstigatedByAutoRollover_1 = K2Node_Event_bInstigatedByAutoRollover_1;
	Parms.K2Node_Event_bInstigatedByAutoRollover = K2Node_Event_bInstigatedByAutoRollover;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


