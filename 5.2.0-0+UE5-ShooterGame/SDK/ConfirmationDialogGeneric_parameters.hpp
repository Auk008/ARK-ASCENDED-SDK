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
// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText
struct UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params
{
public:
	class FText                                  CancelText;                                        // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
struct UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params
{
public:
	class FText                                  AcceptText;                                        // 0x0(0x18)(None)
};

// 0xA1 (0xA1 - 0x0)
// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
struct UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3DA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x10(0x1)(None)
	uint8                                        Pad_3DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x18(0x8)(ZeroConstructor)
	class FText                                  K2Node_Event_CancelText;                           // 0x20(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(None)
	uint8                                        Pad_3DA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x40(0x10)(Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_Event_AcceptText;                           // 0x50(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x68(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(None)
	uint8                                        Pad_3DAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumLocalPlayerControllers_ReturnValue; // 0x74(0x4)(None)
	int32                                        CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue; // 0x78(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x7C(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x7D(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x7E(0x1)(None)
	uint8                                        Pad_3DAC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x80(0x8)(ZeroConstructor)
	class FString                                CallFunc_GetObjectName_ReturnValue_1;              // 0x88(0x10)(None)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x98(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xA0(0x1)(None)
};

}
}


