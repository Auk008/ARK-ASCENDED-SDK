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

// 0x3A (0x3A - 0x0)
// Function PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C.BPCanUse
struct UPrimalItem_WeaponFishingRod_C_BPCanUse_Params
{
public:
	bool                                         bIgnoreCooldown;                                   // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
	bool                                         RetCanUse;                                         // 0x2(0x1)(None)
	uint8                                        Pad_4150[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x8(0x8)(ZeroConstructor)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue_1;          // 0x10(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(None)
	bool                                         CallFunc_BP_ForceAllowMountedWeapon_ReturnValue;   // 0x2A(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2B(0x1)(None)
	bool                                         CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1; // 0x2C(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x2D(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x2E(0x1)(None)
	uint8                                        Pad_4151[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureSeatingBaseBP_C*             K2Node_DynamicCast_AsStructure_Seating_Base_BP;    // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x39(0x1)(None)
};

}
}


