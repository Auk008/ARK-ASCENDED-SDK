#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContextMenu_PrimalItem.ContextMenu_PrimalItem_C
// (None)

class UClass* UContextMenu_PrimalItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextMenu_PrimalItem_C");

	return Clss;
}


// ContextMenu_PrimalItem_C ContextMenu_PrimalItem.Default__ContextMenu_PrimalItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContextMenu_PrimalItem_C* UContextMenu_PrimalItem_C::GetDefaultObj()
{
	static class UContextMenu_PrimalItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextMenu_PrimalItem_C*>(UContextMenu_PrimalItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContextMenu_PrimalItem.ContextMenu_PrimalItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UContextMenu_PrimalItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextMenu_PrimalItem_C", "Tick");

	Params::UContextMenu_PrimalItem_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextMenu_PrimalItem.ContextMenu_PrimalItem_C.ExecuteUbergraph_ContextMenu_PrimalItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)

void UContextMenu_PrimalItem_C::ExecuteUbergraph_ContextMenu_PrimalItem(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextMenu_PrimalItem_C", "ExecuteUbergraph_ContextMenu_PrimalItem");

	Params::UContextMenu_PrimalItem_C_ExecuteUbergraph_ContextMenu_PrimalItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


