#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
// (None)

class UClass* UPrimalPlayerDataBP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalPlayerDataBP_Base_C");

	return Clss;
}


// PrimalPlayerDataBP_Base_C PrimalPlayerDataBP_Base.Default__PrimalPlayerDataBP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalPlayerDataBP_Base_C* UPrimalPlayerDataBP_Base_C::GetDefaultObj()
{
	static class UPrimalPlayerDataBP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalPlayerDataBP_Base_C*>(UPrimalPlayerDataBP_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.EndActivityOnBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Boss                                                             (None)
// class AShooterPlayerController*    SPC                                                              (None)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UPrimalPlayerDataBP_Base_C::EndActivityOnBoss(class FName Boss, class AShooterPlayerController* SPC, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "EndActivityOnBoss");

	Params::UPrimalPlayerDataBP_Base_C_EndActivityOnBoss_Params Parms{};

	Parms.Boss = Boss;
	Parms.SPC = SPC;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetChibiLevels
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevels                                                        (None)
// class AShooterPlayerController*    ForPC                                                            (ZeroConstructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UPrimalPlayerDataBP_Base_C::SetChibiLevels(int32 NewLevels, class AShooterPlayerController* ForPC, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "SetChibiLevels");

	Params::UPrimalPlayerDataBP_Base_C_SetChibiLevels_Params Parms{};

	Parms.NewLevels = NewLevels;
	Parms.ForPC = ForPC;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.HasGeneralizedAchievementTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (None)
// bool                               ReturnValue                                                      (None)
// bool                               Ret_val                                                          (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UPrimalPlayerDataBP_Base_C::HasGeneralizedAchievementTag(class FName Tag, bool ReturnValue, bool Ret_val, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "HasGeneralizedAchievementTag");

	Params::UPrimalPlayerDataBP_Base_C_HasGeneralizedAchievementTag_Params Parms{};

	Parms.Tag = Tag;
	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GrantGeneralizedAchievementTag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ObtainedAchievementTag                                           (None)
// class AShooterPlayerController*    ForPC                                                            (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UPrimalPlayerDataBP_Base_C::GrantGeneralizedAchievementTag(class FName ObtainedAchievementTag, class AShooterPlayerController* ForPC, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "GrantGeneralizedAchievementTag");

	Params::UPrimalPlayerDataBP_Base_C_GrantGeneralizedAchievementTag_Params Parms{};

	Parms.ObtainedAchievementTag = ObtainedAchievementTag;
	Parms.ForPC = ForPC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (None)
// class FName                        BossName                                                         (None)
// class AShooterPlayerController*    PlayerController                                                 (ZeroConstructor)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// struct FBossEngramsSoftReferenceMappingCallFunc_Array_Get_Item                                          (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (None)
// struct FEngramsSetSoftReferenceMappingCallFunc_Array_Get_Item_1                                        (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class FString                      CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UClass*                      CallFunc_BPLoadClass_ReturnValue                                 (ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (None)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)

void UPrimalPlayerDataBP_Base_C::BPForceDefeatedBoss(int32 DifficultyIndex, class FName BossName, class AShooterPlayerController* PlayerController, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FBossEngramsSoftReferenceMapping& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FEngramsSetSoftReferenceMapping& CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_BPLoadClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "BPForceDefeatedBoss");

	Params::UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params Parms{};

	Parms.DifficultyIndex = DifficultyIndex;
	Parms.BossName = BossName;
	Parms.PlayerController = PlayerController;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BPLoadClass_ReturnValue = CallFunc_BPLoadClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (None)
// bool                               ReturnValue                                                      (None)

void UPrimalPlayerDataBP_Base_C::SetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "SetPlayerHexagonCount");

	Params::UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params Parms{};

	Parms.NewHexagonCount = NewHexagonCount;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UPrimalPlayerDataBP_Base_C::GetPlayerHexagonCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "GetPlayerHexagonCount");

	Params::UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPCreatedNewPlayerData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalPlayerDataBP_Base_C::BPCreatedNewPlayerData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "BPCreatedNewPlayerData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        BossChar                                                         (ZeroConstructor)
// int32                              DifficultyIndex                                                  (None)
// class FName                        TagOverride                                                      (None)
// class AShooterPlayerController*    ForPC                                                            (ZeroConstructor)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// double                             CallFunc_Array_Get_Item                                          (None)
// double                             CallFunc_FMax_ReturnValue                                        (None)

void UPrimalPlayerDataBP_Base_C::DefeatedBoss(class APrimalDinoCharacter* BossChar, int32 DifficultyIndex, class FName TagOverride, class AShooterPlayerController* ForPC, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalPlayerDataBP_Base_C", "DefeatedBoss");

	Params::UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params Parms{};

	Parms.BossChar = BossChar;
	Parms.DifficultyIndex = DifficultyIndex;
	Parms.TagOverride = TagOverride;
	Parms.ForPC = ForPC;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


