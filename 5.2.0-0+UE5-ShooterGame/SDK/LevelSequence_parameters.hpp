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
// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
struct ULevelSequence_RemoveMetaDataByClass_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
struct ULevelSequence_FindOrAddMetaDataByClass_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequence.FindMetaDataByClass
struct ULevelSequence_FindMetaDataByClass_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequence.CopyMetaData
struct ULevelSequence_CopyMetaData_Params
{
public:
	class UObject*                               InMetaData;                                        // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
struct ULevelSequenceBurnInOptions_SetBurnIn_Params
{
public:
	struct FSoftClassPath                        InBurnInClass;                                     // 0x0(0x20)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
struct ALevelSequenceActor_SetReplicatePlayback_Params
{
public:
	bool                                         ReplicatePlayback;                                 // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function LevelSequence.LevelSequenceActor.SetBindingByTag
struct ALevelSequenceActor_SetBindingByTag_Params
{
public:
	class FName                                  BindingTag;                                        // 0x0(0x8)(None)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(None)
	bool                                         bAllowBindingsFromAsset;                           // 0x18(0x1)(None)
	uint8                                        Pad_4C2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequenceActor_SetBinding_Params
{
public:
	struct FMovieSceneObjectBindingID            Binding;                                           // 0x0(0x18)(None)
	TArray<class AActor*>                        Actors;                                            // 0x18(0x10)(None)
	bool                                         bAllowBindingsFromAsset;                           // 0x28(0x1)(None)
	uint8                                        Pad_4C5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequenceActor_ResetBinding_Params
{
public:
	struct FMovieSceneObjectBindingID            Binding;                                           // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
struct ALevelSequenceActor_RemoveBindingByTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	class AActor*                                Actor;                                             // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequenceActor_RemoveBinding_Params
{
public:
	struct FMovieSceneObjectBindingID            Binding;                                           // 0x0(0x18)(None)
	class AActor*                                Actor;                                             // 0x18(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceActor.LoadSequence
struct ALevelSequenceActor_LoadSequence_Params
{
public:
	class ULevelSequence*                        ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
struct ALevelSequenceActor_GetSequencePlayer_Params
{
public:
	class ULevelSequencePlayer*                  ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
public:
	class ULevelSequence*                        ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function LevelSequence.LevelSequenceActor.FindNamedBindings
struct ALevelSequenceActor_FindNamedBindings_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	TArray<struct FMovieSceneObjectBindingID>    ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function LevelSequence.LevelSequenceActor.FindNamedBinding
struct ALevelSequenceActor_FindNamedBinding_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function LevelSequence.LevelSequenceActor.AddBindingByTag
struct ALevelSequenceActor_AddBindingByTag_Params
{
public:
	class FName                                  BindingTag;                                        // 0x0(0x8)(None)
	class AActor*                                Actor;                                             // 0x8(0x8)(None)
	bool                                         bAllowBindingsFromAsset;                           // 0x10(0x1)(None)
	uint8                                        Pad_4CB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequenceActor_AddBinding_Params
{
public:
	struct FMovieSceneObjectBindingID            Binding;                                           // 0x0(0x18)(None)
	class AActor*                                Actor;                                             // 0x18(0x8)(None)
	bool                                         bAllowBindingsFromAsset;                           // 0x20(0x1)(None)
	uint8                                        Pad_4CC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
public:
	class UObject*                               InSettings;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetSequence
struct ULevelSequenceDirector_GetSequence_Params
{
public:
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetRootSequenceTime
struct ULevelSequenceDirector_GetRootSequenceTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
struct ULevelSequenceDirector_GetMasterSequenceTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetCurrentTime
struct ULevelSequenceDirector_GetCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
struct ULevelSequenceDirector_GetBoundObjects_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(None)
	TArray<class UObject*>                       ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetBoundObject
struct ULevelSequenceDirector_GetBoundObject_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(None)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetBoundActors
struct ULevelSequenceDirector_GetBoundActors_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(None)
	TArray<class AActor*>                        ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function LevelSequence.LevelSequenceDirector.GetBoundActor
struct ULevelSequenceDirector_GetBoundActor_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(None)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
struct ULevelSequencePlayer_GetActiveCameraComponent_Params
{
public:
	class UCameraComponent*                      ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class ULevelSequence*                        LevelSequence;                                     // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneSequencePlaybackSettings   Settings;                                          // 0x10(0x20)(None)
	class ALevelSequenceActor*                   OutActor;                                          // 0x30(0x8)(ZeroConstructor)
	class ULevelSequencePlayer*                  ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
struct ALevelSequenceMediaController_SynchronizeToServer_Params
{
public:
	float                                        DesyncThresholdSeconds;                            // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceMediaController.GetSequence
struct ALevelSequenceMediaController_GetSequence_Params
{
public:
	class ALevelSequenceActor*                   ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
struct ALevelSequenceMediaController_GetMediaComponent_Params
{
public:
	class UMediaComponent*                       ReturnValue;                                       // 0x0(0x8)(None)
};

}
}


