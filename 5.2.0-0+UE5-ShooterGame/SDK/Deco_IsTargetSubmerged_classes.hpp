#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC8 - 0xA0)
// BlueprintGeneratedClass Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C
class UDeco_IsTargetSubmerged_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                Target;                                            // 0xA0(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDeco_IsTargetSubmerged_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor* OwnerActor, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSubmerged_ReturnValue);
};

}


