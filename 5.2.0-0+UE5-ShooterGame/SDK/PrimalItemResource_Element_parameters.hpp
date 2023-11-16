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

// 0xF1 (0xF1 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
struct UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(Edit, ZeroConstructor)
	class FName                                  CommandName;                                       // 0x8(0x8)(None)
	struct FBPNetExecParams                      ExecParams;                                        // 0x10(0x68)(Edit, ZeroConstructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x78(0x1)(None)
	uint8                                        Pad_4108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x80(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(None)
	uint8                                        Pad_4109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x90(0x8)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x98(0x18)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xB0(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(None)
	uint8                                        Pad_410A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xD0(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0xE8(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xF0(0x1)(None)
};

// 0x3E0 (0x3E0 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
struct UPrimalItemResource_Element_C_FindShapeshifter_Params
{
public:
	class APrimalDinoCharacter*                  Shapeshifter;                                      // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         RetMounted;                                        // 0x8(0x1)(None)
	bool                                         Mounted;                                           // 0x9(0x1)(None)
	uint8                                        Pad_4110[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  Result;                                            // 0x10(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(None)
	uint8                                        Pad_4113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x20(0x68)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0x88(0x68)(Edit, ZeroConstructor, AssetRegistrySearchable, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xF0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xF8(0x1)(None)
	uint8                                        Pad_4114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x100(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(None)
	uint8                                        Pad_4115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x110(0x8)(ZeroConstructor)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0x118(0x1)(None)
	uint8                                        Pad_4116[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x120(0x18)(None)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x138(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x150(0x18)(None)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x168(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x180(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x198(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x199(0x1)(None)
	uint8                                        Pad_4117[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1A0(0x18)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1B8(0x1)(None)
	uint8                                        Pad_4118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    CallFunc_VTraceMultiBP_OutHits;                    // 0x1C0(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_VTraceMultiBP_ReturnValue;                // 0x1D0(0x1)(None)
	uint8                                        Pad_4119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x1D8(0xF0)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C8(0x4)(None)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x2CC(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x2CD(0x1)(None)
	uint8                                        Pad_411A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x2D0(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x2D4(0x4)(None)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x2D8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x2F0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x308(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x320(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x338(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x340(0x8)(Edit, ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x348(0x8)(Edit, ZeroConstructor)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x350(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x358(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x360(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x364(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x368(0x4)(None)
	uint8                                        Pad_411C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x370(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x388(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A0(0x1)(None)
	uint8                                        Pad_411D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x3A8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3B0(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x3B1(0x1)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x3B2(0x1)(None)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue_1; // 0x3B3(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3B4(0x1)(None)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x3B5(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3B6(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x3B7(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x3B8(0x1)(None)
	bool                                         CallFunc_IsAlliedWithOtherTeam_ReturnValue;        // 0x3B9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x3BA(0x1)(None)
	bool                                         CallFunc_BPIsTamed_ReturnValue;                    // 0x3BB(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3BC(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x3BD(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3BE(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x3BF(0x1)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C4(0x1)(None)
	uint8                                        Pad_411E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C8(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x3CC(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x3CD(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x3CE(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3CF(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3D0(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x3D1(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x3D2(0x1)(None)
	uint8                                        Pad_411F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3D8(0x8)(None)
};

// 0x119 (0x119 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
struct UPrimalItemResource_Element_C_BPPreUseItem_Params
{
public:
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x0(0x68)(Edit, ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(None)
	uint8                                        Pad_412C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x70(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x78(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(None)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x81(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x82(0x1)(None)
	uint8                                        Pad_412D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x88(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x98(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xA0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA8(0x1)(None)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue; // 0xA9(0x1)(None)
	uint8                                        Pad_412E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams_1;               // 0xB0(0x68)(None)
	bool                                         CallFunc_BPServerHandleNetExecCommand_ReturnValue_1; // 0x118(0x1)(None)
};

// 0xE2 (0xE2 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
struct UPrimalItemResource_Element_C_BPCanUse_Params
{
public:
	bool                                         bIgnoreCooldown;                                   // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
	uint8                                        Pad_4133[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      Res;                                               // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         Ret;                                               // 0x10(0x1)(None)
	uint8                                        Pad_4134[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x20(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x22(0x1)(None)
	uint8                                        Pad_4135[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x28(0x8)(Edit, ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x30(0x8)(Edit, ZeroConstructor)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x38(0x1)(None)
	uint8                                        Pad_4136[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(None)
	uint8                                        Pad_4137[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x50(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(None)
	uint8                                        Pad_4139[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x60(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x70(0x68)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  CallFunc_FindShapeshifter_Shapeshifter;            // 0xD8(0x8)(None)
	bool                                         CallFunc_FindShapeshifter_RetMounted;              // 0xE0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE1(0x1)(None)
};

// 0x43 (0x43 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
struct UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         IsValid;                                           // 0x9(0x1)(None)
	uint8                                        Pad_4145[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface; // 0x10(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x21(0x1)(None)
	uint8                                        Pad_4146[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_IGet_Max_Ammo_RetVal;                     // 0x24(0x4)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x28(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2E(0x1)(None)
	uint8                                        Pad_4147[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_4148[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0x3C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x40(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x42(0x1)(None)
};

// 0x32 (0x32 - 0x0)
// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
struct UPrimalItemResource_Element_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        AdditionalData;                                    // 0x8(0x4)(None)
	uint8                                        Pad_414C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_Base_Tek_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;   // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_414D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface; // 0x20(0x10)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x31(0x1)(None)
};

}
}


