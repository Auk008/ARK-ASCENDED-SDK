#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass EndLanding_TK.EndLanding_TK_C
class UEndLanding_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(None)

	static class UClass* StaticClass();
	static class UEndLanding_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_EndLanding_TK(int32 EntryPoint, class UBehaviorTreeComponent* CallFunc_GetBehaviorTree_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue_1, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base, bool K2Node_DynamicCast_bSuccess, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OwnerActor, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanLand_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_3);
};

}


