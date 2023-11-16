#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                = 0,
	Layout_LabelCenter             = 1,
	Layout_LabelBottom             = 2,
	Layout_MAX                     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct AudioWidgets.MeterChannelInfo
struct FMeterChannelInfo
{
public:
	float                                        MeterValue;                                        // 0x0(0x4)(None)
	float                                        PeakValue;                                         // 0x4(0x4)(None)
	float                                        ClippingValue;                                     // 0x8(0x4)(None)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct AudioWidgets.AudioMeterStyle
struct FAudioMeterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_269F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           MeterValueImage;                                   // 0x10(0xD0)(ZeroConstructor, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BackgroundImage;                                   // 0xE0(0xD0)(ZeroConstructor, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           MeterBackgroundImage;                              // 0x1B0(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           MeterValueBackgroundImage;                         // 0x280(0xD0)(ZeroConstructor, AssetRegistrySearchable, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           MeterPeakImage;                                    // 0x350(0xD0)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FVector2D                             MeterSize;                                         // 0x420(0x10)(None)
	struct FVector2D                             MeterPadding;                                      // 0x430(0x10)(None)
	float                                        MeterValuePadding;                                 // 0x440(0x4)(None)
	float                                        PeakValueWidth;                                    // 0x444(0x4)(None)
	struct FVector2D                             ValueRangeDb;                                      // 0x448(0x10)(None)
	bool                                         bShowScale;                                        // 0x458(0x1)(None)
	bool                                         bScaleSide;                                        // 0x459(0x1)(None)
	uint8                                        Pad_26A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleHashOffset;                                   // 0x45C(0x4)(None)
	float                                        ScaleHashWidth;                                    // 0x460(0x4)(None)
	float                                        ScaleHashHeight;                                   // 0x464(0x4)(None)
	int32                                        DecibelsPerHash;                                   // 0x468(0x4)(None)
	uint8                                        Pad_26A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x470(0x58)(None)
	uint8                                        Pad_26A5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct AudioWidgets.AudioTextBoxStyle
struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xD0)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           BackgroundColor;                                   // 0xE0(0x14)(None)
	uint8                                        Pad_26A7[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x748 (0x750 - 0x8)
// ScriptStruct AudioWidgets.AudioSliderStyle
struct FAudioSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x500)(ZeroConstructor, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x510(0x100)(ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           WidgetBackgroundImage;                             // 0x610(0xD0)(AssetRegistrySearchable, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           SliderBackgroundColor;                             // 0x6E0(0x14)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SliderBackgroundSize;                              // 0x6F8(0x10)(None)
	float                                        LabelPadding;                                      // 0x708(0x4)(None)
	struct FSlateColor                           SliderBarColor;                                    // 0x70C(0x14)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           SliderThumbColor;                                  // 0x720(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           WidgetBackgroundColor;                             // 0x734(0x14)(None)
	uint8                                        Pad_26AF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x160 - 0x8)
// ScriptStruct AudioWidgets.AudioRadialSliderStyle
struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x10(0x100)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           CenterBackgroundColor;                             // 0x110(0x14)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           SliderBarColor;                                    // 0x124(0x14)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           SliderProgressColor;                               // 0x138(0x14)(None)
	float                                        LabelPadding;                                      // 0x14C(0x4)(None)
	float                                        DefaultSliderRadius;                               // 0x150(0x4)(None)
	uint8                                        Pad_26B2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


