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

// 0x2 (0x2 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventNewColorization
struct UPrimalItem_WeaponTorch_C_BPPreventNewColorization_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1(0x1)(None)
};

// 0x14 (0x14 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetFlameColorIndex
struct UPrimalItem_WeaponTorch_C_GetFlameColorIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD(0x1)(None)
	uint8                                        Pad_435D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x10(0x4)(None)
};

// 0x39 (0x39 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.UpdateBeltTorchMeshColors
struct UPrimalItem_WeaponTorch_C_UpdateBeltTorchMeshColors_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(None)
	uint8                                        Pad_4363[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(None)
	uint8                                        Pad_4364[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_4365[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(ZeroConstructor)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPShouldHideTopLevelCustomContextMenuOption
struct UPrimalItem_WeaponTorch_C_BPShouldHideTopLevelCustomContextMenuOption_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xA(0x1)(None)
	uint8                                        Pad_4369[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetOwnerPlayer_ReturnValue;               // 0x10(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(None)
	uint8                                        Pad_436A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventWeaponEquip
struct UPrimalItem_WeaponTorch_C_BPPreventWeaponEquip_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x1(0x1)(None)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x2(0x1)(None)
	uint8                                        Pad_4375[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(None)
	uint8                                        Pad_4376[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_4377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x28(0x8)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemoveTorchFromBelt
struct UPrimalItem_WeaponTorch_C_RemoveTorchFromBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(ZeroConstructor)
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x8(0x8)(ZeroConstructor)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x69 (0x69 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.PutTorchOnBelt
struct UPrimalItem_WeaponTorch_C_PutTorchOnBelt_Params
{
public:
	class AShooterCharacter*                     ForCharacter;                                      // 0x0(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(None)
	bool                                         CallFunc_CanStartWeaponSwitch_ReturnValue;         // 0x9(0x1)(None)
	uint8                                        Pad_4387[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(None)
	uint8                                        Pad_4388[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x28(0x8)(ZeroConstructor)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x30(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(None)
	uint8                                        Pad_4389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x40(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(None)
	uint8                                        Pad_438A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x50(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x58(0x1)(None)
	uint8                                        Pad_438B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x60(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.CanTorchBeOnBelt
struct UPrimalItem_WeaponTorch_C_CanTorchBeOnBelt_Params
{
public:
	bool                                         bCanBeOnBelt;                                      // 0x0(0x1)(None)
	uint8                                        Pad_4397[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x8(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(None)
	uint8                                        Pad_4398[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(ZeroConstructor)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
};

// 0x51 (0x51 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.GetBeltTorchBuffInstanceForCharacter
struct UPrimalItem_WeaponTorch_C_GetBeltTorchBuffInstanceForCharacter_Params
{
public:
	class AShooterCharacter*                     ShooterCharacter;                                  // 0x0(0x8)(ZeroConstructor)
	class APrimalBuff*                           BeltTorchBuff;                                     // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	uint8                                        Pad_439A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x18(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x20(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(None)
	uint8                                        Pad_439B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(ZeroConstructor)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x38(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_439C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x48(0x8)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x50(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsCustomContextMenuItemEnabled
struct UPrimalItem_WeaponTorch_C_IsCustomContextMenuItemEnabled_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x9(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xB(0x1)(None)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0xC(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xF(0x1)(None)
};

// 0x41 (0x41 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.IsTorchOnBelt
struct UPrimalItem_WeaponTorch_C_IsTorchOnBelt_Params
{
public:
	bool                                         bIsOnBelt;                                         // 0x0(0x1)(None)
	uint8                                        Pad_43A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BPGetItemID_ItemID1;                      // 0x4(0x4)(None)
	int32                                        CallFunc_BPGetItemID_ItemID2;                      // 0x8(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(None)
	uint8                                        Pad_43A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_43A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff; // 0x28(0x8)(ZeroConstructor)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x39(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x3A(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x3D(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3E(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3F(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x40(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x10(0x1)(None)
	uint8                                        Pad_43AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPGetCustomInventoryWidgetTextColor
struct UPrimalItem_WeaponTorch_C_BPGetCustomInventoryWidgetTextColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(None)
	struct FLinearColor                          NewLocalVar;                                       // 0x4(0x10)(None)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(None)
	uint8                                        Pad_43AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Temp_struct_Variable;                              // 0x18(0x4)(None)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x1C(0x1)(None)
	uint8                                        Pad_43AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x20(0x4)(None)
	struct FColor                                K2Node_Select_Default;                             // 0x24(0x4)(None)
};

// 0x25C (0x25C - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ApplyingSkinOntoItem
struct UPrimalItem_WeaponTorch_C_ApplyingSkinOntoItem_Params
{
public:
	class UPrimalItem*                           ToOwnerItem;                                       // 0x0(0x8)(ZeroConstructor)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(None)
	uint8                                        Pad_43B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0xC(0x4)(None)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x10(0x10)(None)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x20(0x1)(None)
	uint8                                        Pad_43B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x28(0x78)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xA0(0x1)(None)
	uint8                                        Pad_43B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakColor_R;                             // 0xA4(0x4)(None)
	float                                        CallFunc_BreakColor_G;                             // 0xA8(0x4)(None)
	float                                        CallFunc_BreakColor_B;                             // 0xAC(0x4)(None)
	float                                        CallFunc_BreakColor_A;                             // 0xB0(0x4)(None)
	float                                        CallFunc_Array_Get_Item;                           // 0xB4(0x4)(None)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xB8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0xC8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(None)
	uint8                                        Pad_43B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xD8(0x8)(None)
	TArray<class FName>                          K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        K2Node_MakeArray_Array_2;                          // 0xF0(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       K2Node_MakeArray_Array_3;                          // 0x100(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        K2Node_MakeArray_Array_4;                          // 0x110(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_GetItemStatValues_ReturnValue;            // 0x120(0x4)(None)
	uint8                                        Pad_43B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0x128(0x78)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x1A0(0x8)(None)
	int32                                        CallFunc_GetItemStatValues_ReturnValue_1;          // 0x1A8(0x4)(None)
	uint8                                        Pad_43B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x1B0(0x8)(None)
	double                                       CallFunc_Conv_ByteToDouble_ReturnValue;            // 0x1B8(0x8)(None)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x1C0(0x4)(None)
	uint8                                        Pad_43B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array_5;                          // 0x1C8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData_1;                // 0x1D8(0x78)(None)
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x250(0x4)(None)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x254(0x4)(None)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x258(0x4)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.RemovedSkinFromItem
struct UPrimalItem_WeaponTorch_C_RemovedSkinFromItem_Params
{
public:
	class UPrimalItem*                           FromOwnerItem;                                     // 0x0(0x8)(ZeroConstructor)
	bool                                         bIsFirstTime;                                      // 0x8(0x1)(None)
	uint8                                        Pad_43B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_43BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(None)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(None)
	uint8                                        Pad_43BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item;                           // 0x9C(0x4)(None)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xA0(0x4)(None)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xA4(0x4)(None)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0xA8(0x4)(None)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xAC(0x4)(None)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0xB0(0x4)(None)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xB4(0x1)(None)
	uint8                                        Pad_43BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0xB8(0x8)(None)
	double                                       CallFunc_FFloor_A_ImplicitCast_1;                  // 0xC0(0x8)(None)
	double                                       CallFunc_FFloor_A_ImplicitCast_2;                  // 0xC8(0x8)(None)
};

// 0x164 (0x164 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SkinEquippedBlueprintTick
struct UPrimalItem_WeaponTorch_C_SkinEquippedBlueprintTick_Params
{
public:
	class UPrimalItem*                           OwnerItem;                                         // 0x0(0x8)(ZeroConstructor)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
	uint8                                        Pad_43C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_43C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(None)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x20(0x78)(ZeroConstructor)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x98(0x1)(None)
	uint8                                        Pad_43C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0xA0(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0xA8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(None)
	uint8                                        Pad_43C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0xB8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(None)
	uint8                                        Pad_43C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPointLightComponent*                  K2Node_DynamicCast_AsPoint_Light_Component;        // 0xC8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xD0(0x1)(None)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xD1(0x1)(None)
	uint8                                        Pad_43C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item;                           // 0xD4(0x4)(None)
	float                                        CallFunc_Array_Get_Item_1;                         // 0xD8(0x4)(None)
	float                                        CallFunc_Array_Get_Item_2;                         // 0xDC(0x4)(None)
	float                                        CallFunc_Array_Get_Item_3;                         // 0xE0(0x4)(None)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xE4(0x10)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(None)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0xF8(0x18)(None)
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x110(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x114(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x118(0x1)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x119(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11A(0x1)(None)
	enum class ENetworkModeResult                CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x11B(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11C(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x11D(0x1)(None)
	uint8                                        Pad_43C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x120(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x128(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x130(0x1)(None)
	uint8                                        Pad_43C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x138(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x140(0x8)(None)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x148(0x8)(None)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x150(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x158(0x8)(None)
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x160(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPPreventUseOntoItem
struct UPrimalItem_WeaponTorch_C_BPPreventUseOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         bRetValue;                                         // 0x9(0x1)(None)
	uint8                                        Pad_43C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x11(0x1)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x12(0x1)(None)
	uint8                                        Pad_43C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x18(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.SelectedCustomContextMenuItem
struct UPrimalItem_WeaponTorch_C_SelectedCustomContextMenuItem_Params
{
public:
	class FName                                  ContextItem;                                       // 0x0(0x8)(None)
	class AShooterPlayerController*              ForPC;                                             // 0x8(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.BPUsedOntoItem
struct UPrimalItem_WeaponTorch_C_BPUsedOntoItem_Params
{
public:
	class UPrimalItem*                           DestinationItem;                                   // 0x0(0x8)(None)
	int32                                        AdditionalData;                                    // 0x8(0x4)(None)
};

// 0x9F (0x9F - 0x0)
// Function PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C.ExecuteUbergraph_PrimalItem_WeaponTorch
struct UPrimalItem_WeaponTorch_C_ExecuteUbergraph_PrimalItem_WeaponTorch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x5(0x1)(None)
	bool                                         CallFunc_IsTorchOnBelt_bIsOnBelt;                  // 0x6(0x1)(None)
	uint8                                        Pad_43CD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor)
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x10(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_43CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsShooter_Weapon;          // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(None)
	uint8                                        Pad_43CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterWeapon*                        CallFunc_GetWeapon_ReturnValue;                    // 0x38(0x8)(ZeroConstructor)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x40(0x8)(ZeroConstructor)
	class AWeap_Torch_Base_C*                    K2Node_DynamicCast_AsWeap_Torch_Base;              // 0x48(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(None)
	bool                                         CallFunc_CanTorchBeOnBelt_bCanBeOnBelt;            // 0x51(0x1)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x52(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x53(0x1)(None)
	class FName                                  K2Node_Event_ContextItem;                          // 0x54(0x8)(None)
	uint8                                        Pad_43D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x60(0x8)(ZeroConstructor)
	class UPrimalItem*                           K2Node_Event_DestinationItem;                      // 0x68(0x8)(ZeroConstructor)
	int32                                        K2Node_Event_AdditionalData;                       // 0x70(0x4)(None)
	uint8                                        Pad_43D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x80(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(None)
	uint8                                        Pad_43D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_SaddleGeneric_C*      K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic; // 0x90(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(None)
	bool                                         CallFunc_IsPreInventoryItem_ReturnValue;           // 0x99(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9A(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x9B(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x9C(0x1)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_3;        // 0x9D(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9E(0x1)(None)
};

}
}


