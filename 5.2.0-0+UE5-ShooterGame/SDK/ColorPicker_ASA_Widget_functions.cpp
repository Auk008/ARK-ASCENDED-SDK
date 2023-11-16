#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C
// (None)

class UClass* UColorPicker_ASA_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorPicker_ASA_Widget_C");

	return Clss;
}


// ColorPicker_ASA_Widget_C ColorPicker_ASA_Widget.Default__ColorPicker_ASA_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorPicker_ASA_Widget_C* UColorPicker_ASA_Widget_C::GetDefaultObj()
{
	static class UColorPicker_ASA_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorPicker_ASA_Widget_C*>(UColorPicker_ASA_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.GetOverrideHighligteableWidgetBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UColorPicker_ASA_Widget_C::GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "GetOverrideHighligteableWidgetBP");

	Params::UColorPicker_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.TimerCooldownColorCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::TimerCooldownColorCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "TimerCooldownColorCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorSlider2D
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue                      (None)
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue_1                    (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// TArray<float>                      K2Node_MakeArray_Array                                           (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ZeroConstructor)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (None)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (None)
// struct FColor                      CallFunc_ReadRenderTargetPixel_ReturnValue                       (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (None)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (None)
// float                              K2Node_MakeArray__0__ImplicitCast                                (None)
// float                              K2Node_MakeArray__1__ImplicitCast                                (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (None)

void UColorPicker_ASA_Widget_C::UpdateColorSlider2D(double CallFunc_GetUnpausedTimeSeconds_ReturnValue, double CallFunc_GetUnpausedTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const TArray<float>& K2Node_MakeArray_Array, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FColor& CallFunc_ReadRenderTargetPixel_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float K2Node_MakeArray__0__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateColorSlider2D");

	Params::UColorPicker_ASA_Widget_C_UpdateColorSlider2D_Params Parms{};

	Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue = CallFunc_GetUnpausedTimeSeconds_ReturnValue;
	Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue_1 = CallFunc_GetUnpausedTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_ReadRenderTargetPixel_ReturnValue = CallFunc_ReadRenderTargetPixel_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast = CallFunc_Subtract_DoubleFloat_B_ImplicitCast;
	Parms.K2Node_MakeArray__0__ImplicitCast = K2Node_MakeArray__0__ImplicitCast;
	Parms.K2Node_MakeArray__1__ImplicitCast = K2Node_MakeArray__1__ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateSaturationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (None)

void UColorPicker_ASA_Widget_C::UpdateSaturationBar(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateSaturationBar");

	Params::UColorPicker_ASA_Widget_C_UpdateSaturationBar_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.OnMouseMove_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UColorPicker_ASA_Widget_C::OnMouseMove_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "OnMouseMove_0");

	Params::UColorPicker_ASA_Widget_C_OnMouseMove_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UColorPicker_ASA_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "Tick");

	Params::UColorPicker_ASA_Widget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.SetupColorRenderTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::SetupColorRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "SetupColorRenderTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorPickerValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Value                                                            (None)

void UColorPicker_ASA_Widget_C::UpdateColorPickerValue(const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateColorPickerValue");

	Params::UColorPicker_ASA_Widget_C_UpdateColorPickerValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.ExecuteUbergraph_ColorPicker_ASA_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// float                              K2Node_ComponentBoundEvent_Value_1                               (None)
// float                              K2Node_ComponentBoundEvent_Value                                 (None)
// struct FVector2D                   K2Node_CustomEvent_Value                                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UColorPicker_ASA_Widget_C::ExecuteUbergraph_ColorPicker_ASA_Widget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FVector2D& K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "ExecuteUbergraph_ColorPicker_ASA_Widget");

	Params::UColorPicker_ASA_Widget_C_ExecuteUbergraph_ColorPicker_ASA_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


