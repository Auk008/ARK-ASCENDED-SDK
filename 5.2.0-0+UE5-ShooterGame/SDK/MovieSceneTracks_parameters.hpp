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

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct UMovieSceneParameterSection_RemoveVectorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12B6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12BA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct UMovieSceneParameterSection_RemoveTransformParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12BC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct UMovieSceneParameterSection_RemoveScalarParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12C0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct UMovieSceneParameterSection_RemoveColorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12C3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct UMovieSceneParameterSection_RemoveBoolParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12C6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct UMovieSceneParameterSection_GetParameterNames_Params
{
public:
	TSet<class FName>                            ParameterNames;                                    // 0x0(0x50)(None)
};

// 0x28 (0x28 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct UMovieSceneParameterSection_AddVectorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(None)
	uint8                                        Pad_12CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InValue;                                           // 0x10(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(None)
	uint8                                        Pad_12CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             InValue;                                           // 0x10(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct UMovieSceneParameterSection_AddTransformParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(None)
	uint8                                        Pad_12CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InValue;                                           // 0x10(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct UMovieSceneParameterSection_AddScalarParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(None)
	float                                        InValue;                                           // 0xC(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct UMovieSceneParameterSection_AddColorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(None)
	struct FLinearColor                          InValue;                                           // 0xC(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct UMovieSceneParameterSection_AddBoolParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(None)
	bool                                         InValue;                                           // 0xC(0x1)(None)
	uint8                                        Pad_12DF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct IMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InConstraintBindingID;                             // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
public:
	struct FFrameNumber                          InStartOffset;                                     // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
public:
	class USoundBase*                            InSound;                                           // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
public:
	struct FFrameNumber                          ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InCameraBindingID;                                 // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
public:
	class FString                                InShotDisplayName;                                 // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
struct UMovieSceneCVarSection_SetFromString_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCVarSection.GetString
struct UMovieSceneCVarSection_GetString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
struct UMovieSceneDataLayerSection_SetPrerollState_Params
{
public:
	enum class EDataLayerRuntimeState            InPrerollState;                                    // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
struct UMovieSceneDataLayerSection_SetFlushOnUnload_Params
{
public:
	bool                                         bFlushOnUnload;                                    // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
struct UMovieSceneDataLayerSection_SetDesiredState_Params
{
public:
	enum class EDataLayerRuntimeState            InDesiredState;                                    // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
struct UMovieSceneDataLayerSection_SetDataLayers_Params
{
public:
	TArray<struct FActorDataLayer>               InDataLayers;                                      // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
struct UMovieSceneDataLayerSection_SetDataLayerAssets_Params
{
public:
	TArray<class UDataLayerAsset*>               InDataLayerAssets;                                 // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
struct UMovieSceneDataLayerSection_GetPrerollState_Params
{
public:
	enum class EDataLayerRuntimeState            ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
struct UMovieSceneDataLayerSection_GetFlushOnUnload_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
struct UMovieSceneDataLayerSection_GetDesiredState_Params
{
public:
	enum class EDataLayerRuntimeState            ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
struct UMovieSceneDataLayerSection_GetDataLayers_Params
{
public:
	TArray<struct FActorDataLayer>               ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
struct UMovieSceneDataLayerSection_GetDataLayerAssets_Params
{
public:
	TArray<class UDataLayerAsset*>               ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
public:
	enum class ELevelVisibility                  InVisibility;                                      // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
public:
	TArray<class FName>                          InLevelNames;                                      // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
public:
	enum class ELevelVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(ZeroConstructor)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ZeroConstructor)
	float                                        TimeInSeconds;                                     // 0x10(0x4)(None)
	uint8                                        Pad_1470[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(ZeroConstructor)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ZeroConstructor)
	struct FFrameTime                            FrameTime;                                         // 0x10(0x8)(None)
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(ZeroConstructor)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ZeroConstructor)
	float                                        TimeInSeconds;                                     // 0x10(0x4)(None)
	uint8                                        Pad_1487[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(ZeroConstructor)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ZeroConstructor)
	struct FFrameTime                            FrameTime;                                         // 0x10(0x8)(None)
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(None)
};

}
}


