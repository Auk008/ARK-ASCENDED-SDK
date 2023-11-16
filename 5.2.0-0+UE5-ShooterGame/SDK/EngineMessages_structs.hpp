#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct EngineMessages.EngineServicePing
struct FEngineServicePing
{
public:
	uint8                                        Pad_31F0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EngineMessages.EngineServicePong
struct FEngineServicePong
{
public:
	class FString                                CurrentLevel;                                      // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	int32                                        EngineVersion;                                     // 0x10(0x4)(None)
	bool                                         HasBegunPlay;                                      // 0x14(0x1)(None)
	uint8                                        Pad_31F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 InstanceId;                                        // 0x18(0x10)(None)
	class FString                                InstanceType;                                      // 0x28(0x10)(None)
	struct FGuid                                 SessionId;                                         // 0x38(0x10)(None)
	float                                        WorldTimeSeconds;                                  // 0x48(0x4)(None)
	uint8                                        Pad_31F2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceAuthDeny
struct FEngineServiceAuthDeny
{
public:
	class FString                                Username;                                          // 0x0(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	class FString                                UserToDeny;                                        // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceAuthGrant
struct FEngineServiceAuthGrant
{
public:
	class FString                                Username;                                          // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	class FString                                UserToGrant;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceExecuteCommand
struct FEngineServiceExecuteCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash)
	class FString                                Username;                                          // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EngineMessages.EngineServiceTerminate
struct FEngineServiceTerminate
{
public:
	class FString                                Username;                                          // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EngineMessages.EngineServiceNotification
struct FEngineServiceNotification
{
public:
	class FString                                Text;                                              // 0x0(0x10)(None)
	double                                       TimeSeconds;                                       // 0x10(0x8)(None)
};

}


