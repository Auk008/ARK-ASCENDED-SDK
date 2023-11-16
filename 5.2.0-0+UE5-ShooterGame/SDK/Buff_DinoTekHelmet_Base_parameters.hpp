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

// 0x128 (0x128 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive
struct ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(None)
	bool                                         ActiveStorm;                                       // 0x1(0x1)(None)
	uint8                                        Pad_4959[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	uint8                                        Pad_495A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(None)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x30(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_BreakVector_X;                            // 0x38(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x40(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x48(0x8)(None)
	class ADayCycleManager*                      CallFunc_GetDayCycleManager_ReturnValue;           // 0x50(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x58(0x18)(None)
	TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface; // 0x70(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(None)
	uint8                                        Pad_495B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1; // 0x88(0x10)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(None)
	uint8                                        Pad_495C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetElectricalStormValues_LocationRegions; // 0xA0(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetElectricalStormValues_CurrentRegion;   // 0xB0(0x4)(None)
	uint8                                        Pad_495D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetElectricalStormValues_Radius;          // 0xB8(0x8)(None)
	bool                                         CallFunc_GetIsElectricalStorm_Return;              // 0xC0(0x1)(None)
	uint8                                        Pad_495E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xC8(0x8)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xD0(0x18)(None)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0xE8(0x1)(None)
	uint8                                        Pad_495F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X_1;                          // 0xF0(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xF8(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x100(0x8)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x108(0x18)(None)
	bool                                         CallFunc_IsDistanceLessThan_ReturnValue;           // 0x120(0x1)(None)
	uint8                                        Pad_4960[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_IsDistanceLessThan_Distance_ImplicitCast; // 0x124(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
struct ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params
{
public:
	double                                       OutSocketClampDelta;                               // 0x0(0x8)(None)
};

// 0xD (0xD - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
struct ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC(0x1)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
struct ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params
{
public:
	class AShooterHUD*                           HUD;                                               // 0x0(0x8)(None)
	float                                        XPos;                                              // 0x8(0x4)(None)
	float                                        YPos;                                              // 0xC(0x4)(None)
	float                                        ScaleMult;                                         // 0x10(0x4)(None)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x14(0x10)(None)
	uint8                                        Pad_4964[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(None)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x30(0x4)(None)
	uint8                                        Pad_4965[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x38(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x48(0x8)(None)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x50(0x4)(None)
	int32                                        CallFunc_GetWeaponClipAmmo_ReturnValue;            // 0x54(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x58(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x60(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x68(0x8)(None)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x70(0x4)(None)
	uint8                                        Pad_4966[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x78(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(None)
	float                                        CallFunc_BPDrawTextCentered_ReturnValue;           // 0x98(0x4)(None)
	uint8                                        Pad_4967[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0xA0(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0xA8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xB0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0xB8(0x8)(None)
	float                                        CallFunc_BPDrawTextCentered_Y_ImplicitCast;        // 0xC0(0x4)(None)
	float                                        CallFunc_BPDrawTextCentered_X_ImplicitCast;        // 0xC4(0x4)(None)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0xC8(0x8)(None)
};

// 0x429 (0x429 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
struct ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params
{
public:
	struct FVector                               AimAtLoc;                                          // 0x0(0x18)(None)
	struct FVector                               ServerSpawnAtLoc;                                  // 0x18(0x18)(None)
	bool                                         bAllowed;                                          // 0x30(0x1)(None)
	bool                                         RetVal;                                            // 0x31(0x1)(None)
	uint8                                        Pad_4972[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x38(0x10)(Edit, ZeroConstructor, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0x48(0x8)(Edit, ZeroConstructor)
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x50(0x8)(Edit, ZeroConstructor)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x58(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(None)
	uint8                                        Pad_4973[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x70(0x60)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xD0(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xE8(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x100(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x118(0x18)(None)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x130(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x138(0x1)(None)
	uint8                                        Pad_4974[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x140(0xF0)(ZeroConstructor)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x230(0x1)(None)
	uint8                                        Pad_4975[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0x240(0x60)(None)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x2A0(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x2B8(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x2D0(0x18)(None)
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x2E8(0x10)(Edit, ZeroConstructor)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_1;                 // 0x2F8(0xF0)(ZeroConstructor)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_1;            // 0x3E8(0x1)(None)
	uint8                                        Pad_4977[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x3F0(0x8)(Edit, ZeroConstructor)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x3F8(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x400(0x18)(None)
	class AStructurePreventionZoneVolume*        CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue; // 0x418(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x420(0x1)(None)
	uint8                                        Pad_4978[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_IsChildOfClassesSoftRef_ReturnValue;      // 0x424(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x428(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
struct ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
struct ABuff_DinoTekHelmet_Base_C_SetTargeting_Params
{
public:
	bool                                         bTargetingEnabled;                                 // 0x0(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(None)
};

// 0x104 (0x104 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
struct ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(None)
	uint8                                        Pad_49AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	uint8                                        Pad_49AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x18(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character_1;      // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(None)
	uint8                                        Pad_49AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X;                            // 0x30(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x38(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x40(0x8)(None)
	double                                       CallFunc_BreakVector_X_1;                          // 0x48(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x50(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x58(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x60(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x68(0x8)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x70(0x18)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x88(0x18)(None)
	struct FVector                               K2Node_Select_Default;                             // 0xA0(0x18)(None)
	struct FVector                               K2Node_Select_Default_1;                           // 0xB8(0x18)(None)
	struct FVector                               CallFunc_VInterpTo_Constant_ReturnValue;           // 0xD0(0x18)(None)
	struct FVector                               CallFunc_VInterpTo_Constant_ReturnValue_1;         // 0xE8(0x18)(None)
	float                                        CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast; // 0x100(0x4)(None)
};

// 0x3A1 (0x3A1 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
struct ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params
{
public:
	bool                                         bDidAttack;                                        // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(None)
	uint8                                        Pad_49B4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(None)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(None)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x14(0x8)(None)
	uint8                                        Pad_49B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_49B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff; // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue; // 0x38(0x1)(None)
	uint8                                        Pad_49B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x3C(0x8)(None)
	uint8                                        Pad_49B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(None)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x60(0x8)(ZeroConstructor)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x68(0x10)(Edit, ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwnerController_ReturnValue;           // 0x78(0x8)(Edit, ZeroConstructor)
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0x80(0x8)(Edit, ZeroConstructor)
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x88(0x8)(Edit, ZeroConstructor)
	struct FRotator                              CallFunc_GetCameraRotation_ReturnValue;            // 0x90(0x18)(None)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0xA8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB0(0x1)(None)
	uint8                                        Pad_49B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0xB8(0x18)(None)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xD0(0x60)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x130(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x148(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x160(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x178(0x18)(None)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x190(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1A8(0x18)(None)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x1C0(0xF0)(Edit, ZeroConstructor)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x2B0(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x2B1(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x2B2(0x1)(None)
	uint8                                        Pad_49BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x2B4(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x2B8(0x4)(None)
	uint8                                        Pad_49BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x2C0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x2D8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x2F0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x308(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x320(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x328(0x8)(Edit, ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x330(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x338(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x340(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x348(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x34C(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x350(0x4)(None)
	uint8                                        Pad_49BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x358(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x370(0x18)(None)
	struct FVector                               K2Node_Select_Default_1;                           // 0x388(0x18)(None)
	bool                                         CallFunc_BPFastTrace_ReturnValue;                  // 0x3A0(0x1)(None)
};

// 0x44 (0x44 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
struct ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params
{
public:
	class UAnimMontage*                          PlayAnim;                                          // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(None)
	uint8                                        Pad_49D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	uint8                                        Pad_49D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0x20(0x8)(Edit, ZeroConstructor)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_49D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x38(0x8)(None)
	float                                        CallFunc_Montage_Play_ReturnValue;                 // 0x40(0x4)(None)
};

// 0x43 (0x43 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
struct ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params
{
public:
	class UPrimalItem*                           TekSaddleItem;                                     // 0x0(0x8)(Edit, ZeroConstructor)
	class UPrimalItem*                           RetVal;                                            // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(None)
	uint8                                        Pad_49DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(None)
	uint8                                        Pad_49DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(None)
	uint8                                        Pad_49DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_49DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(None)
	class UPrimalItem*                           CallFunc_Array_Get_Item;                           // 0x38(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x42(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
struct ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params
{
public:
	struct FVector                               AimAtLoc;                                          // 0x0(0x18)(None)
	struct FVector                               ServerSpawnAtLoc;                                  // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
struct ABuff_DinoTekHelmet_Base_C_DoAttack_Params
{
public:
	struct FVector                               AimAtLoc;                                          // 0x0(0x18)(None)
	bool                                         bLeftSide;                                         // 0x18(0x1)(None)
	uint8                                        Pad_49DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ServerSpawnAtLoc;                                  // 0x20(0x18)(None)
};

// 0x36C (0x36C - 0x0)
// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base
struct ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	uint8                                        Pad_49E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x8(0x8)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(None)
	uint8                                        Pad_49E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x18(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x20(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x21(0x1)(None)
	uint8                                        Pad_49E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x28(0x8)(None)
	struct FVector                               K2Node_CustomEvent_AimAtLoc_1;                     // 0x30(0x18)(None)
	struct FVector                               K2Node_CustomEvent_ServerSpawnAtLoc_1;             // 0x48(0x18)(None)
	bool                                         CallFunc_IsAllowedToFire_bAllowed;                 // 0x60(0x1)(None)
	uint8                                        Pad_49E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_AimAtLoc;                       // 0x68(0x18)(None)
	bool                                         K2Node_CustomEvent_bLeftSide;                      // 0x80(0x1)(None)
	uint8                                        Pad_49E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_ServerSpawnAtLoc;               // 0x88(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA0(0x1)(None)
	uint8                                        Pad_49E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_1;                              // 0xA4(0x8)(None)
	uint8                                        Pad_49E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetTekSaddleItem_TekSaddleItem;           // 0xB0(0x8)(ZeroConstructor)
	class UActorComponent*                       CallFunc_GetAttachedComponent_ReturnValue;         // 0xB8(0x8)(ZeroConstructor)
	class FName                                  K2Node_Select_Default;                             // 0xC0(0x8)(None)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0xC8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(None)
	uint8                                        Pad_49E7[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xE0(0x60)(None)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x140(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x158(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x170(0x18)(None)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x188(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x190(0x1)(None)
	uint8                                        Pad_49E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll;                        // 0x194(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x198(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x19C(0x4)(None)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x1A0(0x18)(None)
	class AActor*                                CallFunc_SpawnActorDeferred_ReturnValue;           // 0x1B8(0x8)(ZeroConstructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1C0(0x18)(None)
	class AShooterProjectile*                    K2Node_DynamicCast_AsShooter_Projectile;           // 0x1D8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E0(0x1)(None)
	uint8                                        Pad_49E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1E8(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x200(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x218(0x18)(None)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x230(0x18)(None)
	class UAnimMontage*                          K2Node_Select_Default_1;                           // 0x248(0x8)(ZeroConstructor)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x250(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x254(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x258(0x4)(None)
	uint8                                        Pad_49EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x260(0x8)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_2;                // 0x268(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x269(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_3;                // 0x26A(0x1)(None)
	uint8                                        Pad_49EB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x270(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x278(0x1)(None)
	uint8                                        Pad_49EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x280(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x288(0x1)(None)
	uint8                                        Pad_49ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemArmor_SaddleGeneric_Tek_C*  K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek; // 0x290(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x298(0x1)(None)
	uint8                                        Pad_49EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x2A0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x2A8(0x1)(None)
	uint8                                        Pad_49EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x2B0(0x8)(ZeroConstructor)
	bool                                         CallFunc_CanElementDecrease_CanDecrease;           // 0x2B8(0x1)(None)
	uint8                                        Pad_49F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x2C0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x2C8(0x1)(None)
	uint8                                        Pad_49F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x2D0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x2D8(0x1)(None)
	bool                                         CallFunc_IsShipping_ReturnValue;                   // 0x2D9(0x1)(None)
	bool                                         CallFunc_HasEngram_ReturnValue;                    // 0x2DA(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2DB(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2DC(0x1)(None)
	uint8                                        Pad_49F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character_1;           // 0x2E0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x2E8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2EA(0x1)(None)
	uint8                                        Pad_49F3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x2F0(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2F8(0x1)(None)
	uint8                                        Pad_49F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x300(0x8)(None)
	double                                       CallFunc_GetSocketClampDelta_OutSocketClampDelta;  // 0x308(0x8)(None)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x310(0x1)(None)
	uint8                                        Pad_49F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_ClampRotAxis_ReturnValue;                 // 0x314(0x4)(None)
	float                                        CallFunc_ClampRotAxis_ReturnValue_1;               // 0x318(0x4)(None)
	bool                                         CallFunc_IsElectricalStormActive_Return;           // 0x31C(0x1)(None)
	uint8                                        Pad_49F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x320(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x338(0x1)(None)
	uint8                                        Pad_49F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue_1;       // 0x340(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x358(0x1)(None)
	uint8                                        Pad_49F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;  // 0x35C(0x4)(None)
	float                                        CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1; // 0x360(0x4)(None)
	float                                        CallFunc_ClampRotAxis_MaxDiff_ImplicitCast;        // 0x364(0x4)(None)
	float                                        CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1;      // 0x368(0x4)(None)
};

}
}


