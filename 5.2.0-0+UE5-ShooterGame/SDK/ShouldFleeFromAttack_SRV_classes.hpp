#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0xF1 - 0x98)
// BlueprintGeneratedClass ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C
class UShouldFleeFromAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                ShouldFlee;                                        // 0xA0(0x28)(ZeroConstructor, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                IsFleeing;                                         // 0xC8(0x28)(ZeroConstructor)
	bool                                         BabyUnderAttack;                                   // 0xF0(0x1)(None)

	static class UClass* StaticClass();
	static class UShouldFleeFromAttack_SRV_C* GetDefaultObj();

	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_4, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_5, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_6, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetHealthPercentage_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BPIsTamed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShouldForceFlee_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsPrimalDino_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsAWildFollowerKnownServerside_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsBaby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


