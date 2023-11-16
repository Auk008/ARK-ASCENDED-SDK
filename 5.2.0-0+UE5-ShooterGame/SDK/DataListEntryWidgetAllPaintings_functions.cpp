#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C
// (None)

class UClass* UDataListEntryWidgetAllPaintings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetAllPaintings_C");

	return Clss;
}


// DataListEntryWidgetAllPaintings_C DataListEntryWidgetAllPaintings.Default__DataListEntryWidgetAllPaintings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetAllPaintings_C* UDataListEntryWidgetAllPaintings_C::GetDefaultObj()
{
	static class UDataListEntryWidgetAllPaintings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetAllPaintings_C*>(UDataListEntryWidgetAllPaintings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (None)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (None)

void UDataListEntryWidgetAllPaintings_C::OnPaint(const struct FPaintContext& Context, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "OnPaint");

	Params::UDataListEntryWidgetAllPaintings_C_OnPaint_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListEntryWidgetAllPaintings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.ExecuteUbergraph_DataListEntryWidgetAllPaintings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (None)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (None)

void UDataListEntryWidgetAllPaintings_C::ExecuteUbergraph_DataListEntryWidgetAllPaintings(int32 EntryPoint, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "ExecuteUbergraph_DataListEntryWidgetAllPaintings");

	Params::UDataListEntryWidgetAllPaintings_C_ExecuteUbergraph_DataListEntryWidgetAllPaintings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


