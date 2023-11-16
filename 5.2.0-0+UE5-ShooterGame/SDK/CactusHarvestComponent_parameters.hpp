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

// 0x60 (0x60 - 0x0)
// Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
struct UCactusHarvestComponent_C_BPCustomHarvestResource_Params
{
public:
	class UPrimalInventoryComponent*             InvComp;                                           // 0x0(0x8)(ZeroConstructor)
	int32                                        NumToGive;                                         // 0x8(0x4)(None)
	uint8                                        Pad_49F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DamageTypeClass;                                   // 0x10(0x8)(Edit, ZeroConstructor)
	class AActor*                                ToActor;                                           // 0x18(0x8)(Edit, ZeroConstructor)
	int32                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_49FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACamelsaurus_Character_Base_BP_C*      K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP; // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_49FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(None)
	uint8                                        Pad_49FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_AddWater_NewWaterAmount;                  // 0x48(0x8)(None)
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x50(0x8)(None)
	float                                        CallFunc_AddStatusValueModifier_Speed_ImplicitCast; // 0x58(0x4)(None)
	float                                        CallFunc_AddStatusValueModifier_Amount_ImplicitCast; // 0x5C(0x4)(None)
};

}
}


