#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA68 - 0xA30)
// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
class ADino_AIController_BP_C : public APrimalDinoAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0xA38(0x8)(Edit, ZeroConstructor)
	struct FBlackboardKeySelector                NavKey;                                            // 0xA40(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ADino_AIController_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dino_AIController_BP(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue_2, float CallFunc_GetAttackInterval_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue);
};

}


