#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass AttackTarget_SRV.AttackTarget_SRV_C
class UAttackTarget_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(None)

	static class UClass* StaticClass();
	static class UAttackTarget_SRV_C* GetDefaultObj();

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ExecuteUbergraph_AttackTarget_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AActor* K2Node_Event_OwnerActor_1);
};

}


