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

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
struct UMovieSceneScriptingActorReferenceKey_SetValue_Params
{
public:
	struct FMovieSceneObjectBindingID            InNewValue;                                        // 0x0(0x18)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
struct UMovieSceneScriptingActorReferenceKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_6C9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
struct UMovieSceneScriptingActorReferenceKey_GetValue_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
struct UMovieSceneScriptingActorReferenceKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_6D2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
struct UMovieSceneScriptingActorReferenceChannel_SetDefault_Params
{
public:
	struct FMovieSceneObjectBindingID            InDefaultValue;                                    // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
struct UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
struct UMovieSceneScriptingActorReferenceChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
struct UMovieSceneScriptingActorReferenceChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
struct UMovieSceneScriptingActorReferenceChannel_GetDefault_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
struct UMovieSceneScriptingActorReferenceChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	struct FMovieSceneObjectBindingID            NewValue;                                          // 0x4(0x18)(None)
	float                                        SubFrame;                                          // 0x1C(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x20(0x1)(None)
	uint8                                        Pad_6D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingActorReferenceKey* ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
struct UMovieSceneScriptingBoolKey_SetValue_Params
{
public:
	bool                                         InNewValue;                                        // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
struct UMovieSceneScriptingBoolKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_6DB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
struct UMovieSceneScriptingBoolKey_GetValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
struct UMovieSceneScriptingBoolKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_6DE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
struct UMovieSceneScriptingBoolChannel_SetDefault_Params
{
public:
	bool                                         InDefaultValue;                                    // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
struct UMovieSceneScriptingBoolChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
struct UMovieSceneScriptingBoolChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
struct UMovieSceneScriptingBoolChannel_GetNumKeys_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
struct UMovieSceneScriptingBoolChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
struct UMovieSceneScriptingBoolChannel_GetDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
struct UMovieSceneScriptingBoolChannel_EvaluateKeys_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	struct FFrameRate                            FrameRate;                                         // 0x14(0x8)(None)
	uint8                                        Pad_700[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
struct UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params
{
public:
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x0(0x14)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
struct UMovieSceneScriptingBoolChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	bool                                         NewValue;                                          // 0x4(0x1)(None)
	uint8                                        Pad_706[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubFrame;                                          // 0x8(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(None)
	uint8                                        Pad_708[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingBoolKey*           ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
struct UMovieSceneScriptingByteKey_SetValue_Params
{
public:
	uint8                                        InNewValue;                                        // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
struct UMovieSceneScriptingByteKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_733[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
struct UMovieSceneScriptingByteKey_GetValue_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
struct UMovieSceneScriptingByteKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_737[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
struct UMovieSceneScriptingByteChannel_SetDefault_Params
{
public:
	uint8                                        InDefaultValue;                                    // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
struct UMovieSceneScriptingByteChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
struct UMovieSceneScriptingByteChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
struct UMovieSceneScriptingByteChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
struct UMovieSceneScriptingByteChannel_GetDefault_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
struct UMovieSceneScriptingByteChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	uint8                                        NewValue;                                          // 0x4(0x1)(None)
	uint8                                        Pad_747[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubFrame;                                          // 0x8(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(None)
	enum class EMovieSceneKeyInterpolation       InInterpolation;                                   // 0xD(0x1)(None)
	uint8                                        Pad_748[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingByteKey*           ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
struct UMovieSceneScriptingDoubleKey_SetValue_Params
{
public:
	double                                       InNewValue;                                        // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
struct UMovieSceneScriptingDoubleKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_74E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
struct UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       InNewValue;                                        // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
struct UMovieSceneScriptingDoubleKey_SetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             InNewValue;                                        // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
struct UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
struct UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
struct UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              InNewValue;                                        // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
struct UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
struct UMovieSceneScriptingDoubleKey_SetArriveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
struct UMovieSceneScriptingDoubleKey_GetValue_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
struct UMovieSceneScriptingDoubleKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_75E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
struct UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
struct UMovieSceneScriptingDoubleKey_GetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
struct UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
struct UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
struct UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
struct UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
struct UMovieSceneScriptingDoubleKey_GetArriveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
struct UMovieSceneScriptingDoubleChannel_SetDefault_Params
{
public:
	double                                       InDefaultValue;                                    // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
struct UMovieSceneScriptingDoubleChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
struct UMovieSceneScriptingDoubleChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
struct UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
struct UMovieSceneScriptingDoubleChannel_GetNumKeys_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
struct UMovieSceneScriptingDoubleChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
struct UMovieSceneScriptingDoubleChannel_GetDefault_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
struct UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	struct FFrameRate                            FrameRate;                                         // 0x14(0x8)(None)
	uint8                                        Pad_762[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
struct UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params
{
public:
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x0(0x14)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
struct UMovieSceneScriptingDoubleChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	uint8                                        Pad_763[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewValue;                                          // 0x8(0x8)(None)
	float                                        SubFrame;                                          // 0x10(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x14(0x1)(None)
	enum class EMovieSceneKeyInterpolation       InInterpolation;                                   // 0x15(0x1)(None)
	uint8                                        Pad_764[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingDoubleKey*         ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
struct UMovieSceneScriptingEventKey_SetValue_Params
{
public:
	struct FMovieSceneEvent                      InNewValue;                                        // 0x0(0x28)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
struct UMovieSceneScriptingEventKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_768[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
struct UMovieSceneScriptingEventKey_GetValue_Params
{
public:
	struct FMovieSceneEvent                      ReturnValue;                                       // 0x0(0x28)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
struct UMovieSceneScriptingEventKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_76C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
struct UMovieSceneScriptingEventChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
struct UMovieSceneScriptingEventChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
struct UMovieSceneScriptingEventChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	uint8                                        Pad_76F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEvent                      NewValue;                                          // 0x8(0x28)(ZeroConstructor)
	float                                        SubFrame;                                          // 0x30(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x34(0x1)(None)
	uint8                                        Pad_770[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingEventKey*          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
struct UMovieSceneScriptingFloatKey_SetValue_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
struct UMovieSceneScriptingFloatKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_773[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
struct UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       InNewValue;                                        // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
struct UMovieSceneScriptingFloatKey_SetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             InNewValue;                                        // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
struct UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
struct UMovieSceneScriptingFloatKey_SetLeaveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
struct UMovieSceneScriptingFloatKey_SetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              InNewValue;                                        // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
struct UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
struct UMovieSceneScriptingFloatKey_SetArriveTangent_Params
{
public:
	float                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
struct UMovieSceneScriptingFloatKey_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
struct UMovieSceneScriptingFloatKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_77A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
struct UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params
{
public:
	enum class ERichCurveTangentWeightMode       ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
struct UMovieSceneScriptingFloatKey_GetTangentMode_Params
{
public:
	enum class ERichCurveTangentMode             ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
struct UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
struct UMovieSceneScriptingFloatKey_GetLeaveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
struct UMovieSceneScriptingFloatKey_GetInterpolationMode_Params
{
public:
	enum class ERichCurveInterpMode              ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
struct UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
struct UMovieSceneScriptingFloatKey_GetArriveTangent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           InExtrapolation;                                   // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
struct UMovieSceneScriptingFloatChannel_SetDefault_Params
{
public:
	float                                        InDefaultValue;                                    // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
struct UMovieSceneScriptingFloatChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
struct UMovieSceneScriptingFloatChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
struct UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params
{
public:
	enum class ERichCurveExtrapolation           ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
struct UMovieSceneScriptingFloatChannel_GetNumKeys_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
struct UMovieSceneScriptingFloatChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
struct UMovieSceneScriptingFloatChannel_GetDefault_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
struct UMovieSceneScriptingFloatChannel_EvaluateKeys_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	struct FFrameRate                            FrameRate;                                         // 0x14(0x8)(None)
	uint8                                        Pad_7B3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
struct UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params
{
public:
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x0(0x14)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
struct UMovieSceneScriptingFloatChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	float                                        NewValue;                                          // 0x4(0x4)(None)
	float                                        SubFrame;                                          // 0x8(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(None)
	enum class EMovieSceneKeyInterpolation       InInterpolation;                                   // 0xD(0x1)(None)
	uint8                                        Pad_7BF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingFloatKey*          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
struct UMovieSceneScriptingIntegerKey_SetValue_Params
{
public:
	int32                                        InNewValue;                                        // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
struct UMovieSceneScriptingIntegerKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_7D0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
struct UMovieSceneScriptingIntegerKey_GetValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
struct UMovieSceneScriptingIntegerKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_7D5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
struct UMovieSceneScriptingIntegerChannel_SetDefault_Params
{
public:
	int32                                        InDefaultValue;                                    // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
struct UMovieSceneScriptingIntegerChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
struct UMovieSceneScriptingIntegerChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
struct UMovieSceneScriptingIntegerChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
struct UMovieSceneScriptingIntegerChannel_GetDefault_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
struct UMovieSceneScriptingIntegerChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	int32                                        NewValue;                                          // 0x4(0x4)(None)
	float                                        SubFrame;                                          // 0x8(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0xC(0x1)(None)
	uint8                                        Pad_7E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingIntegerKey*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
struct UMovieSceneScriptingObjectPathKey_SetValue_Params
{
public:
	class UObject*                               InNewValue;                                        // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
struct UMovieSceneScriptingObjectPathKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_7ED[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
struct UMovieSceneScriptingObjectPathKey_GetValue_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
struct UMovieSceneScriptingObjectPathKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_7F1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
struct UMovieSceneScriptingObjectPathChannel_SetDefault_Params
{
public:
	class UObject*                               InDefaultValue;                                    // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
struct UMovieSceneScriptingObjectPathChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
struct UMovieSceneScriptingObjectPathChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
struct UMovieSceneScriptingObjectPathChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
struct UMovieSceneScriptingObjectPathChannel_GetDefault_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
struct UMovieSceneScriptingObjectPathChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	uint8                                        Pad_7FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               NewValue;                                          // 0x8(0x8)(ZeroConstructor)
	float                                        SubFrame;                                          // 0x10(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x14(0x1)(None)
	uint8                                        Pad_800[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingObjectPathKey*     ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
struct UMovieSceneScriptingStringKey_SetValue_Params
{
public:
	class FString                                InNewValue;                                        // 0x0(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
struct UMovieSceneScriptingStringKey_SetTime_Params
{
public:
	struct FFrameNumber                          NewFrameNumber;                                    // 0x0(0x4)(None)
	float                                        SubFrame;                                          // 0x4(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x8(0x1)(None)
	uint8                                        Pad_80D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
struct UMovieSceneScriptingStringKey_GetValue_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
struct UMovieSceneScriptingStringKey_GetTime_Params
{
public:
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x0(0x1)(None)
	uint8                                        Pad_814[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
struct UMovieSceneScriptingStringChannel_SetDefault_Params
{
public:
	class FString                                InDefaultValue;                                    // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
struct UMovieSceneScriptingStringChannel_RemoveKey_Params
{
public:
	class UMovieSceneScriptingKey*               Key;                                               // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
struct UMovieSceneScriptingStringChannel_HasDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
struct UMovieSceneScriptingStringChannel_GetKeys_Params
{
public:
	TArray<class UMovieSceneScriptingKey*>       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
struct UMovieSceneScriptingStringChannel_GetDefault_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
struct UMovieSceneScriptingStringChannel_AddKey_Params
{
public:
	struct FFrameNumber                          InTime;                                            // 0x0(0x4)(None)
	uint8                                        Pad_822[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NewValue;                                          // 0x8(0x10)(None)
	float                                        SubFrame;                                          // 0x18(0x4)(None)
	enum class ESequenceTimeUnit                 TimeUnit;                                          // 0x1C(0x1)(None)
	uint8                                        Pad_823[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneScriptingStringKey*         ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID
struct UMovieSceneBindingExtensions_SetSpawnableBindingID_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	struct FMovieSceneObjectBindingID            SpawnableBindingID;                                // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
struct UMovieSceneBindingExtensions_SetSortingOrder_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	int32                                        SortingOrder;                                      // 0x18(0x4)(None)
	uint8                                        Pad_831[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
struct UMovieSceneBindingExtensions_SetParent_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	struct FMovieSceneBindingProxy               InParentBinding;                                   // 0x18(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetName
struct UMovieSceneBindingExtensions_SetName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	class FString                                InName;                                            // 0x18(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
struct UMovieSceneBindingExtensions_SetDisplayName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	class FText                                  InDisplayName;                                     // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
struct UMovieSceneBindingExtensions_RemoveTrack_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	class UMovieSceneTrack*                      TrackToRemove;                                     // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.Remove
struct UMovieSceneBindingExtensions_Remove_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
struct UMovieSceneBindingExtensions_MoveBindingContents_Params
{
public:
	struct FMovieSceneBindingProxy               SourceBindingId;                                   // 0x0(0x18)(ZeroConstructor)
	struct FMovieSceneBindingProxy               DestinationBindingId;                              // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
struct UMovieSceneBindingExtensions_IsValid_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_855[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
struct UMovieSceneBindingExtensions_GetTracks_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
struct UMovieSceneBindingExtensions_GetSortingOrder_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_85D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
struct UMovieSceneBindingExtensions_GetPossessedObjectClass_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	class UClass*                                ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
struct UMovieSceneBindingExtensions_GetParent_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
struct UMovieSceneBindingExtensions_GetObjectTemplate_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetName
struct UMovieSceneBindingExtensions_GetName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	class FString                                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetId
struct UMovieSceneBindingExtensions_GetId_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	struct FGuid                                 ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
struct UMovieSceneBindingExtensions_GetDisplayName_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
struct UMovieSceneBindingExtensions_GetChildPossessables_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
struct UMovieSceneBindingExtensions_FindTracksByType_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x18(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
struct UMovieSceneBindingExtensions_FindTracksByExactType_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x18(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
struct UMovieSceneBindingExtensions_AddTrack_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x18(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
struct UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params
{
public:
	struct FMovieSceneEvent                      EventKey;                                          // 0x0(0x28)(ZeroConstructor)
	class UClass*                                ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
struct UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params
{
public:
	class UMovieSceneEventTrack*                 InTrack;                                           // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneEventTriggerSection*        ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
struct UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params
{
public:
	class UMovieSceneEventTrack*                 InTrack;                                           // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneEventRepeaterSection*       ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
struct UMovieSceneFolderExtensions_SetFolderName_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(None)
	class FName                                  InFolderName;                                      // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8A9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
struct UMovieSceneFolderExtensions_SetFolderColor_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(None)
	struct FColor                                InFolderColor;                                     // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_8AD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
struct UMovieSceneFolderExtensions_RemoveChildTrack_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      InTrack;                                           // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8B7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
struct UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               InObjectBinding;                                   // 0x8(0x18)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_8BE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
struct UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      InTrack;                                           // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8C1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
struct UMovieSceneFolderExtensions_RemoveChildFolder_Params
{
public:
	class UMovieSceneFolder*                     TargetFolder;                                      // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneFolder*                     FolderToRemove;                                    // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8C3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
struct UMovieSceneFolderExtensions_GetFolderName_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
struct UMovieSceneFolderExtensions_GetFolderColor_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(None)
	struct FColor                                ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_8CA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
struct UMovieSceneFolderExtensions_GetChildTracks_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
struct UMovieSceneFolderExtensions_GetChildObjectBindings_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
struct UMovieSceneFolderExtensions_GetChildMasterTracks_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
struct UMovieSceneFolderExtensions_GetChildFolders_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneFolder*>             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
struct UMovieSceneFolderExtensions_AddChildTrack_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      InTrack;                                           // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8E1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
struct UMovieSceneFolderExtensions_AddChildObjectBinding_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               InObjectBinding;                                   // 0x8(0x18)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_8E7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
struct UMovieSceneFolderExtensions_AddChildMasterTrack_Params
{
public:
	class UMovieSceneFolder*                     Folder;                                            // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      InTrack;                                           // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8EA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
struct UMovieSceneFolderExtensions_AddChildFolder_Params
{
public:
	class UMovieSceneFolder*                     TargetFolder;                                      // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneFolder*                     FolderToAdd;                                       // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_8ED[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
struct UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Params
{
public:
	class UMovieSceneComponentMaterialTrack*     Track;                                             // 0x0(0x8)(None)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(None)
	uint8                                        Pad_8F8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
struct UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Params
{
public:
	class UMovieSceneComponentMaterialTrack*     Track;                                             // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_8FA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
struct UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Params
{
public:
	class UMovieScenePrimitiveMaterialTrack*     Track;                                             // 0x0(0x8)(None)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(None)
	uint8                                        Pad_8FD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
struct UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Params
{
public:
	class UMovieScenePrimitiveMaterialTrack*     Track;                                             // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_8FF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
struct UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(None)
	class FName                                  InPropertyName;                                    // 0x8(0x8)(None)
	class FString                                InPropertyPath;                                    // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
struct UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params
{
public:
	class UMovieSceneObjectPropertyTrack*        Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UClass*                                PropertyClass;                                     // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
struct UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Params
{
public:
	class UMovieSceneByteTrack*                  Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UEnum*                                 InEnum;                                            // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
struct UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
struct UMovieScenePropertyTrackExtensions_GetPropertyPath_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
struct UMovieScenePropertyTrackExtensions_GetPropertyName_Params
{
public:
	class UMovieScenePropertyTrack*              Track;                                             // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
struct UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params
{
public:
	class UMovieSceneObjectPropertyTrack*        Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
struct UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Params
{
public:
	class UMovieSceneByteTrack*                  Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UEnum*                                 ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
struct UMovieSceneSectionExtensions_SetStartFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        StartTime;                                         // 0x8(0x4)(None)
	uint8                                        Pad_939[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
struct UMovieSceneSectionExtensions_SetStartFrameBounded_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	bool                                         bIsBounded;                                        // 0x8(0x1)(None)
	uint8                                        Pad_93D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
struct UMovieSceneSectionExtensions_SetStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        StartFrame;                                        // 0x8(0x4)(None)
	uint8                                        Pad_942[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
struct UMovieSceneSectionExtensions_SetRangeSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        StartTime;                                         // 0x8(0x4)(None)
	float                                        EndTime;                                           // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
struct UMovieSceneSectionExtensions_SetRange_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        StartFrame;                                        // 0x8(0x4)(None)
	int32                                        EndFrame;                                          // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
struct UMovieSceneSectionExtensions_SetEndFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        EndTime;                                           // 0x8(0x4)(None)
	uint8                                        Pad_951[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
struct UMovieSceneSectionExtensions_SetEndFrameBounded_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	bool                                         bIsBounded;                                        // 0x8(0x1)(None)
	uint8                                        Pad_956[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
struct UMovieSceneSectionExtensions_SetEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        EndFrame;                                          // 0x8(0x4)(None)
	uint8                                        Pad_95D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
struct UMovieSceneSectionExtensions_HasStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_95F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
struct UMovieSceneSectionExtensions_HasEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_962[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
struct UMovieSceneSectionExtensions_GetStartFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_966[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
struct UMovieSceneSectionExtensions_GetStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_96D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
struct UMovieSceneSectionExtensions_GetParentSequenceFrame_Params
{
public:
	class UMovieSceneSubSection*                 Section;                                           // 0x0(0x8)(ZeroConstructor)
	int32                                        InFrame;                                           // 0x8(0x4)(None)
	uint8                                        Pad_974[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   ParentSequence;                                    // 0x10(0x8)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_975[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
struct UMovieSceneSectionExtensions_GetEndFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_97F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
struct UMovieSceneSectionExtensions_GetEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_988[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
struct UMovieSceneSectionExtensions_GetChannelsByType_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ChannelType;                                       // 0x8(0x8)(ZeroConstructor)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
struct UMovieSceneSectionExtensions_GetChannels_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
struct UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_9A0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
struct UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_9A5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
struct UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_9AA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
struct UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_9B1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
struct UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_9B9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
struct UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_9BC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
struct UMovieSceneSectionExtensions_GetAllChannels_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
struct UMovieSceneSectionExtensions_FindChannelsByType_Params
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ChannelType;                                       // 0x8(0x8)(ZeroConstructor)
	TArray<class UMovieSceneScriptingChannel*>   ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
struct UMovieSceneSequenceExtensions_SortMarkedFrames_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
struct UMovieSceneSequenceExtensions_SetWorkRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        StartTimeInSeconds;                                // 0x8(0x4)(None)
	uint8                                        Pad_9D9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
struct UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        EndTimeInSeconds;                                  // 0x8(0x4)(None)
	uint8                                        Pad_9DE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
struct UMovieSceneSequenceExtensions_SetViewRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        StartTimeInSeconds;                                // 0x8(0x4)(None)
	uint8                                        Pad_9E2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
struct UMovieSceneSequenceExtensions_SetViewRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        EndTimeInSeconds;                                  // 0x8(0x4)(None)
	uint8                                        Pad_9E8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
struct UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameRate                            TickResolution;                                    // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
struct UMovieSceneSequenceExtensions_SetTickResolution_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameRate                            TickResolution;                                    // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
struct UMovieSceneSequenceExtensions_SetReadOnly_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	bool                                         bInReadOnly;                                       // 0x8(0x1)(None)
	uint8                                        Pad_9EB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
struct UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	float                                        StartTime;                                         // 0x8(0x4)(None)
	uint8                                        Pad_9ED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
struct UMovieSceneSequenceExtensions_SetPlaybackStart_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        StartFrame;                                        // 0x8(0x4)(None)
	uint8                                        Pad_9EE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
struct UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	float                                        EndTime;                                           // 0x8(0x4)(None)
	uint8                                        Pad_9F0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
struct UMovieSceneSequenceExtensions_SetPlaybackEnd_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        EndFrame;                                          // 0x8(0x4)(None)
	uint8                                        Pad_9F1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
struct UMovieSceneSequenceExtensions_SetMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        InMarkIndex;                                       // 0x8(0x4)(None)
	struct FFrameNumber                          InFrameNumber;                                     // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
struct UMovieSceneSequenceExtensions_SetEvaluationType_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	enum class EMovieSceneEvaluationType         InEvaluationType;                                  // 0x8(0x1)(None)
	uint8                                        Pad_9FB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
struct UMovieSceneSequenceExtensions_SetDisplayRate_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameRate                            DisplayRate;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
struct UMovieSceneSequenceExtensions_SetClockSource_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	enum class EUpdateClockSource                InClockSource;                                     // 0x8(0x1)(None)
	uint8                                        Pad_A00[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
struct UMovieSceneSequenceExtensions_ResolveBindingID_Params
{
public:
	class UMovieSceneSequence*                   RootSequence;                                      // 0x0(0x8)(ZeroConstructor)
	struct FMovieSceneObjectBindingID            InObjectBindingID;                                 // 0x8(0x18)(None)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x20(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
struct UMovieSceneSequenceExtensions_RemoveTrack_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      Track;                                             // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_A03[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
struct UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneFolder*                     Folder;                                            // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
struct UMovieSceneSequenceExtensions_RemoveMasterTrack_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      Track;                                             // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_A09[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
struct UMovieSceneSequenceExtensions_MakeRangeSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	float                                        StartTime;                                         // 0x8(0x4)(None)
	float                                        Duration;                                          // 0xC(0x4)(None)
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x10(0x14)(None)
	uint8                                        Pad_A0C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
struct UMovieSceneSequenceExtensions_MakeRange_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        StartFrame;                                        // 0x8(0x4)(None)
	int32                                        Duration;                                          // 0xC(0x4)(None)
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x10(0x14)(None)
	uint8                                        Pad_A10[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
struct UMovieSceneSequenceExtensions_MakeBindingID_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x8(0x18)(None)
	enum class EMovieSceneObjectBindingSpace     Space;                                             // 0x20(0x1)(None)
	uint8                                        Pad_A1A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x24(0x18)(None)
	uint8                                        Pad_A1B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
struct UMovieSceneSequenceExtensions_LocateBoundObjects_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x8(0x18)(ZeroConstructor)
	class UObject*                               Context;                                           // 0x20(0x8)(ZeroConstructor)
	TArray<class UObject*>                       ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
struct UMovieSceneSequenceExtensions_IsReadOnly_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_A20[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
struct UMovieSceneSequenceExtensions_GetWorkRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A21[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
struct UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A25[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
struct UMovieSceneSequenceExtensions_GetViewRangeStart_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A29[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
struct UMovieSceneSequenceExtensions_GetViewRangeEnd_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A2E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTracks
struct UMovieSceneSequenceExtensions_GetTracks_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
struct UMovieSceneSequenceExtensions_GetTimecodeSource_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(None)
	uint8                                        Pad_A33[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
struct UMovieSceneSequenceExtensions_GetTickResolution_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameRate                            ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
struct UMovieSceneSequenceExtensions_GetSpawnables_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
struct UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneFolder*>             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
struct UMovieSceneSequenceExtensions_GetPossessables_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
struct UMovieSceneSequenceExtensions_GetPortableBindingID_Params
{
public:
	class UMovieSceneSequence*                   RootSequence;                                      // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneSequence*                   DestinationSequence;                               // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x10(0x18)(None)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x28(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
struct UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A41[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
struct UMovieSceneSequenceExtensions_GetPlaybackStart_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A45[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
struct UMovieSceneSequenceExtensions_GetPlaybackRange_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FSequencerScriptingRange              ReturnValue;                                       // 0x8(0x14)(None)
	uint8                                        Pad_A49[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
struct UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A4D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
struct UMovieSceneSequenceExtensions_GetPlaybackEnd_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A4F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
struct UMovieSceneSequenceExtensions_GetMovieScene_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UMovieScene*                           ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
struct UMovieSceneSequenceExtensions_GetMasterTracks_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
struct UMovieSceneSequenceExtensions_GetMarkedFrames_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	TArray<struct FMovieSceneMarkedFrame>        ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
struct UMovieSceneSequenceExtensions_GetEvaluationType_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	enum class EMovieSceneEvaluationType         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_A5A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
struct UMovieSceneSequenceExtensions_GetDisplayRate_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameRate                            ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
struct UMovieSceneSequenceExtensions_GetClockSource_Params
{
public:
	class UMovieSceneSequence*                   InSequence;                                        // 0x0(0x8)(None)
	enum class EUpdateClockSource                ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_A5C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
struct UMovieSceneSequenceExtensions_GetBindings_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<struct FMovieSceneBindingProxy>       ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
struct UMovieSceneSequenceExtensions_GetBindingID_Params
{
public:
	struct FMovieSceneBindingProxy               InBinding;                                         // 0x0(0x18)(None)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
struct UMovieSceneSequenceExtensions_FindTracksByType_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x8(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
struct UMovieSceneSequenceExtensions_FindTracksByExactType_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x8(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
struct UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameNumber                          InFrameNumber;                                     // 0x8(0x4)(None)
	bool                                         bForward;                                          // 0xC(0x1)(None)
	uint8                                        Pad_A6C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_A6D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
struct UMovieSceneSequenceExtensions_FindMasterTracksByType_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x8(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
struct UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x8(0x8)(ZeroConstructor)
	TArray<class UMovieSceneTrack*>              ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
struct UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	class FString                                InLabel;                                           // 0x8(0x10)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_A6E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
struct UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FFrameNumber                          InFrameNumber;                                     // 0x8(0x4)(None)
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
struct UMovieSceneSequenceExtensions_FindBindingByName_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class FString                                Name;                                              // 0x8(0x10)(None)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
struct UMovieSceneSequenceExtensions_FindBindingById_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	struct FGuid                                 BindingId;                                         // 0x8(0x10)(None)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
struct UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
struct UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	int32                                        DeleteIndex;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A6F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddTrack
struct UMovieSceneSequenceExtensions_AddTrack_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x8(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
struct UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ObjectToSpawn;                                     // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
struct UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ClassToSpawn;                                      // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
struct UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class FString                                NewFolderName;                                     // 0x8(0x10)(None)
	class UMovieSceneFolder*                     ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
struct UMovieSceneSequenceExtensions_AddPossessable_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ObjectToPossess;                                   // 0x8(0x8)(ZeroConstructor)
	struct FMovieSceneBindingProxy               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
struct UMovieSceneSequenceExtensions_AddMasterTrack_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                TrackType;                                         // 0x8(0x8)(ZeroConstructor)
	class UMovieSceneTrack*                      ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
struct UMovieSceneSequenceExtensions_AddMarkedFrame_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(None)
	struct FMovieSceneMarkedFrame                InMarkedFrame;                                     // 0x8(0x20)(None)
	int32                                        ReturnValue;                                       // 0x28(0x4)(None)
	uint8                                        Pad_A75[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
struct UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	class FText                                  InName;                                            // 0x8(0x18)(None)
	int32                                        RowIndex;                                          // 0x20(0x4)(None)
	uint8                                        Pad_A8D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
struct UMovieSceneTrackExtensions_SetSortingOrder_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	int32                                        SortingOrder;                                      // 0x8(0x4)(None)
	uint8                                        Pad_A8E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
struct UMovieSceneTrackExtensions_SetSectionToKey_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneSection*                    Section;                                           // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
struct UMovieSceneTrackExtensions_SetDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	class FText                                  InName;                                            // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
struct UMovieSceneTrackExtensions_SetColorTint_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	struct FColor                                ColorTint;                                         // 0x8(0x4)(None)
	uint8                                        Pad_A90[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
struct UMovieSceneTrackExtensions_RemoveSection_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneSection*                    Section;                                           // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
struct UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	int32                                        RowIndex;                                          // 0x8(0x4)(None)
	uint8                                        Pad_A94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
struct UMovieSceneTrackExtensions_GetSortingOrder_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A95[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
struct UMovieSceneTrackExtensions_GetSectionToKey_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneSection*                    ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
struct UMovieSceneTrackExtensions_GetSections_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneSection*>            ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
struct UMovieSceneTrackExtensions_GetDisplayName_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
struct UMovieSceneTrackExtensions_GetColorTint_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(None)
	struct FColor                                ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_A98[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
struct UMovieSceneTrackExtensions_AddSection_Params
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x0(0x8)(ZeroConstructor)
	class UMovieSceneSection*                    ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
struct UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params
{
public:
	class UMovieSceneFloatVectorTrack*           Track;                                             // 0x0(0x8)(None)
	int32                                        InNumChannelsUsed;                                 // 0x8(0x4)(None)
	uint8                                        Pad_AAA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
struct UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params
{
public:
	class UMovieSceneFloatVectorTrack*           Track;                                             // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_AAD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
struct UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params
{
public:
	class UMovieSceneDoubleVectorTrack*          Track;                                             // 0x0(0x8)(None)
	int32                                        InNumChannelsUsed;                                 // 0x8(0x4)(None)
	uint8                                        Pad_AB2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
struct UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params
{
public:
	class UMovieSceneDoubleVectorTrack*          Track;                                             // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_AB4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
struct USequencerScriptingRangeExtensions_SetStartSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	float                                        Start;                                             // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
struct USequencerScriptingRangeExtensions_SetStartFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	int32                                        Start;                                             // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
struct USequencerScriptingRangeExtensions_SetEndSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	float                                        End;                                               // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
struct USequencerScriptingRangeExtensions_SetEndFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	int32                                        End;                                               // 0x14(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
struct USequencerScriptingRangeExtensions_RemoveStart_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
};

// 0x14 (0x14 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
struct USequencerScriptingRangeExtensions_RemoveEnd_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
struct USequencerScriptingRangeExtensions_HasStart_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_AC5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
struct USequencerScriptingRangeExtensions_HasEnd_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_AC7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
struct USequencerScriptingRangeExtensions_GetStartSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	float                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
struct USequencerScriptingRangeExtensions_GetStartFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	int32                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
struct USequencerScriptingRangeExtensions_GetEndSeconds_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	float                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
struct USequencerScriptingRangeExtensions_GetEndFrame_Params
{
public:
	struct FSequencerScriptingRange              Range;                                             // 0x0(0x14)(None)
	int32                                        ReturnValue;                                       // 0x14(0x4)(None)
};

}
}


