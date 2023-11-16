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
// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
struct ATrueSkySequenceActor_SetTime_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
struct ATrueSkySequenceActor_SetPointLightSource_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(None)
	struct FLinearColor                          LightColour;                                       // 0x4(0x10)(None)
	float                                        Intensity;                                         // 0x14(0x4)(None)
	struct FVector                               Pos;                                               // 0x18(0x18)(None)
	float                                        MinRadius;                                         // 0x30(0x4)(None)
	float                                        MaxRadius;                                         // 0x34(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
struct ATrueSkySequenceActor_SetPointLight_Params
{
public:
	class APointLight*                           Source;                                            // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
struct ATrueSkySequenceActor_SetKeyframeInt_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(None)
	uint8                                        Pad_3AA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(None)
	int32                                        Value;                                             // 0x18(0x4)(None)
	uint8                                        Pad_3AB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
struct ATrueSkySequenceActor_SetKeyframeFloat_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(None)
	uint8                                        Pad_3AD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(None)
	float                                        Value;                                             // 0x18(0x4)(None)
	uint8                                        Pad_3AF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
struct ATrueSkySequenceActor_SetInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	int32                                        Value;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3B0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
struct ATrueSkySequenceActor_SetFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	float                                        Value;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3B1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
struct ATrueSkySequenceActor_GetSunRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
struct ATrueSkySequenceActor_GetSunColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
struct ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
struct ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params
{
public:
	int32                                        Layer;                                             // 0x0(0x4)(None)
	int32                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
struct ATrueSkySequenceActor_GetKeyframeInt_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(None)
	uint8                                        Pad_3B6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_3B7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
struct ATrueSkySequenceActor_GetKeyframeFloat_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(None)
	uint8                                        Pad_3B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(None)
	float                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_3BA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
struct ATrueSkySequenceActor_GetInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_3BB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
struct ATrueSkySequenceActor_GetFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_3BC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
struct ATrueSkySequenceActor_CloudPointTest_Params
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(None)
	uint8                                        Pad_3BD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Pos;                                               // 0x8(0x18)(None)
	float                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_3BE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
struct ATrueSkySequenceActor_CloudLineTest_Params
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(None)
	uint8                                        Pad_3C2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartPos;                                          // 0x8(0x18)(None)
	struct FVector                               EndPos;                                            // 0x20(0x18)(None)
	float                                        ReturnValue;                                       // 0x38(0x4)(None)
	uint8                                        Pad_3C3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


