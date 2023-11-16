#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x110 - 0xA8)
// BlueprintGeneratedClass GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C
class UGetPointBehindParentAwayFromAttacker_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	double                                       FixedDistance;                                     // 0xB0(0x8)(None)
	double                                       RandomDistance;                                    // 0xB8(0x8)(None)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	struct FBlackboardKeySelector                NavigationTargetActor;                             // 0xE8(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UGetPointBehindParentAwayFromAttacker_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, class APrimalDinoCharacter* CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


