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

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLinkBlueprintLibrary_TransformNames_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	TArray<class FName>                          TransformNames;                                    // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLinkBlueprintLibrary_TransformName_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	class FName                                  Name;                                              // 0x20(0x8)(None)
};

// 0x1C (0x1C - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x18)(None)
	bool                                         bEnabled;                                          // 0x18(0x1)(None)
	uint8                                        Pad_BD0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
struct ULiveLinkBlueprintLibrary_RemoveSource_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_BD6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_BDD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x18)(None)
	bool                                         bForThisFrame;                                     // 0x18(0x1)(None)
	bool                                         ReturnValue;                                       // 0x19(0x1)(None)
	uint8                                        Pad_BE3[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_BE6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_BF8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLinkBlueprintLibrary_HasParent_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_BFA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	class FName                                  TransformName;                                     // 0x18(0x8)(None)
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x20(0x20)(None)
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	int32                                        TransformIndex;                                    // 0x18(0x4)(None)
	uint8                                        Pad_C10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x20(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x18)(None)
	class UClass*                                ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
struct ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params
{
public:
	struct FGuid                                 SourceGuid;                                        // 0x0(0x10)(None)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLinkBlueprintLibrary_GetSourceType_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(None)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(None)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(None)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x18(0x20)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
struct ULiveLinkBlueprintLibrary_GetPropertyValue_Params
{
public:
	struct FLiveLinkBasicBlueprintData           BasicData;                                         // 0x0(0xB8)(None)
	class FName                                  PropertyName;                                      // 0xB8(0x8)(None)
	float                                        Value;                                             // 0xC0(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC4(0x1)(None)
	uint8                                        Pad_C29[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLinkBlueprintLibrary_GetParent_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	struct FLiveLinkTransform                    Parent;                                            // 0x20(0x20)(None)
};

// 0x88 (0x88 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLinkBlueprintLibrary_GetMetadata_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	struct FSubjectMetadata                      MetaData;                                          // 0x18(0x70)(None)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params
{
public:
	bool                                         bIncludeDisabledSubject;                           // 0x0(0x1)(None)
	bool                                         bIncludeVirtualSubject;                            // 0x1(0x1)(None)
	uint8                                        Pad_C35[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLiveLinkSubjectKey>           ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
struct ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params
{
public:
	bool                                         bIncludeVirtualSubject;                            // 0x0(0x1)(None)
	uint8                                        Pad_C40[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLiveLinkSubjectName>          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLinkBlueprintLibrary_GetCurves_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	TMap<class FName, float>                     Curves;                                            // 0x18(0x50)(None)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLinkBlueprintLibrary_GetChildren_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	TArray<struct FLiveLinkTransform>            Children;                                          // 0x20(0x10)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
struct ULiveLinkBlueprintLibrary_GetBasicData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	struct FLiveLinkBasicBlueprintData           BasicBlueprintData;                                // 0x18(0xB8)(None)
};

// 0x50 (0x50 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
struct ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	struct FLiveLinkSkeletonStaticData           AnimationStaticData;                               // 0x18(0x30)(None)
	bool                                         ReturnValue;                                       // 0x48(0x1)(None)
	uint8                                        Pad_C61[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
struct ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(None)
	struct FLiveLinkAnimationFrameData           AnimationFrameData;                                // 0x18(0xB0)(None)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(None)
	uint8                                        Pad_C6C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
	class UClass*                                Role;                                              // 0x8(0x8)(None)
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_C72[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
	class UClass*                                Role;                                              // 0x8(0x8)(None)
	float                                        WorldTimeOffset;                                   // 0x10(0x4)(None)
	uint8                                        Pad_C7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x18(0x8)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_C7D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
	class UClass*                                Role;                                              // 0x8(0x8)(None)
	struct FTimecode                             SceneTime;                                         // 0x10(0x14)(None)
	uint8                                        Pad_C8A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x28(0x8)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_C8B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0x0(0x10)(None)
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_C92[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLinkBlueprintLibrary_ChildCount_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(None)
	int32                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_C9E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
struct ULiveLinkComponent_GetSubjectDataAtWorldTime_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(None)
	float                                        WorldTime;                                         // 0x8(0x4)(None)
	bool                                         bSuccess;                                          // 0xC(0x1)(None)
	uint8                                        Pad_CBF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x10(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
struct ULiveLinkComponent_GetSubjectDataAtSceneTime_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(None)
	struct FTimecode                             SceneTime;                                         // 0x8(0x14)(None)
	bool                                         bSuccess;                                          // 0x1C(0x1)(None)
	uint8                                        Pad_CC1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x20(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLinkComponent_GetSubjectData_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(None)
	bool                                         bSuccess;                                          // 0x8(0x1)(None)
	uint8                                        Pad_CC2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLinkComponent_GetAvailableSubjectNames_Params
{
public:
	TArray<class FName>                          SubjectNames;                                      // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(None)
	float                                        Duration;                                          // 0x20(0x4)(None)
	uint8                                        Pad_CD1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProviderPollResult>           AvailableProviders;                                // 0x28(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
public:
	class ULiveLinkMessageBusFinder*             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
{
public:
	struct FProviderPollResult                   Provider;                                          // 0x0(0x40)(None)
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x40(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkPreset.ApplyToClientLatent
struct ULiveLinkPreset_ApplyToClientLatent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function LiveLink.LiveLinkPreset.ApplyToClient
struct ULiveLinkPreset_ApplyToClient_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function LiveLink.LiveLinkPreset.AddToClient
struct ULiveLinkPreset_AddToClient_Params
{
public:
	bool                                         bRecreatePresets;                                  // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params
{
public:
	struct FLiveLinkBaseStaticData               InStruct;                                          // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_D3B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params
{
public:
	struct FLiveLinkBaseFrameData                InStruct;                                          // 0x0(0xA0)(None)
	bool                                         bInShouldStampCurrentTime;                         // 0xA0(0x1)(None)
	bool                                         ReturnValue;                                       // 0xA1(0x1)(None)
	uint8                                        Pad_D3E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


