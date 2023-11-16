#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAchievementBlueprintLibrary* GetDefaultObj();

	void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool bFoundID, float Progress);
	void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool bFoundID, class FText Title, class FText LockedDescription, class FText UnlockedDescription, bool bHidden);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_194[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAchievementQueryCallbackProxy* GetDefaultObj();

	void CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, class UAchievementQueryCallbackProxy* ReturnValue);
	void CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController, class UAchievementQueryCallbackProxy* ReturnValue);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_19C[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAchievementWriteCallbackProxy* GetDefaultObj();

	void WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag, class UAchievementWriteCallbackProxy* ReturnValue);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1A3[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConnectionCallbackProxy* GetDefaultObj();

	void ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController, class UConnectionCallbackProxy* ReturnValue);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1A9[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxy* GetDefaultObj();

	void CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, class UCreateSessionCallbackProxy* ReturnValue);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1AF[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxy* GetDefaultObj();

	void DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController, class UDestroySessionCallbackProxy* ReturnValue);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1B8[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEndMatchCallbackProxy* GetDefaultObj();

	void EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome, class UEndMatchCallbackProxy* ReturnValue);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1BB[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEndTurnCallbackProxy* GetDefaultObj();

	void EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface, class UEndTurnCallbackProxy* ReturnValue);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1C2[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxy* GetDefaultObj();

	void GetServerName(const struct FBlueprintSessionResult& Result, const class FString& ReturnValue);
	void GetPingInMs(const struct FBlueprintSessionResult& Result, int32 ReturnValue);
	void GetMaxPlayers(const struct FBlueprintSessionResult& Result, int32 ReturnValue);
	void GetCurrentPlayers(const struct FBlueprintSessionResult& Result, int32 ReturnValue);
	void FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, class UFindSessionsCallbackProxy* ReturnValue);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1C6[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFindTurnBasedMatchCallbackProxy* GetDefaultObj();

	void FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches, class UFindTurnBasedMatchCallbackProxy* ReturnValue);
};

// 0x80 (0xA8 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(None)
	uint8                                        Pad_1D3[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInAppPurchaseCallbackProxy2* GetDefaultObj();

	void CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue);
	void CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue);
	void CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest, class UInAppPurchaseCallbackProxy2* ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(None)
	uint8                                        Pad_1DC[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInAppPurchaseQueryCallbackProxy2* GetDefaultObj();

	void CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<class FString>& ProductIdentifiers, class UInAppPurchaseQueryCallbackProxy2* ReturnValue);
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(None)
	uint8                                        Pad_1DD[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInAppPurchaseRestoreCallbackProxy2* GetDefaultObj();

	void CreateProxyObjectForInAppPurchaseRestore(const TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController, class UInAppPurchaseRestoreCallbackProxy2* ReturnValue);
};

// 0xD0 (0x1EB8 - 0x1DE8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_1DE[0xB4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SocketErrorDisconnectDelay;                        // 0x1E9C(0x4)(None)
	uint8                                        Pad_1DF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xB0 (0x840 - 0x790)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x790(0x1)(None)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x790(0x1)(None)
	uint8                                        BitPad_F : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1E1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxPortCountToTry;                                 // 0x794(0x4)(None)
	uint8                                        Pad_1E2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x79C(0x4)(None)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x7A0(0x4)(None)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x7A4(0x4)(None)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x7A8(0x4)(None)
	uint8                                        Pad_1E3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxSecondsInReceive;                               // 0x7B0(0x8)(None)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x7B8(0x4)(None)
	float                                        ResolutionConnectionTimeout;                       // 0x7BC(0x4)(None)
	uint8                                        Pad_1E4[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1EB[0x148];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxy* GetDefaultObj();

	void JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult, class UJoinSessionCallbackProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULeaderboardBlueprintLibrary* GetDefaultObj();

	void WriteLeaderboardInteger(class APlayerController* PlayerController, class FName StatName, int32 StatValue, bool ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(None)
	uint8                                        Pad_1F5[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULeaderboardFlushCallbackProxy* GetDefaultObj();

	void CreateProxyObjectForFlush(class APlayerController* PlayerController, class FName SessionName, class ULeaderboardFlushCallbackProxy* ReturnValue);
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(None)
	uint8                                        Pad_1F8[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULeaderboardQueryCallbackProxy* GetDefaultObj();

	void CreateProxyObjectForIntQuery(class APlayerController* PlayerController, class FName StatName, class ULeaderboardQueryCallbackProxy* ReturnValue);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_1F9[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULogoutCallbackProxy* GetDefaultObj();

	void Logout(class UObject* WorldContextObject, class APlayerController* PlayerController, class ULogoutCallbackProxy* ReturnValue);
};

// 0x30 (0x4E8 - 0x4B8)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_1FA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BeaconConnectionInitialTimeout;                    // 0x4C0(0x4)(None)
	float                                        BeaconConnectionTimeout;                           // 0x4C4(0x4)(None)
	class UNetDriver*                            NetDriver;                                         // 0x4C8(0x8)(ZeroConstructor)
	uint8                                        Pad_1FB[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AOnlineBeacon* GetDefaultObj();

};

// 0x60 (0x548 - 0x4E8)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x4E8(0x8)(ZeroConstructor)
	class UNetConnection*                        BeaconConnection;                                  // 0x4F0(0x8)(ZeroConstructor)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x4F8(0x1)(None)
	uint8                                        Pad_1FE[0x4F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AOnlineBeaconClient* GetDefaultObj();

	void ClientOnConnected();
};

// 0x110 (0x5F8 - 0x4E8)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x4E8(0x4)(None)
	bool                                         bAuthRequired;                                     // 0x4EC(0x1)(None)
	uint8                                        Pad_1FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxAuthTokenSize;                                  // 0x4F0(0x4)(None)
	uint8                                        Pad_200[0x54];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x548(0x10)(ZeroConstructor)
	uint8                                        Pad_201[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AOnlineBeaconHost* GetDefaultObj();

};

// 0x28 (0x4E0 - 0x4B8)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x4B8(0x10)(None)
	class UClass*                                ClientBeaconActorClass;                            // 0x4C8(0x8)(ZeroConstructor)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x4D0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AOnlineBeaconHostObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<class FName, class FName>               MappedUniqueNetIdTypes;                            // 0x28(0x50)(None)
	TArray<class FName>                          CompatibleUniqueNetIdTypes;                        // 0x78(0x10)(None)
	class FName                                  VoiceSubsystemNameOverride;                        // 0x88(0x8)(None)
	uint8                                        Pad_207[0xF8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(None)
	uint8                                        Pad_208[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UOnlinePIESettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{
public:

	static class UClass* StaticClass();
	static class UOnlineServicesEngineInterfaceImpl* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_20C[0x1B0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFromInvite;                                     // 0x1D8(0x1)(None)
	bool                                         bHandlingDisconnect;                               // 0x1D9(0x1)(None)
	uint8                                        Pad_20D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0xC8 (0x610 - 0x548)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_217[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DestSessionId;                                     // 0x578(0x10)(None)
	struct FPartyReservation                     PendingReservation;                                // 0x588(0x58)(None)
	enum class EClientRequestType                RequestType;                                       // 0x5E0(0x1)(None)
	bool                                         bPendingReservationSent;                           // 0x5E1(0x1)(None)
	bool                                         bCancelReservation;                                // 0x5E2(0x1)(None)
	uint8                                        Pad_218[0x2D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APartyBeaconClient* GetDefaultObj();

	void ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ServerAddOrUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// 0x78 (0x558 - 0x4E0)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x4E0(0x8)(ZeroConstructor)
	uint8                                        Pad_219[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLogoutOnSessionTimeout;                           // 0x548(0x1)(None)
	uint8                                        Pad_21A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SessionTimeoutSecs;                                // 0x54C(0x4)(None)
	float                                        TravelSessionTimeoutSecs;                          // 0x550(0x4)(None)
	uint8                                        Pad_21B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APartyBeaconHost* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(None)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(None)
	int32                                        MaxReservations;                                   // 0x34(0x4)(None)
	int32                                        NumTeams;                                          // 0x38(0x4)(None)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(None)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(None)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(None)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(None)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(None)
	uint8                                        Pad_21C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PlatformCrossplayRestrictions;                     // 0x58(0x10)(None)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                               // 0x68(0x10)(None)
	bool                                         bEnableRemovalRequests;                            // 0x78(0x1)(None)
	uint8                                        Pad_21D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPartyReservation>             Reservations;                                      // 0x80(0x10)(None)
	uint8                                        Pad_21E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyBeaconState* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_222[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuitMatchCallbackProxy* GetDefaultObj();

	void QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds, class UQuitMatchCallbackProxy* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(None)
	uint8                                        Pad_223[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UShowLoginUICallbackProxy* GetDefaultObj();

	void ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController, class UShowLoginUICallbackProxy* ReturnValue);
};

// 0xF8 (0x640 - 0x548)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_225[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DestSessionId;                                     // 0x578(0x10)(None)
	struct FSpectatorReservation                 PendingReservation;                                // 0x588(0x88)(None)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x610(0x1)(None)
	bool                                         bPendingReservationSent;                           // 0x611(0x1)(None)
	bool                                         bCancelReservation;                                // 0x612(0x1)(None)
	uint8                                        Pad_226[0x2D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpectatorBeaconClient* GetDefaultObj();

	void ServerReservationRequest(const class FString& SessionId, const struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
};

// 0x78 (0x558 - 0x4E0)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x4E0(0x8)(ZeroConstructor)
	uint8                                        Pad_227[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLogoutOnSessionTimeout;                           // 0x548(0x1)(None)
	uint8                                        Pad_228[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SessionTimeoutSecs;                                // 0x54C(0x4)(None)
	float                                        TravelSessionTimeoutSecs;                          // 0x550(0x4)(None)
	uint8                                        Pad_229[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpectatorBeaconHost* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(None)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(None)
	int32                                        MaxReservations;                                   // 0x34(0x4)(None)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(None)
	uint8                                        Pad_22A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSpectatorReservation>         Reservations;                                      // 0x40(0x10)(None)
	uint8                                        Pad_22B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpectatorBeaconState* GetDefaultObj();

};

// 0x0 (0x548 - 0x548)
// Class OnlineSubsystemUtils.TestBeaconClient
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconClient* GetDefaultObj();

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x4E0 - 0x4E0)
// Class OnlineSubsystemUtils.TestBeaconHost
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconHost* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTurnBasedBlueprintLibrary* GetDefaultObj();

	void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, const class FString& PlayerDisplayName);
	void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex);
	void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool bIsMyTurn);
};

// 0x60 (0x820 - 0x7C0)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_238[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	void IsIdling(bool ReturnValue);
};

// 0x158 (0x180 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	uint8                                        Pad_23B[0x158];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

}


