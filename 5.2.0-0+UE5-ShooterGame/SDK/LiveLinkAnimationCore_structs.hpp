#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x48 - 0x10)
// ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(None)
	struct FLiveLinkSubjectName                  LiveLinkSubjectName;                               // 0x20(0x8)(None)
	class UClass*                                RetargetAsset;                                     // 0x28(0x8)(ZeroConstructor)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x30(0x8)(None)
	uint8                                        Pad_2F87[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x8C0 - 0x878)
// ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                PoseNode;                                          // 0x878(0x48)(None)
};

}


