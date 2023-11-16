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

// 0x314 (0x314 - 0x0)
// Function FL_ControlRigFX.FL_ControlRigFX_C.Spawn Phys Mat VFX
struct UFL_ControlRigFX_C_Spawn_Phys_Mat_VFX_Params
{
public:
	class FString                                Bone_Name;                                         // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, PersistentInstance)
	class APrimalCharacter*                      Creature;                                          // 0x10(0x8)(Edit, ZeroConstructor)
	class UPhysicalMaterial*                     Phys_Material;                                     // 0x18(0x8)(Edit, ZeroConstructor)
	struct FVector                               Ground_Normal;                                     // 0x20(0x18)(None)
	struct FVector                               Location;                                          // 0x38(0x18)(None)
	class UNiagaraSystem*                        NS;                                                // 0x50(0x8)(Edit, ZeroConstructor)
	double                                       Amount_Mult;                                       // 0x58(0x8)(None)
	double                                       Vel_Mult;                                          // 0x60(0x8)(None)
	double                                       Size_Mult;                                         // 0x68(0x8)(None)
	bool                                         Attached;                                          // 0x70(0x1)(None)
	uint8                                        Pad_3D49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Bone_Velocity;                                     // 0x78(0x18)(None)
	class UObject*                               __WorldContext;                                    // 0x90(0x8)(Edit, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x98(0x18)(None)
	class UNiagaraComponent*                     NS_Spawned;                                        // 0xB0(0x8)(Edit, ZeroConstructor)
	struct FColor                                Color;                                             // 0xB8(0x4)(None)
	uint8                                        Pad_3D4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Bounce;                                            // 0xC0(0x8)(None)
	double                                       Friction;                                          // 0xC8(0x8)(None)
	double                                       Pebbles;                                           // 0xD0(0x8)(None)
	double                                       Thatch;                                            // 0xD8(0x8)(None)
	double                                       Grass;                                             // 0xE0(0x8)(None)
	double                                       Leaves;                                            // 0xE8(0x8)(None)
	double                                       Dust;                                              // 0xF0(0x8)(None)
	double                                       Sand;                                              // 0xF8(0x8)(None)
	double                                       Size_Multiply;                                     // 0x100(0x8)(None)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow;           // 0x108(0x66)(Edit, ZeroConstructor)
	uint8                                        Pad_3D4B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x170(0x1)(None)
	uint8                                        Pad_3D4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x178(0x18)(None)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x190(0x10)(None)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x1A0(0x8)(Edit, ZeroConstructor)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1A8(0x8)(None)
	struct FStruct_Ground_Attributes             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x1B0(0x66)(Edit, ZeroConstructor)
	uint8                                        Pad_3D4D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x218(0x1)(None)
	uint8                                        Pad_3D4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetComponentVelocity_ReturnValue;         // 0x220(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x238(0x8)(None)
	class USoundBase*                            Temp_object_Variable;                              // 0x240(0x8)(Edit, ZeroConstructor)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x248(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x250(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x258(0x18)(None)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x270(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x278(0x8)(None)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x280(0x8)(Edit, ZeroConstructor)
	int64                                        CallFunc_FFloor64_ReturnValue;                     // 0x288(0x8)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x290(0x4)(None)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x294(0x10)(None)
	uint8                                        Pad_3D4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x2A8(0x8)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2B0(0x18)(None)
	int32                                        Temp_int_Variable;                                 // 0x2C8(0x4)(None)
	uint8                                        Pad_3D50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0x2D0(0x8)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x2D8(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x2DC(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x2E0(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x2E4(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_4;  // 0x2E8(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_5;  // 0x2EC(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_6;  // 0x2F0(0x4)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_7;  // 0x2F4(0x4)(None)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x2F8(0x8)(None)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x300(0x8)(None)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x308(0x8)(None)
	float                                        CallFunc_SetVariableFloat_InValue_ImplicitCast_8;  // 0x310(0x4)(None)
};

// 0x4CC (0x4CC - 0x0)
// Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify
struct UFL_ControlRigFX_C_ControlRigNotify_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(None)
	class FName                                  CustomTag;                                         // 0x8(0x8)(None)
	struct FHitResult                            HitResult;                                         // 0x10(0xF0)(Edit, ZeroConstructor)
	class APrimalCharacter*                      PrimalCharacter;                                   // 0x100(0x8)(Edit, ZeroConstructor)
	struct FVector                               BoneVelocity;                                      // 0x108(0x18)(None)
	class UObject*                               __WorldContext;                                    // 0x120(0x8)(Edit, ZeroConstructor)
	bool                                         bContainsDeath;                                    // 0x128(0x1)(None)
	uint8                                        Pad_3D51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     Phys_Material;                                     // 0x130(0x8)(Edit, ZeroConstructor)
	struct FVector                               Normal;                                            // 0x138(0x18)(None)
	struct FVector                               Velocity;                                          // 0x150(0x18)(None)
	struct FVector                               Location;                                          // 0x168(0x18)(None)
	class APrimalCharacter*                      Character;                                         // 0x180(0x8)(ZeroConstructor)
	class FString                                bone;                                              // 0x188(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x198(0x1)(None)
	uint8                                        Pad_3D52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x1A0(0x18)(None)
	double                                       CallFunc_GetLastRenderTimeNoShadow_ReturnValue;    // 0x1B8(0x8)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1C0(0x18)(None)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x1D8(0x4)(None)
	uint8                                        Pad_3D53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x1E0(0x18)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1F8(0x1)(None)
	uint8                                        Pad_3D54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x200(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x210(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x220(0x1)(None)
	uint8                                        Pad_3D55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x228(0x8)(None)
	double                                       CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x230(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x238(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x240(0x1)(None)
	uint8                                        Pad_3D56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x248(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x250(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x251(0x1)(None)
	uint8                                        Pad_3D57[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x258(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_LeftS;                              // 0x268(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_RightS;                             // 0x278(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x288(0x1)(None)
	uint8                                        Pad_3D58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x290(0x10)(Edit, ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2A0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x2B0(0xF0)(Edit, ZeroConstructor)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x3A0(0x1)(None)
	uint8                                        Pad_3D59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x3A8(0x10)(None)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x3B8(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x3B9(0x1)(None)
	uint8                                        Pad_3D5A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x3BC(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x3C0(0x4)(None)
	uint8                                        Pad_3D5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x3C8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x3E0(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x3F8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x410(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x428(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x430(0x8)(Edit, ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x438(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x440(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x448(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x450(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x454(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x458(0x4)(None)
	uint8                                        Pad_3D5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x460(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x478(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x490(0x8)(None)
	struct FStruct_VFX_Body_Drop                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x498(0x10)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x4A8(0x1)(None)
	uint8                                        Pad_3D5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x4B0(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x4B8(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x4C0(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x4C4(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x4C8(0x4)(None)
};

}
}


