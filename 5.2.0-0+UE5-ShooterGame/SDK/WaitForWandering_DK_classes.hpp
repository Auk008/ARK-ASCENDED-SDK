#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass WaitForWandering_DK.WaitForWandering_DK_C
class UWaitForWandering_DK_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(None)

	static class UClass* StaticClass();
	static class UWaitForWandering_DK_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor* OwnerActor);
	void ExecuteUbergraph_WaitForWandering_DK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


