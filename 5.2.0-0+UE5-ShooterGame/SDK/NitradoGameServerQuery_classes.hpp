#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF8 - 0x30)
// Class NitradoGameServerQuery.GameServerQuerySubsystem
class UGameServerQuerySubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1BDD[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnableReadyEndpoint;                              // 0xF0(0x1)(None)
	bool                                         bEnableQueryEndpoint;                              // 0xF1(0x1)(None)
	uint16                                       QueryPort;                                         // 0xF2(0x2)(None)
	bool                                         bEnablePlugin;                                     // 0xF4(0x1)(None)
	uint8                                        Pad_1BDE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameServerQuerySubsystem* GetDefaultObj();

	void Start(bool ReturnValue);
	void SetVersion(const class FString& Version);
	void SetUniqueID(const class FString& UniqueID);
	void SetTicksPerSecond(int32 TickCount);
	void SetServerName(const class FString& Name);
	void SetReady(bool Ready);
	void SetPlayerMax(int32 Count);
	void SetPlayerCount(int32 Count);
	void SetPasswordProtected(bool Enabled);
	void SetMapName(const class FString& Name);
	void Reset();
	void RemoveTag(const class FString& Tag);
	void RemovePlatform(enum class EPlatform Platform);
	void IncrementPlayerCount();
	void DecrementPlayerCount();
	void AddTag(const class FString& Tag);
	void AddPlatform(enum class EPlatform Platform);
	void AddModInfo(const class FString& ID, const class FString& Version);
	void AddListenPortInfo(enum class EPortType Type, int32 Port, const class FString& Address);
};

}


