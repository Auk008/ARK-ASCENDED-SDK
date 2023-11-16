#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationBudgetBlueprintLibrary* GetDefaultObj();

	void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};

// 0x28 (0x1400 - 0x13D8)
// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	uint8                                        Pad_FC[0x20];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAutoRegisterWithBudgetAllocator : 1;              // Mask: 0x1, PropSize: 0x10x13F8(0x1)(None)
	uint8                                        bAutoCalculateSignificance : 1;                    // Mask: 0x2, PropSize: 0x10x13F8(0x1)(None)
	uint8                                        bShouldUseActorRenderedFlag : 1;                   // Mask: 0x4, PropSize: 0x10x13F8(0x1)(None)
	uint8                                        Pad_FD[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkeletalMeshComponentBudgeted* GetDefaultObj();

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};

}


