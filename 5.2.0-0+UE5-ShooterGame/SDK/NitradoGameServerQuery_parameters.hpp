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

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.Start
struct UGameServerQuerySubsystem_Start_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
struct UGameServerQuerySubsystem_SetVersion_Params
{
public:
	class FString                                Version;                                           // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
struct UGameServerQuerySubsystem_SetUniqueID_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
struct UGameServerQuerySubsystem_SetTicksPerSecond_Params
{
public:
	int32                                        TickCount;                                         // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName
struct UGameServerQuerySubsystem_SetServerName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady
struct UGameServerQuerySubsystem_SetReady_Params
{
public:
	bool                                         Ready;                                             // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
struct UGameServerQuerySubsystem_SetPlayerMax_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
struct UGameServerQuerySubsystem_SetPlayerCount_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
struct UGameServerQuerySubsystem_SetPasswordProtected_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName
struct UGameServerQuerySubsystem_SetMapName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag
struct UGameServerQuerySubsystem_RemoveTag_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
struct UGameServerQuerySubsystem_RemovePlatform_Params
{
public:
	enum class EPlatform                         Platform;                                          // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
struct UGameServerQuerySubsystem_AddTag_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
struct UGameServerQuerySubsystem_AddPlatform_Params
{
public:
	enum class EPlatform                         Platform;                                          // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
struct UGameServerQuerySubsystem_AddModInfo_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(None)
	class FString                                Version;                                           // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
struct UGameServerQuerySubsystem_AddListenPortInfo_Params
{
public:
	enum class EPortType                         Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_1BDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Port;                                              // 0x4(0x4)(None)
	class FString                                Address;                                           // 0x8(0x10)(None)
};

}
}


