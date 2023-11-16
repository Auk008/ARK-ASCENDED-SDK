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

// 0x69 (0x69 - 0x0)
// Function PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C.BPPreventWeaponEquip
struct UPrimalItem_WeaponMachinedSniper_C_BPPreventWeaponEquip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4179[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  RiddenDino;                                        // 0x8(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(None)
	uint8                                        Pad_417A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(None)
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x20(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  CallFunc_GetRidingDino_ReturnValue;                // 0x28(0x8)(ZeroConstructor)
	TSoftClassPtr<class APrimalDinoCharacter>    CallFunc_Array_Get_Item;                           // 0x30(0x30)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue;       // 0x60(0x1)(None)
	uint8                                        Pad_417B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(None)
};

}
}


