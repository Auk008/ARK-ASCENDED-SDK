#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x35C - 0x330)
// WidgetBlueprintGeneratedClass Slider_ASA_Widget.Slider_ASA_Widget_C
class USlider_ASA_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(None)
	class UOverlay*                              OverlayCapsLimit;                                  // 0x338(0x8)(Edit, ZeroConstructor)
	class UOverlay*                              OverlaySlider;                                     // 0x340(0x8)(Edit, ZeroConstructor)
	class UProgressBar*                          ProgressBar;                                       // 0x348(0x8)(Edit, ZeroConstructor)
	class USlider*                               SliderFloatValue;                                  // 0x350(0x8)(ZeroConstructor)
	float                                        LastValue;                                         // 0x358(0x4)(None)

	static class UClass* StaticClass();
	static class USlider_ASA_Widget_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	void SetupSetPercent(float InputPin, bool PreventRecallParent, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void SetupValue(double Float, bool PreventRecallParent);
	void BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Slider_ASA_Widget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetValue_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetValue_ReturnValue_1, double K2Node_CustomEvent_Float, bool K2Node_CustomEvent_PreventRecallParent, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
};

}


