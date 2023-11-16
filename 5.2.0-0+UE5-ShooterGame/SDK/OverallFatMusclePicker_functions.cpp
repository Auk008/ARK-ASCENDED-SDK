#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OverallFatMusclePicker.OverallFatMusclePicker_C
// (None)

class UClass* UOverallFatMusclePicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverallFatMusclePicker_C");

	return Clss;
}


// OverallFatMusclePicker_C OverallFatMusclePicker.Default__OverallFatMusclePicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOverallFatMusclePicker_C* UOverallFatMusclePicker_C::GetDefaultObj()
{
	static class UOverallFatMusclePicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverallFatMusclePicker_C*>(UOverallFatMusclePicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.GetOverrideHighligteableWidgetBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UOverallFatMusclePicker_C::GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "GetOverrideHighligteableWidgetBP");

	Params::UOverallFatMusclePicker_C_GetOverrideHighligteableWidgetBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorSlider2D
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (None)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ZeroConstructor)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ZeroConstructor)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// float                              K2Node_MakeStruct_FloatParam1_ImplicitCast                       (None)
// float                              K2Node_MakeStruct_FloatParam2_ImplicitCast                       (None)

void UOverallFatMusclePicker_C::UpdateColorSlider2D(const struct FVector2D& CallFunc_GetValue_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UObject* CallFunc_GetOuterObject_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, float K2Node_MakeStruct_FloatParam1_ImplicitCast, float K2Node_MakeStruct_FloatParam2_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateColorSlider2D");

	Params::UOverallFatMusclePicker_C_UpdateColorSlider2D_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FloatParam1_ImplicitCast = K2Node_MakeStruct_FloatParam1_ImplicitCast;
	Parms.K2Node_MakeStruct_FloatParam2_ImplicitCast = K2Node_MakeStruct_FloatParam2_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateSaturationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (None)

void UOverallFatMusclePicker_C::UpdateSaturationBar(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateSaturationBar");

	Params::UOverallFatMusclePicker_C_UpdateSaturationBar_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOverallFatMusclePicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UOverallFatMusclePicker_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UOverallFatMusclePicker_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorPickerValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Value                                                            (None)

void UOverallFatMusclePicker_C::UpdateColorPickerValue(const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateColorPickerValue");

	Params::UOverallFatMusclePicker_C_UpdateColorPickerValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.ExecuteUbergraph_OverallFatMusclePicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// float                              K2Node_ComponentBoundEvent_Value_1                               (None)
// float                              K2Node_ComponentBoundEvent_Value                                 (None)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (None)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (None)
// struct FVector2D                   K2Node_CustomEvent_Value                                         (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)

void UOverallFatMusclePicker_C::ExecuteUbergraph_OverallFatMusclePicker(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Value, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "ExecuteUbergraph_OverallFatMusclePicker");

	Params::UOverallFatMusclePicker_C_ExecuteUbergraph_OverallFatMusclePicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


