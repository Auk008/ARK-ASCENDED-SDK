#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
class UAttacking_DR_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                WithinAttackRangeKey;                              // 0xA8(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAttacking_DR_C* GetDefaultObj();

	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult);
	void ReceiveConditionCheck(class AActor* OwnerActor);
	void ExecuteUbergraph_Attacking_DR(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_2, class AActor* K2Node_Event_OwnerActor_1, enum class EBTNodeResult K2Node_Event_NodeResult, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess);
};

}


