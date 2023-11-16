#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x12 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.EndActivityOnBoss
struct UPrimalPlayerDataBP_Base_C_EndActivityOnBoss_Params
{
public:
	class FName                                  Boss;                                              // 0x0(0x8)(None)
	class AShooterPlayerController*              SPC;                                               // 0x8(0x8)(None)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x10(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(None)
};

// 0x29 (0x29 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetChibiLevels
struct UPrimalPlayerDataBP_Base_C_SetChibiLevels_Params
{
public:
	int32                                        NewLevels;                                         // 0x0(0x4)(None)
	uint8                                        Pad_435B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(ZeroConstructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	uint8                                        Pad_435C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.HasGeneralizedAchievementTag
struct UPrimalPlayerDataBP_Base_C_HasGeneralizedAchievementTag_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         Ret_val;                                           // 0x9(0x1)(None)
	uint8                                        Pad_4362[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GrantGeneralizedAchievementTag
struct UPrimalPlayerDataBP_Base_C_GrantGeneralizedAchievementTag_Params
{
public:
	class FName                                  ObtainedAchievementTag;                            // 0x0(0x8)(None)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	uint8                                        Pad_4373[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x14(0x4)(None)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x18(0x8)(ZeroConstructor)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_4374[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x2C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(None)
};

// 0x99 (0x99 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
struct UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params
{
public:
	int32                                        DifficultyIndex;                                   // 0x0(0x4)(None)
	class FName                                  BossName;                                          // 0x4(0x8)(None)
	uint8                                        Pad_438C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              PlayerController;                                  // 0x10(0x8)(ZeroConstructor)
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_438D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(None)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x30(0x4)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x34(0x1)(None)
	uint8                                        Pad_438F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBossEngramsSoftReferenceMapping      CallFunc_Array_Get_Item;                           // 0x38(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x48(0x1)(None)
	uint8                                        Pad_4390[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEngramsSetSoftReferenceMapping       CallFunc_Array_Get_Item_1;                         // 0x50(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(None)
	uint8                                        Pad_4391[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x68(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(None)
	uint8                                        Pad_4392[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_BPLoadClass_ReturnValue;                  // 0x80(0x8)(ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(None)
	uint8                                        Pad_4393[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x90(0x8)(None)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x98(0x1)(None)
};

// 0x5 (0x5 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
struct UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params
{
public:
	int32                                        NewHexagonCount;                                   // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
struct UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
struct UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params
{
public:
	class APrimalDinoCharacter*                  BossChar;                                          // 0x0(0x8)(ZeroConstructor)
	int32                                        DifficultyIndex;                                   // 0x8(0x4)(None)
	class FName                                  TagOverride;                                       // 0xC(0x8)(None)
	uint8                                        Pad_439D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x20(0x8)(ZeroConstructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
	uint8                                        Pad_439E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(None)
	uint8                                        Pad_439F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x40(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(None)
	uint8                                        Pad_43A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x4C(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x50(0x1)(None)
	uint8                                        Pad_43A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Array_Get_Item;                           // 0x58(0x8)(None)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x60(0x8)(None)
};

}
}


