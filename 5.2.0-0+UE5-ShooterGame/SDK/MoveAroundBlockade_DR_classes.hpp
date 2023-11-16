#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C
class UMoveAroundBlockade_DR_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FBlackboardKeySelector                MoveAroundBlocakdeKey;                             // 0xA8(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMoveAroundBlockade_DR_C* GetDefaultObj();

	void ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult);
	void ReceiveConditionCheck(class AActor* OwnerActor);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ExecuteUbergraph_MoveAroundBlockade_DR(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_2, enum class EBTNodeResult K2Node_Event_NodeResult, class AActor* K2Node_Event_OwnerActor_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_DoubleToFloat_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_DoubleToFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_4, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue_1);
};

}


