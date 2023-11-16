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

// 0x10 (0x10 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseEnterFunc
struct UASAUI_MainMenuWidget_Card_C_OnMouseEnterFunc_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseLeaveFunc
struct UASAUI_MainMenuWidget_Card_C_OnMouseLeaveFunc_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x8(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseLeave
struct UASAUI_MainMenuWidget_Card_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.OnMouseEnter
struct UASAUI_MainMenuWidget_Card_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.PreConstruct
struct UASAUI_MainMenuWidget_Card_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x131 (0x131 - 0x0)
// Function ASAUI_MainMenuWidget_Card.ASAUI_MainMenuWidget_Card_C.ExecuteUbergraph_ASAUI_MainMenuWidget_Card
struct UASAUI_MainMenuWidget_Card_C_ExecuteUbergraph_ASAUI_MainMenuWidget_Card_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4B51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x8(0x78)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x80(0x38)(None)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x78)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x130(0x1)(None)
};

}
}


