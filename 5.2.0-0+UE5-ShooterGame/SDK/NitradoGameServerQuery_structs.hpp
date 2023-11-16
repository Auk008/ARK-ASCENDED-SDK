#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPortType : uint8
{
	Game                           = 0,
	Query                          = 1,
	Rcon                           = 2,
	EPortType_MAX                  = 3,
};

enum class EPlatform : uint8
{
	Unknown                        = 0,
	PC                             = 1,
	MAC                            = 2,
	XBOX                           = 3,
	PLAYSTATION                    = 4,
	SWITCH                         = 5,
	ANDROID                        = 6,
	IOS                            = 7,
	EPlatform_MAX                  = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct NitradoGameServerQuery.PortInfo
struct FPortInfo
{
public:
	uint16                                       Port;                                              // 0x0(0x2)(None)
	enum class EPortType                         Type;                                              // 0x2(0x1)(None)
	uint8                                        Pad_1BE7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Address;                                           // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NitradoGameServerQuery.ModState
struct FModState
{
public:
	class FString                                ModId;                                             // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Version;                                           // 0x10(0x10)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NitradoGameServerQuery.GameServerState
struct FGameServerState
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ServerName;                                        // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                MapName;                                           // 0x20(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Version;                                           // 0x30(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPortInfo>                     Ports;                                             // 0x40(0x10)(ContainsInstancedReference, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class EPlatform>                 Platforms;                                         // 0x50(0x10)(AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int16                                        PlayerCount;                                       // 0x60(0x2)(None)
	int16                                        PlayerMax;                                         // 0x62(0x2)(None)
	int16                                        PlayerReserved;                                    // 0x64(0x2)(None)
	int16                                        BotCount;                                          // 0x66(0x2)(None)
	uint16                                       TicksPerSecond;                                    // 0x68(0x2)(None)
	bool                                         Ready;                                             // 0x6A(0x1)(None)
	bool                                         Password;                                          // 0x6B(0x1)(None)
	uint8                                        Pad_1BEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModState>                     Mods;                                              // 0x70(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Tags;                                              // 0x80(0x10)(None)
};

}


