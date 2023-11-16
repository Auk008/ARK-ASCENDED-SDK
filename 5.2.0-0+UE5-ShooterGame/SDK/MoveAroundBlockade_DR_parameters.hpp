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

// 0x9 (0x9 - 0x0)
// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveExecutionFinish
struct UMoveAroundBlockade_DR_C_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveConditionCheck
struct UMoveAroundBlockade_DR_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveExecutionStart
struct UMoveAroundBlockade_DR_C_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x138 (0x138 - 0x0)
// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ExecuteUbergraph_MoveAroundBlockade_DR
struct UMoveAroundBlockade_DR_C_ExecuteUbergraph_MoveAroundBlockade_DR_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3425[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor_2;                         // 0x8(0x8)(ZeroConstructor)
	enum class EBTNodeResult                     K2Node_Event_NodeResult;                           // 0x10(0x1)(None)
	uint8                                        Pad_3426[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x18(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x20(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_3427[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x30(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_3428[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(ZeroConstructor)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x48(0x18)(None)
	double                                       CallFunc_DoubleToFloat_ReturnValue;                // 0x60(0x8)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x68(0x8)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x70(0x18)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x88(0x1)(None)
	uint8                                        Pad_3429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x90(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0xA8(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0xB0(0x1)(None)
	uint8                                        Pad_342B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0xB8(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC0(0x1)(None)
	uint8                                        Pad_342C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0xC8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(None)
	uint8                                        Pad_342D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0xD8(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_2;   // 0xE0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xE8(0x1)(None)
	uint8                                        Pad_342E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xF0(0x8)(None)
	double                                       CallFunc_DoubleToFloat_ReturnValue_1;              // 0xF8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x100(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x108(0x1)(None)
	uint8                                        Pad_342F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x110(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x118(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x120(0x1)(None)
	uint8                                        Pad_3430[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x128(0x8)(ZeroConstructor)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue_1;     // 0x130(0x8)(None)
};

}
}


