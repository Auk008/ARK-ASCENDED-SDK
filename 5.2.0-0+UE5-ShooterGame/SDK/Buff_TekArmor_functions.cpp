#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
// (Actor)

class UClass* ABuff_TekArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_TekArmor_C");

	return Clss;
}


// Buff_TekArmor_C Buff_TekArmor.Default__Buff_TekArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_TekArmor_C* ABuff_TekArmor_C::GetDefaultObj()
{
	static class ABuff_TekArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_TekArmor_C*>(ABuff_TekArmor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_TekArmor.Buff_TekArmor_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      OutMesh                                                          (None)

void ABuff_TekArmor_C::GetWeaponMesh(class USkeletalMeshComponent* OutMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetWeaponMesh");

	Params::ABuff_TekArmor_C_GetWeaponMesh_Params Parms{};

	Parms.OutMesh = OutMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSet                                                        (None)
// bool                               WithValue                                                        (None)

void ABuff_TekArmor_C::HideBoostIcon(bool ShouldSet, bool WithValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "HideBoostIcon");

	Params::ABuff_TekArmor_C_HideBoostIcon_Params Parms{};

	Parms.ShouldSet = ShouldSet;
	Parms.WithValue = WithValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  AddTransform                                                     (None)

void ABuff_TekArmor_C::SetJetpackOffset(const struct FTransform& AddTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetJetpackOffset");

	Params::ABuff_TekArmor_C_SetJetpackOffset_Params Parms{};

	Parms.AddTransform = AddTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasEngrams                                                       (None)
// bool                               OutHasEngrams                                                    (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ZeroConstructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (None)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_HasEngram_ReturnValue                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)

void ABuff_TekArmor_C::HasRequiredEngrams(bool HasEngrams, bool OutHasEngrams, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_HasEngram_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "HasRequiredEngrams");

	Params::ABuff_TekArmor_C_HasRequiredEngrams_Params Parms{};

	Parms.HasEngrams = HasEngrams;
	Parms.OutHasEngrams = OutHasEngrams;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item = K2Node_DynamicCast_AsPrimal_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_HasEngram_ReturnValue = CallFunc_HasEngram_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsDisabled                                                      (None)
// bool                               bRetVal                                                          (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ZeroConstructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// class FName                        CallFunc_Array_Get_Item                                          (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// TArray<class APrimalBuff*>         CallFunc_GetAllBuffs_AllBuffs                                    (ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class APrimalBuff*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor)
// TArray<class FName>                CallFunc_BPPreventTekArmorBuffs_ReturnValue                      (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// class FName                        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class AMissionType*                CallFunc_GetActiveMission_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (None)

void ABuff_TekArmor_C::IsTekBuffDisabled(bool bIsDisabled, bool bRetVal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, class AShooterPlayerController* CallFunc_Get_Ref_Owning_PlayerController_controller, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const TArray<class APrimalBuff*>& CallFunc_GetAllBuffs_AllBuffs, class APrimalBuff* CallFunc_Array_Get_Item_1, const TArray<class FName>& CallFunc_BPPreventTekArmorBuffs_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_2, class AMissionType* CallFunc_GetActiveMission_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsTekBuffDisabled");

	Params::ABuff_TekArmor_C_IsTekBuffDisabled_Params Parms{};

	Parms.bIsDisabled = bIsDisabled;
	Parms.bRetVal = bRetVal;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Get_Ref_Owning_PlayerController_controller = CallFunc_Get_Ref_Owning_PlayerController_controller;
	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllBuffs_AllBuffs = CallFunc_GetAllBuffs_AllBuffs;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BPPreventTekArmorBuffs_ReturnValue = CallFunc_BPPreventTekArmorBuffs_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetActiveMission_ReturnValue = CallFunc_GetActiveMission_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Player                                                           (ZeroConstructor)
// bool                               Is_restricted                                                    (None)
// bool                               Ret_val                                                          (None)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (None)
// bool                               CallFunc_HasBuffWithCustomTag_ReturnValue                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)

void ABuff_TekArmor_C::Check_genesis_restrictions_for_player(class APrimalCharacter* Player, bool Is_restricted, bool Ret_val, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool CallFunc_HasBuffWithCustomTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "check genesis restrictions for player");

	Params::ABuff_TekArmor_C_Check_genesis_restrictions_for_player_Params Parms{};

	Parms.Player = Player;
	Parms.Is_restricted = Is_restricted;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_HasBuffWithCustomTag_ReturnValue = CallFunc_HasBuffWithCustomTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ZeroConstructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_HasBuffWithCustomTag_ReturnValue                        (None)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (None)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void ABuff_TekArmor_C::BPActivated(class AActor* ForInstigator, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBuffWithCustomTag_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPActivated");

	Params::ABuff_TekArmor_C_BPActivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasBuffWithCustomTag_ReturnValue = CallFunc_HasBuffWithCustomTag_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_1 = CallFunc_EqualEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Restricted                                                       (None)
// bool                               Ret_val                                                          (None)
// bool                               CallFunc_check_genesis_restrictions_for_player_is_restricted     (None)

void ABuff_TekArmor_C::Is_Restricted_Because_Of_Genesis_Map(bool Restricted, bool Ret_val, bool CallFunc_check_genesis_restrictions_for_player_is_restricted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Is Restricted Because Of Genesis Map");

	Params::ABuff_TekArmor_C_Is_Restricted_Because_Of_Genesis_Map_Params Parms{};

	Parms.Restricted = Restricted;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_check_genesis_restrictions_for_player_is_restricted = CallFunc_check_genesis_restrictions_for_player_is_restricted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_TekArmor_C::Get_Is_Player_in_SealedSpace(bool Result, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Is Player in SealedSpace");

	Params::ABuff_TekArmor_C_Get_Is_Player_in_SealedSpace_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutValid                                                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void ABuff_TekArmor_C::IsAbilityValid(bool OutValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsAbilityValid");

	Params::ABuff_TekArmor_C_IsAbilityValid_Params Parms{};

	Parms.OutValid = OutValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (None)
// double                             WaterVolumeTopZ                                                  (None)
// bool                               CallFunc_Get_Is_Player_in_SealedSpace_result                     (None)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ZeroConstructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class APhysicsVolume*              CallFunc_GetPhysicsVolume_ReturnValue                            (None)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (None)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_BreakVector_X_1                                         (None)
// double                             CallFunc_BreakVector_Y_1                                         (None)
// double                             CallFunc_BreakVector_Z_1                                         (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)

void ABuff_TekArmor_C::IsPlayerInWaterVolume(bool Result, double WaterVolumeTopZ, bool CallFunc_Get_Is_Player_in_SealedSpace_result, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool CallFunc_Not_PreBool_ReturnValue, class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsPlayerInWaterVolume");

	Params::ABuff_TekArmor_C_IsPlayerInWaterVolume_Params Parms{};

	Parms.Result = Result;
	Parms.WaterVolumeTopZ = WaterVolumeTopZ;
	Parms.CallFunc_Get_Is_Player_in_SealedSpace_result = CallFunc_Get_Is_Player_in_SealedSpace_result;
	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPhysicsVolume_ReturnValue = CallFunc_GetPhysicsVolume_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (ZeroConstructor)
// struct FTransform                  InTransform                                                      (None)
// class USoundBase*                  Sound                                                            (ZeroConstructor)
// double                             VolumeMultiplier                                                 (None)
// double                             PitchMultiplier                                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// float                              CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast       (None)
// float                              CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast        (None)

void ABuff_TekArmor_C::SpawnFX(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform, class USoundBase* Sound, double VolumeMultiplier, double PitchMultiplier, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast, float CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SpawnFX");

	Params::ABuff_TekArmor_C_SpawnFX_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.InTransform = InTransform;
	Parms.Sound = Sound;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast = CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast;
	Parms.CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast = CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (ZeroConstructor)
// bool                               Result                                                           (None)
// bool                               RetVal                                                           (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ZeroConstructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)
// bool                               CallFunc_AreTribesAllied_ReturnValue                             (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void ABuff_TekArmor_C::Should_Damage_Actor(class AActor* Victim, bool Result, bool RetVal, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_AreTribesAllied_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Should Damage Actor");

	Params::ABuff_TekArmor_C_Should_Damage_Actor_Params Parms{};

	Parms.Victim = Victim;
	Parms.Result = Result;
	Parms.RetVal = RetVal;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_AreTribesAllied_ReturnValue = CallFunc_AreTribesAllied_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (None)
// float                              K2Node_VariableSet_NormalFOV_ImplicitCast                        (None)

void ABuff_TekArmor_C::ResetPlayerFOV(class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, float K2Node_VariableSet_NormalFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ResetPlayerFOV");

	Params::ABuff_TekArmor_C_ResetPlayerFOV_Params Parms{};

	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.K2Node_VariableSet_NormalFOV_ImplicitCast = K2Node_VariableSet_NormalFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (None)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (None)

void ABuff_TekArmor_C::SetTekIgnoreLookInput(bool NewIgnore, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetTekIgnoreLookInput");

	Params::ABuff_TekArmor_C_SetTekIgnoreLookInput_Params Parms{};

	Parms.NewIgnore = NewIgnore;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIgnore                                                        (None)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (None)

void ABuff_TekArmor_C::SetTekIgnoreMoveInput(bool NewIgnore, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetTekIgnoreMoveInput");

	Params::ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params Parms{};

	Parms.NewIgnore = NewIgnore;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void ABuff_TekArmor_C::AllowPostProcessEffect(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "AllowPostProcessEffect");

	Params::ABuff_TekArmor_C_AllowPostProcessEffect_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)

void ABuff_TekArmor_C::BPDeactivated(class AActor* ForInstigator, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPDeactivated");

	Params::ABuff_TekArmor_C_BPDeactivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::ResetTargetFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ResetTargetFOV");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (None)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)

void ABuff_TekArmor_C::IsWarping_FOV(bool Result, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsWarping FOV");

	Params::ABuff_TekArmor_C_IsWarping_FOV_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuff_TekArmor_C*            Ref                                                              (ZeroConstructor)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_TekArmor_C::Get_DefaultTekBuff(class ABuff_TekArmor_C* Ref, class UObject* CallFunc_GetDefaultObject_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get DefaultTekBuff");

	Params::ABuff_TekArmor_C_Get_DefaultTekBuff_Params Parms{};

	Parms.Ref = Ref;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor = K2Node_DynamicCast_AsBuff_Tek_Armor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Ref                                                              (ZeroConstructor)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_TekArmor_C::GetDefaultPlayer(class APrimalCharacter* Ref, class UObject* CallFunc_GetDefaultObject_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetDefaultPlayer");

	Params::ABuff_TekArmor_C_GetDefaultPlayer_Params Parms{};

	Parms.Ref = Ref;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (None)
// int32                              ElementCost                                                      (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)

void ABuff_TekArmor_C::Client_Consume_Element_After_Time(double DeltaTime, int32 ElementCost, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Client_Consume Element After Time");

	Params::ABuff_TekArmor_C_Client_Consume_Element_After_Time_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ElementCost = ElementCost;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ZeroConstructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef                       (ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (None)
// double                             K2Node_VariableSet_warpFOV_start_ImplicitCast                    (None)
// double                             K2Node_VariableSet_warpFOV_target_ImplicitCast                   (None)

void ABuff_TekArmor_C::BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class APlayerController* CallFunc_CastToPlayerController_ReturnValue, double K2Node_VariableSet_warpFOV_start_ImplicitCast, double K2Node_VariableSet_warpFOV_target_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "BPSetupForInstigator");

	Params::ABuff_TekArmor_C_BPSetupForInstigator_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.CallFunc_GetRelatedTekArmorRef_tekArmorRef = CallFunc_GetRelatedTekArmorRef_tekArmorRef;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_CastToPlayerController_ReturnValue = CallFunc_CastToPlayerController_ReturnValue;
	Parms.K2Node_VariableSet_warpFOV_start_ImplicitCast = K2Node_VariableSet_warpFOV_start_ImplicitCast;
	Parms.K2Node_VariableSet_warpFOV_target_ImplicitCast = K2Node_VariableSet_warpFOV_target_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (None)
// class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void ABuff_TekArmor_C::IsPlayerGrounded(bool Result, class UCharacterMovementComponent* CallFunc_Get_Ref_Owning_PlayerMovement_movement, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsPlayerGrounded");

	Params::ABuff_TekArmor_C_IsPlayerGrounded_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_Get_Ref_Owning_PlayerMovement_movement = CallFunc_Get_Ref_Owning_PlayerMovement_movement;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerCameraManager* Ref                                                              (ZeroConstructor)
// class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager               (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void ABuff_TekArmor_C::Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager* Ref, class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get RefOwningPlayer Camera Manager");

	Params::ABuff_TekArmor_C_Get_RefOwningPlayer_Camera_Manager_Params Parms{};

	Parms.Ref = Ref;
	Parms.K2Node_DynamicCast_AsShooter_Player_Camera_Manager = K2Node_DynamicCast_AsShooter_Player_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             IntensityRatio                                                   (None)
// bool                               WarpIn                                                           (None)
// double                             NewFOV                                                           (None)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref                  (ZeroConstructor)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)
// class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1                (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// double                             CallFunc_FClamp_ReturnValue_1                                    (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (None)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (None)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (None)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (None)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (None)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (None)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (None)
// float                              K2Node_VariableSet_NormalFOV_ImplicitCast                        (None)

void ABuff_TekArmor_C::UpdatePlayerFOV(double IntensityRatio, bool WarpIn, double NewFOV, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class AShooterPlayerCameraManager* CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float K2Node_VariableSet_NormalFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "UpdatePlayerFOV");

	Params::ABuff_TekArmor_C_UpdatePlayerFOV_Params Parms{};

	Parms.IntensityRatio = IntensityRatio;
	Parms.WarpIn = WarpIn;
	Parms.NewFOV = NewFOV;
	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1 = CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_VariableSet_NormalFOV_ImplicitCast = K2Node_VariableSet_NormalFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterMovementComponent* Movement                                                         (ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (None)

void ABuff_TekArmor_C::Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent* Movement, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Ref Owning PlayerMovement");

	Params::ABuff_TekArmor_C_Get_Ref_Owning_PlayerMovement_Params Parms{};

	Parms.Movement = Movement;
	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerController*    Controller                                                       (ZeroConstructor)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_TekArmor_C::Get_Ref_Owning_PlayerController(class AShooterPlayerController* Controller, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Get Ref Owning PlayerController");

	Params::ABuff_TekArmor_C_Get_Ref_Owning_PlayerController_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterCharacter*           Player                                                           (ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_TekArmor_C::GetRef_OwningPlayer(class AShooterCharacter* Player, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetRef_OwningPlayer");

	Params::ABuff_TekArmor_C_GetRef_OwningPlayer_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (None)
// bool                               RetVal                                                           (None)
// bool                               CallFunc_IsTekArmorUsingAbility__result                          (None)

void ABuff_TekArmor_C::AreAnyTekAbilitiesActive(bool Result, bool RetVal, bool CallFunc_IsTekArmorUsingAbility__result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "AreAnyTekAbilitiesActive");

	Params::ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params Parms{};

	Parms.Result = Result;
	Parms.RetVal = RetVal;
	Parms.CallFunc_IsTekArmorUsingAbility__result = CallFunc_IsTekArmorUsingAbility__result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              ArmorType                                                        (None)
// bool                               Result                                                           (None)
// bool                               RetVal                                                           (None)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (None)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (ZeroConstructor)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (ZeroConstructor)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void ABuff_TekArmor_C::IsTekArmorUsingAbility_(uint8 ArmorType, bool Result, bool RetVal, uint8 CallFunc_GetValidValue_ReturnValue, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalBuff* CallFunc_GetBuff_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "IsTekArmorUsingAbility?");

	Params::ABuff_TekArmor_C_IsTekArmorUsingAbility__Params Parms{};

	Parms.ArmorType = ArmorType;
	Parms.Result = Result;
	Parms.RetVal = RetVal;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue = CallFunc_GetEquippedItemOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.CallFunc_GetBuff_ReturnValue = CallFunc_GetBuff_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor = K2Node_DynamicCast_AsBuff_Tek_Armor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class USoundBase*                  Sound                                                            (ZeroConstructor)
// class AShooterPlayerController*    CallFunc_Get_Ref_Owning_PlayerController_controller              (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)
// float                              CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast (None)
// float                              CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast(None)

void ABuff_TekArmor_C::DisplayTekArmorMessage(const class FString& Message, class USoundBase* Sound, class AShooterPlayerController* CallFunc_Get_Ref_Owning_PlayerController_controller, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast, float CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "DisplayTekArmorMessage");

	Params::ABuff_TekArmor_C_DisplayTekArmorMessage_Params Parms{};

	Parms.Message = Message;
	Parms.Sound = Sound;
	Parms.CallFunc_Get_Ref_Owning_PlayerController_controller = CallFunc_Get_Ref_Owning_PlayerController_controller;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast = CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast;
	Parms.CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast = CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::SetCastedArmorPieceRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "SetCastedArmorPieceRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItemArmor_Base_Tek_C* TekArmorRef                                                      (ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* ArmorRef                                                         (ZeroConstructor)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_TekArmor_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C* TekArmorRef, class UPrimalItemArmor_Base_Tek_C* ArmorRef, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "GetRelatedTekArmorRef");

	Params::ABuff_TekArmor_C_GetRelatedTekArmorRef_Params Parms{};

	Parms.TekArmorRef = TekArmorRef;
	Parms.ArmorRef = ArmorRef;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue = CallFunc_GetEquippedItemOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNotifyIfOutOfElement                                            (None)
// bool                               bResult                                                          (None)
// bool                               bRetVal                                                          (None)
// bool                               CallFunc_HasRequiredEngrams_HasEngrams                           (None)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ZeroConstructor)
// bool                               CallFunc_IsTekBuffDisabled_bIsDisabled                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_1                            (ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player_2                            (ZeroConstructor)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class ABiomeZoneVolume*            CallFunc_GetMyBiomeZoneVolume_ReturnValue                        (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (None)

void ABuff_TekArmor_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool bResult, bool bRetVal, bool CallFunc_HasRequiredEngrams_HasEngrams, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool CallFunc_IsTekBuffDisabled_bIsDisabled, bool CallFunc_Not_PreBool_ReturnValue, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player_1, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player_2, bool CallFunc_BPIsConscious_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABiomeZoneVolume* CallFunc_GetMyBiomeZoneVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "CanUseTekAbility");

	Params::ABuff_TekArmor_C_CanUseTekAbility_Params Parms{};

	Parms.bNotifyIfOutOfElement = bNotifyIfOutOfElement;
	Parms.bResult = bResult;
	Parms.bRetVal = bRetVal;
	Parms.CallFunc_HasRequiredEngrams_HasEngrams = CallFunc_HasRequiredEngrams_HasEngrams;
	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
	Parms.CallFunc_IsTekBuffDisabled_bIsDisabled = CallFunc_IsTekBuffDisabled_bIsDisabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRef_OwningPlayer_player_1 = CallFunc_GetRef_OwningPlayer_player_1;
	Parms.CallFunc_GetRef_OwningPlayer_player_2 = CallFunc_GetRef_OwningPlayer_player_2;
	Parms.CallFunc_BPIsConscious_ReturnValue = CallFunc_BPIsConscious_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMyBiomeZoneVolume_ReturnValue = CallFunc_GetMyBiomeZoneVolume_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Buff = K2Node_ClassDynamicCast_AsPrimal_Buff;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)

void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1");

	Params::ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)

void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0");

	Params::ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPrimalEquipmentType    ItemSlot                                                         (None)

void ABuff_TekArmor_C::Equipped_SetToMaxElement(enum class EPrimalEquipmentType ItemSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Equipped_SetToMaxElement");

	Params::ABuff_TekArmor_C_Equipped_SetToMaxElement_Params Parms{};

	Parms.ItemSlot = ItemSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             ParticleTemplate                                                 (ZeroConstructor)
// class USoundBase*                  Sound                                                            (None)
// struct FTransform                  Transform                                                        (None)
// double                             SoundVolume                                                      (None)
// double                             SoundPitch                                                       (None)

void ABuff_TekArmor_C::Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase* Sound, const struct FTransform& Transform, double SoundVolume, double SoundPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Multi_SpawnFX");

	Params::ABuff_TekArmor_C_Multi_SpawnFX_Params Parms{};

	Parms.ParticleTemplate = ParticleTemplate;
	Parms.Sound = Sound;
	Parms.Transform = Transform;
	Parms.SoundVolume = SoundVolume;
	Parms.SoundPitch = SoundPitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (None)
// enum class EPrimalEquipmentType    ItemSlot                                                         (None)

void ABuff_TekArmor_C::Equipped_TryToDecreaseElement(int32 AmountToDecreaseBy, enum class EPrimalEquipmentType ItemSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Equipped_TryToDecreaseElement");

	Params::ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params Parms{};

	Parms.AmountToDecreaseBy = AmountToDecreaseBy;
	Parms.ItemSlot = ItemSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::CheckForArmorRef()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "CheckForArmorRef");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewActive                                                        (None)

void ABuff_TekArmor_C::Server_SetTekAbilityActive(bool NewActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "Server_SetTekAbilityActive");

	Params::ABuff_TekArmor_C_Server_SetTekAbilityActive_Params Parms{};

	Parms.NewActive = NewActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::RateLimitedGenesisAbilityWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "RateLimitedGenesisAbilityWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_TekArmor_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FKey                        Temp_struct_Variable                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class EPrimalEquipmentType    K2Node_CustomEvent_ItemSlot_1                                    (None)
// class UParticleSystem*             K2Node_CustomEvent_particleTemplate                              (ZeroConstructor)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor)
// struct FTransform                  K2Node_CustomEvent_transform                                     (None)
// double                             K2Node_CustomEvent_soundVolume                                   (None)
// double                             K2Node_CustomEvent_soundPitch                                    (None)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (None)
// enum class EPrimalEquipmentType    K2Node_CustomEvent_ItemSlot                                      (None)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (ZeroConstructor)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1                (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               K2Node_CustomEvent_newActive                                     (None)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (None)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (None)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (ZeroConstructor)
// double                             CallFunc_FloatToDouble_ReturnValue                               (None)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (None)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// bool                               CallFunc_IsCooldownComplete_ReturnValue                          (None)
// double                             CallFunc_FloatToDouble_value_ImplicitCast                        (None)
// float                              CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast        (None)

void ABuff_TekArmor_C::ExecuteUbergraph_Buff_TekArmor(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable, enum class EPrimalEquipmentType K2Node_CustomEvent_ItemSlot_1, class UParticleSystem* K2Node_CustomEvent_particleTemplate, class USoundBase* K2Node_CustomEvent_Sound, const struct FTransform& K2Node_CustomEvent_transform, double K2Node_CustomEvent_soundVolume, double K2Node_CustomEvent_soundPitch, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_AmountToDecreaseBy, enum class EPrimalEquipmentType K2Node_CustomEvent_ItemSlot, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue_1, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_newActive, bool CallFunc_EqualEqual_BoolBool_ReturnValue, float CallFunc_TimeSeconds_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, double CallFunc_FloatToDouble_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_3, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsCooldownComplete_ReturnValue, double CallFunc_FloatToDouble_value_ImplicitCast, float CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_TekArmor_C", "ExecuteUbergraph_Buff_TekArmor");

	Params::ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_ItemSlot_1 = K2Node_CustomEvent_ItemSlot_1;
	Parms.K2Node_CustomEvent_particleTemplate = K2Node_CustomEvent_particleTemplate;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_CustomEvent_transform = K2Node_CustomEvent_transform;
	Parms.K2Node_CustomEvent_soundVolume = K2Node_CustomEvent_soundVolume;
	Parms.K2Node_CustomEvent_soundPitch = K2Node_CustomEvent_soundPitch;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue = CallFunc_GetEquippedItemOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_AmountToDecreaseBy = K2Node_CustomEvent_AmountToDecreaseBy;
	Parms.K2Node_CustomEvent_ItemSlot = K2Node_CustomEvent_ItemSlot;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue_1 = CallFunc_GetEquippedItemOfType_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1 = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_newActive = K2Node_CustomEvent_newActive;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_TimeSeconds_ReturnValue = CallFunc_TimeSeconds_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_FloatToDouble_ReturnValue = CallFunc_FloatToDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsCooldownComplete_ReturnValue = CallFunc_IsCooldownComplete_ReturnValue;
	Parms.CallFunc_FloatToDouble_value_ImplicitCast = CallFunc_FloatToDouble_value_ImplicitCast;
	Parms.CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast = CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


