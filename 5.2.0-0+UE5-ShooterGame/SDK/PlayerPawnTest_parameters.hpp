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

// 0x31 (0x31 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation
struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params
{
public:
	struct FVector                               CurrentCameraPivotLocation;                        // 0x0(0x18)(None)
	struct FVector                               DesiredCameraPivotLocation;                        // 0x18(0x18)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
struct APlayerPawnTest_C_GetFXBloodColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection
struct APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params
{
public:
	class UPDA_VoiceCollection_C*                K2Node_DynamicCast_AsPDA_Voice_Collection;         // 0x0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params
{
public:
	struct FRotator                              CurrentCameraPivotRotation;                        // 0x0(0x18)(None)
	struct FRotator                              DesiredCameraPivotRotation;                        // 0x18(0x18)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_41EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll;                        // 0x34(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x38(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x3C(0x4)(None)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x40(0x18)(None)
};

// 0xF1 (0xF1 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	struct FVector                               DesiredCameraOffset;                               // 0xD8(0x18)(None)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(None)
};

// 0x155 (0x155 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
struct APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xD8(0x34)(None)
	struct FPrimalCameraInterpParams             LastInterpParamsX;                                 // 0x10C(0xC)(None)
	struct FPrimalCameraInterpParams             LastInterpParamsY;                                 // 0x118(0xC)(None)
	struct FPrimalCameraInterpParams             LastInterpParamsZ;                                 // 0x124(0xC)(None)
	struct FPrimalCameraInterpParams             OutInterpParamsX;                                  // 0x130(0xC)(None)
	struct FPrimalCameraInterpParams             OutInterpParamsY;                                  // 0x13C(0xC)(None)
	struct FPrimalCameraInterpParams             OutInterpParamsZ;                                  // 0x148(0xC)(None)
	bool                                         ReturnValue;                                       // 0x154(0x1)(None)
};

// 0xE5 (0xE5 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
struct APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xD8(0xC)(None)
	bool                                         ReturnValue;                                       // 0xE4(0x1)(None)
};

// 0xF8 (0xF8 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
struct APlayerPawnTest_C_BPOverrideCameraArmLength_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	float                                        CurrentCameraArmLength;                            // 0xD8(0x4)(None)
	float                                        DesiredCameraArmLength;                            // 0xDC(0x4)(None)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(None)
	uint8                                        Pad_41EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast; // 0xE8(0x8)(None)
	double                                       CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast; // 0xF0(0x8)(None)
};

// 0x9 (0x9 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
struct APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params
{
public:
	class AShooterHUD*                           CallFunc_GetShooterHud_ShooterHud;                 // 0x0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
struct APlayerPawnTest_C_GetShooterHud_Params
{
public:
	class AShooterHUD*                           ShooterHUD;                                        // 0x0(0x8)(Edit, ZeroConstructor)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_41F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x20(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
struct APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params
{
public:
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x0(0x10)(None)
};

// 0x2A (0x2A - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
struct APlayerPawnTest_C_HasEquipToHideImplant_Params
{
public:
	bool                                         ShouldHideImplant;                                 // 0x0(0x1)(None)
	bool                                         Local_HideImplant;                                 // 0x1(0x1)(None)
	uint8                                        Pad_41F8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x12(0x1)(None)
	uint8                                        Pad_41F9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_Array_Get_Item;                           // 0x18(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x24(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x25(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x26(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x27(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x28(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x29(0x1)(None)
};

// 0x2A5 (0x2A5 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
struct APlayerPawnTest_C_SetupMeshes_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(None)
	uint8                                        Pad_4221[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x4(0x4)(None)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item;                           // 0x8(0x30)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x38(0x4)(None)
	uint8                                        Pad_4222[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue;                 // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(None)
	uint8                                        Pad_4223[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x54(0x1)(None)
	uint8                                        Pad_4225[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x60(0x1)(None)
	uint8                                        Pad_4227[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_1;                         // 0x68(0x30)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_1;               // 0x98(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA0(0x1)(None)
	uint8                                        Pad_4229[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0xA8(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_1;            // 0xB0(0x4)(None)
	uint8                                        Pad_422C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xB8(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xC0(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC4(0x1)(None)
	uint8                                        Pad_422D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0xC8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xCC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD0(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xD4(0x1)(None)
	uint8                                        Pad_422F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumMaterials_ReturnValue_2;            // 0xD8(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xDC(0x4)(None)
	int32                                        Temp_int_Variable_2;                               // 0xE0(0x4)(None)
	uint8                                        Pad_4231[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_1;                // 0xE8(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0xF0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xF8(0x1)(None)
	uint8                                        Pad_4232[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xFC(0x4)(None)
	int32                                        Temp_int_Variable_3;                               // 0x100(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x104(0x4)(None)
	int32                                        Temp_int_Variable_4;                               // 0x108(0x4)(None)
	uint8                                        Pad_4233[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_2;                         // 0x110(0x30)(Edit, ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_2;               // 0x140(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x148(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x14C(0x1)(None)
	bool                                         CallFunc_HasEquipToHideImplant_ShouldHideImplant;  // 0x14D(0x1)(None)
	uint8                                        Pad_4234[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x150(0x8)(Edit, ZeroConstructor)
	class FName                                  CallFunc_GetObjectName_ReturnValue;                // 0x158(0x8)(None)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_3;                         // 0x160(0x30)(Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x190(0x1)(None)
	uint8                                        Pad_4235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_3;               // 0x198(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A0(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x1A1(0x1)(None)
	uint8                                        Pad_4236[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_2;                // 0x1A8(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_3;            // 0x1B0(0x4)(None)
	uint8                                        Pad_4237[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x1B8(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x1C0(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x1C4(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x1C5(0x1)(None)
	uint8                                        Pad_4238[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1C8(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_5;             // 0x1CC(0x1)(None)
	uint8                                        Pad_4239[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_3;                // 0x1D0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_4;            // 0x1D8(0x4)(None)
	uint8                                        Pad_423A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x1E0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x1E8(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x1EC(0x1)(None)
	uint8                                        Pad_423C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x1F0(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_6;             // 0x1F4(0x1)(None)
	uint8                                        Pad_423D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_4;                         // 0x1F8(0x30)(Edit, ZeroConstructor, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_4;               // 0x228(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x230(0x1)(None)
	uint8                                        Pad_423E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_5;                               // 0x234(0x4)(None)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_4;                // 0x238(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_4; // 0x240(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x248(0x1)(None)
	uint8                                        Pad_423F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x24C(0x4)(None)
	TSoftObjectPtr<class USkeletalMesh>          CallFunc_Array_Get_Item_5;                         // 0x250(0x30)(Edit, ZeroConstructor)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_5;                // 0x280(0x8)(Edit, ZeroConstructor)
	class USkeletalMesh*                         CallFunc_AssetResolve_ReturnValue_5;               // 0x288(0x8)(Edit, ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_5; // 0x290(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x298(0x1)(None)
	uint8                                        Pad_4240[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumMaterials_ReturnValue_5;            // 0x29C(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x2A0(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_5;           // 0x2A4(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
struct APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params
{
public:
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
struct APlayerPawnTest_C_GetTheNumChibiLevelUps_Params
{
public:
	int32                                        OutVal;                                            // 0x0(0x4)(None)
};

// 0x5 (0x5 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
struct APlayerPawnTest_C_SetNumChibiLevelUps_Params
{
public:
	int32                                        NewNum;                                            // 0x0(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(None)
};

// 0x49 (0x49 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
struct APlayerPawnTest_C_BPGetPlayerHexagonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
	int32                                        Ret_val;                                           // 0x4(0x4)(None)
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x8(0x10)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(Edit, ZeroConstructor)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x20(0x1)(None)
	uint8                                        Pad_4254[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31(0x1)(None)
	uint8                                        Pad_4255[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x38(0x8)(Edit, ZeroConstructor)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x40(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(None)
};

// 0x5A (0x5A - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
struct APlayerPawnTest_C_BPSetPlayerHexagonCount_Params
{
public:
	int32                                        NewHexagonCount;                                   // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	bool                                         Ret_val;                                           // 0x5(0x1)(None)
	uint8                                        Pad_426B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	uint8                                        Pad_426C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x18(0x10)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x28(0x8)(Edit, ZeroConstructor)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(None)
	uint8                                        Pad_426D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x40(0x8)(Edit, ZeroConstructor)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x48(0x1)(None)
	uint8                                        Pad_426E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x50(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59(0x1)(None)
};

// 0x4C (0x4C - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
struct APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params
{
public:
	TArray<class USkeletalMeshComponent*>        SkelMeshComponents;                                // 0x0(0x10)(ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class USkeletalMeshComponent*>        Comps;                                             // 0x10(0x10)(Edit, ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(None)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x21(0x1)(None)
	bool                                         CallFunc_IsFirstPerson_ReturnValue_1;              // 0x22(0x1)(None)
	uint8                                        Pad_427E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x24(0x4)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x28(0x4)(None)
	uint8                                        Pad_427F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x30(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x38(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(None)
	uint8                                        Pad_4280[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                K2Node_Select_Default;                             // 0x40(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x48(0x4)(None)
};

// 0x2C (0x2C - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
struct APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params
{
public:
	float                                        DefaultTPVCameraSpeedInterpolationMultiplier;      // 0x0(0x4)(None)
	float                                        DefaultTPVOffsetInterpSpeed;                       // 0x4(0x4)(None)
	float                                        TPVCameraSpeedInterpolationMultiplier;             // 0x8(0x4)(None)
	float                                        TPVOffsetInterpSpeed;                              // 0xC(0x4)(None)
	double                                       LocalDefaultTPVOffsetInterpSpeed;                  // 0x10(0x8)(None)
	bool                                         CallFunc_HasBuff_ReturnValue;                      // 0x18(0x1)(None)
	uint8                                        Pad_4289[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast; // 0x20(0x8)(None)
	float                                        K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast; // 0x28(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
struct APlayerPawnTest_C_ShowHUDNotification_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(None)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(None)
	double                                       LifetimeSeconds;                                   // 0x20(0x8)(None)
	double                                       DisplayScale;                                      // 0x28(0x8)(None)
	class USoundCue*                             SoundToPlay;                                       // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
struct APlayerPawnTest_C_TrySpawnMoundEx_Params
{
public:
	double                                       Angle;                                             // 0x0(0x8)(None)
	double                                       Range;                                             // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
struct APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params
{
public:
	class USkeletalMeshComponent*                FirstPersonMasterPosecomponent;                    // 0x0(0x8)(None)
};

// 0x71 (0x71 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
struct APlayerPawnTest_C_DefeatedBoss_Params
{
public:
	class APrimalDinoCharacter*                  BossCharacter;                                     // 0x0(0x8)(Edit, ZeroConstructor)
	class FName                                  BossTag;                                           // 0x8(0x8)(None)
	int32                                        BossDifficulty;                                    // 0x10(0x4)(None)
	uint8                                        Pad_4298[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(Edit, ZeroConstructor)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x20(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_4299[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x38(0x10)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x48(0x8)(Edit, ZeroConstructor)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x50(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(None)
	uint8                                        Pad_429A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x60(0x8)(Edit, ZeroConstructor)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x68(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(None)
};

// 0x1B8 (0x1B8 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
struct APlayerPawnTest_C_ServerAscend_Params
{
public:
	int32                                        DifficultyIndex;                                   // 0x0(0x4)(None)
	bool                                         bImmediateAscend;                                  // 0x4(0x1)(None)
	bool                                         bSuppressAchievements;                             // 0x5(0x1)(None)
	bool                                         bIsCheatAscend;                                    // 0x6(0x1)(None)
	uint8                                        Pad_42AF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(None)
	bool                                         CallFunc_IsListenServer_ReturnValue;               // 0xD(0x1)(None)
	uint8                                        Pad_42B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x10(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(None)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue;                // 0x29(0x1)(None)
	uint8                                        Pad_42B1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x30(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x40(0x1)(None)
	uint8                                        Pad_42B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0x48(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_2;                            // 0x58(0x10)(BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable;                                 // 0x68(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(None)
	class FString                                K2Node_Select_Default;                             // 0x70(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x80(0x4)(None)
	uint8                                        Pad_42B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetCharacterController_ReturnValue;       // 0x88(0x8)(Edit, ZeroConstructor)
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0x90(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x98(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(None)
	uint8                                        Pad_42B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldSettings*                        CallFunc_GetWorldSettings_ReturnValue;             // 0xA8(0x8)(Edit, ZeroConstructor)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0xB0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB9(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0xBA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xBB(0x1)(None)
	uint8                                        Pad_42B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0xC0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xCC(0x1)(None)
	uint8                                        Pad_42B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0xD0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(None)
	uint8                                        Pad_42B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0xE0(0x18)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xF8(0x8)(Edit, ZeroConstructor)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x100(0x8)(Edit, ZeroConstructor)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x108(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x110(0x1)(None)
	uint8                                        Pad_42B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode_1;          // 0x118(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x120(0x1)(None)
	uint8                                        Pad_42B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetServerSettingsFloat_OutFloat;          // 0x124(0x4)(None)
	bool                                         CallFunc_GetServerSettingsFloat_ReturnValue;       // 0x128(0x1)(None)
	uint8                                        Pad_42BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetServerSettingsFloat_OutFloat_1;        // 0x12C(0x4)(None)
	bool                                         CallFunc_GetServerSettingsFloat_ReturnValue_1;     // 0x130(0x1)(None)
	uint8                                        Pad_42BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetServerSettingsFloat_OutFloat_2;        // 0x134(0x4)(None)
	bool                                         CallFunc_GetServerSettingsFloat_ReturnValue_2;     // 0x138(0x1)(None)
	uint8                                        Pad_42BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x140(0x10)(None)
	class UPrimalPlayerData*                     CallFunc_GetPlayerData_ReturnValue;                // 0x150(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x158(0x18)(None)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x170(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x178(0x1)(None)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue_1;              // 0x179(0x1)(None)
	uint8                                        Pad_42BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x180(0x8)(Edit, ZeroConstructor)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x188(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0x190(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x198(0x1)(None)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x199(0x1)(None)
	uint8                                        Pad_42C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x1A0(0x8)(None)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x1A8(0x8)(None)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x1B0(0x8)(None)
};

// 0x41 (0x41 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
struct APlayerPawnTest_C_PlayerCommand_Params
{
public:
	class FString                                TheCommand;                                        // 0x0(0x10)(Protected, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RetVal;                                            // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_PlayerCommand_ReturnValue;                // 0x30(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x40(0x1)(None)
};

// 0x6 (0x6 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
struct APlayerPawnTest_C_NetClientAscend_Params
{
public:
	int32                                        AscendIndex;                                       // 0x0(0x4)(None)
	bool                                         bImmediateAscend;                                  // 0x4(0x1)(None)
	bool                                         bIsCheatAscend;                                    // 0x5(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
struct APlayerPawnTest_C_ClientShowHUDNotification_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(None)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(None)
	double                                       LifetimeSeconds;                                   // 0x20(0x8)(None)
	double                                       DisplayScale;                                      // 0x28(0x8)(None)
	class USoundCue*                             SoundToPlay;                                       // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX
struct APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(None)
	class APrimalCharacter*                      VictimChar;                                        // 0x8(0x8)(None)
};

// 0x224 (0x224 - 0x0)
// Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
struct APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5(0x1)(None)
	uint8                                        Pad_42D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_AscendIndex;                    // 0x8(0x4)(None)
	bool                                         K2Node_CustomEvent_bImmediateAscend;               // 0xC(0x1)(None)
	bool                                         K2Node_CustomEvent_bIsCheatAscend;                 // 0xD(0x1)(None)
	uint8                                        Pad_42D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x10(0x8)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x28(0x8)(Edit, ZeroConstructor)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x30(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetUserSettings_ReturnValue;              // 0x38(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	uint8                                        Pad_42D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFinalCreditsUI_C*                     CallFunc_Create_ReturnValue;                       // 0x50(0x8)(Edit, ZeroConstructor)
	class FString                                K2Node_CustomEvent_Text;                           // 0x58(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x68(0x10)(None)
	double                                       K2Node_CustomEvent_LifetimeSeconds;                // 0x78(0x8)(None)
	double                                       K2Node_CustomEvent_DisplayScale;                   // 0x80(0x8)(None)
	class USoundCue*                             K2Node_CustomEvent_SoundToPlay;                    // 0x88(0x8)(Edit, ZeroConstructor)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x90(0x8)(Edit, ZeroConstructor)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x98(0x4)(None)
	uint8                                        Pad_42D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0xA0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA8(0x1)(None)
	uint8                                        Pad_42D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0xB0(0x8)(Edit, ZeroConstructor)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0xB8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue;     // 0xC0(0x1)(None)
	bool                                         CallFunc_IsShipping_ReturnValue;                   // 0xC1(0x1)(None)
	uint8                                        Pad_42D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0xC8(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xD8(0x1)(None)
	uint8                                        Pad_42D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_SocketName;                           // 0xDC(0x8)(None)
	uint8                                        Pad_42DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_Event_VictimChar;                           // 0xE8(0x8)(Edit, ZeroConstructor)
	struct FLinearColor                          CallFunc_GetFXBloodColor_ReturnValue;              // 0xF0(0x10)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x100(0x1)(None)
	uint8                                        Pad_42DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x108(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x111(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x112(0x1)(None)
	uint8                                        Pad_42DD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x114(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x124(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x134(0x10)(None)
	int32                                        Temp_int_Variable;                                 // 0x144(0x4)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x148(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x149(0x1)(None)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x14A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14B(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x14C(0x1)(None)
	uint8                                        Pad_42E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       K2Node_Select_Default;                             // 0x150(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x158(0x1)(None)
	uint8                                        Pad_42E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       K2Node_Select_Default_1;                           // 0x160(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x168(0x8)(None)
	class USceneComponent*                       K2Node_Select_Default_2;                           // 0x170(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x178(0x8)(None)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x180(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x188(0x1)(None)
	uint8                                        Pad_42E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18C(0x4)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x190(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x1A0(0x4)(None)
	uint8                                        Pad_42E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1A8(0x10)(None)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue_1;   // 0x1B8(0x1)(None)
	uint8                                        Pad_42E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x1BC(0x10)(None)
	uint8                                        Pad_42E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x1D0(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller_2;  // 0x1D8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(None)
	uint8                                        Pad_42EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast; // 0x1E4(0x4)(None)
	float                                        CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast; // 0x1E8(0x4)(None)
	uint8                                        Pad_42EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x1F0(0x8)(None)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x1F8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x200(0x8)(None)
	double                                       CallFunc_SelectFloat_B_ImplicitCast_1;             // 0x208(0x8)(None)
	double                                       CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x210(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x218(0x8)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x220(0x4)(None)
};

}
}


