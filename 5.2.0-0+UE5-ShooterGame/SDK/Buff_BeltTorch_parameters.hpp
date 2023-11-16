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

// 0x13 (0x13 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX
struct ABuff_BeltTorch_C_ActivateVFX_Params
{
public:
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x0(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x11(0x1)(None)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x12(0x1)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
struct ABuff_BeltTorch_C_UpdateTorchType_Params
{
public:
	bool                                         FPV;                                               // 0x0(0x1)(None)
	uint8                                        Pad_41EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x10(0x18)(None)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x28(0x18)(None)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x40(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x58(0x18)(None)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x70(0x60)(None)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0xD0(0xF0)(None)
};

// 0xD (0xD - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
struct ABuff_BeltTorch_C_BPTryMultiUse_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(None)
	int32                                        UseIndex;                                          // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
struct ABuff_BeltTorch_C_BPGetMultiUseEntries_Params
{
public:
	class APlayerController*                     ForPC;                                             // 0x0(0x8)(ZeroConstructor)
	TArray<struct FMultiUseEntry>                MultiUseEntries;                                   // 0x8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FMultiUseEntry>                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x5C (0x5C - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
struct ABuff_BeltTorch_C_InitializeTorchFromItem_Params
{
public:
	class UPrimalItem*                           TheItem;                                           // 0x0(0x8)(ZeroConstructor)
	class UClass*                                WeaponClassOverride;                               // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x10(0x1)(None)
	uint8                                        Pad_41EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x18(0x8)(ZeroConstructor)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x20(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x29(0x1)(None)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x2A(0x1)(None)
	uint8                                        Pad_41F0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x30(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_41F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x40(0x8)(ZeroConstructor)
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x48(0x4)(None)
	uint8                                        Pad_41F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x50(0x8)(None)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x58(0x1)(None)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x59(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5A(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(None)
};

// 0x6 (0x6 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
struct ABuff_BeltTorch_C_SetFlameColorIndex_Params
{
public:
	int32                                        TheIndex;                                          // 0x0(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5(0x1)(None)
};

// 0x1B (0x1B - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
struct ABuff_BeltTorch_C_UpdateTorchFlameColor_Params
{
public:
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x0(0x8)(None)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x8(0x10)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x18(0x1)(None)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x19(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1A(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
struct ABuff_BeltTorch_C_SetTorchFlameColor_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(None)
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x10(0x8)(None)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x18(0x18)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(None)
};

// 0xA (0xA - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
struct ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params
{
public:
	class UClass*                                WeaponClass;                                       // 0x0(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9(0x1)(None)
};

// 0x21 (0x21 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
struct ABuff_BeltTorch_C_Update_All_Torch_Colors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(None)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x10(0x10)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(None)
};

// 0x5E (0x5E - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
struct ABuff_BeltTorch_C_UpdateTorchColorsArray_Params
{
public:
	class UPrimalItem*                           ForPrimalItem;                                     // 0x0(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
	uint8                                        Pad_4201[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(None)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(None)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x21(0x1)(None)
	uint8                                        Pad_4203[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(None)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x28(0x10)(None)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_4207[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x44(0x4)(None)
	struct FLinearColor                          CallFunc_Array_Get_Item;                           // 0x48(0x10)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x58(0x1)(None)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x59(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5A(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5B(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5D(0x1)(None)
};

// 0x91 (0x91 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(None)
	int32                                        TheColorIndex;                                     // 0x10(0x4)(None)
	uint8                                        Pad_420C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              TheMIC;                                            // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x20(0x1)(None)
	uint8                                        Pad_420D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(None)
	uint8                                        Pad_420F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x30(0x10)(ZeroConstructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(None)
	uint8                                        Pad_4210[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x50(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x58(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(None)
	uint8                                        Pad_4213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x69(0x1)(None)
	uint8                                        Pad_4214[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x6C(0x10)(None)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x7C(0x1)(None)
	uint8                                        Pad_4215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x80(0x8)(ZeroConstructor)
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x88(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(None)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
struct ABuff_BeltTorch_C_ApplyMeshColorization_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
struct ABuff_BeltTorch_C_ShouldDeactivateBuff_Params
{
public:
	bool                                         bShouldDeactivate;                                 // 0x0(0x1)(None)
	uint8                                        Pad_422E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x11(0x1)(None)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x12(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x13(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x14(0x1)(None)
	uint8                                        Pad_4230[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
struct ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(None)
	uint8                                        Pad_423B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterWeapon_Melee*                  K2Node_DynamicCast_AsShooter_Weapon_Melee;         // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
struct ABuff_BeltTorch_C_InitializeTorchMesh_Params
{
public:
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(None)
};

// 0x3 (0x3 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
struct ABuff_BeltTorch_C_DeactivateBeltTorch_Params
{
public:
	bool                                         bEquipTorchOnDeactivation;                         // 0x0(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
struct ABuff_BeltTorch_C_AreValidTorchIDs_Params
{
public:
	int32                                        TorchID1;                                          // 0x0(0x4)(None)
	int32                                        TorchID2;                                          // 0x4(0x4)(None)
	bool                                         bAreValid;                                         // 0x8(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(None)
	uint8                                        Pad_4244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x10(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_4245[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
struct ABuff_BeltTorch_C_InitializeTorchItem_Params
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2(0x1)(None)
	uint8                                        Pad_4246[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(None)
	uint8                                        Pad_4247[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_4248[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPFindItemWithID_ReturnValue;             // 0x28(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(None)
};

// 0x15 (0x15 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
struct ABuff_BeltTorch_C_InitializeTorchIDs_Params
{
public:
	class UPrimalItem*                           TorchItem;                                         // 0x0(0x8)(None)
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x8(0x4)(None)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0xC(0x4)(None)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x10(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x12(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x13(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x14(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
struct ABuff_BeltTorch_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
struct ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(None)
	int32                                        TheIndex;                                          // 0x10(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
struct ABuff_BeltTorch_C_BPOnInputEvent_Params
{
public:
	enum class EPrimalCharacterInputType         InputType;                                         // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
struct ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params
{
public:
	struct FLinearColor                          TheColor;                                          // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
struct ABuff_BeltTorch_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
struct ABuff_BeltTorch_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
struct ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	float                                        K2Node_Event_DeltaTime_1;                          // 0x4(0x4)(None)
	bool                                         CallFunc_AreValidTorchIDs_bAreValid;               // 0x8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(None)
	bool                                         CallFunc_InitializeTorchItem_bInitialized;         // 0xA(0x1)(None)
	bool                                         CallFunc_ShouldDeactivateBuff_bShouldDeactivate;   // 0xB(0x1)(None)
	uint8                                        Pad_425E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOf_ReturnValue;              // 0x1A(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1C(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D(0x1)(None)
	uint8                                        Pad_425F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x20(0x8)(None)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x30(0x8)(None)
	struct FLinearColor                          K2Node_CustomEvent_TheColor_1;                     // 0x38(0x10)(None)
	int32                                        K2Node_CustomEvent_TheIndex;                       // 0x48(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(None)
	enum class EPrimalCharacterInputType         K2Node_Event_inputType;                            // 0x51(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x53(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x54(0x1)(None)
	uint8                                        Pad_4260[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_CustomEvent_TheColor;                       // 0x58(0x10)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x68(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x70(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(None)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x79(0x1)(None)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x7A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B(0x1)(None)
	float                                        K2Node_Event_DeltaTime;                            // 0x7C(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x80(0x1)(None)
	uint8                                        Pad_4261[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ForInstigator;                        // 0x88(0x8)(None)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x90(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x91(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x92(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x93(0x1)(None)
	uint8                                        Pad_4262[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x98(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0xA0(0x4)(None)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0xA4(0x4)(None)
};

}
}


