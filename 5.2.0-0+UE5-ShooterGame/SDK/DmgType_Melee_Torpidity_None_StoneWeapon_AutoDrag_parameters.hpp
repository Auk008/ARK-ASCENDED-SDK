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

// 0x6C (0x6C - 0x0)
// Function DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag.DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C.BPAdjustHarvestingDamage
struct UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C_BPAdjustHarvestingDamage_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ZeroConstructor)
	float                                        IncomingDamage;                                    // 0x8(0x4)(None)
	uint8                                        Pad_43F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(ZeroConstructor)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(ZeroConstructor)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ZeroConstructor)
	float                                        ReturnValue;                                       // 0x40(0x4)(None)
	uint8                                        Pad_43F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OutgoingDamage;                                    // 0x48(0x8)(None)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x50(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	uint8                                        Pad_43FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_OutgoingDamage_ImplicitCast;    // 0x60(0x8)(None)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x68(0x4)(None)
};

}
}


