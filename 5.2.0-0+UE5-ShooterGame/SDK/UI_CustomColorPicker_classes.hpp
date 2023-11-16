#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomColorPicker.UI_CustomColorPicker_C
class UUI_CustomColorPicker_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USlider*                               SLIDER_Opacity;                                    // 0x338(0x8)(Edit, ZeroConstructor)
	class USlider*                               SLIDER_Saturation;                                 // 0x340(0x8)(Edit, ZeroConstructor)
	class USlider*                               SLIDER_Value;                                      // 0x348(0x8)(Edit, ZeroConstructor)
	class USynth2DSlider*                        SYNTH_Picker;                                      // 0x350(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_HexValue;                                     // 0x358(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x360(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OptionChanged;                                     // 0x370(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_CustomColorPicker_C* GetDefaultObj();

	void SetColorPickerEnabled(bool bInIsEnabled);
	void LimitTextSize(const class FString& SourceString, int32 Size, const class FString& Array, const TArray<class FString>& LocalArray, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue);
	void UpdateAllSliders(const struct FLinearColor& Color, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const class FString& CallFunc_SRGBtoHEX_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
	void GetFinalColor(const struct FLinearColor& FinalColor, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, const struct FVector2D& CallFunc_GetValue_ReturnValue_3, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast);
	void OnUpdateOpacity(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void OnUpdateValue(float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void OnUpdateSaturation();
	void OnUpdate2DSynth(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void SetValueBarValue(const struct FLinearColor& Color, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
	void SetSaturationBarColor(const struct FLinearColor& Color, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CustomColorPicker(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FLinearColor& CallFunc_GetFinalColor_FinalColor, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_SRGBtoHEX_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_LimitTextSize_Array, const struct FColor& CallFunc_HEXtoSRGB_Color, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue);
	void OptionChanged__DelegateSignature();
	void OnColorChanged__DelegateSignature(const struct FLinearColor& Color);
};

}


