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

// 0x40 (0x40 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation
struct UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FVector                               CurrentPivotLocation;                              // 0x8(0x18)(None)
	struct FVector                               DesiredPivotLocation;                              // 0x20(0x18)(None)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(None)
};

// 0x22 (0x22 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ZeroConstructor)
	bool                                         bShouldApplyAnyModifier;                           // 0x10(0x1)(None)
	uint8                                        Pad_3664[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_IsTargeting_ReturnValue;                  // 0x21(0x1)(None)
};

// 0x320 (0x320 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(Edit, ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(AutoWeak, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPrimalCameraInterpParams             ArmLengthInterpParams;                             // 0xE0(0xC)(None)
	uint8                                        Pad_3678[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xF0(0x10)(None)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(None)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(None)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(None)
	uint8                                        Pad_3679[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(None)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(None)
	uint8                                        Pad_367B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(None)
	uint8                                        Pad_367D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1BC(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1BD(0x1)(None)
	uint8                                        Pad_367F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C0(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C8(0x1)(None)
	uint8                                        Pad_3680[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1CC(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D0(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D1(0x1)(None)
	uint8                                        Pad_3682[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1D8(0x90)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x268(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x269(0x1)(None)
	uint8                                        Pad_3683[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x270(0x8)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x278(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x279(0x1)(None)
	uint8                                        Pad_3686[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x280(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x288(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x290(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x298(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2A0(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2A8(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x2B0(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x2B8(0x8)(None)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x2C0(0xC)(None)
	uint8                                        Pad_3688[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x2D0(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x2D8(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x2E0(0x8)(None)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2E8(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2F0(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F8(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x300(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x308(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x310(0x4)(None)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x314(0x4)(None)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x318(0x4)(None)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x31C(0x4)(None)
};

// 0xB1 (0xB1 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
struct UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(None)
	int32                                        EntryIndex;                                        // 0x98(0x4)(None)
	uint8                                        Pad_3691[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ModifierAlpha;                                     // 0xA0(0x8)(None)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(None)
};

// 0x110 (0x110 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
struct UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ContainsInstancedReference, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(None)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(None)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(None)
};

// 0x358 (0x358 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(Edit, ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(None)
	struct FVector                               DesiredPivotOffset;                                // 0xF0(0x18)(None)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(None)
	double                                       PitchModifierAlpha;                                // 0x110(0x8)(None)
	int32                                        FoundEntryIndex;                                   // 0x118(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x11C(0x1)(None)
	uint8                                        Pad_369E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x124(0x1)(None)
	uint8                                        Pad_369F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetTPVCameraOffset_ReturnValue;           // 0x128(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(None)
	uint8                                        Pad_36A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x144(0x4)(None)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x148(0x90)(None)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x1D8(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1F0(0x4)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1F4(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1F5(0x1)(None)
	uint8                                        Pad_36A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1F8(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(None)
	uint8                                        Pad_36A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x204(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x208(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x209(0x1)(None)
	uint8                                        Pad_36A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x210(0x90)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x2A0(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x2A1(0x1)(None)
	uint8                                        Pad_36A4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x2A8(0x8)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x2B0(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2C8(0x18)(None)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x2E0(0x18)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2F8(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2F9(0x1)(None)
	uint8                                        Pad_36A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x300(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x308(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x310(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x318(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x320(0x8)(None)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x328(0x18)(None)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x340(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x348(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x350(0x4)(None)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x354(0x4)(None)
};

// 0x2FC (0x2FC - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(Edit, ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xE0(0x10)(None)
	double                                       CurrentArmLength;                                  // 0xF0(0x8)(None)
	double                                       DesiredArmLength;                                  // 0xF8(0x8)(None)
	class UObject*                               __WorldContext;                                    // 0x100(0x8)(None)
	double                                       PitchModifierAlpha;                                // 0x108(0x8)(None)
	int32                                        FoundEntryIndex;                                   // 0x110(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x114(0x1)(None)
	uint8                                        Pad_36D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x118(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11C(0x1)(None)
	bool                                         CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier; // 0x11D(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11E(0x1)(None)
	uint8                                        Pad_36D4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(None)
	uint8                                        Pad_36D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x128(0x90)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1B8(0x1)(None)
	uint8                                        Pad_36E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1BC(0x4)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x1C0(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x1C1(0x1)(None)
	uint8                                        Pad_36E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x1C8(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(None)
	uint8                                        Pad_36E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D8(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1D9(0x1)(None)
	uint8                                        Pad_36E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E0(0x90)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1; // 0x270(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1; // 0x271(0x1)(None)
	uint8                                        Pad_36E9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1; // 0x278(0x8)(None)
	double                                       K2Node_VariableGet_DesiredArmLength_ImplicitCast;  // 0x280(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x288(0x8)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x290(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x291(0x1)(None)
	uint8                                        Pad_36EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x298(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2A0(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2A8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2B0(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2B8(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2C0(0x8)(None)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x2C8(0x8)(None)
	float                                        K2Node_VariableSetRef_Target_ImplicitCast;         // 0x2D0(0x4)(None)
	uint8                                        Pad_36ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x2D8(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x2E0(0x8)(None)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x2E8(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x2F0(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x2F8(0x4)(None)
};

// 0x148 (0x148 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
struct UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FPrimalCameraPitchBasedModifier       PitchBasedModifier;                                // 0x8(0x90)(None)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(None)
	bool                                         bShouldApplyModifier;                              // 0xA0(0x1)(None)
	bool                                         bShouldLerp;                                       // 0xA1(0x1)(None)
	uint8                                        Pad_370F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LerpAlpha;                                         // 0xA8(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(None)
	uint8                                        Pad_3710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0xB8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC0(0x8)(None)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xC8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xD0(0x8)(None)
	double                                       CallFunc_FMax_ReturnValue;                         // 0xD8(0x8)(None)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0xE0(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue;                         // 0xE8(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0xF0(0x8)(None)
	struct FRotator                              CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue; // 0xF8(0x18)(None)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x110(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x114(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x118(0x4)(None)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x11C(0x1)(None)
	uint8                                        Pad_3714[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x120(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x128(0x1)(None)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x129(0x1)(None)
	uint8                                        Pad_3715[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x130(0x8)(None)
	double                                       CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;  // 0x138(0x8)(None)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x140(0x8)(None)
};

// 0x3D8 (0x3D8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(Edit, ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPrimalCameraInterpParams             InterpParamsX;                                     // 0xE0(0xC)(None)
	struct FPrimalCameraInterpParams             InterpParamsY;                                     // 0xEC(0xC)(None)
	struct FPrimalCameraInterpParams             InterpParamsZ;                                     // 0xF8(0xC)(None)
	uint8                                        Pad_3723[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0x108(0x10)(None)
	class UObject*                               __WorldContext;                                    // 0x118(0x8)(None)
	double                                       PitchModifierAlpha;                                // 0x120(0x8)(None)
	bool                                         bOverrideInterpParams;                             // 0x128(0x1)(None)
	uint8                                        Pad_3724[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             FinalInterpParams;                                 // 0x12C(0xC)(None)
	struct FPrimalCameraInterpParams             InterpParamsToModify;                              // 0x138(0xC)(None)
	int32                                        FoundEntryIndex;                                   // 0x144(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14C(0x4)(None)
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item;                           // 0x150(0x90)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1E0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E1(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1E2(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1E3(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E4(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1E5(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1E6(0x1)(None)
	uint8                                        Pad_3725[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_1;                         // 0x1E8(0x90)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x278(0x1)(None)
	uint8                                        Pad_3726[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x27C(0x4)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier; // 0x280(0x1)(None)
	bool                                         CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp; // 0x281(0x1)(None)
	uint8                                        Pad_3727[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;  // 0x288(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x290(0x1)(None)
	uint8                                        Pad_3728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x294(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x298(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x299(0x1)(None)
	uint8                                        Pad_3729[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraPitchBasedModifier       CallFunc_Array_Get_Item_2;                         // 0x2A0(0x90)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x330(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x331(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x332(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x333(0x1)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x334(0x1)(None)
	uint8                                        Pad_372A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x338(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x340(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x348(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x350(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x358(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x360(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x368(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x370(0x8)(None)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x378(0xC)(None)
	uint8                                        Pad_372B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x388(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x390(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x398(0x8)(None)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x3A0(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x3A8(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x3B0(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x3B8(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x3C0(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x3C8(0x4)(None)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x3CC(0x4)(None)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x3D0(0x4)(None)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x3D4(0x4)(None)
};

// 0xF8 (0xF8 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(None)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xE0(0xC)(None)
	uint8                                        Pad_3735[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(None)
};

// 0x138 (0x138 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params
{
public:
	class APrimalCharacter*                      CharacterToKeepOnScreen;                           // 0x0(0x8)(ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(None)
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0xE0(0x8)(ZeroConstructor)
	double                                       CurrentCameraArmLength;                            // 0xE8(0x8)(None)
	double                                       DesiredCameraArmLength;                            // 0xF0(0x8)(None)
	class UObject*                               __WorldContext;                                    // 0xF8(0x8)(None)
	double                                       ScreenAreaToUse;                                   // 0x100(0x8)(None)
	bool                                         bStopLoop;                                         // 0x108(0x1)(None)
	bool                                         VelocityIsNearlyZero;                              // 0x109(0x1)(None)
	uint8                                        Pad_3739[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldLocationToProject;                            // 0x110(0x18)(None)
	double                                       CharacterScreenAreaY;                              // 0x128(0x8)(None)
	double                                       CharacterScreenAreaX;                              // 0x130(0x8)(None)
};

// 0x24C (0x24C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
struct UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(None)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xE0(0x34)(None)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsX;                            // 0x114(0xC)(None)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsY;                            // 0x120(0xC)(None)
	struct FPrimalCameraInterpParams             LastPivotInterpParamsZ;                            // 0x12C(0xC)(None)
	struct FPrimalCameraInterpParams             PivotInterpParamsX;                                // 0x138(0xC)(None)
	struct FPrimalCameraInterpParams             PivotInterpParamsY;                                // 0x144(0xC)(None)
	struct FPrimalCameraInterpParams             PivotInterpParamsZ;                                // 0x150(0xC)(None)
	uint8                                        Pad_373B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x160(0x8)(ZeroConstructor)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(None)
	double                                       TheScreenArea;                                     // 0x170(0x8)(None)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(None)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(None)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(None)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(None)
	uint8                                        Pad_373C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LerpAlpha;                                         // 0x190(0x8)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x198(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x199(0x1)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x19A(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19B(0x1)(None)
	uint8                                        Pad_373D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A8(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1A9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1AA(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1AB(0x1)(None)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1AC(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_2;                // 0x1AD(0x1)(None)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1AE(0x1)(None)
	bool                                         CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue; // 0x1AF(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B1(0x1)(None)
	uint8                                        Pad_373F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x1B8(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x1C0(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x1C8(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x1D0(0x8)(None)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x1D8(0xC)(None)
	uint8                                        Pad_3740[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0x1E8(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x1F0(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_1;         // 0x1F8(0x8)(None)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast_2;         // 0x200(0x8)(None)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast;       // 0x208(0x8)(None)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1;     // 0x210(0x8)(None)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2;     // 0x218(0x8)(None)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast;            // 0x220(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x228(0x8)(None)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_1;          // 0x230(0x8)(None)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast_2;          // 0x238(0x8)(None)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x240(0x4)(None)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x244(0x4)(None)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x248(0x4)(None)
};

// 0x370 (0x370 - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
struct UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(Edit, ZeroConstructor)
	struct FPrimalCameraParams                   CameraParams;                                      // 0x8(0xD8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPrimalCameraInterpParams             InterpParams;                                      // 0xE0(0xC)(None)
	uint8                                        Pad_3749[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsModifiers;                             // 0xF0(0x10)(None)
	class FName                                  DebugScreenModifierId;                             // 0x100(0x8)(None)
	class UObject*                               __WorldContext;                                    // 0x108(0x8)(Edit, ZeroConstructor)
	bool                                         bIsCrouchedOrProne;                                // 0x110(0x1)(None)
	uint8                                        Pad_374A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpScreenAreaModifier ScreenModifierForDebug;                            // 0x118(0x50)(None)
	double                                       PrintModifierAlpha;                                // 0x168(0x8)(None)
	double                                       TheScreenArea;                                     // 0x170(0x8)(None)
	double                                       CharScreenAreaY;                                   // 0x178(0x8)(None)
	double                                       CharScreenAreaX;                                   // 0x180(0x8)(None)
	int32                                        EntryIndexForLerping;                              // 0x188(0x4)(None)
	bool                                         bFoundInterpRange;                                 // 0x18C(0x1)(None)
	uint8                                        Pad_374B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LerpAlpha;                                         // 0x190(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(None)
	uint8                                        Pad_374C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1A0(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(None)
	uint8                                        Pad_374D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1C0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C9(0x1)(None)
	bool                                         CallFunc_IsCrouching_ReturnValue;                  // 0x1CA(0x1)(None)
	bool                                         CallFunc_IsProneOrSitting_ReturnValue;             // 0x1CB(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1CC(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x1CD(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x1CE(0x1)(None)
	uint8                                        Pad_374E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1D0(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D4(0x1)(None)
	uint8                                        Pad_3750[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpScreenAreaModifier CallFunc_Array_Get_Item;                           // 0x1D8(0x50)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x228(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x230(0x8)(None)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x238(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x240(0x8)(None)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x248(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x250(0x8)(None)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x258(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue_1;                       // 0x260(0x8)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x268(0x1)(None)
	uint8                                        Pad_3751[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x270(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x278(0x1)(None)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x279(0x1)(None)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x27A(0x1)(None)
	uint8                                        Pad_3752[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaX;    // 0x280(0x8)(None)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenAreaY;    // 0x288(0x8)(None)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeX;  // 0x290(0x8)(None)
	double                                       CallFunc_WorldLocationToScreenArea_ViewportSizeY;  // 0x298(0x8)(None)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosX;  // 0x2A0(0x8)(None)
	double                                       CallFunc_WorldLocationToScreenArea_ScreenRawPosY;  // 0x2A8(0x8)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2B0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2B4(0x1)(None)
	uint8                                        Pad_3753[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2B8(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2BC(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x2BD(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x2BE(0x1)(None)
	uint8                                        Pad_3754[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimalCameraInterpParams             K2Node_Select_Default;                             // 0x2C0(0xC)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2CC(0x1)(None)
	uint8                                        Pad_3755[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x2D0(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x2D8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x2E0(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x2E8(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x2F0(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x2F8(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x300(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x308(0x8)(None)
	struct FPrimalCameraInterpParams             K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x310(0xC)(None)
	uint8                                        Pad_3756[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x320(0x8)(None)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x328(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x330(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast_1;                    // 0x338(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast_2;                    // 0x340(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x348(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast_1;                    // 0x350(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast_2;                    // 0x358(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x360(0x4)(None)
	float                                        K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x364(0x4)(None)
	float                                        K2Node_MakeStruct_TargetVelocity_ImplicitCast;     // 0x368(0x4)(None)
	float                                        K2Node_MakeStruct_CriticalDamping_ImplicitCast;    // 0x36C(0x4)(None)
};

// 0x11C (0x11C - 0x0)
// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
struct UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params
{
public:
	class APrimalCharacter*                      CameraOwnerCharacter;                              // 0x0(0x8)(ZeroConstructor)
	struct FVector                               WorldLocationToProject;                            // 0x8(0x18)(None)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ZeroConstructor)
	double                                       ScreenAreaX;                                       // 0x28(0x8)(None)
	double                                       ScreenAreaY;                                       // 0x30(0x8)(None)
	double                                       ViewportSizeX;                                     // 0x38(0x8)(None)
	double                                       ViewportSizeY;                                     // 0x40(0x8)(None)
	double                                       ScreenRawPosX;                                     // 0x48(0x8)(None)
	double                                       ScreenRawPosY;                                     // 0x50(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(None)
	uint8                                        Pad_3766[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x60(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x68(0x8)(None)
	struct FVector2D                             CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x70(0x10)(None)
	bool                                         CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x80(0x1)(None)
	uint8                                        Pad_3767[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue; // 0x84(0x38)(None)
	uint8                                        Pad_3768[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0xC0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xC8(0x8)(None)
	struct FVector2D                             CallFunc_GetAbsoluteSize_ReturnValue;              // 0xD0(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(None)
	uint8                                        Pad_3769[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xE8(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xF0(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xF8(0x8)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x100(0x1)(None)
	uint8                                        Pad_376A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x108(0x8)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x110(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x111(0x1)(None)
	uint8                                        Pad_376B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x114(0x4)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x118(0x4)(None)
};

}
}


