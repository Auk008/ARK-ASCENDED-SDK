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

// 0x359 (0x359 - 0x0)
// Function WeapLance.WeapLance_C.DoTrace
struct AWeapLance_C_DoTrace_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(None)
	struct FVector                               End;                                               // 0x18(0x18)(None)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x30(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(None)
	uint8                                        Pad_41FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x50(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMulti_OutHits;                 // 0x60(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_SphereTraceMulti_ReturnValue;             // 0x70(0x1)(None)
	uint8                                        Pad_41FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x78(0xF0)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x168(0x18)(None)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x180(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x181(0x1)(None)
	uint8                                        Pad_41FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x184(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x188(0x4)(None)
	uint8                                        Pad_4200[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x190(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x1A8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1C0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x1D8(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x1F0(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x1F8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x200(0x8)(ZeroConstructor)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x208(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x210(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x218(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x21C(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x220(0x4)(None)
	uint8                                        Pad_4202[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x228(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x240(0x18)(None)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x258(0xF0)(None)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x348(0x1)(None)
	uint8                                        Pad_4204[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x34C(0x4)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x350(0x1)(None)
	uint8                                        Pad_4206[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x354(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x358(0x1)(None)
};

// 0x1EC (0x1EC - 0x0)
// Function WeapLance.WeapLance_C.DamageActor
struct AWeapLance_C_DamageActor_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(Edit, ZeroConstructor)
	struct FHitResult                            HitInfo;                                           // 0x8(0xF0)(Edit, ZeroConstructor)
	bool                                         bIsDino;                                           // 0xF8(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0xF9(0x1)(None)
	uint8                                        Pad_421E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x100(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(None)
	uint8                                        Pad_421F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x110(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x118(0x1)(None)
	uint8                                        Pad_4220[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x120(0x18)(None)
	double                                       Temp_real_Variable;                                // 0x138(0x8)(None)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x140(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x149(0x1)(None)
	bool                                         CallFunc_IsBroken_ReturnValue;                     // 0x14A(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x14B(0x1)(None)
	uint8                                        Pad_4224[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x150(0x8)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x158(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x159(0x1)(None)
	uint8                                        Pad_4226[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x160(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x178(0x18)(None)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x190(0x8)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x198(0x18)(None)
	float                                        CallFunc_GetWeaponDamageMultiplier_ReturnValue;    // 0x1B0(0x4)(None)
	uint8                                        Pad_4228[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x1B8(0x8)(None)
	float                                        CallFunc_ApplyPointDamage_ReturnValue;             // 0x1C0(0x4)(None)
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0x1C4(0x4)(None)
	float                                        CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;  // 0x1C8(0x4)(None)
	uint8                                        Pad_422A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Option_0_ImplicitCast;               // 0x1D0(0x8)(None)
	float                                        CallFunc_ApplyPointDamage_Impulse_ImplicitCast;    // 0x1D8(0x4)(None)
	uint8                                        Pad_422B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_IntFloat_B_ImplicitCast;         // 0x1E0(0x8)(None)
	float                                        CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast; // 0x1E8(0x4)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function WeapLance.WeapLance_C.DoTraceAttacks
struct AWeapLance_C_DoTraceAttacks_Params
{
public:
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x0(0x8)(ZeroConstructor)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x10(0x1)(None)
	uint8                                        Pad_4241[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Array_Get_Item;                           // 0x18(0x18)(None)
	struct FVector                               CallFunc_Array_Get_Item_1;                         // 0x30(0x18)(None)
	struct FVector                               CallFunc_Array_Get_Item_2;                         // 0x48(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x64(0x1)(None)
	uint8                                        Pad_4242[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x68(0x18)(None)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x80(0x18)(None)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_2;          // 0x98(0x18)(None)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0xB0(0x8)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xB8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation
struct AWeapLance_C_BPForceTPVTargetingAnimation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x370 (0x370 - 0x0)
// Function WeapLance.WeapLance_C.ReceiveTick
struct AWeapLance_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(None)
	uint8                                        Pad_4249[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x8(0x18)(None)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x20(0xF0)(ZeroConstructor)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x110(0x1)(None)
	bool                                         CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x111(0x1)(None)
	uint8                                        Pad_424A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x118(0xF0)(ZeroConstructor)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue_1;                  // 0x208(0x18)(None)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult_2;  // 0x220(0xF0)(ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x310(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x311(0x1)(None)
	uint8                                        Pad_424B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x318(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x320(0x8)(None)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x328(0x8)(ZeroConstructor)
	float                                        CallFunc_BPGetCurrentStatusValue_ReturnValue;      // 0x330(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x334(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x335(0x1)(None)
	uint8                                        Pad_424D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x338(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x33C(0x1)(None)
	uint8                                        Pad_424E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x340(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x348(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x349(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x34A(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x34B(0x1)(None)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0x34C(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x34D(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x34E(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x34F(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x350(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x351(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x352(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x353(0x1)(None)
	uint8                                        Pad_424F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x358(0x8)(None)
	float                                        CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast; // 0x360(0x4)(None)
	uint8                                        Pad_4250[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x368(0x8)(None)
};

// 0x44 (0x44 - 0x0)
// Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance
struct AWeapLance_C_ExecuteUbergraph_WeapLance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5(0x1)(None)
	uint8                                        Pad_4258[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x10(0x8)(ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x20(0x1)(None)
	bool                                         CallFunc_IsLocallyOwned_ReturnValue;               // 0x21(0x1)(None)
	uint8                                        Pad_4259[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnim                           K2Node_MakeStruct_WeaponAnim;                      // 0x28(0x10)(None)
	float                                        CallFunc_PlayWeaponAnimation_ReturnValue;          // 0x38(0x4)(None)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x3C(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x3E(0x1)(None)
	uint8                                        Pad_425A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast; // 0x40(0x4)(None)
};

}
}


