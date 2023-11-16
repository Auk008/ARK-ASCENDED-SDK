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

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
struct UOculusCreateSessionCallbackProxy_CreateSession_Params
{
public:
	int32                                        PublicConnections;                                 // 0x0(0x4)(None)
	uint8                                        Pad_EA1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OculusMatchmakingPool;                             // 0x8(0x10)(None)
	class UOculusCreateSessionCallbackProxy*     ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
struct UOculusEntitlementCallbackProxy_VerifyEntitlement_Params
{
public:
	class UOculusEntitlementCallbackProxy*       ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
struct UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(None)
	uint8                                        Pad_EA5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOculusFindSessionsCallbackProxy*      ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
struct UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(None)
	uint8                                        Pad_EA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OculusMatchmakingPool;                             // 0x8(0x10)(None)
	class UOculusFindSessionsCallbackProxy*      ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
struct UOculusIdentityCallbackProxy_GetOculusIdentity_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(None)
	uint8                                        Pad_EA9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOculusIdentityCallbackProxy*          ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
struct UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params
{
public:
	bool                                         bShouldEnqueueInMatchmakingPool;                   // 0x0(0x1)(None)
	uint8                                        Pad_EAE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOculusUpdateSessionCallbackProxy*     ReturnValue;                                       // 0x8(0x8)(None)
};

}
}


