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

// 0x23 (0x23 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire
struct AWeap_Torch_Base_C_CanUseNiagaraFire_Params
{
public:
	bool                                         bCanUse;                                           // 0x0(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1(0x1)(None)
	uint8                                        Pad_449B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;    // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(None)
	uint8                                        Pad_449C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;    // 0x18(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x22(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
struct AWeap_Torch_Base_C_GetFPVNiagaraFire_Params
{
public:
	class UNiagaraComponent*                     FPVNiagaraComponent;                               // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
struct AWeap_Torch_Base_C_GetTPVNiagaraFire_Params
{
public:
	class UNiagaraComponent*                     TPVNiagaraComponent;                               // 0x0(0x8)(None)
};

// 0x1A (0x1A - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
struct AWeap_Torch_Base_C_BPCanEquip_Params
{
public:
	class AShooterCharacter*                     ByCharacter;                                       // 0x0(0x8)(ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA(0x1)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xB(0x1)(None)
	uint8                                        Pad_44B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0x10(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x19(0x1)(None)
};

// 0x170 (0x170 - 0x0)
// Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base
struct AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4506[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent;    // 0x8(0x8)(ZeroConstructor)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x10(0x8)(ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x21(0x1)(None)
	uint8                                        Pad_4507[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem_WeaponTorch_C*             K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;     // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_4508[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFlameColorIndex_Index;                 // 0x34(0x4)(None)
	struct FLinearColor                          CallFunc_GetItemCustomColor_outColor;              // 0x38(0x10)(None)
	bool                                         CallFunc_GetItemCustomColor_ReturnValue;           // 0x48(0x1)(None)
	uint8                                        Pad_4509[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x50(0x18)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x68(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(None)
	uint8                                        Pad_450A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0x78(0x1)(None)
	uint8                                        Pad_450B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x7C(0x4)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x80(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x81(0x1)(None)
	uint8                                        Pad_450C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x88(0x8)(None)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0x90(0x4)(None)
	bool                                         CallFunc_CanUseNiagaraFire_bCanUse;                // 0x94(0x1)(None)
	bool                                         CallFunc_CanUseNiagaraFire_bCanUse_1;              // 0x95(0x1)(None)
	bool                                         CallFunc_CanUseNiagaraFire_bCanUse_2;              // 0x96(0x1)(None)
	uint8                                        Pad_450D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_1;  // 0x98(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent;    // 0xA0(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_2;  // 0xA8(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_1;  // 0xB0(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_3;  // 0xB8(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_2;  // 0xC0(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_3;  // 0xC8(0x8)(ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_GetTPVNiagaraFire_TPVNiagaraComponent_4;  // 0xD0(0x8)(ZeroConstructor)
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue_1;               // 0xD8(0x8)(ZeroConstructor)
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0xE0(0x8)(ZeroConstructor)
	class APrimalBuff*                           CallFunc_GetBuff_ReturnValue;                      // 0xE8(0x8)(ZeroConstructor)
	class ABuff_BeltTorch_C*                     K2Node_DynamicCast_AsBuff_Belt_Torch;              // 0xF0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xFA(0x1)(None)
	uint8                                        Pad_450E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x100(0x8)(None)
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTick_ReturnValue;       // 0x108(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x110(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x118(0x8)(None)
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTick_ReturnValue_1;     // 0x120(0x8)(None)
	bool                                         CallFunc_K2_TimerExists_ReturnValue;               // 0x128(0x1)(None)
	bool                                         CallFunc_K2_TimerExists_ReturnValue_1;             // 0x129(0x1)(None)
	uint8                                        Pad_450F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTick_ReturnValue_2;     // 0x130(0x8)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x138(0x1)(None)
	uint8                                        Pad_4510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x140(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x148(0x1)(None)
	uint8                                        Pad_4511[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_GetFPVNiagaraFire_FPVNiagaraComponent_4;  // 0x150(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x158(0x4)(None)
	float                                        CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x15C(0x4)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x160(0x4)(None)
	float                                        CallFunc_GetFloatValue_InTime_ImplicitCast_1;      // 0x164(0x4)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x168(0x4)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x16C(0x4)(None)
};

}
}


