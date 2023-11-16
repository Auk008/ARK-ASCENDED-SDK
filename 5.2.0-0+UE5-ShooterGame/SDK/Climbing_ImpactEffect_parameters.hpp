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

// 0xC (0xC - 0x0)
// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DeactivateImpactEffect
struct AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(None)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x8(0x4)(None)
};

// 0x54 (0x54 - 0x0)
// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ExecuteUbergraph_Climbing_ImpactEffect
struct AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2D52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0x18)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_2D53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterWeapon_Climb*                  K2Node_DynamicCast_AsShooter_Weapon_Climb;         // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(None)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x41(0x1)(None)
	uint8                                        Pad_2D54[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x48(0x8)(None)
	float                                        CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x50(0x4)(None)
};

}
}


