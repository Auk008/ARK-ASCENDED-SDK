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

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetRowIndex
struct UMovieSceneSection_SetRowIndex_Params
{
public:
	int32                                        NewRowIndex;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetPreRollFrames
struct UMovieSceneSection_SetPreRollFrames_Params
{
public:
	int32                                        InPreRollFrames;                                   // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetPostRollFrames
struct UMovieSceneSection_SetPostRollFrames_Params
{
public:
	int32                                        InPostRollFrames;                                  // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetOverlapPriority
struct UMovieSceneSection_SetOverlapPriority_Params
{
public:
	int32                                        NewPriority;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetIsLocked
struct UMovieSceneSection_SetIsLocked_Params
{
public:
	bool                                         bInIsLocked;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetIsActive
struct UMovieSceneSection_SetIsActive_Params
{
public:
	bool                                         bInIsActive;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetCompletionMode
struct UMovieSceneSection_SetCompletionMode_Params
{
public:
	enum class EMovieSceneCompletionMode         InCompletionMode;                                  // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetColorTint
struct UMovieSceneSection_SetColorTint_Params
{
public:
	struct FColor                                InColorTint;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetBlendType
struct UMovieSceneSection_SetBlendType_Params
{
public:
	enum class EMovieSceneBlendType              InBlendType;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.IsLocked
struct UMovieSceneSection_IsLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.IsActive
struct UMovieSceneSection_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetRowIndex
struct UMovieSceneSection_GetRowIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetPreRollFrames
struct UMovieSceneSection_GetPreRollFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetPostRollFrames
struct UMovieSceneSection_GetPostRollFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetOverlapPriority
struct UMovieSceneSection_GetOverlapPriority_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.GetCompletionMode
struct UMovieSceneSection_GetCompletionMode_Params
{
public:
	enum class EMovieSceneCompletionMode         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetColorTint
struct UMovieSceneSection_GetColorTint_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x2 (0x2 - 0x0)
// Function MovieScene.MovieSceneSection.GetBlendType
struct UMovieSceneSection_GetBlendType_Params
{
public:
	struct FOptionalMovieSceneBlendType          ReturnValue;                                       // 0x0(0x2)(None)
};

// 0x14 (0x14 - 0x0)
// Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
struct UMovieSceneSequence_GetEarliestTimecodeSource_Params
{
public:
	struct FMovieSceneTimecodeSource             ReturnValue;                                       // 0x0(0x14)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequence.FindBindingsByTag
struct UMovieSceneSequence_FindBindingsByTag_Params
{
public:
	class FName                                  InBindingName;                                     // 0x0(0x8)(None)
	TArray<struct FMovieSceneObjectBindingID>    ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function MovieScene.MovieSceneSequence.FindBindingByTag
struct UMovieSceneSequence_FindBindingByTag_Params
{
public:
	class FName                                  InBindingName;                                     // 0x0(0x8)(None)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSubSection.SetSequence
struct UMovieSceneSubSection_SetSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSubSection.GetSequence
struct UMovieSceneSubSection_GetSequence_Params
{
public:
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetWeight
struct UMovieSceneSequencePlayer_SetWeight_Params
{
public:
	double                                       InWeight;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UMovieSceneSequencePlayer_SetTimeRange_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(None)
	float                                        Duration;                                          // 0x4(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
public:
	struct FMovieSceneSequencePlaybackParams     PlaybackParams;                                    // 0x0(0x28)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UMovieSceneSequencePlayer_SetFrameRate_Params
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UMovieSceneSequencePlayer_SetFrameRange_Params
{
public:
	int32                                        StartFrame;                                        // 0x0(0x4)(None)
	int32                                        Duration;                                          // 0x4(0x4)(None)
	float                                        SubFrames;                                         // 0x8(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
{
public:
	bool                                         bInDisableCameraCuts;                              // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UMovieSceneSequencePlayer_ScrubToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params
{
public:
	class FString                                InLabel;                                           // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_28C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UMovieSceneSequencePlayer_ScrubToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct UMovieSceneSequencePlayer_RPC_OnStopEvent_Params
{
public:
	struct FFrameTime                            StoppedTime;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
struct UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Params
{
public:
	struct FFrameTime                            StoppedTime;                                       // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
{
public:
	enum class EUpdatePositionMethod             Method;                                            // 0x0(0x1)(None)
	uint8                                        Pad_291[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            RelevantTime;                                      // 0x4(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UMovieSceneSequencePlayer_PlayToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct UMovieSceneSequencePlayer_PlayToMarkedFrame_Params
{
public:
	class FString                                InLabel;                                           // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_29A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UMovieSceneSequencePlayer_PlayToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayTo
struct UMovieSceneSequencePlayer_PlayTo_Params
{
public:
	struct FMovieSceneSequencePlaybackParams     PlaybackParams;                                    // 0x0(0x28)(None)
	struct FMovieSceneSequencePlayToParams       PlayToParams;                                      // 0x28(0x1)(None)
	uint8                                        Pad_29D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
public:
	int32                                        NumLoops;                                          // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UMovieSceneSequencePlayer_JumpToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct UMovieSceneSequencePlayer_JumpToMarkedFrame_Params
{
public:
	class FString                                InLabel;                                           // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_29F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UMovieSceneSequencePlayer_JumpToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct UMovieSceneSequencePlayer_IsReversed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieSceneSequencePlayer_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UMovieSceneSequencePlayer_GetStartTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
struct UMovieSceneSequencePlayer_GetSequenceName_Params
{
public:
	bool                                         bAddClientInfo;                                    // 0x0(0x1)(None)
	uint8                                        Pad_2A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetSequence
struct UMovieSceneSequencePlayer_GetSequence_Params
{
public:
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct UMovieSceneSequencePlayer_GetObjectBindings_Params
{
public:
	class UObject*                               InObject;                                          // 0x0(0x8)(None)
	TArray<struct FMovieSceneObjectBindingID>    ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UMovieSceneSequencePlayer_GetFrameRate_Params
{
public:
	struct FFrameRate                            ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UMovieSceneSequencePlayer_GetFrameDuration_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UMovieSceneSequencePlayer_GetEndTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UMovieSceneSequencePlayer_GetDuration_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UMovieSceneSequencePlayer_GetCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(None)
	TArray<class UObject*>                       ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct IMovieSceneEasingFunction_OnEvaluate_Params
{
public:
	float                                        Interp;                                            // 0x0(0x4)(None)
	float                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnTick
struct IMovieSceneCustomClockSource_OnTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(None)
	float                                        InPlayRate;                                        // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
struct IMovieSceneCustomClockSource_OnStopPlaying_Params
{
public:
	struct FQualifiedFrameTime                   InStopTime;                                        // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
struct IMovieSceneCustomClockSource_OnStartPlaying_Params
{
public:
	struct FQualifiedFrameTime                   InStartTime;                                       // 0x0(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
struct IMovieSceneCustomClockSource_OnRequestCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   InCurrentTime;                                     // 0x0(0x10)(None)
	float                                        InPlayRate;                                        // 0x10(0x4)(None)
	struct FFrameTime                            ReturnValue;                                       // 0x14(0x8)(None)
};

}
}


