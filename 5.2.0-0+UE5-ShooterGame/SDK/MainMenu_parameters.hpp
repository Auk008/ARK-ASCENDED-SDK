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

// 0x28 (0x28 - 0x0)
// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_15[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	class UShooterGameInstance*                  K2Node_DynamicCast_AsShooter_Game_Instance;        // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_16[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UReMainMenuUI_ASA_C*                   CallFunc_Create_ReturnValue;                       // 0x20(0x8)(None)
};

}
}


