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
// Function Seek_Srv.Seek_Srv_C.ReceiveActivation
struct USeek_Srv_C_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function Seek_Srv.Seek_Srv_C.ExecuteUbergraph_Seek_Srv
struct USeek_Srv_C_ExecuteUbergraph_Seek_Srv_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_321C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

}
}


