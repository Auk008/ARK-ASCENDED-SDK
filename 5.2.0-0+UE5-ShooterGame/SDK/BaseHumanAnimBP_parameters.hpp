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

// 0x10 (0x10 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.AnimGraph
struct UBaseHumanAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(None)
};

// 0x1FC (0x1FC - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values
struct UBaseHumanAnimBP_C_Update_Character_Creator_Values_Params
{
public:
	class AShooterCharacter*                     ShooterCharacter;                                  // 0x0(0x8)(ZeroConstructor)
	struct FPlayerDynamicMaterialFloat           CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange; // 0x8(0x20)(None)
	float                                        CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue; // 0x28(0x4)(None)
	uint8                                        Pad_4568[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifierRangeArray               CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange; // 0x30(0x30)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CallFunc_GetBoneModifierValue_ReturnValue;         // 0x60(0x4)(None)
	struct FPlayerDynamicMaterialFloat           CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1; // 0x64(0x20)(None)
	float                                        CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1; // 0x84(0x4)(None)
	struct FPlayerDynamicMaterialFloat           CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2; // 0x88(0x20)(None)
	float                                        CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2; // 0xA8(0x4)(None)
	uint8                                        Pad_4569[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifierRangeArray               CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1; // 0xB0(0x30)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CallFunc_GetBoneModifierValue_ReturnValue_1;       // 0xE0(0x4)(None)
	uint8                                        Pad_456A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifierRangeArray               CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2; // 0xE8(0x30)(ContainsInstancedReference, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CallFunc_GetBoneModifierValue_ReturnValue_2;       // 0x118(0x4)(None)
	uint8                                        Pad_456B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifierRangeArray               CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3; // 0x120(0x30)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CallFunc_GetBoneModifierValue_ReturnValue_3;       // 0x150(0x4)(None)
	uint8                                        Pad_456C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifierRangeArray               CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4; // 0x158(0x30)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CallFunc_GetBoneModifierValue_ReturnValue_4;       // 0x188(0x4)(None)
	uint8                                        Pad_456D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifierRangeArray               CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5; // 0x190(0x30)(None)
	float                                        CallFunc_GetBoneModifierValue_ReturnValue_5;       // 0x1C0(0x4)(None)
	uint8                                        Pad_456E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x1C8(0x8)(ZeroConstructor)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue_1;      // 0x1D0(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1D8(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x1D9(0x1)(None)
	bool                                         CallFunc_ObjectIsA_ReturnValue;                    // 0x1DA(0x1)(None)
	bool                                         CallFunc_ObjectIsA_ReturnValue_1;                  // 0x1DB(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1DC(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1DD(0x1)(None)
	uint8                                        Pad_456F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1E0(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x1E8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x1F0(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x1F8(0x4)(None)
};

// 0x170 (0x170 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.InterpLayeringValues
struct UBaseHumanAnimBP_C_InterpLayeringValues_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(None)
	double                                       InterpSpeed;                                       // 0x8(0x8)(None)
	double                                       Time;                                              // 0x10(0x8)(None)
	double                                       Speed;                                             // 0x18(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x20(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x28(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x30(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x38(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_4;                  // 0x40(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_5;                  // 0x48(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_6;                  // 0x50(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_7;                  // 0x58(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_8;                  // 0x60(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_9;                  // 0x68(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_10;                 // 0x70(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_11;                 // 0x78(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_12;                 // 0x80(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_13;                 // 0x88(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_14;                 // 0x90(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_15;                 // 0x98(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_16;                 // 0xA0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_17;                 // 0xA8(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_18;                 // 0xB0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_19;                 // 0xB8(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_20;                 // 0xC0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_21;                 // 0xC8(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_22;                 // 0xD0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_23;                 // 0xD8(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0xE0(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_1;         // 0xE8(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_2;         // 0xF0(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_3;         // 0xF8(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_4;         // 0x100(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_5;         // 0x108(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_6;         // 0x110(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_7;         // 0x118(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_8;         // 0x120(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_9;         // 0x128(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_10;        // 0x130(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_11;        // 0x138(0x8)(None)
	float                                        K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast; // 0x140(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast; // 0x144(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast; // 0x148(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast; // 0x14C(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast; // 0x150(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast; // 0x154(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideHead_ImplicitCast; // 0x158(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast; // 0x15C(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast; // 0x160(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast; // 0x164(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideSpine_ImplicitCast; // 0x168(0x4)(None)
	float                                        K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast; // 0x16C(0x4)(None)
};

// 0x4C (0x4C - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
struct UBaseHumanAnimBP_C_Get_IKWorld_Interp_Speed_Params
{
public:
	double                                       Out;                                               // 0x0(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(None)
	uint8                                        Pad_4572[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x10(0x8)(None)
	double                                       CallFunc_Map_Find_Value;                           // 0x18(0x8)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(None)
	uint8                                        Pad_4573[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x28(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x30(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x38(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x40(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x48(0x4)(None)
};

// 0x168 (0x168 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
struct UBaseHumanAnimBP_C_GroundIK_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(None)
	struct FAlphaBlendArgs                       K2Node_MakeStruct_AlphaBlendArgs;                  // 0x8(0x10)(ZeroConstructor)
	float                                        CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x18(0x4)(None)
	uint8                                        Pad_4578[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x20(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x28(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x30(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x38(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue;           // 0x40(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x48(0x8)(None)
	struct FAlphaBlendArgs                       K2Node_MakeStruct_AlphaBlendArgs_1;                // 0x50(0x10)(ZeroConstructor)
	struct FVector                               CallFunc_GetFPVShadowMeshOffset_ReturnValue;       // 0x60(0x18)(None)
	struct FAlphaBlendArgs                       K2Node_MakeStruct_AlphaBlendArgs_2;                // 0x78(0x10)(ZeroConstructor)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x88(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x90(0x8)(None)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x98(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x99(0x1)(None)
	uint8                                        Pad_457A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  CallFunc_GetBasedOnDino_ReturnValue;               // 0xA0(0x8)(None)
	bool                                         CallFunc_HasDynamicBase_ReturnValue;               // 0xA8(0x1)(None)
	bool                                         CallFunc_BPIsConscious_ReturnValue;                // 0xA9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAA(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xAB(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xAC(0x1)(None)
	bool                                         CallFunc_BPIsConscious_ReturnValue_1;              // 0xAD(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAE(0x1)(None)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0xAF(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB1(0x1)(None)
	uint8                                        Pad_457B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xB8(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xC0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xC1(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xC2(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC3(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xC4(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xC5(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xC6(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xC7(0x1)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0xC8(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue_2;            // 0xD0(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0xD8(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xE0(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xE1(0x1)(None)
	uint8                                        Pad_457C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetFPVShadowMeshOffset_ReturnValue_1;     // 0xE8(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x100(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x101(0x1)(None)
	uint8                                        Pad_457D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x104(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x108(0x1)(None)
	uint8                                        Pad_457F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x110(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_1;         // 0x118(0x8)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x120(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x121(0x1)(None)
	uint8                                        Pad_4580[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x124(0x4)(None)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x128(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x129(0x1)(None)
	uint8                                        Pad_4581[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x130(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0x138(0x8)(None)
	double                                       K2Node_VariableSet_TraceDistanceFactorBelow_ImplicitCast; // 0x140(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x148(0x4)(None)
	uint8                                        Pad_4582[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x150(0x8)(None)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast_1;     // 0x158(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x160(0x8)(None)
};

// 0xF8 (0xF8 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
struct UBaseHumanAnimBP_C_UpdatePoseLayering_Params
{
public:
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x0(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x4(0x1)(None)
	uint8                                        Pad_458B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x8(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_2;              // 0xC(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x10(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x11(0x1)(None)
	uint8                                        Pad_458C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_3;              // 0x14(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_4;              // 0x18(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_5;              // 0x1C(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_6;              // 0x20(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_7;              // 0x24(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x28(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x29(0x1)(None)
	uint8                                        Pad_458D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_8;              // 0x2C(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_9;              // 0x30(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_5;       // 0x34(0x1)(None)
	uint8                                        Pad_458E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_10;             // 0x38(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_11;             // 0x3C(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_6;       // 0x40(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_7;       // 0x41(0x1)(None)
	uint8                                        Pad_458F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_12;             // 0x44(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_13;             // 0x48(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_8;       // 0x4C(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_9;       // 0x4D(0x1)(None)
	uint8                                        Pad_4590[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_14;             // 0x50(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_15;             // 0x54(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_10;      // 0x58(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_11;      // 0x59(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5A(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5B(0x1)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_16;             // 0x5C(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x60(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_12;      // 0x61(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x63(0x1)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_17;             // 0x64(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_13;      // 0x68(0x1)(None)
	uint8                                        Pad_4591[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_18;             // 0x6C(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_14;      // 0x70(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x71(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x72(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x73(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x74(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x75(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x76(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x77(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x78(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x79(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x7A(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x7B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x7D(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x7E(0x1)(None)
	uint8                                        Pad_4592[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x80(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x88(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;    // 0x90(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;    // 0x98(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_4;    // 0xA0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_5;    // 0xA8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_6;    // 0xB0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_7;    // 0xB8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_8;    // 0xC0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_9;    // 0xC8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_10;   // 0xD0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_11;   // 0xD8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_12;   // 0xE0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_13;   // 0xE8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_14;   // 0xF0(0x8)(None)
};

// 0x1B0 (0x1B0 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
struct UBaseHumanAnimBP_C_GetLeanAmount_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
	uint8                                        Pad_4595[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Output;                                            // 0x8(0x10)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x18(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x30(0x8)(None)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x38(0x1)(None)
	uint8                                        Pad_4596[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(None)
	struct FVector2D                             CallFunc_Conv_DoubleToVector2D_ReturnValue;        // 0x58(0x10)(None)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x68(0x18)(None)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x80(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x98(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0xA0(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0xA8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0xB0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0xB8(0x8)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0xC0(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xD8(0x18)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0xF0(0x8)(None)
	double                                       CallFunc_FClamp01_ReturnValue;                     // 0xF8(0x8)(None)
	struct FVector                               CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x100(0x18)(None)
	struct FVector2D                             CallFunc_Conv_DoubleToVector2D_ReturnValue_1;      // 0x118(0x10)(None)
	double                                       CallFunc_BreakVector_X_1;                          // 0x128(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x130(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x138(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x140(0x10)(None)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x150(0x1)(None)
	uint8                                        Pad_4599[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x158(0x10)(None)
	struct FVector2D                             CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x168(0x10)(None)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x178(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x180(0x1)(None)
	uint8                                        Pad_459A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x188(0x18)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0x1A0(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0x1A8(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim_Layering
struct UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(None)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(None)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(None)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable;                                // 0x31(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x32(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x33(0x1)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable_1;                              // 0x34(0x1)(None)
	uint8                                        Pad_459D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor)
	class UAnimSequence*                         K2Node_Select_Default_1;                           // 0x40(0x8)(ZeroConstructor)
	class UAnimSequence*                         K2Node_Select_Default_2;                           // 0x48(0x8)(ZeroConstructor)
	class UAnimSequence*                         K2Node_Select_Default_3;                           // 0x50(0x8)(None)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue;                  // 0x58(0x10)(None)
	struct FSequenceEvaluatorReference           CallFunc_SetExplicitTime_ReturnValue;              // 0x68(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
struct UBaseHumanAnimBP_C_UpdateLayeringValues_Params
{
public:
	double                                       K2Node_VariableSet_Layering_L_Hand_ImplicitCast;   // 0x0(0x8)(None)
	double                                       K2Node_VariableSet_Layering_Spine_ImplicitCast;    // 0x8(0x8)(None)
	double                                       K2Node_VariableSet_Layering_L_Arm_ImplicitCast;    // 0x10(0x8)(None)
	double                                       K2Node_VariableSet_Layering_R_Hand_ImplicitCast;   // 0x18(0x8)(None)
	double                                       K2Node_VariableSet_Layering_R_Arm_ImplicitCast;    // 0x20(0x8)(None)
};

// 0x31 (0x31 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
struct UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params
{
public:
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0(0x18)(None)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x18(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue;       // 0x29(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1;     // 0x2B(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2;     // 0x2C(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3;     // 0x2D(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4;     // 0x2E(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2F(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x30(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
struct UBaseHumanAnimBP_C_UpdateWeaponIK_Params
{
public:
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x0(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x4(0x4)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x10(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x18(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x20(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x28(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x30(0x8)(None)
	float                                        K2Node_VariableSet_RightHandIKAlpha_ImplicitCast;  // 0x38(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
struct UBaseHumanAnimBP_C_GetPredictedStopDistance_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(None)
	struct FVector                               CallFunc_PredictGroundMovementStopLocation_ReturnValue; // 0x8(0x18)(None)
	double                                       CallFunc_VSizeXY_ReturnValue;                      // 0x20(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
struct UBaseHumanAnimBP_C_ShouldDistanceMatchStop_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8C (0x8C - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim
struct UBaseHumanAnimBP_C_UpdateStopAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(None)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(None)
	double                                       DistanceToMatch;                                   // 0x20(0x8)(None)
	bool                                         CallFunc_ShouldDistanceMatchStop_ReturnValue;      // 0x28(0x1)(None)
	uint8                                        Pad_45A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x30(0x10)(None)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x40(0x1)(None)
	uint8                                        Pad_45A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1; // 0x48(0x10)(None)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result_1;  // 0x58(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x59(0x1)(None)
	uint8                                        Pad_45A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_AdvanceTime_ReturnValue;                  // 0x60(0x10)(None)
	double                                       CallFunc_GetPredictedStopDistance_ReturnValue;     // 0x70(0x8)(None)
	struct FSequenceEvaluatorReference           CallFunc_DistanceMatchToTarget_ReturnValue;        // 0x78(0x10)(None)
	float                                        CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast; // 0x88(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim
struct UBaseHumanAnimBP_C_SetUpStopAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(None)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable;                                // 0x20(0x1)(None)
	uint8                                        Pad_45A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x28(0x10)(None)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x38(0x1)(None)
	bool                                         CallFunc_ShouldDistanceMatchStop_ReturnValue;      // 0x39(0x1)(None)
	uint8                                        Pad_45A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_DistanceMatchToTarget_ReturnValue;        // 0x40(0x10)(None)
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x50(0x8)(None)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue;                  // 0x58(0x10)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
struct UBaseHumanAnimBP_C_UpdateAccelerationData_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(None)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x8(0x18)(None)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x20(0x8)(None)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x28(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x40(0x18)(None)
	struct FVector2D                             CallFunc_GetLeanAmount_Output;                     // 0x58(0x10)(None)
	struct FVector2D                             CallFunc_Vector2DInterpTo_Constant_ReturnValue;    // 0x68(0x10)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x78(0x18)(None)
	struct FVector                               CallFunc_Divide_VectorVector_ReturnValue;          // 0x90(0x18)(None)
	double                                       CallFunc_VSizeXYSquared_ReturnValue;               // 0xA8(0x8)(None)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0xB0(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB1(0x1)(None)
	uint8                                        Pad_45AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_LessLess_VectorRotator_ReturnValue;       // 0xB8(0x18)(None)
	float                                        CallFunc_GetLeanAmount_DeltaTime_ImplicitCast;     // 0xD0(0x4)(None)
	float                                        CallFunc_Vector2DInterpTo_Constant_DeltaTime_ImplicitCast; // 0xD4(0x4)(None)
};

// 0x94 (0x94 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
struct UBaseHumanAnimBP_C_UpdateMoveAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(None)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(None)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(None)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable;                                // 0x31(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x32(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x33(0x1)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable_1;                              // 0x34(0x1)(None)
	uint8                                        Pad_45AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x38(0x8)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable_2;                              // 0x40(0x1)(None)
	uint8                                        Pad_45B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x48(0x8)(None)
	class UAnimSequence*                         K2Node_Select_Default_1;                           // 0x50(0x8)(ZeroConstructor)
	class UAnimSequence*                         K2Node_Select_Default_2;                           // 0x58(0x8)(ZeroConstructor)
	class UAnimSequence*                         K2Node_Select_Default_3;                           // 0x60(0x8)(ZeroConstructor)
	class UAnimSequence*                         K2Node_Select_Default_4;                           // 0x68(0x8)(None)
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x70(0x10)(None)
	struct FSequencePlayerReference              CallFunc_SetPlayRate_ReturnValue;                  // 0x80(0x10)(None)
	float                                        CallFunc_SetPlayRate_PlayRate_ImplicitCast;        // 0x90(0x4)(None)
};

// 0x24C (0x24C - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData
struct UBaseHumanAnimBP_C_UpdateVelocityData_Params
{
public:
	double                                       DeltaTime;                                         // 0x0(0x8)(None)
	bool                                         AllowUpdateDirectionJumpAngle;                     // 0x8(0x1)(None)
	uint8                                        Pad_45B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Vector_Normal2D_ReturnValue;              // 0x10(0x18)(None)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x28(0x18)(None)
	double                                       CallFunc_VSizeXYSquared_ReturnValue;               // 0x40(0x8)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable;                                // 0x48(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x49(0x1)(None)
	enum class E_CardinalDirection4              Temp_byte_Variable_1;                              // 0x4A(0x1)(None)
	uint8                                        Pad_45B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x50(0x8)(None)
	double                                       Temp_real_Variable_1;                              // 0x58(0x8)(None)
	double                                       Temp_real_Variable_2;                              // 0x60(0x8)(None)
	double                                       Temp_real_Variable_3;                              // 0x68(0x8)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x70(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x88(0x1)(None)
	uint8                                        Pad_45B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x90(0x8)(None)
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x98(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA0(0x1)(None)
	uint8                                        Pad_45B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Lerp_ReturnValue;                         // 0xA8(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xB0(0x8)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0xB8(0x8)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xC0(0x1)(None)
	bool                                         CallFunc_Vector_IsNearlyZero_ReturnValue;          // 0xC1(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC2(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xC3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC4(0x1)(None)
	uint8                                        Pad_45B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_Constant_ReturnValue;           // 0xC8(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_1;         // 0xD0(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_2;         // 0xD8(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_3;         // 0xE0(0x8)(None)
	struct FRotator                              CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0xE8(0x18)(None)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x100(0x18)(None)
	struct FVector                               CallFunc_VInterpTo_Constant_ReturnValue;           // 0x118(0x18)(None)
	float                                        CallFunc_CalculateDirection_ReturnValue;           // 0x130(0x4)(None)
	float                                        CallFunc_CalculateDirection_ReturnValue_1;         // 0x134(0x4)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x138(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_4;         // 0x140(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x148(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_5;         // 0x150(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x158(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_6;         // 0x160(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x168(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x170(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_7;         // 0x178(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x180(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_8;         // 0x188(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x190(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x198(0x1)(None)
	uint8                                        Pad_45B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x1A0(0x8)(None)
	struct FVector                               CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x1A8(0x18)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x1C0(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1C1(0x1)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1C2(0x1)(None)
	uint8                                        Pad_45B7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_4;       // 0x1C8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x1D0(0x8)(None)
	double                                       K2Node_Select_Default_1;                           // 0x1D8(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1E0(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1E1(0x1)(None)
	uint8                                        Pad_45B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x1E8(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_9;         // 0x1F0(0x8)(None)
	enum class E_CardinalDirection4              CallFunc_SelectCardinalDirectionFromAngle_Direction; // 0x1F8(0x1)(None)
	uint8                                        Pad_45B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x1FC(0x4)(None)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x200(0x8)(None)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x208(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_Current_ImplicitCast;  // 0x210(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x218(0x4)(None)
	float                                        CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast; // 0x21C(0x4)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x220(0x8)(None)
	double                                       K2Node_Select_NewEnumerator2_ImplicitCast;         // 0x228(0x8)(None)
	float                                        K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast; // 0x230(0x4)(None)
	uint8                                        Pad_45BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x238(0x8)(None)
	double                                       CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast; // 0x240(0x8)(None)
	float                                        K2Node_VariableSet_DirectionJumpAngle_ImplicitCast; // 0x248(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
struct UBaseHumanAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
	uint8                                        Pad_45BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast; // 0x8(0x8)(None)
	double                                       CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast; // 0x10(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SelectCardinalDirectionFromAngle
struct UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params
{
public:
	double                                       Angle;                                             // 0x0(0x8)(None)
	double                                       DeadZone;                                          // 0x8(0x8)(None)
	enum class E_CardinalDirection4              CurrentDirection;                                  // 0x10(0x1)(None)
	bool                                         UseCurrentDirection;                               // 0x11(0x1)(None)
	enum class E_CardinalDirection4              Direction;                                         // 0x12(0x1)(None)
	uint8                                        Pad_45BD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BwdDeadZone;                                       // 0x18(0x8)(None)
	double                                       FwdDeadZone;                                       // 0x20(0x8)(None)
	double                                       AbsAngle;                                          // 0x28(0x8)(None)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x30(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x38(0x1)(None)
	uint8                                        Pad_45BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x40(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x48(0x1)(None)
	uint8                                        Pad_45BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x50(0x8)(None)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x58(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59(0x1)(None)
	uint8                                        Pad_45C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x60(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x68(0x8)(None)
};

// 0x110 (0x110 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
struct UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x8(0x1)(None)
	uint8                                        Pad_45C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x10(0x18)(None)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x28(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x40(0x18)(None)
	struct FRotator                              CallFunc_SelectRotator_ReturnValue;                // 0x58(0x18)(None)
	struct FRotator                              CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x70(0x18)(None)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x88(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x8C(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x90(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x94(0x1)(None)
	uint8                                        Pad_45C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Abs_ReturnValue;                          // 0x98(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xA0(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xA8(0x1)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xA9(0x1)(None)
	uint8                                        Pad_45C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0xB0(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0xB8(0x8)(None)
	double                                       CallFunc_Abs_ReturnValue_1;                        // 0xC0(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0xC8(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC9(0x1)(None)
	uint8                                        Pad_45C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_3;                // 0xD0(0x8)(None)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0xD8(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0xE0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0xE8(0x8)(None)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0xF0(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0xF8(0x8)(None)
	double                                       CallFunc_Abs_A_ImplicitCast_1;                     // 0x100(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x108(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
struct UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(None)
};

// 0x98 (0x98 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
struct UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(None)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x8(0x18)(None)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x20(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x38(0x18)(None)
	struct FRotator                              CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x50(0x18)(None)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x68(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x6C(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x70(0x4)(None)
	uint8                                        Pad_45CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x78(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x80(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x88(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x90(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
struct UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params
{
public:
	class UMovementComponent*                    MovementComponent;                                 // 0x0(0x8)(None)
	struct FVector                               Vector;                                            // 0x8(0x18)(None)
	double                                       ReturnValue;                                       // 0x20(0x8)(None)
	double                                       Result;                                            // 0x28(0x8)(None)
	float                                        CallFunc_GetMaxSpeed_ReturnValue;                  // 0x30(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x34(0x1)(None)
	uint8                                        Pad_45CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x38(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x40(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x48(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x50(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x60(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x68(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
struct UBaseHumanAnimBP_C_GetCharSequenceNew_Params
{
public:
	class UAnimSequence*                         AnimSeqIn;                                         // 0x0(0x8)(ZeroConstructor)
	class UAnimSequence*                         AnimSeqOut;                                        // 0x8(0x8)(ZeroConstructor)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_45CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CallFunc_GetOverridenAnimSequence_ReturnValue;     // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
struct UBaseHumanAnimBP_C_GetCharMontageNew_Params
{
public:
	class UAnimMontage*                          MontageIn;                                         // 0x0(0x8)(ZeroConstructor)
	class UAnimMontage*                          MontageOut;                                        // 0x8(0x8)(ZeroConstructor)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_45D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue;          // 0x28(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
struct UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params
{
public:
	class UAnimMontage*                          AnimationMontage;                                  // 0x0(0x8)(ZeroConstructor)
	float                                        PlayRate;                                          // 0x8(0x4)(None)
	bool                                         bPauseOnFinish;                                    // 0xC(0x1)(None)
	uint8                                        Pad_45D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x10(0x4)(None)
	float                                        PlayedAnimLength;                                  // 0x14(0x4)(None)
	class UAnimMontage*                          CallFunc_GetCharMontageNew_MontageOut;             // 0x18(0x8)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x20(0x1)(None)
	uint8                                        Pad_45D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Montage_Play_ReturnValue;                 // 0x24(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation
struct UBaseHumanAnimBP_C_Update_Bot_Animation_Params
{
public:
	class APawn*                                 PawnOwner;                                         // 0x0(0x8)(None)
	double                                       DeltaTime;                                         // 0x8(0x8)(None)
	struct FVector                               RootLocationOffset;                                // 0x10(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
struct UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.OnCharacterStepped
struct UBaseHumanAnimBP_C_OnCharacterStepped_Params
{
public:
	struct FVector                               PrevLocation;                                      // 0x0(0x18)(None)
	struct FVector                               NewLocation;                                       // 0x18(0x18)(None)
};

// 0xAC0 (0xAC0 - 0x0)
// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP
struct UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x4(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(None)
	uint8                                        Pad_4635[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x8(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(None)
	uint8                                        Pad_4638[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x18(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x31(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x32(0x1)(None)
	uint8                                        Pad_463A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x38(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x40(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x41(0x1)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x42(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x43(0x1)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x44(0x4)(None)
	bool                                         Temp_bool_Variable_3;                              // 0x48(0x1)(None)
	uint8                                        Pad_463C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x50(0x8)(None)
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x58(0x8)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x60(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x68(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x70(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x78(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x80(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x88(0x8)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x90(0x18)(None)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xA8(0x18)(None)
	class APawn*                                 K2Node_CustomEvent_PawnOwner;                      // 0xC0(0x8)(ZeroConstructor)
	double                                       K2Node_CustomEvent_DeltaTime;                      // 0xC8(0x8)(None)
	struct FVector                               K2Node_CustomEvent_RootLocationOffset;             // 0xD0(0x18)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xE8(0x8)(None)
	class APrimalBotCharacter*                   K2Node_DynamicCast_AsPrimal_Bot_Character;         // 0xF0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF8(0x1)(None)
	uint8                                        Pad_4643[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x100(0x8)(None)
	class UAnimSequence*                         CallFunc_GetDinoRidingMoveAnimation_ReturnValue;   // 0x108(0x8)(ZeroConstructor)
	class UAnimSequence*                         CallFunc_GetDinoRidingAnimation_ReturnValue;       // 0x110(0x8)(ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x118(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x119(0x1)(None)
	uint8                                        Pad_4644[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x11C(0x4)(None)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x120(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x128(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x130(0x1)(None)
	uint8                                        Pad_4645[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x138(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x140(0x1)(None)
	uint8                                        Pad_4646[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVisualVelocity_ReturnValue;            // 0x148(0x18)(None)
	float                                        CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x160(0x4)(None)
	uint8                                        Pad_4647[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x168(0x10)(None)
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0x178(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x180(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x181(0x1)(None)
	uint8                                        Pad_4648[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x188(0x18)(None)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x1A0(0x18)(None)
	struct FRotator                              CallFunc_NegateRotator_ReturnValue;                // 0x1B8(0x18)(None)
	struct FVector                               CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x1D0(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x1E8(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x200(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x218(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x220(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x228(0x8)(None)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x230(0x18)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x248(0x8)(None)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x250(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x254(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x258(0x4)(None)
	uint8                                        Pad_4649[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x260(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x268(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x270(0x1)(None)
	uint8                                        Pad_464A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x278(0x8)(None)
	struct FRotator                              CallFunc_GetAimOffsets_RootRotOffset;              // 0x280(0x18)(None)
	float                                        CallFunc_GetAimOffsets_TheRootYawSpeed;            // 0x298(0x4)(None)
	uint8                                        Pad_464B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetAimOffsets_RootLocOffset;              // 0x2A0(0x18)(None)
	struct FRotator                              CallFunc_GetAimOffsets_ReturnValue;                // 0x2B8(0x18)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x2D0(0x8)(None)
	double                                       CallFunc_BreakVector_X_1;                          // 0x2D8(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x2E0(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x2E8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x2F0(0x8)(None)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x2F8(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x300(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x308(0x1)(None)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0x309(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x30A(0x1)(None)
	uint8                                        Pad_464C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x310(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x318(0x1)(None)
	uint8                                        Pad_464D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x320(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x328(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x329(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x32A(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x32B(0x1)(None)
	bool                                         CallFunc_IsOnSeatingStructure_ReturnValue;         // 0x32C(0x1)(None)
	enum class ENetRole                          CallFunc_GetRole_ReturnValue;                      // 0x32D(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x32E(0x1)(None)
	uint8                                        Pad_464E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetInterpolatedLocation_ReturnValue;      // 0x330(0x18)(None)
	struct FVector                               CallFunc_GetInterpolatedLocation_ReturnValue_1;    // 0x348(0x18)(None)
	double                                       CallFunc_BreakVector_X_2;                          // 0x360(0x8)(None)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x368(0x8)(None)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x370(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x378(0x8)(None)
	enum class ENetRole                          CallFunc_GetRole_ReturnValue_1;                    // 0x380(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x381(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x382(0x1)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x383(0x1)(None)
	uint8                                        Pad_464F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x388(0x18)(None)
	double                                       CallFunc_BreakVector_X_3;                          // 0x3A0(0x8)(None)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x3A8(0x8)(None)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x3B0(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x3B8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3B9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x3BA(0x1)(None)
	uint8                                        Pad_4650[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue_1;       // 0x3C0(0x8)(ZeroConstructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x3C8(0x1)(None)
	uint8                                        Pad_4651[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component_1; // 0x3D0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x3D8(0x1)(None)
	bool                                         CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue; // 0x3D9(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x3DA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x3DB(0x1)(None)
	float                                        CallFunc_GetAdditiveStandingAnim_OutBlendInTime;   // 0x3DC(0x4)(None)
	float                                        CallFunc_GetAdditiveStandingAnim_OutBlendOutTime;  // 0x3E0(0x4)(None)
	uint8                                        Pad_4652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CallFunc_GetAdditiveStandingAnim_ReturnValue;      // 0x3E8(0x8)(ZeroConstructor)
	class UAnimSequence*                         CallFunc_GetCharSequenceNew_AnimSeqOut;            // 0x3F0(0x8)(ZeroConstructor)
	float                                        CallFunc_GetAlternateStandingAnim_OutBlendInTime;  // 0x3F8(0x4)(None)
	float                                        CallFunc_GetAlternateStandingAnim_OutBlendOutTime; // 0x3FC(0x4)(None)
	class UAnimSequence*                         CallFunc_GetAlternateStandingAnim_ReturnValue;     // 0x400(0x8)(ZeroConstructor)
	bool                                         CallFunc_UseAdditiveStandingAnim_ReturnValue;      // 0x408(0x1)(None)
	uint8                                        Pad_4653[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CallFunc_GetCharSequenceNew_AnimSeqOut_1;          // 0x410(0x8)(ZeroConstructor)
	bool                                         CallFunc_UseAlternateStandingAnim_ReturnValue;     // 0x418(0x1)(None)
	bool                                         CallFunc_UseAltAimOffsetAnim_ReturnValue;          // 0x419(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x41A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x41B(0x1)(None)
	uint8                                        Pad_4654[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapClimbPick_C*                      K2Node_DynamicCast_AsWeap_Climb_Pick;              // 0x420(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x428(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x429(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x42A(0x1)(None)
	bool                                         CallFunc_ObjectIsChildOfSoftRef_ReturnValue;       // 0x42B(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x42C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x42D(0x1)(None)
	uint8                                        Pad_4655[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue;  // 0x430(0x4)(None)
	float                                        CallFunc_GetDefaultMovementSpeed_ReturnValue;      // 0x434(0x4)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_4;       // 0x438(0x8)(None)
	class UAnimSequence*                         CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1; // 0x440(0x8)(ZeroConstructor)
	class UAnimSequence*                         CallFunc_GetCharSequenceNew_AnimSeqOut_2;          // 0x448(0x8)(ZeroConstructor)
	class UAnimSequence*                         CallFunc_GetDinoRidingAnimation_ReturnValue_1;     // 0x450(0x8)(ZeroConstructor)
	class UAnimSequence*                         CallFunc_GetCharSequenceNew_AnimSeqOut_3;          // 0x458(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsSitting_ReturnValue;                    // 0x460(0x1)(None)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0x461(0x1)(None)
	bool                                         CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue; // 0x462(0x1)(None)
	bool                                         CallFunc_IsTargeting_ReturnValue;                  // 0x463(0x1)(None)
	bool                                         CallFunc_ForceTPVTargetingAnimation_ReturnValue;   // 0x464(0x1)(None)
	bool                                         CallFunc_AnimUseAimOffset_ReturnValue;             // 0x465(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x466(0x1)(None)
	bool                                         CallFunc_AllowMountedWeaponry_ReturnValue;         // 0x467(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x468(0x1)(None)
	uint8                                        Pad_4656[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x470(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_3;      // 0x478(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x480(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x481(0x1)(None)
	uint8                                        Pad_4657[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue; // 0x484(0x4)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x488(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_5;       // 0x489(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x48A(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x48B(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x48C(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_12;       // 0x48D(0x1)(None)
	uint8                                        Pad_4658[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x490(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_13;       // 0x498(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_6;       // 0x499(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x49A(0x1)(None)
	uint8                                        Pad_4659[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_4;      // 0x4A0(0x8)(None)
	double                                       CallFunc_DoubleToFloat_ReturnValue;                // 0x4A8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x4B0(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_7;       // 0x4B8(0x1)(None)
	uint8                                        Pad_465A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_5;      // 0x4C0(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_8;       // 0x4C8(0x1)(None)
	uint8                                        Pad_465B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x4D0(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x4D8(0x8)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x4E0(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x4E1(0x1)(None)
	uint8                                        Pad_465C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x4E8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x4F0(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x4F8(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x500(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_2;                     // 0x508(0x8)(None)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x510(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x518(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x520(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_3;                     // 0x528(0x8)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x530(0x18)(None)
	double                                       CallFunc_BreakVector_X_4;                          // 0x548(0x8)(None)
	double                                       CallFunc_BreakVector_Y_4;                          // 0x550(0x8)(None)
	double                                       CallFunc_BreakVector_Z_4;                          // 0x558(0x8)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x560(0x1)(None)
	uint8                                        Pad_465D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_2;       // 0x568(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x570(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x578(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x580(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_9;       // 0x581(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_14;       // 0x582(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x583(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x584(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_15;       // 0x585(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_16;       // 0x586(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_17;       // 0x587(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x588(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_18;       // 0x589(0x1)(None)
	uint8                                        Pad_465E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMoveAnimRate_ReturnValue;              // 0x58C(0x4)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_8;      // 0x590(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_19;       // 0x598(0x1)(None)
	uint8                                        Pad_465F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_9;      // 0x5A0(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_20;       // 0x5A8(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_21;       // 0x5A9(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_10;      // 0x5AA(0x1)(None)
	uint8                                        Pad_4660[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_3;       // 0x5B0(0x8)(None)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_4;       // 0x5B8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x5C0(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_6;      // 0x5C8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_7;      // 0x5D0(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_11;      // 0x5D8(0x1)(None)
	uint8                                        Pad_4661[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_5;       // 0x5E0(0x8)(None)
	float                                        CallFunc_GetTPVHorizontalCameraOffset_ReturnValue; // 0x5E8(0x4)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_3;          // 0x5EC(0x1)(None)
	uint8                                        Pad_4662[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraParams                   CallFunc_GetPrimalCameraParams_OutCameraParams;    // 0x5F0(0xD8)(AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x6C8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x6D0(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_4;                     // 0x6D8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_6;       // 0x6E0(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0x6E8(0x1)(None)
	uint8                                        Pad_4663[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x6EC(0x4)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x6F0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_22;       // 0x6F1(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x6F2(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x6F3(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x6F4(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0x6F5(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_10;               // 0x6F6(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_23;       // 0x6F7(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_24;       // 0x6F8(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_25;       // 0x6F9(0x1)(None)
	uint8                                        Pad_4664[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_PrevLocation;                         // 0x700(0x18)(None)
	struct FVector                               K2Node_Event_NewLocation;                          // 0x718(0x18)(None)
	double                                       CallFunc_BreakVector_X_5;                          // 0x730(0x8)(None)
	double                                       CallFunc_BreakVector_Y_5;                          // 0x738(0x8)(None)
	double                                       CallFunc_BreakVector_Z_5;                          // 0x740(0x8)(None)
	double                                       CallFunc_BreakVector_X_6;                          // 0x748(0x8)(None)
	double                                       CallFunc_BreakVector_Y_6;                          // 0x750(0x8)(None)
	double                                       CallFunc_BreakVector_Z_6;                          // 0x758(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_12;      // 0x760(0x1)(None)
	uint8                                        Pad_4665[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_Constant_ReturnValue;           // 0x768(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_2;       // 0x770(0x8)(None)
	double                                       CallFunc_Abs_ReturnValue_1;                        // 0x778(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_26;       // 0x780(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_13;      // 0x781(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_14;      // 0x782(0x1)(None)
	uint8                                        Pad_4666[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_7;       // 0x788(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_15;      // 0x790(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_11;               // 0x791(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0x792(0x1)(None)
	uint8                                        Pad_4667[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x798(0x18)(None)
	float                                        CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1; // 0x7B0(0x4)(None)
	uint8                                        Pad_4668[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x7B8(0x18)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_16;      // 0x7D0(0x1)(None)
	uint8                                        Pad_4669[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_SelectRotator_ReturnValue;                // 0x7D8(0x18)(None)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x7F0(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x7F4(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x7F8(0x4)(None)
	float                                        K2Node_Select_Default;                             // 0x7FC(0x4)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x800(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x808(0x8)(None)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x810(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_12;               // 0x811(0x1)(None)
	uint8                                        Pad_466A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0x814(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_13;               // 0x818(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_11;                // 0x819(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_12;                // 0x81A(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_27;       // 0x81B(0x1)(None)
	uint8                                        Pad_466B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default_2;                           // 0x820(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_14;               // 0x828(0x1)(None)
	uint8                                        Pad_466C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x830(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x838(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_17;      // 0x840(0x1)(None)
	uint8                                        Pad_466D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x848(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_13;                // 0x850(0x1)(None)
	uint8                                        Pad_466E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_8;      // 0x858(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_10;     // 0x860(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_5;           // 0x868(0x8)(None)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_1;          // 0x870(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_15;               // 0x871(0x1)(None)
	uint8                                        Pad_466F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_Select_Default_3;                           // 0x878(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_14;                // 0x880(0x1)(None)
	uint8                                        Pad_4670[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Montage_Play_ReturnValue;                 // 0x884(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_15;                // 0x888(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x889(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_16;               // 0x88A(0x1)(None)
	uint8                                        Pad_4671[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_ReturnValue_2;            // 0x890(0x8)(None)
	double                                       CallFunc_FClamp01_ReturnValue;                     // 0x898(0x8)(None)
	struct FRotator                              CallFunc_QInterpTo_ReturnValue;                    // 0x8A0(0x18)(None)
	TArray<struct FRotator>                      K2Node_MakeArray_Array;                            // 0x8B8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x8C8(0x18)(None)
	TArray<struct FRotator>                      K2Node_MakeArray_Array_1;                          // 0x8E0(0x10)(None)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x8F0(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character_1;          // 0x8F8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x900(0x1)(None)
	bool                                         CallFunc_ShouldASACameraSwitchToOld_ReturnValue;   // 0x901(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_17;               // 0x902(0x1)(None)
	bool                                         CallFunc_ShouldUseASACamera_ReturnValue;           // 0x903(0x1)(None)
	bool                                         CallFunc_ShouldUseASACamera_ReturnValue_1;         // 0x904(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_16;                // 0x905(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x906(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_18;               // 0x907(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_17;                // 0x908(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_18;                // 0x909(0x1)(None)
	uint8                                        Pad_4672[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x910(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x918(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x920(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x928(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_3;                // 0x930(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_11;     // 0x938(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_4;                // 0x940(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_6;           // 0x948(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_12;     // 0x950(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_9;      // 0x958(0x8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x960(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_19;                // 0x961(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_20;                // 0x962(0x1)(None)
	uint8                                        Pad_4673[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_GetBasedMovementComponent_ReturnValue;    // 0x968(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x970(0x1)(None)
	uint8                                        Pad_4674[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  CallFunc_GetBasedOnDino_ReturnValue;               // 0x978(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x980(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x981(0x1)(None)
	bool                                         CallFunc_HasDynamicBase_ReturnValue;               // 0x982(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_21;                // 0x983(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_22;                // 0x984(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x985(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_23;                // 0x986(0x1)(None)
	uint8                                        Pad_4678[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_13;     // 0x988(0x8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x990(0x1)(None)
	uint8                                        Pad_4679[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Percent_FloatFloat_ReturnValue;           // 0x998(0x8)(None)
	double                                       K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast; // 0x9A0(0x8)(None)
	float                                        CallFunc_Array_Set_Item_ImplicitCast;              // 0x9A8(0x4)(None)
	float                                        CallFunc_Array_Set_Item_ImplicitCast_1;            // 0x9AC(0x4)(None)
	float                                        CallFunc_Array_Set_Item_ImplicitCast_2;            // 0x9B0(0x4)(None)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x9B4(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x9B8(0x4)(None)
	float                                        CallFunc_Array_Set_Item_ImplicitCast_3;            // 0x9BC(0x4)(None)
	double                                       CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast; // 0x9C0(0x8)(None)
	double                                       CallFunc_GroundIK_DeltaTime_ImplicitCast;          // 0x9C8(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast; // 0x9D0(0x8)(None)
	double                                       CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast; // 0x9D8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x9E0(0x8)(None)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x9E8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x9F0(0x8)(None)
	double                                       K2Node_VariableSet_Direction_ImplicitCast;         // 0x9F8(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xA00(0x8)(None)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0xA08(0x8)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0xA10(0x4)(None)
	uint8                                        Pad_467A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast; // 0xA18(0x8)(None)
	double                                       K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast; // 0xA20(0x8)(None)
	double                                       K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast; // 0xA28(0x8)(None)
	double                                       K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast; // 0xA30(0x8)(None)
	double                                       K2Node_VariableSet_MinSprintSpeed_ImplicitCast;    // 0xA38(0x8)(None)
	double                                       K2Node_VariableSet_BallistaYaw_ImplicitCast;       // 0xA40(0x8)(None)
	double                                       K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast; // 0xA48(0x8)(None)
	double                                       K2Node_Select_Option_0_ImplicitCast;               // 0xA50(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0xA58(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0xA60(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xA68(0x8)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0xA70(0x4)(None)
	float                                        K2Node_StructMemberSet___FloatProperty_156_ImplicitCast; // 0xA74(0x4)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0xA78(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xA80(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0xA88(0x4)(None)
	float                                        K2Node_StructMemberSet___FloatProperty_160_ImplicitCast; // 0xA8C(0x4)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0xA90(0x8)(None)
	float                                        K2Node_Select_Option_0_ImplicitCast_1;             // 0xA98(0x4)(None)
	uint8                                        Pad_467B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0xAA0(0x8)(None)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast_1;     // 0xAA8(0x8)(None)
	float                                        K2Node_Select_Option_0_ImplicitCast_2;             // 0xAB0(0x4)(None)
	float                                        CallFunc_QInterpTo_InterpSpeed_ImplicitCast;       // 0xAB4(0x4)(None)
	float                                        CallFunc_RLerp_Alpha_ImplicitCast;                 // 0xAB8(0x4)(None)
	float                                        K2Node_StructMemberSet___FloatProperty_17_ImplicitCast; // 0xABC(0x4)(None)
};

}
}


