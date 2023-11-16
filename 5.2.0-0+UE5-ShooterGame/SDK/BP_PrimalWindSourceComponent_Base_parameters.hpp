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

// 0x30 (0x30 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Get Bubble System Tag
struct UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(None)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(None)
};

// 0x62 (0x62 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
struct UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params
{
public:
	class FName                                  BubbleSystemTag;                                   // 0x0(0x8)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x8(0x1)(None)
	uint8                                        Pad_3082[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(None)
	uint8                                        Pad_3084[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	class FName                                  CallFunc_Get_Bubble_System_Tag_ReturnValue;        // 0x1C(0x8)(None)
	uint8                                        Pad_3085[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(Edit, ZeroConstructor)
	TArray<class UActorComponent*>               CallFunc_GetComponentsByCustomTag_ReturnValue;     // 0x30(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(None)
	uint8                                        Pad_3087[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ZeroConstructor)
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x50(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x59(0x1)(None)
	uint8                                        Pad_3089[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x61(0x1)(None)
};

// 0x20C (0x20C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
struct UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params
{
public:
	struct FVector                               Current_location;                                  // 0x0(0x18)(None)
	struct FVector                               Delta;                                             // 0x18(0x18)(None)
	class FName                                  BubbleSystemTag;                                   // 0x30(0x8)(None)
	class UNiagaraComponent*                     Local_bubble_system_ref;                           // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         Has_Existing_Bubble_System;                        // 0x40(0x1)(None)
	uint8                                        Pad_3094[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x48(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x50(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x58(0x8)(None)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x60(0x1)(None)
	uint8                                        Pad_3095[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x68(0x8)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x74(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x75(0x1)(None)
	uint8                                        Pad_3096[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x78(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(None)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x80(0x18)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x98(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA0(0x1)(None)
	uint8                                        Pad_3097[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get_Bubble_System_Tag_ReturnValue;        // 0xA4(0x8)(None)
	uint8                                        Pad_3098[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_VSize_ReturnValue;                        // 0xB0(0x8)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xB8(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xD0(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xE8(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x100(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x118(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x130(0x18)(None)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x148(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x158(0x18)(None)
	struct FVector                               CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue; // 0x170(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x188(0x18)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(None)
	uint8                                        Pad_3099[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorComponent*>               CallFunc_GetComponentsByCustomTag_ReturnValue;     // 0x1B0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x1C0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C8(0x4)(None)
	uint8                                        Pad_309A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x1D0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D8(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D9(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1DA(0x1)(None)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x1DB(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1DC(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1DD(0x1)(None)
	uint8                                        Pad_309B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x1E0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1E8(0x1)(None)
	uint8                                        Pad_309C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    CallFunc_SphereTraceMulti_OutHits;                 // 0x1F0(0x10)(None)
	bool                                         CallFunc_SphereTraceMulti_ReturnValue;             // 0x200(0x1)(None)
	uint8                                        Pad_309D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x204(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x208(0x4)(None)
};

// 0xF0 (0xF0 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
struct UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params
{
public:
	float                                        PenetrationScalar;                                 // 0x0(0x4)(None)
	uint8                                        Pad_30A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(None)
	bool                                         Exited;                                            // 0x20(0x1)(None)
	uint8                                        Pad_30A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OwnerVelocity;                                     // 0x28(0x18)(None)
	class USoundBase*                            Temp_object_Variable;                              // 0x40(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x48(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x50(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x58(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x60(0x8)(None)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x68(0x4)(None)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x6C(0x4)(None)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x70(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x78(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x80(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x88(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0x90(0x4)(None)
	uint8                                        Pad_30A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable_5;                            // 0x98(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_6;                            // 0xA0(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_7;                            // 0xA8(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_8;                            // 0xB0(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_9;                            // 0xB8(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            K2Node_Select_Default;                             // 0xC0(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_10;                           // 0xC8(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable_1;                               // 0xD0(0x4)(None)
	uint8                                        Pad_30A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default_1;                           // 0xD8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0xE0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0xE8(0x8)(None)
};

// 0x1D8 (0x1D8 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
struct UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params
{
public:
	float                                        PenetrationScalar;                                 // 0x0(0x4)(None)
	uint8                                        Pad_30AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ImpactLocation;                                    // 0x8(0x18)(None)
	bool                                         Exited;                                            // 0x20(0x1)(None)
	uint8                                        Pad_30AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OwnerVelocity;                                     // 0x28(0x18)(None)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x40(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x48(0x18)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x60(0x1)(None)
	uint8                                        Pad_30AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x68(0x8)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x70(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x78(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(None)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x91(0x1)(None)
	uint8                                        Pad_30AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x98(0x18)(None)
	struct FHitResult                            CallFunc_VTraceSingleBP_OutHit;                    // 0xB0(0xF0)(None)
	bool                                         CallFunc_VTraceSingleBP_ReturnValue;               // 0x1A0(0x1)(None)
	uint8                                        Pad_30AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SetVariableVec3_InValue_ImplicitCast;     // 0x1A8(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_A_ImplicitCast;     // 0x1C0(0x18)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
struct UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params
{
public:
	struct FVector                               CallFunc_GetCurrentWindSourceLocation_ReturnValue; // 0x0(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x18(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x20(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x28(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x30(0x1)(None)
	uint8                                        Pad_30B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x50(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x68(0x18)(None)
	struct FVector3f                             K2Node_VariableSet_CurrentVelocity_ImplicitCast;   // 0x80(0xC)(None)
	uint8                                        Pad_30B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_VariableSet_actor_velocity_prev_ImplicitCast; // 0x90(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_A_ImplicitCast;     // 0xA8(0x18)(None)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactedFluidSurface
struct UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(None)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
struct UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(None)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
struct UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0x18)(None)
	float                                        PenetrationScalar;                                 // 0x18(0x4)(None)
};

// 0xA4 (0xA4 - 0x0)
// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.ExecuteUbergraph_BP_PrimalWindSourceComponent_Base
struct UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(None)
	uint8                                        Pad_30B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_impactLocation_2;                     // 0x8(0x18)(None)
	float                                        K2Node_Event_penetrationScalar_2;                  // 0x20(0x4)(None)
	uint8                                        Pad_30BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_impactLocation_1;                     // 0x28(0x18)(None)
	float                                        K2Node_Event_penetrationScalar_1;                  // 0x40(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x44(0x1)(None)
	uint8                                        Pad_30BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Fraction_ReturnValue;                     // 0x48(0x8)(None)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x50(0x4)(None)
	uint8                                        Pad_30BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(None)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x60(0x4)(None)
	uint8                                        Pad_30BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0x68(0x8)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x70(0x1)(None)
	uint8                                        Pad_30BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x74(0x4)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x78(0x1)(None)
	uint8                                        Pad_30BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x80(0x8)(None)
	struct FVector                               K2Node_Event_impactLocation;                       // 0x88(0x18)(None)
	float                                        K2Node_Event_penetrationScalar;                    // 0xA0(0x4)(None)
};

}
}


