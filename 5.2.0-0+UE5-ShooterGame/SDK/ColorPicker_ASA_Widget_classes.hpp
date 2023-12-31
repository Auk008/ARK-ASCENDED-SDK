#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3A0 - 0x330)
// WidgetBlueprintGeneratedClass ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C
class UColorPicker_ASA_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UBorder*                               Border_0;                                          // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                FakeImage;                                         // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_27;                                          // 0x348(0x8)(Edit, ZeroConstructor)
	class USynth2DSlider*                        Synth2DSlider_89;                                  // 0x350(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x358(0x8)(Edit, ZeroConstructor)
	struct FLinearColor                          Linear_Color;                                      // 0x360(0x10)(None)
	class UMaterialInterface*                    MaterialToPickColor;                               // 0x370(0x8)(Edit, ZeroConstructor)
	class UTextureRenderTarget2D*                Texture_Render_Target;                             // 0x378(0x8)(Edit, ZeroConstructor)
	double                                       LastTimeUpdateRender;                              // 0x380(0x8)(None)
	class UTexture2D*                            FakeTextureToShow;                                 // 0x388(0x8)(ZeroConstructor)
	double                                       LastReadRenderPixelTime;                           // 0x390(0x8)(None)
	double                                       ReadRenderTargetPixelInterval;                     // 0x398(0x8)(None)

	static class UClass* StaticClass();
	static class UColorPicker_ASA_Widget_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	void TimerCooldownColorCheck();
	void UpdateColorSlider2D(double CallFunc_GetUnpausedTimeSeconds_ReturnValue, double CallFunc_GetUnpausedTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const TArray<float>& K2Node_MakeArray_Array, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FColor& CallFunc_ReadRenderTargetPixel_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float K2Node_MakeArray__0__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1);
	void UpdateSaturationBar(const struct FLinearColor& Value);
	void OnMouseMove_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void SetupColorRenderTarget();
	void UpdateColorPickerValue(const struct FVector2D& Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature();
	void ExecuteUbergraph_ColorPicker_ASA_Widget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FVector2D& K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue);
};

}


