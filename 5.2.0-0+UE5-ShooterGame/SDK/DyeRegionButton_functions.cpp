#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C
// (None)

class UClass* UDyeRegionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DyeRegionButton_C");

	return Clss;
}


// DyeRegionButton_C DyeRegionButton.Default__DyeRegionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDyeRegionButton_C* UDyeRegionButton_C::GetDefaultObj()
{
	static class UDyeRegionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDyeRegionButton_C*>(UDyeRegionButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DyeRegionButton.DyeRegionButton_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UDyeRegionButton_C::GetVisibility_0(enum class ESlateVisibility ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeRegionButton_C", "GetVisibility_0");

	Params::UDyeRegionButton_C_GetVisibility_0_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DyeRegionButton.DyeRegionButton_C.BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDyeRegionButton_C::BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeRegionButton_C", "BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DyeRegionButton.DyeRegionButton_C.ExecuteUbergraph_DyeRegionButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)

void UDyeRegionButton_C::ExecuteUbergraph_DyeRegionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeRegionButton_C", "ExecuteUbergraph_DyeRegionButton");

	Params::UDyeRegionButton_C_ExecuteUbergraph_DyeRegionButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


