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

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IGet Max Ammo
struct UPrimalItemArmor_SaddleGeneric_Tek_C_IGet_Max_Ammo_Params
{
public:
	int32                                        RetVal;                                            // 0x0(0x4)(None)
};

// 0x19 (0x19 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.CanElementDecrease
struct UPrimalItemArmor_SaddleGeneric_Tek_C_CanElementDecrease_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(None)
	bool                                         CanDecrease;                                       // 0x4(0x1)(None)
	bool                                         ReturnVal;                                         // 0x5(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(None)
	uint8                                        Pad_4010[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x8(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(None)
	uint8                                        Pad_4011[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x14(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(None)
};

// 0x70 (0x70 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BPGetCustomInventoryWidgetText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x10(0x4)(None)
	uint8                                        Pad_4013[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x28(0x8)(None)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x30(0x8)(None)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x38(0x4)(None)
	uint8                                        Pad_4014[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x40(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_SaddleGeneric_Tek_C_TryToDecreaseElement_Params
{
public:
	int32                                        AmountToDecreaseBy;                                // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
struct UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params
{
public:
	double                                       Percent;                                           // 0x0(0x8)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek
struct UPrimalItemArmor_SaddleGeneric_Tek_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         K2Node_Event_bIsFromSaveGame;                      // 0x4(0x1)(None)
	uint8                                        Pad_4031[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x8(0x8)(ZeroConstructor)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x10(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(None)
	uint8                                        Pad_4032[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_AmountToDecreaseBy;             // 0x24(0x4)(None)
	bool                                         CallFunc_CanElementDecrease_CanDecrease;           // 0x28(0x1)(None)
	uint8                                        Pad_4033[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x38(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_4034[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x48(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(None)
	uint8                                        Pad_4035[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x58(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(None)
	uint8                                        Pad_4036[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_BPGetItemOfTemplate_ReturnValue;          // 0x68(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(None)
	uint8                                        Pad_4037[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x74(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x78(0x4)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_1;          // 0x7C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x80(0x1)(None)
	bool                                         CallFunc_UseItemOntoItem_ReturnValue;              // 0x81(0x1)(None)
	uint8                                        Pad_4038[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_2;          // 0x84(0x4)(None)
	double                                       K2Node_CustomEvent_Percent;                        // 0x88(0x8)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x90(0x1)(None)
	uint8                                        Pad_4039[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x98(0x8)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue_3;          // 0xA0(0x4)(None)
	uint8                                        Pad_403A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0xA8(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB0(0x1)(None)
	uint8                                        Pad_403B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xB4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(None)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xBC(0x4)(None)
};

}
}


