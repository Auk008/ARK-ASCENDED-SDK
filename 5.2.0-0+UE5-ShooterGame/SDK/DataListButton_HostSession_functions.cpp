#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C
// (None)

class UClass* UDataListButton_HostSession_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButton_HostSession_C");

	return Clss;
}


// DataListButton_HostSession_C DataListButton_HostSession.Default__DataListButton_HostSession_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButton_HostSession_C* UDataListButton_HostSession_C::GetDefaultObj()
{
	static class UDataListButton_HostSession_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButton_HostSession_C*>(UDataListButton_HostSession_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButton_HostSession.DataListButton_HostSession_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (None)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (None)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (None)
// bool                               CallFunc_GetToggledState_ReturnValue                             (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (None)

void UDataListButton_HostSession_C::OnPaint(const struct FPaintContext& Context, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_GetToggledState_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_HostSession_C", "OnPaint");

	Params::UDataListButton_HostSession_C_OnPaint_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_GetToggledState_ReturnValue = CallFunc_GetToggledState_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


