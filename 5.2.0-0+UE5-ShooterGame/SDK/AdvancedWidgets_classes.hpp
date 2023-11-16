#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x690 (0x880 - 0x1F0)
// Class AdvancedWidgets.RadialSlider
class URadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(None)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ZeroConstructor)
	bool                                         bUseCustomDefaultValue;                            // 0x204(0x1)(None)
	uint8                                        Pad_2FBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomDefaultValue;                                // 0x208(0x4)(None)
	uint8                                        Pad_2FC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    SliderRange;                                       // 0x210(0x88)(ZeroConstructor)
	TArray<float>                                ValueTags;                                         // 0x298(0x10)(None)
	float                                        SliderHandleStartAngle;                            // 0x2A8(0x4)(None)
	float                                        SliderHandleEndAngle;                              // 0x2AC(0x4)(None)
	float                                        AngularOffset;                                     // 0x2B0(0x4)(None)
	uint8                                        Pad_2FC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             HandStartEndRatio;                                 // 0x2B8(0x10)(None)
	uint8                                        Pad_2FC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          WidgetStyle;                                       // 0x2D0(0x500)(ZeroConstructor)
	struct FLinearColor                          SliderBarColor;                                    // 0x7D0(0x10)(None)
	struct FLinearColor                          SliderProgressColor;                               // 0x7E0(0x10)(None)
	struct FLinearColor                          SliderHandleColor;                                 // 0x7F0(0x10)(None)
	struct FLinearColor                          CenterBackgroundColor;                             // 0x800(0x10)(None)
	bool                                         Locked;                                            // 0x810(0x1)(None)
	bool                                         MouseUsesStep;                                     // 0x811(0x1)(None)
	bool                                         RequiresControllerLock;                            // 0x812(0x1)(None)
	uint8                                        Pad_2FC4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x814(0x4)(None)
	bool                                         IsFocusable;                                       // 0x818(0x1)(None)
	bool                                         UseVerticalDrag;                                   // 0x819(0x1)(None)
	bool                                         ShowSliderHandle;                                  // 0x81A(0x1)(None)
	bool                                         ShowSliderHand;                                    // 0x81B(0x1)(None)
	uint8                                        Pad_2FC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x820(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x830(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x840(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x850(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x860(0x10)(ZeroConstructor)
	uint8                                        Pad_2FC8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URadialSlider* GetDefaultObj();

	void SetValueTags(const TArray<float>& InValueTags);
	void SetValue(float InValue);
	void SetUseVerticalDrag(bool InUseVerticalDrag);
	void SetStepSize(float InValue);
	void SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderHandleStartAngle(float InValue);
	void SetSliderHandleEndAngle(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetShowSliderHandle(bool InShowSliderHandle);
	void SetShowSliderHand(bool InShowSliderHand);
	void SetLocked(bool InValue);
	void SetHandStartEndRatio(const struct FVector2D& InValue);
	void SetCustomDefaultValue(float InValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetAngularOffset(float InValue);
	void GetValue(float ReturnValue);
	void GetNormalizedSliderHandlePosition(float ReturnValue);
	void GetCustomDefaultValue(float ReturnValue);
};

}


