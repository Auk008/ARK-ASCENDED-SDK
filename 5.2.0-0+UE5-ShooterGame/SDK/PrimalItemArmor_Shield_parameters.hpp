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

// 0x100 (0x100 - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.BPClientHandleItemNetExecCommand
struct UPrimalItemArmor_Shield_C_BPClientHandleItemNetExecCommand_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(None)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x68)(Edit, ZeroConstructor)
	class AShooterPlayerController*              ForPC;                                             // 0x70(0x8)(None)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x78(0x1)(None)
	uint8                                        Pad_4049[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(None)
	float                                        CallFunc_Array_Get_Item;                           // 0x80(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x84(0x1)(None)
	uint8                                        Pad_404A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item_1;                         // 0x88(0x4)(None)
	float                                        CallFunc_Array_Get_Item_2;                         // 0x8C(0x4)(None)
	float                                        CallFunc_Array_Get_Item_3;                         // 0x90(0x4)(None)
	uint8                                        Pad_404B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x98(0x18)(None)
	float                                        CallFunc_Array_Get_Item_4;                         // 0xB0(0x4)(None)
	float                                        CallFunc_Array_Get_Item_5;                         // 0xB4(0x4)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xB8(0x18)(None)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0xD0(0x8)(None)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0xD8(0x8)(None)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0xE0(0x8)(None)
	double                                       CallFunc_MakeVector_Z_ImplicitCast_1;              // 0xE8(0x8)(None)
	double                                       CallFunc_MakeVector_Y_ImplicitCast_1;              // 0xF0(0x8)(None)
	double                                       CallFunc_MakeVector_X_ImplicitCast_1;              // 0xF8(0x8)(None)
};

// 0x1C4 (0x1C4 - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.PlayHitShieldEffect
struct UPrimalItemArmor_Shield_C_PlayHitShieldEffect_Params
{
public:
	bool                                         LocalOnly;                                         // 0x0(0x1)(None)
	uint8                                        Pad_4058[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLoc;                                            // 0x8(0x18)(None)
	struct FVector                               FromLoc;                                           // 0x20(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(None)
	uint8                                        Pad_4059[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x58(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x70(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(None)
	uint8                                        Pad_405A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X;                            // 0x90(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x98(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0xA0(0x8)(None)
	double                                       CallFunc_BreakVector_X_1;                          // 0xA8(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xB0(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xB8(0x8)(None)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0xC0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0xD0(0x68)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0x138(0x4)(None)
	uint8                                        Pad_405B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x140(0x8)(Edit, ZeroConstructor)
	class UStaticMeshComponent*                  K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x148(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x150(0x1)(None)
	uint8                                        Pad_405D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x154(0x4)(None)
	struct FVector                               CallFunc_GetClosestPointOnCollision_OutPointOnBody; // 0x158(0x18)(None)
	float                                        CallFunc_GetClosestPointOnCollision_ReturnValue;   // 0x170(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x174(0x1)(None)
	uint8                                        Pad_405E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAttachedComponentsNum_ReturnValue;     // 0x178(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x17C(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x180(0x1)(None)
	uint8                                        Pad_405F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x188(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x190(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x191(0x1)(None)
	uint8                                        Pad_4062[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x198(0x8)(Edit, ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1A9(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1AA(0x1)(None)
	uint8                                        Pad_4064[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_MakeArray__3__ImplicitCast;                 // 0x1AC(0x4)(None)
	float                                        K2Node_MakeArray__4__ImplicitCast;                 // 0x1B0(0x4)(None)
	float                                        K2Node_MakeArray__5__ImplicitCast;                 // 0x1B4(0x4)(None)
	float                                        K2Node_MakeArray__0__ImplicitCast;                 // 0x1B8(0x4)(None)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x1BC(0x4)(None)
	float                                        K2Node_MakeArray__2__ImplicitCast;                 // 0x1C0(0x4)(None)
};

// 0x7C (0x7C - 0x0)
// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.HandleShieldDamageBlocking
struct UPrimalItemArmor_Shield_C_HandleShieldDamageBlocking_Params
{
public:
	class AShooterCharacter*                     ForShooterCharacter;                               // 0x0(0x8)(Edit, ZeroConstructor)
	float                                        DamageIn;                                          // 0x8(0x4)(None)
	uint8                                        Pad_4071[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEvent                          DamageEvent;                                       // 0x10(0x20)(Edit, ZeroConstructor)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(Edit, ZeroConstructor)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(None)
	struct FVector                               HitPoint;                                          // 0x40(0x18)(None)
	float                                        ReturnValue;                                       // 0x58(0x4)(None)
	uint8                                        Pad_4072[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x60(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(None)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x7A(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x7B(0x1)(None)
};

}
}


