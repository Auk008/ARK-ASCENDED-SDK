#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BeginFly_TK.BeginFly_TK_C
class UBeginFly_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient)
	struct FBlackboardKeySelector                OnFlyKey;                                          // 0xB0(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBeginFly_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BeginFly_TK(int32 EntryPoint, class UBehaviorTreeComponent* CallFunc_GetBehaviorTree_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue_1, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base, bool K2Node_DynamicCast_bSuccess, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_3);
};

}


