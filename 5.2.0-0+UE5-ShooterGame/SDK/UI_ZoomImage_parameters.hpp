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

// 0x1B (0x1B - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.BPGamepadReleased
struct UUI_ZoomImage_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.BPHighlightWidgetOnStart
struct UUI_ZoomImage_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotDescription
struct UUI_ZoomImage_C_UpdateScreenshotDescription_Params
{
public:
	int32                                        ImageIndex;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4A71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x65 (0x65 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdatePageCounter
struct UUI_ZoomImage_C_UpdatePageCounter_Params
{
public:
	int32                                        ImageIndex;                                        // 0x0(0x4)(None)
	int32                                        _numOfScreenshots;                                 // 0x4(0x4)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x28(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x64(0x1)(None)
};

// 0x100 (0x100 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotImage
struct UUI_ZoomImage_C_UpdateScreenshotImage_Params
{
public:
	int32                                        ImageIndex;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4A76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x11(0x1)(None)
	uint8                                        Pad_4A77[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item;                           // 0x18(0x8)(Edit, ZeroConstructor)
	class UObject*                               K2Node_Select_Default;                             // 0x20(0x8)(Edit, ZeroConstructor)
	uint8                                        Pad_4A78[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0xD0)(None)
};

// 0x4 (0x4 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.InitScreenshot_Info
struct UUI_ZoomImage_C_InitScreenshot_Info_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(None)
};

// 0x3B (0x3B - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.UpdateButtonsStyle
struct UUI_ZoomImage_C_UpdateButtonsStyle_Params
{
public:
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x0(0x1)(None)
	uint8                                        Pad_4A79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x8(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;          // 0x18(0x1)(None)
	uint8                                        Pad_4A7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_1;          // 0x20(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x28(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x34(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x39(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3A(0x1)(None)
};

// 0x158 (0x158 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.OnKeyDown
struct UUI_ZoomImage_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x149(0x1)(None)
	uint8                                        Pad_4A7B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x150(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.ButtonCall
struct UUI_ZoomImage_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.Tick
struct UUI_ZoomImage_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0xAC (0xAC - 0x0)
// Function UI_ZoomImage.UI_ZoomImage_C.ExecuteUbergraph_UI_ZoomImage
struct UUI_ZoomImage_C_ExecuteUbergraph_UI_ZoomImage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(None)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(None)
	uint8                                        Pad_4A82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1C(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable_1;                               // 0x34(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(None)
	uint8                                        Pad_4A83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x40(0x8)(Edit, ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x48(0x8)(None)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x50(0x18)(None)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x68(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x69(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x6A(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x6B(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x6C(0x1)(None)
	uint8                                        Pad_4A84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x70(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0xA8(0x4)(None)
};

}
}


