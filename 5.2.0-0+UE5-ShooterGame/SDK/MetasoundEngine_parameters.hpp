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

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
struct UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params
{
public:
	class UAudioComponent*                       OnComponent;                                       // 0x0(0x8)(ZeroConstructor)
	class UMetasoundGeneratorHandle*             ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
struct UMetasoundGeneratorHandle_ApplyParameterPack_Params
{
public:
	class UMetasoundParameterPack*               Pack;                                              // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2602[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
struct UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params
{
public:
	TArray<struct FMetaSoundAssetDirectory>      Directories;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
struct UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params
{
public:
	TArray<struct FMetaSoundAssetDirectory>      Directories;                                       // 0x0(0x10)(None)
};

}
}


