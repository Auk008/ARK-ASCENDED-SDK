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

// 0x22 (0x22 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SettingsOverlayIsOpen
struct UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4B98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x10(0x1)(None)
	uint8                                        Pad_4B99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay; // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x21(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
struct UReMainMenuUI_ASA_C_HighlightTheStartButton_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(None)
};

// 0x225 (0x225 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnKeyDownEvent
struct UReMainMenuUI_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x160(0xB8)(None)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x218(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21C(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x21D(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x21E(0x1)(None)
	uint8                                        Pad_4B9C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x220(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x224(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
struct UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params
{
public:
	bool                                         IsCTAVisible;                                      // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	uint8                                        Pad_4B9D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(None)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x14(0x10)(None)
	struct FMargin                               K2Node_Select_Default;                             // 0x24(0x10)(None)
	uint8                                        Pad_4B9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x38(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadActiveChangedBP
struct UReMainMenuUI_ASA_C_OnGamepadActiveChangedBP_Params
{
public:
	bool                                         bIsGamepadActive;                                  // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadSelectionChanged
struct UReMainMenuUI_ASA_C_OnGamepadSelectionChanged_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SetMainJoinedButtonVisibility
struct UReMainMenuUI_ASA_C_SetMainJoinedButtonVisibility_Params
{
public:
	enum class ESlateVisibility                  NewVisibilty;                                      // 0x0(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.Tick
struct UReMainMenuUI_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x19C (0x19C - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.ExecuteUbergraph_ReMainMenuUI_ASA
struct UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4BBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(Edit, ZeroConstructor)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x10(0x30)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0x48(0x1)(None)
	uint8                                        Pad_4BC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4C(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x50(0x1)(None)
	uint8                                        Pad_4BC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_4BC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x68(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x70(0x1)(None)
	uint8                                        Pad_4BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay; // 0x78(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x81(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x82(0x1)(None)
	uint8                                        Pad_4BC5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreditsUI_C*                          CallFunc_Create_ReturnValue_1;                     // 0x88(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA0(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB0(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_Event_bIsGamepadActive;                     // 0xC0(0x1)(None)
	uint8                                        Pad_4BC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xC4(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_4BC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Event_widget;                               // 0xD8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   K2Node_DynamicCast_AsCustom_Button_Widget;         // 0xE0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE9(0x1)(None)
	bool                                         CallFunc_Play_ReturnValue;                         // 0xEA(0x1)(None)
	uint8                                        Pad_4BC8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xF0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF8(0x1)(None)
	bool                                         CallFunc_Rewind_ReturnValue;                       // 0xF9(0x1)(None)
	uint8                                        Pad_4BC9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x100(0x8)(Edit, ZeroConstructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x108(0x8)(None)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x110(0x8)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x118(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x120(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x128(0x8)(Edit, ZeroConstructor)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x130(0x8)(Edit, ZeroConstructor)
	class UShooterGameInstance*                  K2Node_DynamicCast_AsShooter_Game_Instance;        // 0x138(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x140(0x1)(None)
	enum class ESlateVisibility                  K2Node_Event_newVisibilty;                         // 0x141(0x1)(None)
	uint8                                        Pad_4BCB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x144(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x17C(0x4)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x180(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x188(0x1)(None)
	bool                                         CallFunc_Play_ReturnValue_1;                       // 0x189(0x1)(None)
	uint8                                        Pad_4BCC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x18C(0x10)(None)
};

}
}


