#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xB59 - 0xB50)
// BlueprintGeneratedClass Buff_Base.Buff_Base_C
class ABuff_Base_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(None)
	bool                                         bDismountingBuff;                                  // 0xB58(0x1)(None)

	static class UClass* StaticClass();
	static class ABuff_Base_C* GetDefaultObj();

	void BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, class AActor* DamageCauser, bool ReturnValue, bool LOCAL_RetVal, const TArray<class APrimalBuff*>& CallFunc_GetAllBuffs_AllBuffs, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APrimalBuff* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void BPDeactivated(class AActor* ForInstigator);
	void ExecuteUbergraph_Buff_Base(int32 EntryPoint, class AActor* K2Node_Event_ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
};

}


