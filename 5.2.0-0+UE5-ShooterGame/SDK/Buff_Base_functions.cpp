#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Base.Buff_Base_C
// (Actor)

class UClass* ABuff_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Base_C");

	return Clss;
}


// Buff_Base_C Buff_Base.Default__Buff_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Base_C* ABuff_Base_C::GetDefaultObj()
{
	static class ABuff_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Base_C*>(ABuff_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_Base.Buff_Base_C.BPCustomAllowAddBuff
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APrimalCharacter*            ForCharacter                                                     (ZeroConstructor)
// class AActor*                      DamageCauser                                                     (Edit, ZeroConstructor)
// bool                               ReturnValue                                                      (None)
// bool                               LOCAL_RetVal                                                     (None)
// TArray<class APrimalBuff*>         CallFunc_GetAllBuffs_AllBuffs                                    (ZeroConstructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// class APrimalBuff*                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void ABuff_Base_C::BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, class AActor* DamageCauser, bool ReturnValue, bool LOCAL_RetVal, const TArray<class APrimalBuff*>& CallFunc_GetAllBuffs_AllBuffs, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APrimalBuff* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Base_C", "BPCustomAllowAddBuff");

	Params::ABuff_Base_C_BPCustomAllowAddBuff_Params Parms{};

	Parms.ForCharacter = ForCharacter;
	Parms.DamageCauser = DamageCauser;
	Parms.ReturnValue = ReturnValue;
	Parms.LOCAL_RetVal = LOCAL_RetVal;
	Parms.CallFunc_GetAllBuffs_AllBuffs = CallFunc_GetAllBuffs_AllBuffs;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_Base.Buff_Base_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (None)

void ABuff_Base_C::BPDeactivated(class AActor* ForInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Base_C", "BPDeactivated");

	Params::ABuff_Base_C_BPDeactivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_Base.Buff_Base_C.ExecuteUbergraph_Buff_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_ForInstigator                                       (ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (None)

void ABuff_Base_C::ExecuteUbergraph_Buff_Base(int32 EntryPoint, class AActor* K2Node_Event_ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_Base_C", "ExecuteUbergraph_Buff_Base");

	Params::ABuff_Base_C_ExecuteUbergraph_Buff_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ForInstigator = K2Node_Event_ForInstigator;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


