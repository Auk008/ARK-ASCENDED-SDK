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

// 0x1C0 (0x1C0 - 0x0)
// Function DmgType_Melee_Lance.DmgType_Melee_Lance_C.BPAdjustDamage
struct UDmgType_Melee_Lance_C_BPAdjustDamage_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ZeroConstructor)
	float                                        IncomingDamage;                                    // 0x8(0x4)(None)
	uint8                                        Pad_413E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(ZeroConstructor)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(ZeroConstructor)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ZeroConstructor)
	float                                        ReturnValue;                                       // 0x40(0x4)(None)
	uint8                                        Pad_413F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x48(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x51(0x1)(None)
	uint8                                        Pad_4140[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapLance_C*                          K2Node_DynamicCast_AsWeap_Lance;                   // 0x58(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(None)
	uint8                                        Pad_4141[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x68(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(None)
	uint8                                        Pad_4142[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x78(0x8)(ZeroConstructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0x18)(None)
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x98(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xA0(0x1)(None)
	uint8                                        Pad_4143[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xA8(0x18)(None)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0xC0(0xF0)(None)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x1B0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B1(0x1)(None)
	uint8                                        Pad_4144[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x1B8(0x8)(None)
};

}
}


