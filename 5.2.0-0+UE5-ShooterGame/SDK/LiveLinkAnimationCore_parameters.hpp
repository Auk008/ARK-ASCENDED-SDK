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
// Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject
struct ULiveLinkInstance_SetSubject_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
struct ULiveLinkInstance_SetRetargetAsset_Params
{
public:
	class UClass*                                RetargetAsset;                                     // 0x0(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
struct ULiveLinkRemapAsset_RemapCurveElements_Params
{
public:
	TMap<class FName, float>                     CurveItems;                                        // 0x0(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

}
}


