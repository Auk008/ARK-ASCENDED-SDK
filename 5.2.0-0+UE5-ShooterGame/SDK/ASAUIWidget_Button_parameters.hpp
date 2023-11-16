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

// 0x18 (0x18 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.SetButtonText
struct UASAUIWidget_Button_C_SetButtonText_Params
{
public:
	class FText                                  TheText;                                           // 0x0(0x18)(None)
};

// 0xCA (0xCA - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.Fix PS Icons
struct UASAUIWidget_Button_C_Fix_PS_Icons_Params
{
public:
	TMap<class FString, class FString>           XSX_ui_names;                                      // 0x0(0x50)(AssetRegistrySearchable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x50(0x1)(None)
	uint8                                        Pad_27BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x58(0x8)(Edit, ZeroConstructor)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, class FString>           K2Node_MakeVariable_MakeVariableOutput;            // 0x70(0x50)(None)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0xC0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC9(0x1)(None)
};

// 0xE8 (0xE8 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateInputIcon
struct UASAUIWidget_Button_C_UpdateInputIcon_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x1(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x2(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(None)
	uint8                                        Pad_27C7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(None)
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0xE0(0x8)(None)
};

// 0x8E (0x8E - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateBracketAndTextColors
struct UASAUIWidget_Button_C_UpdateBracketAndTextColors_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	uint8                                        Pad_27DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x18(0x10)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x28(0x14)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x3C(0x14)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x50(0x14)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x64(0x14)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x78(0x14)(None)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x8C(0x1)(None)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x8D(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.PreConstruct
struct UASAUIWidget_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.SetActive
struct UASAUIWidget_Button_C_SetActive_Params
{
public:
	bool                                         NewActive;                                         // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.OnWidgetGamepadActiveChangedBP
struct UASAUIWidget_Button_C_OnWidgetGamepadActiveChangedBP_Params
{
public:
	bool                                         bIsGamepadActive;                                  // 0x0(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.ExecuteUbergraph_ASAUIWidget_Button
struct UASAUIWidget_Button_C_ExecuteUbergraph_ASAUIWidget_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x4(0x1)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x5(0x1)(None)
	bool                                         K2Node_CustomEvent_newActive;                      // 0x6(0x1)(None)
	bool                                         K2Node_Event_bIsGamepadActive;                     // 0x7(0x1)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	class ABasePlayerController*                 K2Node_DynamicCast_AsBase_Player_Controller;       // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x19(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(None)
	uint8                                        Pad_284A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x1C(0x10)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x2C(0x14)(None)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x40(0x4)(None)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x44(0x4)(None)
};

}
}


