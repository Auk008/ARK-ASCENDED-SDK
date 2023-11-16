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

// 0x8 (0x8 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity
struct APreviewScene_Base_C_SetDebugLightIntensity_Params
{
public:
	double                                       NewIntensity;                                      // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
struct APreviewScene_Base_C_SetDebugLightRotation_Params
{
public:
	struct FRotator                              NewRotation;                                       // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
struct APreviewScene_Base_C_UpdateFloorLocation_Params
{
public:
	bool                                         IsFemale;                                          // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
struct APreviewScene_Base_C_NotifySetupPreviewScene_Params
{
public:
	class UMeshComponent*                        ForMeshComp;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	TArray<class USceneComponent*>               ForChildComps;                                     // 0x8(0x10)(Edit, ZeroConstructor)
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
struct APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x15C (0x15C - 0x0)
// Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
struct APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3E33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x8(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x20(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x38(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x58(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x5C(0x1)(None)
	uint8                                        Pad_3E34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshComponent*                        K2Node_Event_ForMeshComp;                          // 0x60(0x8)(Edit, ZeroConstructor)
	TArray<class USceneComponent*>               K2Node_Event_ForChildComps;                        // 0x68(0x10)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_Event_ForPC;                                // 0x78(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x80(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8C(0x1)(None)
	uint8                                        Pad_3E35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x90(0x4)(None)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x94(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x99(0x1)(None)
	uint8                                        Pad_3E36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetRelativeTransform_ReturnValue;         // 0xA0(0x60)(None)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x100(0x18)(None)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x118(0x18)(None)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x130(0x18)(None)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x148(0x8)(None)
	float                                        K2Node_Event_DeltaTime;                            // 0x150(0x4)(None)
	float                                        K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast; // 0x154(0x4)(None)
	float                                        K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast; // 0x158(0x4)(None)
};

}
}


