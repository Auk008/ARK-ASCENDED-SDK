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

// 0x50 (0x50 - 0x0)
// Function IKRig.IKGoalCreatorInterface.AddIKGoals
struct IIKGoalCreatorInterface_AddIKGoals_Params
{
public:
	TMap<class FName, struct FIKRigGoal>         OutGoals;                                          // 0x0(0x50)(None)
};

// 0x80 (0x80 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoalTransform
struct UIKRigComponent_SetIKRigGoalTransform_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x8)(None)
	uint8                                        Pad_206D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        PositionAlpha;                                     // 0x70(0x4)(None)
	float                                        RotationAlpha;                                     // 0x74(0x4)(None)
	uint8                                        Pad_206E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
struct UIKRigComponent_SetIKRigGoalPositionAndRotation_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x8)(None)
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(None)
	float                                        PositionAlpha;                                     // 0x40(0x4)(None)
	float                                        RotationAlpha;                                     // 0x44(0x4)(None)
	uint8                                        Pad_206F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoal
struct UIKRigComponent_SetIKRigGoal_Params
{
public:
	struct FIKRigGoal                            Goal;                                              // 0x0(0xA0)(None)
};

// 0x170 (0x170 - 0x0)
// Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
struct UIKRetargeter_SetRootSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FTargetRootSettings                   RootSettings;                                      // 0x108(0x68)(None)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
struct UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0x108(0x20)(None)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
struct UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FTargetChainSpeedPlantSettings        SpeedPlantSettings;                                // 0x108(0x18)(None)
	class FName                                  TargetChainName;                                   // 0x120(0x8)(None)
};

// 0x1B8 (0x1B8 - 0x0)
// Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
struct UIKRetargeter_SetChainSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FTargetChainSettings                  ChainSettings;                                     // 0x108(0xA8)(None)
	class FName                                  TargetChainName;                                   // 0x1B0(0x8)(None)
};

// 0x188 (0x188 - 0x0)
// Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
struct UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FTargetChainIKSettings                IKSettings;                                        // 0x108(0x78)(None)
	class FName                                  TargetChainName;                                   // 0x180(0x8)(None)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
struct UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FTargetChainFKSettings                FKSettings;                                        // 0x108(0x18)(None)
	class FName                                  TargetChainName;                                   // 0x120(0x8)(None)
};

// 0x170 (0x170 - 0x0)
// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
struct UIKRetargeter_GetRootSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FTargetRootSettings                   ReturnValue;                                       // 0x108(0x68)(None)
};

// 0x78 (0x78 - 0x0)
// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
struct UIKRetargeter_GetRootSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(None)
	class FName                                  OptionalProfileName;                               // 0x8(0x8)(None)
	struct FTargetRootSettings                   OutSettings;                                       // 0x10(0x68)(None)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
struct UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	struct FRetargetGlobalSettings               ReturnValue;                                       // 0x108(0x20)(None)
};

// 0x30 (0x30 - 0x0)
// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
struct UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(None)
	class FName                                  OptionalProfileName;                               // 0x8(0x8)(None)
	struct FRetargetGlobalSettings               OutSettings;                                       // 0x10(0x20)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
struct UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(None)
	class FName                                  IKGoalName;                                        // 0x8(0x8)(None)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x10(0xA8)(None)
};

// 0x1B8 (0x1B8 - 0x0)
// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
struct UIKRetargeter_GetChainSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(None)
	class FName                                  TargetChainName;                                   // 0x108(0x8)(None)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x110(0xA8)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
struct UIKRetargeter_GetChainSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(None)
	class FName                                  TargetChainName;                                   // 0x8(0x8)(None)
	class FName                                  OptionalProfileName;                               // 0x10(0x8)(None)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x18(0xA8)(None)
};

}
}


