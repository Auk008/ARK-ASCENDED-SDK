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

// 0x100 (0x100 - 0x0)
// Function DmgType_Melee_StonePick_Gauntlet.DmgType_Melee_StonePick_Gauntlet_C.BPAdjustDamage
struct UDmgType_Melee_StonePick_Gauntlet_C_BPAdjustDamage_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ZeroConstructor)
	float                                        IncomingDamage;                                    // 0x8(0x4)(None)
	uint8                                        Pad_4772[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(ZeroConstructor)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(ZeroConstructor)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ZeroConstructor)
	float                                        ReturnValue;                                       // 0x40(0x4)(None)
	uint8                                        Pad_4773[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(None)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x60(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(None)
	uint8                                        Pad_4774[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x70(0x18)(None)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x88(0x18)(None)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xA0(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xA4(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xA8(0x4)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAC(0x1)(None)
	uint8                                        Pad_4778[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xB0(0x18)(None)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0xC8(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xE0(0x18)(None)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0xF8(0x8)(None)
};

}
}


