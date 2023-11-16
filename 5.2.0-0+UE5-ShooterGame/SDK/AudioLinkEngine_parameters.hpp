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

// 0x8 (0x8 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
struct IAudioLinkBlueprintInterface_SetLinkSound_Params
{
public:
	class USoundBase*                            NewSound;                                          // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
struct IAudioLinkBlueprintInterface_PlayLink_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
struct IAudioLinkBlueprintInterface_IsLinkPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

}
}


