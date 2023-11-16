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

// 0x149 (0x149 - 0x0)
// Function UI_Verification.UI_Verification_C.OnKeyDown
struct UUI_Verification_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(None)
};

// 0x130 (0x130 - 0x0)
// Function UI_Verification.UI_Verification_C.OnPreviewKeyDown
struct UUI_Verification_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_Verification.UI_Verification_C.BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature
struct UUI_Verification_C_BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature_Params
{
public:
	class FString                                Digits;                                            // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Verification.UI_Verification_C.Event Bind On Input Device Changed
struct UUI_Verification_C_Event_Bind_On_Input_Device_Changed_Params
{
public:
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Verification.UI_Verification_C.Event On Input Device Changed
struct UUI_Verification_C_Event_On_Input_Device_Changed_Params
{
public:
	enum class ENUM_InputDevices                 Device;                                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Verification.UI_Verification_C.PreConstruct
struct UUI_Verification_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_Verification.UI_Verification_C.Event On Failed To Generate Auth Code
struct UUI_Verification_C_Event_On_Failed_To_Generate_Auth_Code_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x198 (0x198 - 0x0)
// Function UI_Verification.UI_Verification_C.ExecuteUbergraph_UI_Verification
struct UUI_Verification_C_ExecuteUbergraph_UI_Verification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x2C(0x14)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x40(0x14)(AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x54(0x14)(Protected, TextExportTransient, NativeAccessSpecifierPrivate)
	enum class ENUM_InputDevices                 Temp_byte_Variable;                                // 0x68(0x1)(None)
	uint8                                        Pad_4A57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x6C(0x10)(Edit, ZeroConstructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7C(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7D(0x1)(None)
	uint8                                        Pad_4A58[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x80(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x88(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x98(0x10)(Edit, ZeroConstructor)
	class FString                                K2Node_ComponentBoundEvent_Digits;                 // 0xA8(0x10)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
	class UUI_StoreMenu_C*                       K2Node_CustomEvent_StoreMenuRef;                   // 0xB8(0x8)(Edit, ZeroConstructor)
	enum class ENUM_InputDevices                 K2Node_CustomEvent_Device;                         // 0xC0(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC1(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC2(0x1)(None)
	enum class ENUM_InputDevices                 CallFunc_CheckPlayerInputDevices_UsingGamepad_;    // 0xC3(0x1)(None)
	uint8                                        Pad_4A59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC8(0x8)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0xD0(0x14)(AdvancedDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0xE8(0x38)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x120(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetDigits_Digits;                         // 0x130(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x140(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x144(0x1)(None)
	uint8                                        Pad_4A5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0x148(0x14)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_7;                    // 0x15C(0x14)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_8;                    // 0x170(0x14)(AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_9;                    // 0x184(0x14)(None)
};

}
}


