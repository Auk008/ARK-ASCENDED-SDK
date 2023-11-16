#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xC8 - 0x98)
// BlueprintGeneratedClass Attack_SRV.Attack_SRV_C
class UAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FBlackboardKeySelector                IsAttackingKey;                                    // 0xA0(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAttack_SRV_C* GetDefaultObj();

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ExecuteUbergraph_Attack_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AActor* K2Node_Event_OwnerActor_1);
};

}


