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

// 0x118 (0x118 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Spawn_Sound
struct UBP_VFX_Spawn_on_AnimNotify_C_Spawn_Sound_Params
{
public:
	class USceneComponent*                       Actor;                                             // 0x0(0x8)(Edit, ZeroConstructor)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	double                                       Speed;                                             // 0x20(0x8)(None)
	double                                       Size;                                              // 0x28(0x8)(None)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x30(0x18)(Edit, ZeroConstructor)
	bool                                         IsPlayer;                                          // 0x48(0x1)(None)
	uint8                                        Pad_49D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x58(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x61(0x1)(None)
	uint8                                        Pad_49D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x68(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x78(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_2;         // 0x80(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x89(0x1)(None)
	uint8                                        Pad_49D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_3;         // 0x90(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_4;         // 0x98(0x8)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xA0(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0xA8(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_5;         // 0xB0(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0xB8(0x1)(None)
	uint8                                        Pad_49D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xC0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xC8(0x1)(None)
	uint8                                        Pad_49DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xD0(0x18)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0xE8(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0xF0(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0xF8(0x8)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x100(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1; // 0x104(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2; // 0x108(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3; // 0x10C(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4; // 0x110(0x4)(None)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5; // 0x114(0x4)(None)
};

// 0x9C8 (0x9C8 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyBegin
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor)
	float                                        TotalDuration;                                     // 0x10(0x4)(None)
	uint8                                        Pad_4A00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(Edit, ZeroConstructor, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_4A02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AnimName;                                          // 0x48(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         ShowFootprints;                                    // 0x58(0x1)(None)
	bool                                         IsPlayer;                                          // 0x59(0x1)(None)
	uint8                                        Pad_4A03[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        Niagara_System_To_Play;                            // 0x60(0x8)(Edit, ZeroConstructor)
	class UNiagaraSystem*                        Niagara_System_Player;                             // 0x68(0x8)(Edit, ZeroConstructor)
	double                                       Baby_Scale;                                        // 0x70(0x8)(None)
	double                                       Dino_Size_Mult;                                    // 0x78(0x8)(None)
	double                                       Dino_Amount_Mult;                                  // 0x80(0x8)(None)
	double                                       Dino_Vel_Mult;                                     // 0x88(0x8)(None)
	struct FAudio_Ground_Collection              StepSounds;                                        // 0x90(0x18)(Edit, ZeroConstructor)
	double                                       Total_Amount_Mult;                                 // 0xA8(0x8)(None)
	double                                       Foot_Velocity_Mult;                                // 0xB0(0x8)(None)
	class UCurveFloat*                           Curve_foot_vel;                                    // 0xB8(0x8)(Edit, ZeroConstructor)
	class UCurveFloat*                           Curve_foot_size;                                   // 0xC0(0x8)(Edit, ZeroConstructor)
	double                                       Foot_Size_Mult;                                    // 0xC8(0x8)(None)
	double                                       Thatch;                                            // 0xD0(0x8)(None)
	double                                       Sand;                                              // 0xD8(0x8)(None)
	double                                       Pebbles;                                           // 0xE0(0x8)(None)
	double                                       Leaves;                                            // 0xE8(0x8)(None)
	double                                       Grass;                                             // 0xF0(0x8)(None)
	double                                       Friction;                                          // 0xF8(0x8)(None)
	double                                       Dust;                                              // 0x100(0x8)(None)
	double                                       Bounce;                                            // 0x108(0x8)(None)
	class USkeletalMeshComponent*                SK_Mesh_Comp;                                      // 0x110(0x8)(Edit, ZeroConstructor)
	struct FColor                                Color;                                             // 0x118(0x4)(None)
	uint8                                        Pad_4A05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     Niagara_Component;                                 // 0x120(0x8)(ZeroConstructor)
	class FString                                NewLocalVar;                                       // 0x128(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x138(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x148(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x158(0x18)(None)
	float                                        CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue; // 0x170(0x4)(None)
	uint8                                        Pad_4A06[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x178(0x8)(Edit, ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x180(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(None)
	uint8                                        Pad_4A07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x18C(0x4)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x190(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x191(0x1)(None)
	bool                                         CallFunc_IsShooterCharacter_ReturnValue;           // 0x192(0x1)(None)
	uint8                                        Pad_4A08[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x194(0x4)(None)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x198(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A0(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x1A1(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A2(0x1)(None)
	uint8                                        Pad_4A09[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x1A8(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1B0(0x1)(None)
	uint8                                        Pad_4A0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x1B8(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x1C0(0x18)(None)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x1D8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(None)
	uint8                                        Pad_4A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x1E8(0x18)(None)
	struct FVector                               CallFunc_Cross_VectorVector_ReturnValue;           // 0x200(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x218(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x220(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x228(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x230(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x238(0x1)(None)
	uint8                                        Pad_4A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x240(0x8)(None)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x248(0x66)(Edit, ZeroConstructor)
	uint8                                        Pad_4A0D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2B0(0x1)(None)
	uint8                                        Pad_4A0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x2B8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x2C0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x2C8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x2D0(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D8(0x1)(None)
	uint8                                        Pad_4A0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_4;       // 0x2E0(0x8)(None)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x2E8(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x2F0(0x8)(Edit, ZeroConstructor)
	struct FBoxSphereBounds                      CallFunc_GetImportedBounds_ReturnValue;            // 0x2F8(0x38)(None)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test_1;           // 0x330(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x338(0x1)(None)
	uint8                                        Pad_4A10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakBoxSphereBounds_Origin;              // 0x340(0x18)(None)
	struct FVector                               CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x358(0x18)(None)
	float                                        CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x370(0x4)(None)
	uint8                                        Pad_4A11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADino_Character_BP_C*                  K2Node_DynamicCast_AsDino_Character_BP;            // 0x378(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x380(0x1)(None)
	uint8                                        Pad_4A12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x384(0x4)(None)
	struct FDinoContentData                      CallFunc_GetDinoContentData_DinoContentData;       // 0x388(0x20)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_5;       // 0x3A8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_6;       // 0x3B0(0x8)(None)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0x3B8(0x4)(None)
	uint8                                        Pad_4A13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_7;       // 0x3C0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_8;       // 0x3C8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_9;       // 0x3D0(0x8)(None)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x3D8(0x10)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x3E8(0x18)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x400(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x408(0x18)(None)
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x420(0x18)(None)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_2;           // 0x438(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x450(0x18)(None)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x468(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x469(0x1)(None)
	uint8                                        Pad_4A14[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x470(0x18)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x488(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x490(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x491(0x1)(None)
	uint8                                        Pad_4A15[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x4A0(0x60)(None)
	struct FMatrix                               CallFunc_Conv_TransformToMatrix_ReturnValue;       // 0x500(0x80)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x580(0x8)(None)
	uint8                                        Pad_4A16[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CallFunc_Matrix_TransformVector_ReturnValue;       // 0x590(0x20)(None)
	class FName                                  CallFunc_GetSocketBoneName_ReturnValue;            // 0x5B0(0x8)(None)
	struct FVector                               CallFunc_Conv_Vector4ToVector_ReturnValue;         // 0x5B8(0x18)(None)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x5D0(0x60)(None)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x630(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x648(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x660(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x678(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x690(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x6A8(0x18)(None)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x6C0(0xF0)(Edit, ZeroConstructor)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x7B0(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x7B1(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x7B2(0x1)(None)
	uint8                                        Pad_4A17[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x7B4(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x7B8(0x4)(None)
	uint8                                        Pad_4A18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x7C0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x7D8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x7F0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x808(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x820(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x828(0x8)(Edit, ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x830(0x8)(Edit, ZeroConstructor)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x838(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x840(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x848(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x84C(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x850(0x4)(None)
	uint8                                        Pad_4A19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x858(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x870(0x18)(None)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x888(0x10)(None)
	struct FRotator                              CallFunc_MakeRotFromYX_ReturnValue;                // 0x898(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x8B0(0x8)(None)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x8B8(0x18)(None)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x8D0(0x66)(Edit, ZeroConstructor)
	uint8                                        Pad_4A1A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x938(0x1)(None)
	uint8                                        Pad_4A1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x940(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x948(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x950(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x958(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x960(0x8)(None)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x968(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x970(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x974(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;    // 0x978(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;    // 0x97C(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4;    // 0x980(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x984(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x988(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x98C(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x990(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_4;  // 0x994(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_5;  // 0x998(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_6;  // 0x99C(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_7;  // 0x9A0(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_8;  // 0x9A4(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_9;  // 0x9A8(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_10; // 0x9AC(0x4)(None)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x9B0(0x8)(None)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x9B8(0x8)(None)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x9C0(0x8)(None)
};

// 0x39 (0x39 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyEnd
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(None)
	bool                                         ReturnValue;                                       // 0x38(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.GetNotifyName
struct UBP_VFX_Spawn_on_AnimNotify_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyTick
struct UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyTick_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(Edit, ZeroConstructor)
	float                                        FrameDeltaTime;                                    // 0x10(0x4)(None)
	uint8                                        Pad_4A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x28)(None)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_4A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Line_End_Distance;                                 // 0x48(0x8)(None)
};

}
}


