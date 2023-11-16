#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C
// (None)

class UClass* UPrimalItem_WeaponFishingRod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponFishingRod_C");

	return Clss;
}


// PrimalItem_WeaponFishingRod_C PrimalItem_WeaponFishingRod.Default__PrimalItem_WeaponFishingRod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponFishingRod_C* UPrimalItem_WeaponFishingRod_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponFishingRod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponFishingRod_C*>(UPrimalItem_WeaponFishingRod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (None)
// bool                               ReturnValue                                                      (None)
// bool                               RetCanUse                                                        (None)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ZeroConstructor)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (Edit, ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_BP_ForceAllowMountedWeapon_ReturnValue                  (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1                (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (None)
// class AStructureSeatingBaseBP_C*   K2Node_DynamicCast_AsStructure_Seating_Base_BP                   (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)

void UPrimalItem_WeaponFishingRod_C::BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool RetCanUse, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BP_ForceAllowMountedWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, class AStructureSeatingBaseBP_C* K2Node_DynamicCast_AsStructure_Seating_Base_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponFishingRod_C", "BPCanUse");

	Params::UPrimalItem_WeaponFishingRod_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.ReturnValue = ReturnValue;
	Parms.RetCanUse = RetCanUse;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_ForceAllowMountedWeapon_ReturnValue = CallFunc_BP_ForceAllowMountedWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1 = CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Seating_Base_BP = K2Node_DynamicCast_AsStructure_Seating_Base_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


