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

// 0x130 (0x130 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.LR_FB Offset
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_LR_FB_Offset_Params
{
public:
	struct FVector                               Front_Offset;                                      // 0x0(0x18)(None)
	struct FVector                               Back_Offset;                                       // 0x18(0x18)(None)
	struct FVector                               Offset;                                            // 0x30(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(None)
	class FString                                CallFunc_Split_LeftS;                              // 0x60(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_RightS;                             // 0x70(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x80(0x1)(None)
	uint8                                        Pad_4961[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x88(0x18)(None)
	class FString                                CallFunc_Right_ReturnValue;                        // 0xA0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0xB0(0x18)(None)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xC8(0x1)(None)
	uint8                                        Pad_4962[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Left_ReturnValue;                         // 0xD0(0x10)(None)
	double                                       CallFunc_BreakVector_X_1;                          // 0xE0(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xE8(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xF0(0x8)(None)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0xF8(0x1)(None)
	uint8                                        Pad_4963[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x100(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x118(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewFunction_0
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_NewFunction_0_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(None)
	bool                                         Condition2;                                        // 0x1(0x1)(None)
};

// 0x5D9 (0x5D9 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Do Trace
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Do_Trace_Params
{
public:
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x0(0x8)(Edit, ZeroConstructor)
	class AActor*                                InputPin;                                          // 0x8(0x8)(Edit, ZeroConstructor)
	double                                       BabyScale;                                         // 0x10(0x8)(None)
	bool                                         IsPlayer;                                          // 0x18(0x1)(None)
	uint8                                        Pad_4968[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FootPrintSize;                                     // 0x20(0x8)(None)
	bool                                         Hit_Bool;                                          // 0x28(0x1)(None)
	uint8                                        Pad_4969[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            OutHit;                                            // 0x30(0xF0)(Edit, ZeroConstructor)
	class UMaterialInterface*                    FootPrintMaterialBack;                             // 0x120(0x8)(Edit, ZeroConstructor)
	class UMaterialInterface*                    FootPrintMaterialFront;                            // 0x128(0x8)(Edit, ZeroConstructor)
	class UMaterialInterface*                    MI_Back;                                           // 0x130(0x8)(Edit, ZeroConstructor)
	class UMaterialInterface*                    MI_Front;                                          // 0x138(0x8)(Edit, ZeroConstructor)
	struct FVector                               Back_Offset;                                       // 0x140(0x18)(None)
	struct FVector                               Front_Offset;                                      // 0x158(0x18)(None)
	double                                       Size;                                              // 0x170(0x8)(None)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x178(0x18)(None)
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x190(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x198(0x1)(None)
	uint8                                        Pad_496B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x1A0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A9(0x1)(None)
	uint8                                        Pad_496C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x1B0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B8(0x1)(None)
	uint8                                        Pad_496D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDinoSettings_Base_C*                  K2Node_DynamicCast_AsDino_Settings_Base;           // 0x1C0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1C8(0x1)(None)
	uint8                                        Pad_496E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1D0(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x1E8(0x18)(None)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x200(0x10)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_LR_FB_Offset_Offset;                      // 0x210(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x228(0x18)(None)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x240(0x60)(None)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x2A0(0x18)(None)
	uint8                                        Pad_496F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x2C0(0x80)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x340(0x18)(None)
	uint8                                        Pad_4970[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CallFunc_Matrix_TransformVector_ReturnValue;       // 0x360(0x20)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x380(0x18)(None)
	struct FVector                               CallFunc_Conv_Vector4ToVector_ReturnValue;         // 0x398(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3B0(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x3C8(0x8)(None)
	class FName                                  CallFunc_GetSocketBoneName_ReturnValue;            // 0x3D0(0x8)(None)
	uint8                                        Pad_4971[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x3E0(0x60)(None)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x440(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x458(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x470(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x488(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x4A0(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x4B8(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0x4D0(0x18)(None)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x4E8(0xF0)(None)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x5D8(0x1)(None)
};

// 0x138 (0x138 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Sound
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Spawn_Sound_Params
{
public:
	class USceneComponent*                       Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	double                                       Size;                                              // 0x20(0x8)(None)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x28(0x18)(Edit, ZeroConstructor)
	bool                                         IsPlayer;                                          // 0x40(0x1)(None)
	uint8                                        Pad_497A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x50(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x59(0x1)(None)
	uint8                                        Pad_497B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x60(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x68(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x70(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_2;         // 0x78(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x80(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_2;                     // 0x88(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x90(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x91(0x1)(None)
	uint8                                        Pad_497C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_3;         // 0x98(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_4;         // 0xA0(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_3;                     // 0xA8(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_4;                     // 0xB0(0x8)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xB8(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xC0(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_5;         // 0xC8(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xD0(0x1)(None)
	uint8                                        Pad_497D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue_5;                     // 0xD8(0x8)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xE0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xE8(0x1)(None)
	uint8                                        Pad_497E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xF0(0x18)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0x108(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0x110(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0x118(0x8)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x120(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1; // 0x124(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2; // 0x128(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3; // 0x12C(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4; // 0x130(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5; // 0x134(0x4)(None)
};

// 0x718 (0x718 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyBegin
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor)
	float                                        TotalDuration;                                     // 0x10(0x4)(None)
	uint8                                        Pad_4985[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(Edit, ZeroConstructor, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	bool                                         IsPlayer;                                          // 0x41(0x1)(None)
	uint8                                        Pad_4986[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material_Front;                                    // 0x48(0x8)(Edit, ZeroConstructor)
	class UMaterialInterface*                    Material_Back;                                     // 0x50(0x8)(Edit, ZeroConstructor)
	double                                       Foot_Print_Size;                                   // 0x58(0x8)(None)
	class AActor*                                Owner;                                             // 0x60(0x8)(Edit, ZeroConstructor)
	struct FVector                               Direction;                                         // 0x68(0x18)(None)
	double                                       BabyScale;                                         // 0x80(0x8)(None)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x88(0x18)(Edit, ZeroConstructor)
	double                                       Total_Amount_Mult;                                 // 0xA0(0x8)(None)
	double                                       Foot_Velocity_Mult;                                // 0xA8(0x8)(None)
	class UCurveFloat*                           Curve_foot_vel;                                    // 0xB0(0x8)(Edit, ZeroConstructor)
	class UCurveFloat*                           Curve_foot_size;                                   // 0xB8(0x8)(Edit, ZeroConstructor)
	double                                       Foot_Size_Mult;                                    // 0xC0(0x8)(None)
	double                                       Thatch;                                            // 0xC8(0x8)(None)
	double                                       Sand;                                              // 0xD0(0x8)(None)
	double                                       Pebbles;                                           // 0xD8(0x8)(None)
	double                                       Leaves;                                            // 0xE0(0x8)(None)
	double                                       Grass;                                             // 0xE8(0x8)(None)
	double                                       Friction;                                          // 0xF0(0x8)(None)
	double                                       Dust;                                              // 0xF8(0x8)(None)
	double                                       Bounce;                                            // 0x100(0x8)(None)
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x108(0x8)(Edit, ZeroConstructor)
	struct FColor                                Color;                                             // 0x110(0x4)(None)
	uint8                                        Pad_4987[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     Niagara_Component;                                 // 0x118(0x8)(Edit, ZeroConstructor)
	class FString                                NewLocalVar;                                       // 0x120(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         DebugPrint_;                                       // 0x130(0x1)(None)
	uint8                                        Pad_4988[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x138(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x148(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x150(0x1)(None)
	uint8                                        Pad_4989[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x158(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(None)
	uint8                                        Pad_498A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x164(0x4)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x168(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x169(0x1)(None)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x16A(0x1)(None)
	uint8                                        Pad_498B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x16C(0x4)(None)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x170(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x171(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x172(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x173(0x1)(None)
	uint8                                        Pad_498C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x178(0x18)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x190(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue; // 0x198(0x4)(None)
	uint8                                        Pad_498D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1A0(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1A8(0x1)(None)
	uint8                                        Pad_498E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1AC(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x1B4(0x1)(None)
	uint8                                        Pad_498F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1B8(0x4)(None)
	uint8                                        Pad_4990[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x1C0(0x8)(Edit, ZeroConstructor)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x1C8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1D0(0x1)(None)
	uint8                                        Pad_4991[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWorldSettings*                        CallFunc_K2_GetWorldSettings_ReturnValue;          // 0x1D8(0x8)(Edit, ZeroConstructor)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0x1E0(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E8(0x1)(None)
	uint8                                        Pad_4992[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue;            // 0x1F0(0x18)(None)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x208(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x210(0x1)(None)
	uint8                                        Pad_4993[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNiagaraComponent*>             CallFunc_GetComponentsByTag_ReturnValue;           // 0x218(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNiagaraComponent*                     CallFunc_Array_Get_Item;                           // 0x228(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x230(0x4)(None)
	bool                                         CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue; // 0x234(0x1)(None)
	uint8                                        Pad_4994[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x238(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x240(0x1)(None)
	uint8                                        Pad_4995[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x248(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x250(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x258(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x260(0x8)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x268(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x26C(0x1)(None)
	uint8                                        Pad_4996[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x270(0x4)(None)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x274(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x275(0x1)(None)
	uint8                                        Pad_4997[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x278(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x280(0x1)(None)
	uint8                                        Pad_4998[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Split_LeftS;                              // 0x288(0x10)(Protected, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Split_RightS;                             // 0x298(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x2A8(0x1)(None)
	uint8                                        Pad_4999[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Right_ReturnValue;                        // 0x2B0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Left_ReturnValue;                         // 0x2C0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x2D0(0x1)(None)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x2D1(0x1)(None)
	uint8                                        Pad_499A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2D8(0x18)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x2F0(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x308(0x8)(None)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x310(0x18)(None)
	struct FRotator                              CallFunc_GetSocketRotation_ReturnValue_1;          // 0x328(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x340(0x18)(None)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x358(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x370(0x18)(None)
	double                                       CallFunc_Do_Trace_FootPrintSize;                   // 0x388(0x8)(None)
	bool                                         CallFunc_Do_Trace_Hit_Bool;                        // 0x390(0x1)(None)
	uint8                                        Pad_499B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_Do_Trace_OutHit;                          // 0x398(0xF0)(Edit, ZeroConstructor)
	class UMaterialInterface*                    CallFunc_Do_Trace_FootPrintMaterialBack;           // 0x488(0x8)(Edit, ZeroConstructor)
	class UMaterialInterface*                    CallFunc_Do_Trace_FootPrintMaterialFront;          // 0x490(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x498(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x499(0x1)(None)
	uint8                                        Pad_499C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x49C(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x4A0(0x4)(None)
	uint8                                        Pad_499D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x4A8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x4C0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x4D8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x4F0(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x508(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x510(0x8)(Edit, ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x518(0x8)(Edit, ZeroConstructor)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x520(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x528(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x530(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x534(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x538(0x4)(None)
	uint8                                        Pad_49A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x540(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x558(0x18)(None)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x570(0x10)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x580(0x8)(None)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x588(0xF0)(Edit, ZeroConstructor)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x678(0x66)(None)
	uint8                                        Pad_49A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x6E0(0x1)(None)
	uint8                                        Pad_49A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x6E8(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x6F0(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x6F8(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x700(0x8)(None)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x708(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x710(0x4)(None)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x714(0x4)(None)
};

// 0x39 (0x39 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyEnd
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(None)
	bool                                         ReturnValue;                                       // 0x38(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.GetNotifyName
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyTick
struct UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyTick_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor)
	float                                        FrameDeltaTime;                                    // 0x10(0x4)(None)
	uint8                                        Pad_49A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(Edit, ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_49A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                Mesh_Comp;                                         // 0x48(0x8)(None)
	double                                       Line_End_Distance;                                 // 0x50(0x8)(None)
};

}
}


