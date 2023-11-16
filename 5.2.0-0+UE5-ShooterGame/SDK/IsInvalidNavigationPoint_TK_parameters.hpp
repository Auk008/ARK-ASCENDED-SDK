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
// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ReceiveExecute
struct UIsInvalidNavigationPoint_TK_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x31 (0x31 - 0x0)
// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ExecuteUbergraph_IsInvalidNavigationPoint_TK
struct UIsInvalidNavigationPoint_TK_C_ExecuteUbergraph_IsInvalidNavigationPoint_TK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_34AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x8(0x18)(None)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x20(0x8)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x28(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x30(0x1)(None)
};

}
}


