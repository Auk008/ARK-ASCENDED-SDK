#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x610 - 0x5C8)
// BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
{
public:
	int32                                        NumAscensions;                                     // 0x5C8(0x4)(None)
	uint8                                        Pad_43A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               AscensionData;                                     // 0x5D0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FName>                          BossDinoNameTagAscensionDataMap;                   // 0x5E0(0x10)(AutoWeak, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        SavedPlayerDataVersion;                            // 0x5F0(0x4)(None)
	int32                                        CurrentPlayerDataVersion;                          // 0x5F4(0x4)(None)
	int32                                        HexagonCount;                                      // 0x5F8(0x4)(None)
	int32                                        NumChibiLevelUpsData;                              // 0x5FC(0x4)(None)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x600(0x10)(None)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_Base_C* GetDefaultObj();

	void EndActivityOnBoss(class FName Boss, class AShooterPlayerController* SPC, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetChibiLevels(int32 NewLevels, class AShooterPlayerController* ForPC, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess);
	void HasGeneralizedAchievementTag(class FName Tag, bool ReturnValue, bool Ret_val, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GrantGeneralizedAchievementTag(class FName ObtainedAchievementTag, class AShooterPlayerController* ForPC, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BPForceDefeatedBoss(int32 DifficultyIndex, class FName BossName, class AShooterPlayerController* PlayerController, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FBossEngramsSoftReferenceMapping& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FEngramsSetSoftReferenceMapping& CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_BPLoadClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess);
	void SetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue);
	void GetPlayerHexagonCount(int32 ReturnValue);
	void BPCreatedNewPlayerData();
	void DefeatedBoss(class APrimalDinoCharacter* BossChar, int32 DifficultyIndex, class FName TagOverride, class AShooterPlayerController* ForPC, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_FMax_ReturnValue);
};

}


