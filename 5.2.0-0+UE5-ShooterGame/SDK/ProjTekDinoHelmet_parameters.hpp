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

// 0x5A (0x5A - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.BPIgnoreRadialDamageVictim
struct AProjTekDinoHelmet_C_BPIgnoreRadialDamageVictim_Params
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_260B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xC(0x8)(None)
	bool                                         CallFunc_BPIsA_ReturnValue;                        // 0x14(0x1)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x15(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(None)
	uint8                                        Pad_260C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(None)
	uint8                                        Pad_260D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x50(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x58(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x59(0x1)(None)
};

// 0xF0 (0xF0 - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode
struct AProjTekDinoHelmet_C_OnExplode_Params
{
public:
	struct FHitResult                            Result;                                            // 0x0(0xF0)(None)
};

// 0x21D (0x21D - 0x0)
// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet
struct AProjTekDinoHelmet_C_ExecuteUbergraph_ProjTekDinoHelmet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(None)
	uint8                                        Pad_2618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(None)
	struct FHitResult                            K2Node_Event_Result;                               // 0x28(0xF0)(ZeroConstructor)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x118(0x18)(None)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x130(0x1)(None)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x131(0x1)(None)
	uint8                                        Pad_2619[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x134(0x4)(None)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x138(0x4)(None)
	uint8                                        Pad_261A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x140(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x158(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x170(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x188(0x18)(None)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x1A0(0x8)(ZeroConstructor)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x1A8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x1B0(0x8)(ZeroConstructor)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x1B8(0x8)(None)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x1C0(0x8)(None)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x1C8(0x4)(None)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x1CC(0x4)(None)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x1D0(0x4)(None)
	uint8                                        Pad_261D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1D8(0x18)(None)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1F0(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x208(0x8)(None)
	class APrimalStructure*                      K2Node_DynamicCast_AsPrimal_Structure;             // 0x210(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x218(0x1)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x219(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x21A(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21C(0x1)(None)
};

}
}


