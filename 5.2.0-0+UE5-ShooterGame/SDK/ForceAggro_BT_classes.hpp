#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xA9 - 0xA0)
// BlueprintGeneratedClass ForceAggro_BT.ForceAggro_BT_C
class UForceAggro_BT_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(None)
	bool                                         BabyUnderAttack;                                   // 0xA8(0x1)(None)

	static class UClass* StaticClass();
	static class UForceAggro_BT_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor* OwnerActor);
	void ExecuteUbergraph_ForceAggro_BT(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsPrimalDino_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsAWildFollowerKnownServerside_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsBaby_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsPrimalDino_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


