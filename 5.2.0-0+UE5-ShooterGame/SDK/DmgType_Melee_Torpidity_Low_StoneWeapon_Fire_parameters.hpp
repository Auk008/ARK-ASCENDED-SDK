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

// 0xE0 (0xE0 - 0x0)
// Function DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C.OverrideBuffToGiveVictimCharacter
struct UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C_OverrideBuffToGiveVictimCharacter_Params
{
public:
	class APrimalCharacter*                      Victim;                                            // 0x0(0x8)(ZeroConstructor)
	float                                        IncomingDamage;                                    // 0x8(0x4)(None)
	uint8                                        Pad_3558[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(ZeroConstructor)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ZeroConstructor)
	class UClass*                                ReturnValue;                                       // 0x40(0x8)(ZeroConstructor)
	class UClass*                                OutVal;                                            // 0x48(0x8)(ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(None)
	uint8                                        Pad_3559[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x58(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(None)
	uint8                                        Pad_355A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APrimalBuff>             Temp_softclass_Variable;                           // 0x68(0x30)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x98(0x1)(None)
	uint8                                        Pad_355B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APrimalBuff>             K2Node_Select_Default;                             // 0xA0(0x30)(ZeroConstructor)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0xD0(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0xD8(0x8)(None)
};

}
}


