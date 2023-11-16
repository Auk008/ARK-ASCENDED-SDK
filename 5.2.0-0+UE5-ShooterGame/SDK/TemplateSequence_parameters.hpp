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
// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct ATemplateSequenceActor_SetSequence_Params
{
public:
	class UTemplateSequence*                     InSequence;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct ATemplateSequenceActor_SetBinding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(None)
	uint8                                        Pad_21B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct ATemplateSequenceActor_LoadSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct ATemplateSequenceActor_GetSequencePlayer_Params
{
public:
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct ATemplateSequenceActor_GetSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UTemplateSequence*                     TemplateSequence;                                  // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneSequencePlaybackSettings   Settings;                                          // 0x10(0x20)(None)
	class ATemplateSequenceActor*                OutActor;                                          // 0x30(0x8)(ZeroConstructor)
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x790 (0x790 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
struct USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	int32                                        PPIndex;                                           // 0x8(0x4)(None)
	uint8                                        Pad_21D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  OutPPSettings;                                     // 0x10(0x770)(None)
	float                                        OutPPBlendWeight;                                  // 0x780(0x4)(None)
	bool                                         ReturnValue;                                       // 0x784(0x1)(None)
	uint8                                        Pad_21D9[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x870 (0x870 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
struct USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_21DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x860)(None)
};

// 0x870 (0x870 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
struct USequenceCameraShakeTestUtil_GetCameraCachePOV_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_21E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x860)(None)
};

}
}


