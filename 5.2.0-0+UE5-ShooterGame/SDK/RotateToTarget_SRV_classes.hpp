#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass RotateToTarget_SRV.RotateToTarget_SRV_C
class URotateToTarget_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(None)

	static class UClass* StaticClass();
	static class URotateToTarget_SRV_C* GetDefaultObj();

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ExecuteUbergraph_RotateToTarget_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_GetAttackRotationRate_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


