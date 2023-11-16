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

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct ITurnBasedMatchInterface_OnMatchReceivedTurn_Params
{
public:
	class FString                                Match;                                             // 0x0(0x10)(None)
	bool                                         bDidBecomeActive;                                  // 0x10(0x1)(None)
	uint8                                        Pad_1[0x7];                                        // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct ITurnBasedMatchInterface_OnMatchEnded_Params
{
public:
	class FString                                Match;                                             // 0x0(0x10)(None)
};

}
}


