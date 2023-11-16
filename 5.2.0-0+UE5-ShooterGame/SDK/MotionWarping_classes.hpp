#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class MotionWarping.AnimNotifyState_MotionWarping
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
public:
	class URootMotionModifier*                   RootMotionModifier;                                // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UAnimNotifyState_MotionWarping* GetDefaultObj();

	void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
	void AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime, class URootMotionModifier* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionWarpingUtilities* GetDefaultObj();

	void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, const TArray<struct FMotionWarpingWindowData>& OutWindows);
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, class FName WarpTargetName, const TArray<struct FMotionWarpingWindowData>& OutWindows);
	void ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime, const struct FTransform& ReturnValue);
};

// 0x40 (0xF8 - 0xB8)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xB8(0x1)(None)
	uint8                                        Pad_2FF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xC0(0x10)(ZeroConstructor)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xD0(0x8)(ZeroConstructor)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xD8(0x10)(ZeroConstructor)
	TArray<struct FMotionWarpingTarget>          WarpTargets;                                       // 0xE8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMotionWarpingComponent* GetDefaultObj();

	void RemoveWarpTarget(class FName WarpTargetName, int32 ReturnValue);
	void DisableAllRootMotionModifiers();
	void AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform);
	void AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation);
	void AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, class USceneComponent* Component, class FName BoneName, bool bFollowComponent);
	void AddOrUpdateWarpTarget(const struct FMotionWarpingTarget& WarpTarget);
};

// 0xC0 (0xE8 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(ZeroConstructor)
	float                                        StartTime;                                         // 0x30(0x4)(None)
	float                                        EndTime;                                           // 0x34(0x4)(None)
	float                                        PreviousPosition;                                  // 0x38(0x4)(None)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(None)
	float                                        Weight;                                            // 0x40(0x4)(None)
	uint8                                        Pad_307[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartTransform;                                    // 0x50(0x60)(None)
	float                                        ActualStartTime;                                   // 0xB0(0x4)(None)
	FDelegateProperty_                           OnActivateDelegate;                                // 0xB4(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0xC4(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xD4(0x10)(None)
	enum class ERootMotionModifierState          State;                                             // 0xE4(0x1)(None)
	uint8                                        Pad_309[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URootMotionModifier* GetDefaultObj();

};

// 0x168 (0x250 - 0xE8)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xE8(0x8)(None)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xF0(0x1)(None)
	uint8                                        Pad_30E[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WarpPointAnimTransform;                            // 0x100(0x60)(None)
	class FName                                  WarpPointAnimBoneName;                             // 0x160(0x8)(None)
	bool                                         bWarpTranslation;                                  // 0x168(0x1)(None)
	bool                                         bIgnoreZAxis;                                      // 0x169(0x1)(None)
	enum class EAlphaBlendOption                 AddTranslationEasingFunc;                          // 0x16A(0x1)(None)
	uint8                                        Pad_310[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AddTranslationEasingCurve;                         // 0x170(0x8)(ZeroConstructor)
	bool                                         bWarpRotation;                                     // 0x178(0x1)(None)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x179(0x1)(None)
	uint8                                        Pad_312[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WarpRotationTimeMultiplier;                        // 0x17C(0x4)(None)
	struct FTransform                            CachedTargetTransform;                             // 0x180(0x60)(None)
	uint8                                        Pad_313[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URootMotionModifier_Warp* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class MotionWarping.RootMotionModifier_SimpleWarp
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass();
	static class URootMotionModifier_SimpleWarp* GetDefaultObj();

};

// 0x18 (0x100 - 0xE8)
// Class MotionWarping.RootMotionModifier_Scale
class URootMotionModifier_Scale : public URootMotionModifier
{
public:
	struct FVector                               Scale;                                             // 0xE8(0x18)(None)

	static class UClass* StaticClass();
	static class URootMotionModifier_Scale* GetDefaultObj();

	void AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale, class URootMotionModifier_Scale* ReturnValue);
};

// 0x160 (0x3B0 - 0x250)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x250(0x1)(None)
	uint8                                        Pad_31D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          IKBones;                                           // 0x258(0x10)(None)
	uint8                                        Pad_31E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedMeshTransform;                               // 0x270(0x60)(None)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x2D0(0x60)(None)
	struct FTransform                            CachedRootMotion;                                  // 0x330(0x60)(None)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x390(0x20)(None)

	static class UClass* StaticClass();
	static class URootMotionModifier_AdjustmentBlendWarp* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class MotionWarping.RootMotionModifier_SkewWarp
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass();
	static class URootMotionModifier_SkewWarp* GetDefaultObj();

	void AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, enum class EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier, class URootMotionModifier_SkewWarp* ReturnValue);
};

}


