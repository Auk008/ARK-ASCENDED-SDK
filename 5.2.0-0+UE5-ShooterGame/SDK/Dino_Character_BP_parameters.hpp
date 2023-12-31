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

// 0x31 (0x31 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation
struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params
{
public:
	struct FVector                               CurrentCameraPivotLocation;                        // 0x0(0x18)(None)
	struct FVector                               DesiredCameraPivotLocation;                        // 0x18(0x18)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params
{
public:
	struct FRotator                              CurrentCameraPivotRotation;                        // 0x0(0x18)(None)
	struct FRotator                              DesiredCameraPivotRotation;                        // 0x18(0x18)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_496A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll;                        // 0x34(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x38(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x3C(0x4)(None)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x40(0x18)(None)
};

// 0xF1 (0xF1 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	struct FVector                               DesiredCameraOffset;                               // 0xD8(0x18)(None)
	bool                                         ReturnValue;                                       // 0xF0(0x1)(None)
};

// 0x155 (0x155 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
struct ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	struct FPrimalCameraPivotZInterpOverrides    PivotZInterpOverrides;                             // 0xD8(0x34)(None)
	struct FPrimalCameraInterpParams             LastInterpParamsX;                                 // 0x10C(0xC)(None)
	struct FPrimalCameraInterpParams             LastInterpParamsY;                                 // 0x118(0xC)(None)
	struct FPrimalCameraInterpParams             LastInterpParamsZ;                                 // 0x124(0xC)(None)
	struct FPrimalCameraInterpParams             OutInterpParamsX;                                  // 0x130(0xC)(None)
	struct FPrimalCameraInterpParams             OutInterpParamsY;                                  // 0x13C(0xC)(None)
	struct FPrimalCameraInterpParams             OutInterpParamsZ;                                  // 0x148(0xC)(None)
	bool                                         ReturnValue;                                       // 0x154(0x1)(None)
};

// 0xE5 (0xE5 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
struct ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	struct FPrimalCameraInterpParams             OutInterpParams;                                   // 0xD8(0xC)(None)
	bool                                         ReturnValue;                                       // 0xE4(0x1)(None)
};

// 0xF8 (0xF8 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
struct ADino_Character_BP_C_BPOverrideCameraArmLength_Params
{
public:
	struct FPrimalCameraParams                   CameraParams;                                      // 0x0(0xD8)(None)
	float                                        CurrentCameraArmLength;                            // 0xD8(0x4)(None)
	float                                        DesiredCameraArmLength;                            // 0xDC(0x4)(None)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(None)
	uint8                                        Pad_4976[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast; // 0xE8(0x8)(None)
	double                                       CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast; // 0xF0(0x8)(None)
};

// 0x54 (0x54 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
struct ADino_Character_BP_C_GetFXBloodColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(None)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(None)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x41(0x1)(None)
	uint8                                        Pad_4979[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetFXBloodColor_ReturnValue;              // 0x44(0x10)(None)
};

// 0x3C (0x3C - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
struct ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
public:
	bool                                         bInputWantsToRun;                                  // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
	bool                                         RetVal;                                            // 0x2(0x1)(None)
	bool                                         CallFunc_BlueprintOverrideWantsToRun_ReturnValue;  // 0x3(0x1)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x4(0x1)(None)
	bool                                         CallFunc_K2_TimerExists_ReturnValue;               // 0x5(0x1)(None)
	uint8                                        Pad_497F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(None)
	bool                                         CallFunc_IsWildSlow_ReturnValue;                   // 0x10(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(None)
	uint8                                        Pad_4980[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x18(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x20(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x21(0x1)(None)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x22(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x23(0x1)(None)
	uint8                                        Pad_4981[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x28(0x8)(None)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast; // 0x30(0x4)(None)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1; // 0x34(0x4)(None)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x38(0x4)(None)
};

// 0x58 (0x58 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
struct ADino_Character_BP_C_UpdateBabyAndRunValues_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x9(0x1)(None)
	uint8                                        Pad_4982[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAIController*                         CallFunc_GetAIController_ReturnValue;              // 0x10(0x8)(Edit, ZeroConstructor)
	class ADino_AIController_BP_C*               K2Node_DynamicCast_AsDino_AIController_BP;         // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_IsWildSlow_ReturnValue;                   // 0x21(0x1)(None)
	uint8                                        Pad_4983[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAIController*                         CallFunc_GetAIController_ReturnValue_1;            // 0x28(0x8)(Edit, ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x39(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3A(0x1)(None)
	uint8                                        Pad_4984[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_VariableSet_FollowStoppingDistance_ImplicitCast; // 0x3C(0x4)(None)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast; // 0x40(0x4)(None)
	float                                        K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast; // 0x44(0x4)(None)
	float                                        K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1; // 0x48(0x4)(None)
	float                                        K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1; // 0x4C(0x4)(None)
	float                                        K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1; // 0x50(0x4)(None)
	float                                        K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2; // 0x54(0x4)(None)
};

// 0x118 (0x118 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
struct ADino_Character_BP_C_BPControlRigNotify_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(None)
	class FName                                  NotifyCustomTag;                                   // 0x8(0x8)(None)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x10(0xF0)(None)
	struct FVector                               Velocity;                                          // 0x100(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
struct ADino_Character_BP_C_GetDinoContentData_Params
{
public:
	struct FDinoContentData                      DinoContentData;                                   // 0x0(0x20)(None)
};

// 0x40 (0x40 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
struct ADino_Character_BP_C_BPHandleRightShoulderButton_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(None)
	uint8                                        Pad_499E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(None)
	uint8                                        Pad_499F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(None)
	TArray<class APrimalBuff*>                   CallFunc_GetBuffs_TheBuffs;                        // 0x10(0x10)(Edit, ZeroConstructor)
	class APrimalBuff*                           CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	uint8                                        Pad_49A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuff_DinoTekHelmet_Base_C*            K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base;    // 0x30(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3A(0x1)(None)
	uint8                                        Pad_49A4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated
struct ADino_Character_BP_C_BlendSpaceGenerated_Params
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX
struct ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(None)
	class APrimalCharacter*                      VictimChar;                                        // 0x8(0x8)(None)
};

// 0x274 (0x274 - 0x0)
// Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP
struct ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_49BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x8(0x18)(None)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x20(0x1)(None)
	uint8                                        Pad_49BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x28(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x30(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_TimeSeconds_ReturnValue;                  // 0x38(0x4)(None)
	uint8                                        Pad_49BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x40(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x49(0x1)(None)
	uint8                                        Pad_49C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x50(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x58(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x60(0x1)(None)
	uint8                                        Pad_49C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetCurrentMontage_ReturnValue;            // 0x68(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x70(0x4)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x74(0x1)(None)
	uint8                                        Pad_49C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           K2Node_Event_blendSpace;                           // 0x78(0x8)(ZeroConstructor)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x80(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(None)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x91(0x1)(None)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x92(0x1)(None)
	bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x93(0x1)(None)
	bool                                         CallFunc_Contains_ReturnValue_3;                   // 0x94(0x1)(None)
	bool                                         CallFunc_Contains_ReturnValue_4;                   // 0x95(0x1)(None)
	uint8                                        Pad_49C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(None)
	enum class ENetModeBP                        CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x9C(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9D(0x1)(None)
	uint8                                        Pad_49C4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetComponentsByTag_ReturnValue;           // 0xA0(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0xB0(0x1)(None)
	uint8                                        Pad_49C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0xB8(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       K2Node_DynamicCast_AsScene_Component;              // 0xC0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC8(0x1)(None)
	uint8                                        Pad_49C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xCC(0x4)(None)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0xD0(0x18)(None)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0xE8(0x18)(None)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x100(0x4)(None)
	uint8                                        Pad_49C7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x110(0x60)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x170(0x1)(None)
	uint8                                        Pad_49C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x178(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x180(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x188(0x1)(None)
	bool                                         CallFunc_DoesUseHibernation_ReturnValue;           // 0x189(0x1)(None)
	uint8                                        Pad_49C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_SocketName;                           // 0x18C(0x8)(None)
	uint8                                        Pad_49CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_Event_VictimChar;                           // 0x198(0x8)(Edit, ZeroConstructor)
	struct FLinearColor                          CallFunc_GetFXBloodColor_ReturnValue;              // 0x1A0(0x10)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x1B0(0x1)(None)
	uint8                                        Pad_49CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x1B8(0x8)(None)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x1C0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C9(0x1)(None)
	uint8                                        Pad_49CC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1CC(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1D0(0x1)(None)
	uint8                                        Pad_49CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1D4(0x4)(None)
	double                                       CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x1D8(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x1E0(0x1)(None)
	uint8                                        Pad_49CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x1E8(0x8)(None)
	class FName                                  Temp_name_Variable;                                // 0x1F0(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x1F8(0x8)(None)
	class FName                                  Temp_name_Variable_1;                              // 0x200(0x8)(None)
	class FName                                  Temp_name_Variable_2;                              // 0x208(0x8)(None)
	class FName                                  Temp_name_Variable_3;                              // 0x210(0x8)(None)
	class FName                                  Temp_name_Variable_4;                              // 0x218(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x220(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x228(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x230(0x8)(None)
	float                                        CallFunc_SetLifeSpan_InLifespan_ImplicitCast;      // 0x238(0x4)(None)
	uint8                                        Pad_49CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x240(0x8)(None)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x248(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;    // 0x250(0x8)(None)
	double                                       CallFunc_SelectFloat_B_ImplicitCast_1;             // 0x258(0x8)(None)
	double                                       CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x260(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;    // 0x268(0x8)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x270(0x4)(None)
};

}
}


