#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetColorPickerEnabled
struct UUI_CustomColorPicker_C_SetColorPickerEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.LimitTextSize
struct UUI_CustomColorPicker_C_LimitTextSize_Params
{
public:
	class FString                                SourceString;                                      // 0x0(0x10)(TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Size;                                              // 0x10(0x4)(None)
	uint8                                        Pad_4AE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Array;                                             // 0x18(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        LocalArray;                                        // 0x28(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x38(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x48(0x10)(None)
};

// 0x84 (0x84 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.UpdateAllSliders
struct UUI_CustomColorPicker_C_UpdateAllSliders_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	float                                        CallFunc_RGBToHSV_H;                               // 0x10(0x4)(None)
	float                                        CallFunc_RGBToHSV_S;                               // 0x14(0x4)(None)
	float                                        CallFunc_RGBToHSV_V;                               // 0x18(0x4)(None)
	float                                        CallFunc_RGBToHSV_A;                               // 0x1C(0x4)(None)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x20(0x4)(None)
	uint8                                        Pad_4AE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(None)
	class FString                                CallFunc_SRGBtoHEX_ReturnValue;                    // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x40(0x8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x60(0x10)(None)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x70(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x78(0x8)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x80(0x4)(None)
};

// 0x5C (0x5C - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.GetFinalColor
struct UUI_CustomColorPicker_C_GetFinalColor_Params
{
public:
	struct FLinearColor                          FinalColor;                                        // 0x0(0x10)(None)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x10(0x4)(None)
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0x14(0x4)(None)
	float                                        CallFunc_GetValue_ReturnValue_2;                   // 0x18(0x4)(None)
	uint8                                        Pad_4AEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetValue_ReturnValue_3;                   // 0x20(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x30(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x38(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x40(0x8)(None)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x48(0x10)(None)
	float                                        CallFunc_HSVToRGB_H_ImplicitCast;                  // 0x58(0x4)(None)
};

// 0x54 (0x54 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateOpacity
struct UUI_CustomColorPicker_C_OnUpdateOpacity_Params
{
public:
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x0(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(None)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x30(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(None)
	float                                        CallFunc_HSVToRGB_H_ImplicitCast;                  // 0x48(0x4)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x4C(0x4)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast_1;          // 0x50(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateValue
struct UUI_CustomColorPicker_C_OnUpdateValue_Params
{
public:
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x0(0x4)(None)
	uint8                                        Pad_4AF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetValue_ReturnValue_1;                   // 0x8(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x20(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x28(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x30(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x40(0x8)(None)
};

// 0x54 (0x54 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdate2DSynth
struct UUI_CustomColorPicker_C_OnUpdate2DSynth_Params
{
public:
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x0(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(None)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x30(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(None)
	float                                        CallFunc_HSVToRGB_H_ImplicitCast;                  // 0x48(0x4)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x4C(0x4)(None)
	float                                        CallFunc_SetValue_InValue_ImplicitCast_1;          // 0x50(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetValueBarValue
struct UUI_CustomColorPicker_C_SetValueBarValue_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x18(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetSaturationBarColor
struct UUI_CustomColorPicker_C_SetSaturationBarColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x18(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x20(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.ExecuteUbergraph_UI_CustomColorPicker
struct UUI_CustomColorPicker_C_ExecuteUbergraph_UI_CustomColorPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_4AFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_Value_4;                // 0x8(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value_3;                // 0xC(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value_2;                // 0x10(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x14(0x4)(None)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x18(0x4)(None)
	struct FLinearColor                          CallFunc_GetFinalColor_FinalColor;                 // 0x1C(0x10)(None)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x2C(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(None)
	uint8                                        Pad_4AFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SRGBtoHEX_ReturnValue;                    // 0x38(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x60(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x78(0x1)(None)
	uint8                                        Pad_4AFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x80(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_LimitTextSize_Array;                      // 0x90(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FColor                                CallFunc_HEXtoSRGB_Color;                          // 0xA0(0x4)(None)
	uint8                                        Pad_4AFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xA8(0x18)(None)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0xC0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnColorChanged__DelegateSignature
struct UUI_CustomColorPicker_C_OnColorChanged__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

}
}


