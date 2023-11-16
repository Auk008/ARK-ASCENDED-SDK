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
// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ReceiveExecute
struct UCheckIsVectorNonZero_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x31 (0x31 - 0x0)
// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero
struct UCheckIsVectorNonZero_C_ExecuteUbergraph_CheckIsVectorNonZero_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_359A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x8(0x18)(None)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x20(0x8)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x28(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x30(0x1)(None)
};

}
}


