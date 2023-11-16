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
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.OnKeyDown
struct UUI_Prompt_SignIn_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.PreConstruct
struct UUI_Prompt_SignIn_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Prompt_SignIn_C_BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Bind On Input Device Changed
struct UUI_Prompt_SignIn_C_Event_Bind_On_Input_Device_Changed_Params
{
public:
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event On Input Device Changed
struct UUI_Prompt_SignIn_C_Event_On_Input_Device_Changed_Params
{
public:
	enum class ENUM_InputDevices                 Device;                                            // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.Event Failed To Send Security Code
struct UUI_Prompt_SignIn_C_Event_Failed_To_Send_Security_Code_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x1D8 (0x1D8 - 0x0)
// Function UI_Prompt_SignIn.UI_Prompt_SignIn_C.ExecuteUbergraph_UI_Prompt_SignIn
struct UUI_Prompt_SignIn_C_ExecuteUbergraph_UI_Prompt_SignIn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4AF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Verification_C*                    CallFunc_Create_ReturnValue;                       // 0x8(0x8)(Edit, ZeroConstructor)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x14)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x24(0x14)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x38(0x14)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x4C(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x60(0x14)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x74(0x14)(SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ENUM_InputDevices                 Temp_byte_Variable;                                // 0x88(0x1)(None)
	uint8                                        Pad_4AF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8C(0x10)(Edit, ZeroConstructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x9C(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x9D(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9E(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9F(0x1)(None)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0xA0(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA8(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB8(0x10)(Edit, ZeroConstructor)
	class UUI_PrivacyAndTerms_2_C*               CallFunc_Create_ReturnValue_1;                     // 0xC8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD0(0x1)(None)
	uint8                                        Pad_4AF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0xD4(0x14)(AssetRegistrySearchable, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xE8(0x1)(None)
	uint8                                        Pad_4AF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0xF0(0x18)(ContainsInstancedReference, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x108(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_StoreMenu_C*                       K2Node_CustomEvent_StoreMenuRef;                   // 0x120(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x128(0x1)(None)
	enum class ENUM_InputDevices                 K2Node_CustomEvent_Device;                         // 0x129(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x12A(0x1)(None)
	enum class ENUM_InputDevices                 CallFunc_CheckPlayerInputDevices_UsingGamepad_;    // 0x12B(0x1)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_7;                    // 0x12C(0x14)(ContainsInstancedReference, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x140(0x1)(None)
	uint8                                        Pad_4AF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_8;                    // 0x144(0x14)(Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_9;                    // 0x158(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4AF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x170(0x38)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A8(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1B8(0x1)(None)
	uint8                                        Pad_4AFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x1C0(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1C8(0x10)(None)
};

}
}


