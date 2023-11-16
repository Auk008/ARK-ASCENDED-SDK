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

// 0x38 (0x38 - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.UpdateBlackboardKeys
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params
{
public:
	class APrimalDinoAIController*               OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x8(0x8)(None)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_351E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x1C(0x8)(None)
	uint8                                        Pad_351F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x28(0x8)(None)
	float                                        CallFunc_GetAttackRotationRangeDegrees_ReturnValue; // 0x30(0x4)(None)
	float                                        CallFunc_GetAttackInterval_ReturnValue;            // 0x34(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
struct UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3520[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(None)
	uint8                                        Pad_3521[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_3522[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetAttackInterval_ReturnValue;            // 0x24(0x4)(None)
	bool                                         CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged; // 0x28(0x1)(None)
	bool                                         CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue; // 0x29(0x1)(None)
	uint8                                        CallFunc_GetCurrentAttackIndex_ReturnValue;        // 0x2A(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2B(0x1)(None)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(None)
};

}
}


