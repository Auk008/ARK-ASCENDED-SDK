#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERootMotionModifierState : uint8
{
	Waiting                        = 0,
	Active                         = 1,
	MarkedForRemoval               = 2,
	Disabled                       = 3,
	ERootMotionModifierState_MAX   = 4,
};

enum class EMotionWarpRotationType : uint8
{
	Default                        = 0,
	Facing                         = 1,
	EMotionWarpRotationType_MAX    = 2,
};

enum class EWarpPointAnimProvider : uint8
{
	None                           = 0,
	Static                         = 1,
	Bone                           = 2,
	EWarpPointAnimProvider_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MotionWarping.MotionWarpingWindowData
struct FMotionWarpingWindowData
{
public:
	class UAnimNotifyState_MotionWarping*        AnimNotify;                                        // 0x0(0x8)(None)
	float                                        StartTime;                                         // 0x8(0x4)(None)
	float                                        EndTime;                                           // 0xC(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MotionWarping.MotionWarpingUpdateContext
struct FMotionWarpingUpdateContext
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x0(0x8)(None)
	float                                        PreviousPosition;                                  // 0x8(0x4)(None)
	float                                        CurrentPosition;                                   // 0xC(0x4)(None)
	float                                        Weight;                                            // 0x10(0x4)(None)
	float                                        PlayRate;                                          // 0x14(0x4)(None)
	float                                        DeltaSeconds;                                      // 0x18(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MotionWarping.MotionWarpingTarget
struct FMotionWarpingTarget
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(None)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x38(0x8)(None)
	class FName                                  BoneName;                                          // 0x40(0x8)(None)
	bool                                         bFollowComponent;                                  // 0x48(0x1)(None)
	uint8                                        Pad_32B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MotionWarping.MotionDeltaTrack
struct FMotionDeltaTrack
{
public:
	TArray<struct FTransform>                    BoneTransformTrack;                                // 0x0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       DeltaTranslationTrack;                             // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FRotator>                      DeltaRotationTrack;                                // 0x20(0x10)(None)
	struct FVector                               TotalTranslation;                                  // 0x30(0x18)(None)
	struct FRotator                              TotalRotation;                                     // 0x48(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MotionWarping.MotionDeltaTrackContainer
struct FMotionDeltaTrackContainer
{
public:
	TArray<struct FMotionDeltaTrack>             Tracks;                                            // 0x0(0x10)(None)
};

}


