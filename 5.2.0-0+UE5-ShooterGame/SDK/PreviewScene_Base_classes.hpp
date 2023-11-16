#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x600 - 0x4B8)
// BlueprintGeneratedClass PreviewScene_Base.PreviewScene_Base_C
class APreviewScene_Base_C : public APrimalPreviewSceneSetup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(None)
	class USpotLightComponent*                   TopLight;                                          // 0x4C0(0x8)(Edit, ZeroConstructor)
	class UBillboardComponent*                   Billboard;                                         // 0x4C8(0x8)(Edit, ZeroConstructor)
	class UArrowComponent*                       Arrow3;                                            // 0x4D0(0x8)(Edit, ZeroConstructor)
	class UArrowComponent*                       Arrow;                                             // 0x4D8(0x8)(Edit, ZeroConstructor)
	class USpotLightComponent*                   KeyLight4;                                         // 0x4E0(0x8)(Edit, ZeroConstructor)
	class UArrowComponent*                       Arrow2;                                            // 0x4E8(0x8)(Edit, ZeroConstructor)
	class USpotLightComponent*                   KeyLight2;                                         // 0x4F0(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       KeyLight2_Parent;                                  // 0x4F8(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       TopLight_Parent;                                   // 0x500(0x8)(Edit, ZeroConstructor)
	class USpotLightComponent*                   BackgroundLight;                                   // 0x508(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       BackgroundLight_Parent;                            // 0x510(0x8)(Edit, ZeroConstructor)
	class USpotLightComponent*                   KeyLight3;                                         // 0x518(0x8)(Edit, ZeroConstructor)
	class UArrowComponent*                       Arrow1;                                            // 0x520(0x8)(Edit, ZeroConstructor)
	class USpotLightComponent*                   KeyLight1;                                         // 0x528(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       KeyLight1_Parent;                                  // 0x530(0x8)(Edit, ZeroConstructor)
	class UPointLightComponent*                  AmbientLight;                                      // 0x538(0x8)(Edit, ZeroConstructor)
	class UPointLightComponent*                  AmbientLight2;                                     // 0x540(0x8)(Edit, ZeroConstructor)
	class UPointLightComponent*                  AmbientLight1;                                     // 0x548(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       LightParent;                                       // 0x550(0x8)(Edit, ZeroConstructor)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x558(0x8)(Edit, ZeroConstructor)
	class UPostProcessComponent*                 PostProcess;                                       // 0x560(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x568(0x8)(Edit, ZeroConstructor)
	bool                                         bDebugComponents;                                  // 0x570(0x1)(None)
	uint8                                        Pad_3E38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshComponent*                        For_Mesh_Comp;                                     // 0x578(0x8)(ZeroConstructor)
	double                                       CameraDistance;                                    // 0x580(0x8)(None)
	bool                                         UseSimpleDof;                                      // 0x588(0x1)(None)
	uint8                                        Pad_3E39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CameraSimpleDofAperature;                          // 0x590(0x8)(None)
	uint8                                        Pad_3E3A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CameraSimpleDofTarget;                             // 0x5A0(0x60)(None)

	static class UClass* StaticClass();
	static class APreviewScene_Base_C* GetDefaultObj();

	void SetDebugLightIntensity(double NewIntensity);
	void SetDebugLightRotation(const struct FRotator& NewRotation);
	void DebugLights();
	void UpdateFloorLocation(bool IsFemale);
	void NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, const TArray<class USceneComponent*>& ForChildComps, class AShooterPlayerController* ForPC);
	void NotifyPreviewSceneUpdated(float DeltaTime);
	void ExecuteUbergraph_PreviewScene_Base(int32 EntryPoint, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, class AShooterPlayerController* K2Node_Event_ForPC, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Vector_Distance_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast);
};

}


