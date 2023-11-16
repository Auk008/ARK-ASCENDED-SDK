#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C
// (None)

class UClass* UPrimalItem_WeaponMachinedSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMachinedSniper_C");

	return Clss;
}


// PrimalItem_WeaponMachinedSniper_C PrimalItem_WeaponMachinedSniper.Default__PrimalItem_WeaponMachinedSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMachinedSniper_C* UPrimalItem_WeaponMachinedSniper_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMachinedSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMachinedSniper_C*>(UPrimalItem_WeaponMachinedSniper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C.BPPreventWeaponEquip
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// class APrimalDinoCharacter*        RiddenDino                                                       (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        CallFunc_GetRidingDino_ReturnValue                               (ZeroConstructor)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UPrimalItem_WeaponMachinedSniper_C::BPPreventWeaponEquip(bool ReturnValue, class APrimalDinoCharacter* RiddenDino, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class APrimalDinoCharacter* CallFunc_GetRidingDino_ReturnValue, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponMachinedSniper_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponMachinedSniper_C_BPPreventWeaponEquip_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.RiddenDino = RiddenDino;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetRidingDino_ReturnValue = CallFunc_GetRidingDino_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue = CallFunc_ObjectIsChildOfSoftRef_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


