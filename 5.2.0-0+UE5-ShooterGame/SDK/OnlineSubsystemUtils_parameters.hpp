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
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(None)
	class FName                                  AchievementID;                                     // 0x10(0x8)(None)
	bool                                         bFoundID;                                          // 0x18(0x1)(None)
	uint8                                        Pad_187[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x1C(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(None)
	class FName                                  AchievementID;                                     // 0x10(0x8)(None)
	bool                                         bFoundID;                                          // 0x18(0x1)(None)
	uint8                                        Pad_18A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x20(0x18)(None)
	class FText                                  LockedDescription;                                 // 0x38(0x18)(None)
	class FText                                  UnlockedDescription;                               // 0x50(0x18)(None)
	bool                                         bHidden;                                           // 0x68(0x1)(None)
	uint8                                        Pad_18B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class FName                                  AchievementName;                                   // 0x10(0x8)(None)
	float                                        Progress;                                          // 0x18(0x4)(None)
	int32                                        UserTag;                                           // 0x1C(0x4)(None)
	class UAchievementWriteCallbackProxy*        ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class UConnectionCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	int32                                        PublicConnections;                                 // 0x10(0x4)(None)
	bool                                         bUseLAN;                                           // 0x14(0x1)(None)
	uint8                                        Pad_1A6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateSessionCallbackProxy*           ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class UDestroySessionCallbackProxy*          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	TScriptInterface<class ITurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(ZeroConstructor)
	class FString                                MatchID;                                           // 0x20(0x10)(None)
	enum class EMPMatchOutcome                   LocalPlayerOutcome;                                // 0x30(0x1)(None)
	enum class EMPMatchOutcome                   OtherPlayersOutcome;                               // 0x31(0x1)(None)
	uint8                                        Pad_1B5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEndMatchCallbackProxy*                ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class FString                                MatchID;                                           // 0x10(0x10)(None)
	TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface;                           // 0x20(0x10)(ZeroConstructor)
	class UEndTurnCallbackProxy*                 ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x130 (0x130 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(None)
	class FString                                ReturnValue;                                       // 0x120(0x10)(None)
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(None)
	int32                                        ReturnValue;                                       // 0x120(0x4)(None)
	uint8                                        Pad_1BE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(None)
	int32                                        ReturnValue;                                       // 0x120(0x4)(None)
	uint8                                        Pad_1BF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(None)
	int32                                        ReturnValue;                                       // 0x120(0x4)(None)
	uint8                                        Pad_1C0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	int32                                        MaxResults;                                        // 0x10(0x4)(None)
	bool                                         bUseLAN;                                           // 0x14(0x1)(None)
	uint8                                        Pad_1C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFindSessionsCallbackProxy*            ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	TScriptInterface<class ITurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(ZeroConstructor)
	int32                                        MinPlayers;                                        // 0x20(0x4)(None)
	int32                                        MaxPlayers;                                        // 0x24(0x4)(None)
	int32                                        PlayerGroup;                                       // 0x28(0x4)(None)
	bool                                         ShowExistingMatches;                               // 0x2C(0x1)(None)
	uint8                                        Pad_1C5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFindTurnBasedMatchCallbackProxy*      ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	struct FInAppPurchaseProductRequest2         ProductRequest;                                    // 0x8(0x18)(None)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	TArray<class FString>                        ProductIdentifiers;                                // 0x8(0x10)(None)
	class UInAppPurchaseQueryCallbackProxy2*     ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params
{
public:
	TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;                            // 0x0(0x10)(None)
	class APlayerController*                     PlayerController;                                  // 0x10(0x8)(ZeroConstructor)
	class UInAppPurchaseRestoreCallbackProxy2*   ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x138 (0x138 - 0x0)
// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x10(0x120)(None)
	class UJoinSessionCallbackProxy*             ReturnValue;                                       // 0x130(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(None)
	class FName                                  StatName;                                          // 0x8(0x8)(None)
	int32                                        StatValue;                                         // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_1ED[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class FName                                  SessionName;                                       // 0x8(0x8)(None)
	class ULeaderboardFlushCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class FName                                  StatName;                                          // 0x8(0x8)(None)
	class ULeaderboardQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class ULogoutCallbackProxy*                  ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(None)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(None)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(None)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(None)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(None)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(None)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x0(0x30)(None)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
struct APartyBeaconClient_ServerAddOrUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(None)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(None)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct APartyBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class FString                                MatchID;                                           // 0x10(0x10)(None)
	enum class EMPMatchOutcome                   Outcome;                                           // 0x20(0x1)(None)
	uint8                                        Pad_21F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TurnTimeoutInSeconds;                              // 0x24(0x4)(None)
	class UQuitMatchCallbackProxy*               ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     InPlayerController;                                // 0x8(0x8)(ZeroConstructor)
	class UShowLoginUICallbackProxy*             ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct ASpectatorBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(None)
	struct FSpectatorReservation                 Reservation;                                       // 0x10(0x88)(None)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct ASpectatorBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      Spectator;                                         // 0x0(0x30)(None)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct ASpectatorBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct ASpectatorBeaconClient_ClientReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct ASpectatorBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(ZeroConstructor)
	class UObject*                               Object;                                            // 0x10(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(None)
	class FString                                MatchID;                                           // 0x10(0x10)(None)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(None)
	uint8                                        Pad_230[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerDisplayName;                                 // 0x28(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(None)
	class FString                                MatchID;                                           // 0x10(0x10)(None)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(None)
	uint8                                        Pad_231[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(None)
	class FString                                MatchID;                                           // 0x10(0x10)(None)
	bool                                         bIsMyTurn;                                         // 0x20(0x1)(None)
	uint8                                        Pad_234[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
struct UVoipListenerSynthComponent_IsIdling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

}
}


