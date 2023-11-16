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

// 0x8 (0x8 - 0x0)
// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ReceiveExecute
struct UGetRandomFleePoint_TK_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x229 (0x229 - 0x0)
// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ExecuteUbergraph_GetRandomFleePoint_TK
struct UGetRandomFleePoint_TK_C_ExecuteUbergraph_GetRandomFleePoint_TK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_38C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_RandomFloat_ReturnValue;                  // 0x8(0x8)(None)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(None)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_38CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x30(0x8)(None)
	class AActor*                                CallFunc_GetTarget_ReturnValue;                    // 0x38(0x8)(Edit, ZeroConstructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x60(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x78(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x80(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x88(0x8)(None)
	double                                       CallFunc_BreakVector_X_1;                          // 0x90(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x98(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xA0(0x8)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xA8(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xC0(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xD8(0x18)(None)
	double                                       CallFunc_BreakVector_X_2;                          // 0xF0(0x8)(None)
	double                                       CallFunc_BreakVector_Y_2;                          // 0xF8(0x8)(None)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x100(0x8)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x108(0x18)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x120(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x138(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x150(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x168(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x180(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x198(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x1B0(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x1C8(0x18)(None)
	struct FVector                               CallFunc_GetRandomWanderDestination_ReturnValue;   // 0x1E0(0x18)(None)
	struct FVector                               CallFunc_GetRandomWanderDestination_ReturnValue_1; // 0x1F8(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x210(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x218(0x1)(None)
	uint8                                        Pad_38CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x220(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x228(0x1)(None)
};

}
}


