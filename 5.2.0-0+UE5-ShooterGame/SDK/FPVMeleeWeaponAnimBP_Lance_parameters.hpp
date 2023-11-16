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
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimGraph
struct UFPVMeleeWeaponAnimBP_Lance_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
struct UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
struct UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(None)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_436D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	uint8                                        Pad_436E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x38(0x8)(None)
	struct FVector                               CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x40(0x18)(None)
	struct FRotator                              CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0x58(0x18)(None)
	bool                                         CallFunc_GetBlockingShieldOffsets_ReturnValue;     // 0x70(0x1)(None)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0x71(0x1)(None)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0x72(0x1)(None)
	uint8                                        Pad_4371[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapLance_C*                          K2Node_DynamicCast_AsWeap_Lance;                   // 0x78(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(None)
	uint8                                        Pad_4372[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x88(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x90(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x98(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xA0(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0xA8(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0xB0(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;       // 0xB8(0x8)(None)
};

}
}


