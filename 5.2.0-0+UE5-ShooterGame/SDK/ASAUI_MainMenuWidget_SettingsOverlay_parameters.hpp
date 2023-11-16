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

// 0x219 (0x219 - 0x0)
// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnKeyDownEvent
struct UASAUI_MainMenuWidget_SettingsOverlay_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x160(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x218(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.Tick
struct UASAUI_MainMenuWidget_SettingsOverlay_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x44 (0x44 - 0x0)
// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay
struct UASAUI_MainMenuWidget_SettingsOverlay_C_ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x4(0x1)(None)
	uint8                                        Pad_2B6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(None)
};

}
}


