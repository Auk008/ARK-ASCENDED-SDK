#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x580 (0x770 - 0x1F0)
// Class AudioWidgets.AudioMeter
class UAudioMeter : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>             MeterChannelInfo;                                  // 0x1F0(0x10)(None)
	FDelegateProperty_                           MeterChannelInfoDelegate;                          // 0x200(0x10)(ZeroConstructor)
	struct FAudioMeterStyle                      WidgetStyle;                                       // 0x210(0x4D0)(ZeroConstructor)
	enum class EOrientation                      Orientation;                                       // 0x6E0(0x1)(None)
	uint8                                        Pad_2660[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0x6E4(0x10)(None)
	struct FLinearColor                          MeterBackgroundColor;                              // 0x6F4(0x10)(None)
	struct FLinearColor                          MeterValueColor;                                   // 0x704(0x10)(None)
	struct FLinearColor                          MeterPeakColor;                                    // 0x714(0x10)(None)
	struct FLinearColor                          MeterClippingColor;                                // 0x724(0x10)(None)
	struct FLinearColor                          MeterScaleColor;                                   // 0x734(0x10)(None)
	struct FLinearColor                          MeterScaleLabelColor;                              // 0x744(0x10)(None)
	uint8                                        Pad_2661[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioMeter* GetDefaultObj();

	void SetMeterValueColor(const struct FLinearColor& InValue);
	void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
	void SetMeterScaleColor(const struct FLinearColor& InValue);
	void SetMeterPeakColor(const struct FLinearColor& InValue);
	void SetMeterClippingColor(const struct FLinearColor& InValue);
	void SetMeterChannelInfo(const TArray<struct FMeterChannelInfo>& InMeterChannelInfo);
	void SetMeterBackgroundColor(const struct FLinearColor& InValue);
	void SetBackgroundColor(const struct FLinearColor& InValue);
	void GetMeterChannelInfo__DelegateSignature(const TArray<struct FMeterChannelInfo>& ReturnValue);
	void GetMeterChannelInfo(const TArray<struct FMeterChannelInfo>& ReturnValue);
};

// 0x220 (0x410 - 0x1F0)
// Class AudioWidgets.AudioRadialSlider
class UAudioRadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(None)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ZeroConstructor)
	enum class EAudioRadialSliderLayout          WidgetLayout;                                      // 0x204(0x1)(None)
	uint8                                        Pad_2675[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CenterBackgroundColor;                             // 0x208(0x10)(None)
	struct FLinearColor                          SliderProgressColor;                               // 0x218(0x10)(None)
	struct FLinearColor                          SliderBarColor;                                    // 0x228(0x10)(None)
	struct FVector2D                             HandStartEndRatio;                                 // 0x238(0x10)(None)
	class FText                                  UnitsText;                                         // 0x248(0x18)(None)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x260(0x10)(None)
	bool                                         ShowLabelOnlyOnHover;                              // 0x270(0x1)(None)
	bool                                         ShowUnitsText;                                     // 0x271(0x1)(None)
	bool                                         IsUnitsTextReadOnly;                               // 0x272(0x1)(None)
	bool                                         IsValueTextReadOnly;                               // 0x273(0x1)(None)
	float                                        SliderThickness;                                   // 0x274(0x4)(None)
	struct FVector2D                             OutputRange;                                       // 0x278(0x10)(None)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x288(0x10)(ZeroConstructor)
	uint8                                        Pad_2676[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioRadialSlider* GetDefaultObj();

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout);
	void SetValueTextReadOnly(bool bIsReadOnly);
	void SetUnitsTextReadOnly(bool bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetSliderThickness(float InThickness);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	void SetOutputRange(const struct FVector2D& InOutputRange);
	void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void GetSliderValue(float OutputValue, float ReturnValue);
	void GetOutputValue(float InSliderValue, float ReturnValue);
};

// 0x0 (0x410 - 0x410)
// Class AudioWidgets.AudioVolumeRadialSlider
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioVolumeRadialSlider* GetDefaultObj();

};

// 0x0 (0x410 - 0x410)
// Class AudioWidgets.AudioFrequencyRadialSlider
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioFrequencyRadialSlider* GetDefaultObj();

};

// 0x850 (0xA40 - 0x1F0)
// Class AudioWidgets.AudioSliderBase
class UAudioSliderBase : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(None)
	uint8                                        Pad_2695[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnitsText;                                         // 0x1F8(0x18)(None)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x210(0x10)(None)
	FDelegateProperty_                           TextLabelBackgroundColorDelegate;                  // 0x220(0x10)(ZeroConstructor)
	bool                                         ShowLabelOnlyOnHover;                              // 0x230(0x1)(None)
	bool                                         ShowUnitsText;                                     // 0x231(0x1)(None)
	bool                                         IsUnitsTextReadOnly;                               // 0x232(0x1)(None)
	bool                                         IsValueTextReadOnly;                               // 0x233(0x1)(None)
	FDelegateProperty_                           ValueDelegate;                                     // 0x234(0x10)(ZeroConstructor)
	struct FLinearColor                          SliderBackgroundColor;                             // 0x244(0x10)(None)
	FDelegateProperty_                           SliderBackgroundColorDelegate;                     // 0x254(0x10)(ZeroConstructor)
	struct FLinearColor                          SliderBarColor;                                    // 0x264(0x10)(None)
	FDelegateProperty_                           SliderBarColorDelegate;                            // 0x274(0x10)(ZeroConstructor)
	struct FLinearColor                          SliderThumbColor;                                  // 0x284(0x10)(None)
	FDelegateProperty_                           SliderThumbColorDelegate;                          // 0x294(0x10)(ZeroConstructor)
	struct FLinearColor                          WidgetBackgroundColor;                             // 0x2A4(0x10)(None)
	FDelegateProperty_                           WidgetBackgroundColorDelegate;                     // 0x2B4(0x10)(ZeroConstructor)
	enum class EOrientation                      Orientation;                                       // 0x2C4(0x1)(None)
	uint8                                        Pad_2697[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2C8(0x10)(ZeroConstructor)
	uint8                                        Pad_2699[0x768];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioSliderBase* GetDefaultObj();

	void SetWidgetBackgroundColor(const struct FLinearColor& InValue);
	void SetValueTextReadOnly(bool bIsReadOnly);
	void SetUnitsTextReadOnly(bool bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetSliderThumbColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderBackgroundColor(const struct FLinearColor& InValue);
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	void GetSliderValue(float OutputValue, float ReturnValue);
	void GetOutputValue(float InSliderValue, float ReturnValue);
	void GetLinValue(float OutputValue, float ReturnValue);
};

// 0x10 (0xA50 - 0xA40)
// Class AudioWidgets.AudioSlider
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>            LinToOutputCurve;                                  // 0xA40(0x8)(ZeroConstructor)
	TWeakObjectPtr<class UCurveFloat>            OutputToLinCurve;                                  // 0xA48(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAudioSlider* GetDefaultObj();

};

// 0x0 (0xA50 - 0xA50)
// Class AudioWidgets.AudioVolumeSlider
class UAudioVolumeSlider : public UAudioSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioVolumeSlider* GetDefaultObj();

};

// 0x10 (0xA50 - 0xA40)
// Class AudioWidgets.AudioFrequencySlider
class UAudioFrequencySlider : public UAudioSliderBase
{
public:
	struct FVector2D                             OutputRange;                                       // 0xA40(0x10)(None)

	static class UClass* StaticClass();
	static class UAudioFrequencySlider* GetDefaultObj();

};

}


