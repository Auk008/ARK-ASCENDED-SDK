#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x390 - 0x330)
// WidgetBlueprintGeneratedClass OverallFatMusclePicker.OverallFatMusclePicker_C
class UOverallFatMusclePicker_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UImage*                                Image;                                             // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2;                                           // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_68;                                          // 0x350(0x8)(Edit, ZeroConstructor)
	class USynth2DSlider*                        Synth2DSlider_89;                                  // 0x358(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x360(0x8)(Edit, ZeroConstructor)
	struct FLinearColor                          Linear_Color;                                      // 0x368(0x10)(None)
	class UMaterialInterface*                    MaterialToPickColor;                               // 0x378(0x8)(Edit, ZeroConstructor)
	class UTextureRenderTarget2D*                Texture_Render_Target;                             // 0x380(0x8)(ZeroConstructor)
	double                                       LastTimeUpdateRender;                              // 0x388(0x8)(None)

	static class UClass* StaticClass();
	static class UOverallFatMusclePicker_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	void UpdateColorSlider2D(const struct FVector2D& CallFunc_GetValue_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UObject* CallFunc_GetOuterObject_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, float K2Node_MakeStruct_FloatParam1_ImplicitCast, float K2Node_MakeStruct_FloatParam2_ImplicitCast);
	void UpdateSaturationBar(const struct FLinearColor& Value);
	void Construct();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void UpdateColorPickerValue(const struct FVector2D& Value);
	void ExecuteUbergraph_OverallFatMusclePicker(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Value, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


