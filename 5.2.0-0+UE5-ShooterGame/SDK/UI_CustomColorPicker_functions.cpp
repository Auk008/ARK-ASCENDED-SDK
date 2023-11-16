#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomColorPicker.UI_CustomColorPicker_C
// (None)

class UClass* UUI_CustomColorPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomColorPicker_C");

	return Clss;
}


// UI_CustomColorPicker_C UI_CustomColorPicker.Default__UI_CustomColorPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomColorPicker_C* UUI_CustomColorPicker_C::GetDefaultObj()
{
	static class UUI_CustomColorPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomColorPicker_C*>(UUI_CustomColorPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetColorPickerEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (None)

void UUI_CustomColorPicker_C::SetColorPickerEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetColorPickerEnabled");

	Params::UUI_CustomColorPicker_C_SetColorPickerEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.LimitTextSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SourceString                                                     (TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Size                                                             (None)
// class FString                      Array                                                            (AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              LocalArray                                                       (AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (None)

void UUI_CustomColorPicker_C::LimitTextSize(const class FString& SourceString, int32 Size, const class FString& Array, const TArray<class FString>& LocalArray, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "LimitTextSize");

	Params::UUI_CustomColorPicker_C_LimitTextSize_Params Parms{};

	Parms.SourceString = SourceString;
	Parms.Size = Size;
	Parms.Array = Array;
	Parms.LocalArray = LocalArray;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.UpdateAllSliders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)
// float                              CallFunc_RGBToHSV_H                                              (None)
// float                              CallFunc_RGBToHSV_S                                              (None)
// float                              CallFunc_RGBToHSV_V                                              (None)
// float                              CallFunc_RGBToHSV_A                                              (None)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// class FString                      CallFunc_SRGBtoHEX_ReturnValue                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (None)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (None)

void UUI_CustomColorPicker_C::UpdateAllSliders(const struct FLinearColor& Color, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const class FString& CallFunc_SRGBtoHEX_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "UpdateAllSliders");

	Params::UUI_CustomColorPicker_C_UpdateAllSliders_Params Parms{};

	Parms.Color = Color;
	Parms.CallFunc_RGBToHSV_H = CallFunc_RGBToHSV_H;
	Parms.CallFunc_RGBToHSV_S = CallFunc_RGBToHSV_S;
	Parms.CallFunc_RGBToHSV_V = CallFunc_RGBToHSV_V;
	Parms.CallFunc_RGBToHSV_A = CallFunc_RGBToHSV_A;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SRGBtoHEX_ReturnValue = CallFunc_SRGBtoHEX_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.GetFinalColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                FinalColor                                                       (None)
// float                              CallFunc_GetValue_ReturnValue                                    (None)
// float                              CallFunc_GetValue_ReturnValue_1                                  (None)
// float                              CallFunc_GetValue_ReturnValue_2                                  (None)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_3                                  (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (None)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (None)

void UUI_CustomColorPicker_C::GetFinalColor(const struct FLinearColor& FinalColor, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, const struct FVector2D& CallFunc_GetValue_ReturnValue_3, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "GetFinalColor");

	Params::UUI_CustomColorPicker_C_GetFinalColor_Params Parms{};

	Parms.FinalColor = FinalColor;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (None)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (None)

void UUI_CustomColorPicker_C::OnUpdateOpacity(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateOpacity");

	Params::UUI_CustomColorPicker_C_OnUpdateOpacity_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (None)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (None)

void UUI_CustomColorPicker_C::OnUpdateValue(float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateValue");

	Params::UUI_CustomColorPicker_C_OnUpdateValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateSaturation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::OnUpdateSaturation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateSaturation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdate2DSynth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (None)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (None)

void UUI_CustomColorPicker_C::OnUpdate2DSynth(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdate2DSynth");

	Params::UUI_CustomColorPicker_C_OnUpdate2DSynth_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetValueBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (None)

void UUI_CustomColorPicker_C::SetValueBarValue(const struct FLinearColor& Color, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetValueBarValue");

	Params::UUI_CustomColorPicker_C_SetValueBarValue_Params Parms{};

	Parms.Color = Color;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetSaturationBarColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (None)

void UUI_CustomColorPicker_C::SetSaturationBarColor(const struct FLinearColor& Color, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetSaturationBarColor");

	Params::UUI_CustomColorPicker_C_SetSaturationBarColor_Params Parms{};

	Parms.Color = Color;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.ExecuteUbergraph_UI_CustomColorPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// float                              K2Node_ComponentBoundEvent_Value_4                               (None)
// float                              K2Node_ComponentBoundEvent_Value_3                               (None)
// float                              K2Node_ComponentBoundEvent_Value_2                               (None)
// float                              K2Node_ComponentBoundEvent_Value_1                               (None)
// float                              K2Node_ComponentBoundEvent_Value                                 (None)
// struct FLinearColor                CallFunc_GetFinalColor_FinalColor                                (None)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class FString                      CallFunc_SRGBtoHEX_ReturnValue                                   (AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_LimitTextSize_Array                                     (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FColor                      CallFunc_HEXtoSRGB_Color                                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (None)

void UUI_CustomColorPicker_C::ExecuteUbergraph_UI_CustomColorPicker(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FLinearColor& CallFunc_GetFinalColor_FinalColor, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_SRGBtoHEX_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_LimitTextSize_Array, const struct FColor& CallFunc_HEXtoSRGB_Color, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "ExecuteUbergraph_UI_CustomColorPicker");

	Params::UUI_CustomColorPicker_C_ExecuteUbergraph_UI_CustomColorPicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetFinalColor_FinalColor = CallFunc_GetFinalColor_FinalColor;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SRGBtoHEX_ReturnValue = CallFunc_SRGBtoHEX_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_LimitTextSize_Array = CallFunc_LimitTextSize_Array;
	Parms.CallFunc_HEXtoSRGB_Color = CallFunc_HEXtoSRGB_Color;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OptionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::OptionChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OptionChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UUI_CustomColorPicker_C::OnColorChanged__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnColorChanged__DelegateSignature");

	Params::UUI_CustomColorPicker_C_OnColorChanged__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


