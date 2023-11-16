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

// 0x80 (0x80 - 0x0)
// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
struct UImageWriteBlueprintLibrary_ExportToDisk_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(ZeroConstructor)
	class FString                                Filename;                                          // 0x8(0x10)(None)
	uint8                                        Pad_29B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImageWriteOptions                    Options;                                           // 0x20(0x60)(None)
};

}
}


