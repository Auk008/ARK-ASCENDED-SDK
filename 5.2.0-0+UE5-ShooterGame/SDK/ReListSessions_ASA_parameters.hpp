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

// 0x11 (0x11 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.HandleAscendDescendSwitch
struct UReListSessions_ASA_C_HandleAscendDescendSwitch_Params
{
public:
	class UComboBoxString*                       ComboBox;                                          // 0x0(0x8)(None)
	int32                                        ForIndex;                                          // 0x8(0x4)(None)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0xC(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.UpdateHorizontalTabEnabledStates
struct UReListSessions_ASA_C_UpdateHorizontalTabEnabledStates_Params
{
public:
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x0(0x1)(None)
	uint8                                        Pad_3655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x8(0x8)(None)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x10(0x4)(None)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x14(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x17(0x1)(None)
};

// 0x59 (0x59 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.SetupPlatformSpecificTextBox
struct UReListSessions_ASA_C_SetupPlatformSpecificTextBox_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x18(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x30(0x18)(AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x48(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x58(0x1)(None)
};

// 0x2E0 (0x2E0 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDownEvent
struct UReListSessions_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x148(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x149(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x14A(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x14B(0x1)(None)
	uint8                                        Pad_365B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_OnKeyDown_ReturnValue;                    // 0x150(0xB8)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UComboBoxString*                       CallFunc_GetOpenComboBox_ReturnValue;              // 0x208(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x210(0x1)(None)
	uint8                                        Pad_365C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x218(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x220(0x8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)(None)
};

// 0x2E8 (0x2E8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDown
struct UReListSessions_ASA_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x160(0x8)(Edit, ZeroConstructor)
	struct FEventReply                           CallFunc_OnKeyDown_ReturnValue;                    // 0x168(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x220(0x8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x228(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x229(0x1)(None)
	uint8                                        Pad_3668[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x230(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.GetSizeboxForExtraHandheldScaling
struct UReListSessions_ASA_C_GetSizeboxForExtraHandheldScaling_Params
{
public:
	class USizeBox*                              ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.GetWidgetToScaleForHandheld
struct UReListSessions_ASA_C_GetWidgetToScaleForHandheld_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnServerListingClickedModPopup
struct UReListSessions_ASA_C_OnServerListingClickedModPopup_Params
{
public:
	bool                                         bNeedInit;                                         // 0x0(0x1)(None)
	uint8                                        Pad_3674[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int64>                                ModIds;                                            // 0x8(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ServerName;                                        // 0x18(0x10)(None)
	int64                                        ServerID;                                          // 0x28(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIJoinEvent
struct UReListSessions_ASA_C_ModUIJoinEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIReportEvent
struct UReListSessions_ASA_C_ModUIReportEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIFavoriteEvent
struct UReListSessions_ASA_C_ModUIFavoriteEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.SetCurrentServerSearchType
struct UReListSessions_ASA_C_SetCurrentServerSearchType_Params
{
public:
	int32                                        ServerType;                                        // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.Tick
struct UReListSessions_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x148 (0x148 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ExecuteUbergraph_ReListSessions_ASA
struct UReListSessions_ASA_C_ExecuteUbergraph_ReListSessions_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x24(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x25(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x26(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x27(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x28(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue_2;                  // 0x29(0x1)(None)
	uint8                                        Pad_36A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2C(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x3C(0x1)(None)
	uint8                                        Pad_36A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x40(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x50(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_Event_bNeedInit;                            // 0x60(0x1)(None)
	uint8                                        Pad_36AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int64>                                K2Node_Event_ModIds;                               // 0x68(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                K2Node_Event_ServerName;                           // 0x78(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        K2Node_Event_ServerId;                             // 0x88(0x8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xA8(0x8)(Edit, ZeroConstructor)
	int64                                        K2Node_CustomEvent_ServerId_2;                     // 0xB0(0x8)(None)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0xB8(0x1)(None)
	uint8                                        Pad_36AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        K2Node_CustomEvent_ServerId_1;                     // 0xC0(0x8)(None)
	int64                                        K2Node_CustomEvent_ServerId;                       // 0xC8(0x8)(None)
	int32                                        K2Node_Event_ServerType;                           // 0xD0(0x4)(None)
	bool                                         CallFunc_IsChecked_ReturnValue_3;                  // 0xD4(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xD5(0x1)(None)
	uint8                                        Pad_36B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ServerModsWidget_C*                CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0xE0(0x1)(None)
	uint8                                        Pad_36B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xE4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x11C(0x4)(None)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x120(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x124(0x1)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x125(0x1)(None)
	uint8                                        Pad_36B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x128(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x130(0x1)(None)
	uint8                                        Pad_36B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x138(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x140(0x8)(None)
};

}
}


