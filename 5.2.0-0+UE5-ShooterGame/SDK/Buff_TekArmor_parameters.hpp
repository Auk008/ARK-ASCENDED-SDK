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

// 0x8 (0x8 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetWeaponMesh
struct ABuff_TekArmor_C_GetWeaponMesh_Params
{
public:
	class USkeletalMeshComponent*                OutMesh;                                           // 0x0(0x8)(None)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon
struct ABuff_TekArmor_C_HideBoostIcon_Params
{
public:
	bool                                         ShouldSet;                                         // 0x0(0x1)(None)
	bool                                         WithValue;                                         // 0x1(0x1)(None)
};

// 0x60 (0x60 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset
struct ABuff_TekArmor_C_SetJetpackOffset_Params
{
public:
	struct FTransform                            AddTransform;                                      // 0x0(0x60)(None)
};

// 0x9C (0x9C - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
struct ABuff_TekArmor_C_HasRequiredEngrams_Params
{
public:
	bool                                         HasEngrams;                                        // 0x0(0x1)(None)
	bool                                         OutHasEngrams;                                     // 0x1(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x2(0x1)(None)
	uint8                                        Pad_2932[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(None)
	uint8                                        Pad_2933[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(ZeroConstructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	uint8                                        Pad_2934[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x20(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(None)
	uint8                                        Pad_2935[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(None)
	uint8                                        Pad_2936[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x50(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(None)
	uint8                                        Pad_2937[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x60(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(None)
	uint8                                        Pad_2938[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x78(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x80(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x89(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x8A(0x1)(None)
	uint8                                        Pad_2939[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x90(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x99(0x1)(None)
	bool                                         CallFunc_HasEngram_ReturnValue;                    // 0x9A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x9B(0x1)(None)
};

// 0xDA (0xDA - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
struct ABuff_TekArmor_C_IsTekBuffDisabled_Params
{
public:
	bool                                         bIsDisabled;                                       // 0x0(0x1)(None)
	bool                                         bRetVal;                                           // 0x1(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x2(0x1)(None)
	uint8                                        Pad_294D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(None)
	uint8                                        Pad_294E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x10(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x11(0x1)(None)
	uint8                                        Pad_294F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_2;        // 0x1C(0x1)(None)
	uint8                                        Pad_2950[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x20(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x24(0x1)(None)
	uint8                                        Pad_2951[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x28(0x8)(ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x30(0x8)(ZeroConstructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x38(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x40(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x49(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x4A(0x1)(None)
	uint8                                        Pad_2952[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x50(0x4)(None)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x54(0x8)(None)
	uint8                                        Pad_2953[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x60(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(None)
	uint8                                        Pad_2954[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(None)
	TArray<class APrimalBuff*>                   CallFunc_GetAllBuffs_AllBuffs;                     // 0x70(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APrimalBuff*                           CallFunc_Array_Get_Item_1;                         // 0x80(0x8)(ZeroConstructor)
	TArray<class FName>                          CallFunc_BPPreventTekArmorBuffs_ReturnValue;       // 0x88(0x10)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x98(0x1)(None)
	uint8                                        Pad_2955[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x9C(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xA0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA5(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA6(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA7(0x1)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xA8(0x4)(None)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0xAC(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xB4(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xB8(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xB9(0x1)(None)
	uint8                                        Pad_2956[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0xC0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC8(0x1)(None)
	uint8                                        Pad_2957[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMissionType*                          CallFunc_GetActiveMission_ReturnValue;             // 0xD0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xD9(0x1)(None)
};

// 0x4B (0x4B - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
struct ABuff_TekArmor_C_Check_genesis_restrictions_for_player_Params
{
public:
	class APrimalCharacter*                      Player;                                            // 0x0(0x8)(ZeroConstructor)
	bool                                         Is_restricted;                                     // 0x8(0x1)(None)
	bool                                         Ret_val;                                           // 0x9(0x1)(None)
	uint8                                        Pad_2960[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x10(0x10)(None)
	bool                                         CallFunc_HasBuffWithCustomTag_ReturnValue;         // 0x20(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(None)
	uint8                                        Pad_2962[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x28(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x31(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(None)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x33(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x34(0x1)(None)
	uint8                                        Pad_2963[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x38(0x8)(ZeroConstructor)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x40(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x4A(0x1)(None)
};

// 0x25 (0x25 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
struct ABuff_TekArmor_C_BPActivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ZeroConstructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x8(0x1)(None)
	uint8                                        Pad_2968[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ZeroConstructor)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_HasBuffWithCustomTag_ReturnValue;         // 0x21(0x1)(None)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x22(0x1)(None)
	enum class ENetworkModeResult                CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x23(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x24(0x1)(None)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
struct ABuff_TekArmor_C_Is_Restricted_Because_Of_Genesis_Map_Params
{
public:
	bool                                         Restricted;                                        // 0x0(0x1)(None)
	bool                                         Ret_val;                                           // 0x1(0x1)(None)
	bool                                         CallFunc_check_genesis_restrictions_for_player_is_restricted; // 0x2(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
struct ABuff_TekArmor_C_Get_Is_Player_in_SealedSpace_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(None)
	uint8                                        Pad_296F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x5 (0x5 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
struct ABuff_TekArmor_C_IsAbilityValid_Params
{
public:
	bool                                         OutValid;                                          // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
struct ABuff_TekArmor_C_IsPlayerInWaterVolume_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(None)
	uint8                                        Pad_297E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WaterVolumeTopZ;                                   // 0x8(0x8)(None)
	bool                                         CallFunc_Get_Is_Player_in_SealedSpace_result;      // 0x10(0x1)(None)
	uint8                                        Pad_297F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(None)
	uint8                                        Pad_2980[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APhysicsVolume*                        CallFunc_GetPhysicsVolume_ReturnValue;             // 0x28(0x8)(None)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x30(0x18)(None)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x48(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x60(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x68(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x70(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x78(0x1)(None)
	uint8                                        Pad_2981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X_1;                          // 0x80(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x88(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x90(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x98(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xA0(0x8)(None)
};

// 0xEC (0xEC - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
struct ABuff_TekArmor_C_SpawnFX_Params
{
public:
	class UParticleSystem*                       EmitterTemplate;                                   // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_2984[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	class USoundBase*                            Sound;                                             // 0x70(0x8)(ZeroConstructor)
	double                                       VolumeMultiplier;                                  // 0x78(0x8)(None)
	double                                       PitchMultiplier;                                   // 0x80(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(None)
	uint8                                        Pad_2985[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x90(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xA8(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC0(0x18)(None)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0xD8(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xE1(0x1)(None)
	uint8                                        Pad_2987[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast; // 0xE4(0x4)(None)
	float                                        CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast; // 0xE8(0x4)(None)
};

// 0x2F (0x2F - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
struct ABuff_TekArmor_C_Should_Damage_Actor_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ZeroConstructor)
	bool                                         Result;                                            // 0x8(0x1)(None)
	bool                                         RetVal;                                            // 0x9(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xA(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB(0x1)(None)
	uint8                                        Pad_298E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(ZeroConstructor)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(ZeroConstructor)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x29(0x1)(None)
	bool                                         CallFunc_AreTribesAllied_ReturnValue;              // 0x2A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2D(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2E(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
struct ABuff_TekArmor_C_ResetPlayerFOV_Params
{
public:
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x0(0x8)(None)
	float                                        K2Node_VariableSet_NormalFOV_ImplicitCast;         // 0x8(0x4)(None)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
struct ABuff_TekArmor_C_SetTekIgnoreLookInput_Params
{
public:
	bool                                         NewIgnore;                                         // 0x0(0x1)(None)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
struct ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params
{
public:
	bool                                         NewIgnore;                                         // 0x0(0x1)(None)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
struct ABuff_TekArmor_C_AllowPostProcessEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
struct ABuff_TekArmor_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x8(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
struct ABuff_TekArmor_C_IsWarping_FOV_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(None)
	uint8                                        Pad_29AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x8(0x8)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x10(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(None)
	uint8                                        Pad_29AB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x18(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
struct ABuff_TekArmor_C_Get_DefaultTekBuff_Params
{
public:
	class ABuff_TekArmor_C*                      Ref;                                               // 0x0(0x8)(ZeroConstructor)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x8(0x8)(ZeroConstructor)
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
struct ABuff_TekArmor_C_GetDefaultPlayer_Params
{
public:
	class APrimalCharacter*                      Ref;                                               // 0x0(0x8)(ZeroConstructor)
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x8(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x21 (0x21 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
struct ABuff_TekArmor_C_Client_Consume_Element_After_Time_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(None)
	int32                                        ElementCost;                                       // 0x8(0x4)(None)
	uint8                                        Pad_29B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x10(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x20(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
struct ABuff_TekArmor_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xB(0x1)(None)
	uint8                                        Pad_29B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x10(0x8)(ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           CallFunc_GetRelatedTekArmorRef_tekArmorRef;        // 0x18(0x8)(ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_29BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x38(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x40(0x8)(None)
	double                                       K2Node_VariableSet_warpFOV_start_ImplicitCast;     // 0x48(0x8)(None)
	double                                       K2Node_VariableSet_warpFOV_target_ImplicitCast;    // 0x50(0x8)(None)
};

// 0x12 (0x12 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
struct ABuff_TekArmor_C_IsPlayerGrounded_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(None)
	uint8                                        Pad_29C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterMovementComponent*           CallFunc_Get_Ref_Owning_PlayerMovement_movement;   // 0x8(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(None)
};

// 0x12 (0x12 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
struct ABuff_TekArmor_C_Get_RefOwningPlayer_Camera_Manager_Params
{
public:
	class AShooterPlayerCameraManager*           Ref;                                               // 0x0(0x8)(ZeroConstructor)
	class AShooterPlayerCameraManager*           K2Node_DynamicCast_AsShooter_Player_Camera_Manager; // 0x8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(None)
};

// 0xC4 (0xC4 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
struct ABuff_TekArmor_C_UpdatePlayerFOV_Params
{
public:
	double                                       IntensityRatio;                                    // 0x0(0x8)(None)
	bool                                         WarpIn;                                            // 0x8(0x1)(None)
	uint8                                        Pad_29E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewFOV;                                            // 0x10(0x8)(None)
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref;   // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x20(0x1)(None)
	uint8                                        Pad_29EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerCameraManager*           CallFunc_Get_RefOwningPlayer_Camera_Manager_ref_1; // 0x28(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x38(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x40(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x48(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x50(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x58(0x8)(None)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x60(0x1)(None)
	uint8                                        Pad_29EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x68(0x8)(None)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x70(0x1)(None)
	uint8                                        Pad_29ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x78(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x80(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x88(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x90(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x98(0x8)(None)
	double                                       CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;     // 0xA0(0x8)(None)
	double                                       CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;    // 0xA8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0xB0(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0xB8(0x8)(None)
	float                                        K2Node_VariableSet_NormalFOV_ImplicitCast;         // 0xC0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
struct ABuff_TekArmor_C_Get_Ref_Owning_PlayerMovement_Params
{
public:
	class UCharacterMovementComponent*           Movement;                                          // 0x0(0x8)(ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
struct ABuff_TekArmor_C_Get_Ref_Owning_PlayerController_Params
{
public:
	class AShooterPlayerController*              Controller;                                        // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x8(0x8)(ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
struct ABuff_TekArmor_C_GetRef_OwningPlayer_Params
{
public:
	class AShooterCharacter*                     Player;                                            // 0x0(0x8)(ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
struct ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(None)
	bool                                         RetVal;                                            // 0x1(0x1)(None)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x2(0x1)(None)
};

// 0x39 (0x39 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
struct ABuff_TekArmor_C_IsTekArmorUsingAbility__Params
{
public:
	uint8                                        ArmorType;                                         // 0x0(0x1)(None)
	bool                                         Result;                                            // 0x1(0x1)(None)
	bool                                         RetVal;                                            // 0x2(0x1)(None)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x3(0x1)(None)
	uint8                                        Pad_2A10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x8(0x8)(ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_2A12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff; // 0x20(0x8)(ZeroConstructor)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x28(0x8)(ZeroConstructor)
	class ABuff_TekArmor_C*                      K2Node_DynamicCast_AsBuff_Tek_Armor;               // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
struct ABuff_TekArmor_C_DisplayTekArmorMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USoundBase*                            Sound;                                             // 0x10(0x8)(ZeroConstructor)
	class AShooterPlayerController*              CallFunc_Get_Ref_Owning_PlayerController_controller; // 0x18(0x8)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(None)
	float                                        CallFunc_ClientServerNotificationSingle_DisplayTime_ImplicitCast; // 0x50(0x4)(None)
	float                                        CallFunc_ClientServerNotificationSingle_DisplayScale_ImplicitCast; // 0x54(0x4)(None)
};

// 0x21 (0x21 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
struct ABuff_TekArmor_C_GetRelatedTekArmorRef_Params
{
public:
	class UPrimalItemArmor_Base_Tek_C*           TekArmorRef;                                       // 0x0(0x8)(ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           ArmorRef;                                          // 0x8(0x8)(ZeroConstructor)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x10(0x8)(ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
};

// 0x92 (0x92 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
struct ABuff_TekArmor_C_CanUseTekAbility_Params
{
public:
	bool                                         bNotifyIfOutOfElement;                             // 0x0(0x1)(None)
	bool                                         bResult;                                           // 0x1(0x1)(None)
	bool                                         bRetVal;                                           // 0x2(0x1)(None)
	bool                                         CallFunc_HasRequiredEngrams_HasEngrams;            // 0x3(0x1)(None)
	uint8                                        Pad_2A23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsTekBuffDisabled_bIsDisabled;            // 0x10(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(None)
	uint8                                        Pad_2A24[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_1;             // 0x18(0x8)(ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player_2;             // 0x20(0x8)(ZeroConstructor)
	bool                                         CallFunc_BPIsConscious_ReturnValue;                // 0x28(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(None)
	uint8                                        Pad_2A26[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABiomeZoneVolume*                      CallFunc_GetMyBiomeZoneVolume_ReturnValue;         // 0x30(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(None)
	uint8                                        Pad_2A27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x40(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x48(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x50(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x51(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x52(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x53(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x54(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x55(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x56(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x57(0x1)(None)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x58(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x60(0x1)(None)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x61(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x62(0x1)(None)
	uint8                                        Pad_2A29[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x68(0x10)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x78(0x4)(None)
	uint8                                        Pad_2A2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x80(0x8)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x88(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x89(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8A(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x8B(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x8D(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x8E(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x8F(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x90(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x91(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
struct ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0
struct ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
struct ABuff_TekArmor_C_Equipped_SetToMaxElement_Params
{
public:
	enum class EPrimalEquipmentType              ItemSlot;                                          // 0x0(0x1)(None)
};

// 0x80 (0x80 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
struct ABuff_TekArmor_C_Multi_SpawnFX_Params
{
public:
	class UParticleSystem*                       ParticleTemplate;                                  // 0x0(0x8)(ZeroConstructor)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(None)
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	double                                       SoundVolume;                                       // 0x70(0x8)(None)
	double                                       SoundPitch;                                        // 0x78(0x8)(None)
};

// 0x5 (0x5 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
struct ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(None)
	enum class EPrimalEquipmentType              ItemSlot;                                          // 0x4(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
struct ABuff_TekArmor_C_Server_SetTekAbilityActive_Params
{
public:
	bool                                         NewActive;                                         // 0x0(0x1)(None)
};

// 0x164 (0x164 - 0x0)
// Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
struct ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2AB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x8(0x18)(SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FKey                                  Temp_struct_Variable;                              // 0x20(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class EPrimalEquipmentType              K2Node_CustomEvent_ItemSlot_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_2ABA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_CustomEvent_particleTemplate;               // 0x40(0x8)(ZeroConstructor)
	class USoundBase*                            K2Node_CustomEvent_Sound;                          // 0x48(0x8)(ZeroConstructor)
	struct FTransform                            K2Node_CustomEvent_transform;                      // 0x50(0x60)(None)
	double                                       K2Node_CustomEvent_soundVolume;                    // 0xB0(0x8)(None)
	double                                       K2Node_CustomEvent_soundPitch;                     // 0xB8(0x8)(None)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0xC0(0x8)(ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0xC8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(None)
	uint8                                        Pad_2ABB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0xD4(0x4)(None)
	enum class EPrimalEquipmentType              K2Node_CustomEvent_ItemSlot;                       // 0xD8(0x1)(None)
	uint8                                        Pad_2ABC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue_1;      // 0xE0(0x8)(ZeroConstructor)
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek_1; // 0xE8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(None)
	bool                                         K2Node_CustomEvent_newActive;                      // 0xF1(0x1)(None)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0xF2(0x1)(None)
	uint8                                        Pad_2ABD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSeconds_ReturnValue;                  // 0xF4(0x4)(None)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0xF8(0x8)(ZeroConstructor)
	double                                       CallFunc_FloatToDouble_ReturnValue;                // 0x100(0x8)(None)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x108(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x110(0x1)(None)
	uint8                                        Pad_2ABE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x118(0x8)(ZeroConstructor)
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x120(0x18)(None)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x138(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x140(0x1)(None)
	uint8                                        Pad_2ABF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x148(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x150(0x1)(None)
	bool                                         CallFunc_IsCooldownComplete_ReturnValue;           // 0x151(0x1)(None)
	uint8                                        Pad_2AC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FloatToDouble_value_ImplicitCast;         // 0x158(0x8)(None)
	float                                        CallFunc_IsCooldownComplete_CooldownDuration_ImplicitCast; // 0x160(0x4)(None)
};

}
}


