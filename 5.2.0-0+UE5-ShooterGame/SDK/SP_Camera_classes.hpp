#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x150 - 0x28)
// Class SP_Camera.SPCameraMode
class USPCameraMode : public UObject
{
public:
	class ASPPlayerCameraManager*                PlayerCamera;                                      // 0x28(0x8)(ZeroConstructor)
	float                                        TransitionInTime;                                  // 0x30(0x4)(None)
	struct FViewTargetTransitionParams           TransitionParams;                                  // 0x34(0x10)(None)
	float                                        FOV;                                               // 0x44(0x4)(None)
	bool                                         bUseViewTargetCameraComponent;                     // 0x48(0x1)(None)
	bool                                         bUseCineCam;                                       // 0x49(0x1)(None)
	bool                                         bUseCineCamSettings;                               // 0x4A(0x1)(None)
	bool                                         bOverrideFilmback;                                 // 0x4B(0x1)(None)
	struct FCameraFilmbackSettings               CineCam_FilmbackOverride;                          // 0x4C(0xC)(None)
	float                                        CineCam_CurrentFocalLength;                        // 0x58(0x4)(None)
	float                                        CineCam_CurrentAperture;                           // 0x5C(0x4)(None)
	float                                        CineCam_FocusDistanceAdjustment;                   // 0x60(0x4)(None)
	float                                        CineCam_DisplayOnly_FOV;                           // 0x64(0x4)(None)
	TArray<class AActor*>                        BlockingActors;                                    // 0x68(0x10)(ZeroConstructor)
	uint8                                        Pad_1FE1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CameraShakeClass;                                  // 0x80(0x8)(ZeroConstructor)
	class UCameraShakeBase*                      CameraShakeInstance;                               // 0x88(0x8)(None)
	bool                                         bScaleShakeWithViewTargetVelocity;                 // 0x90(0x1)(None)
	uint8                                        Pad_1FE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShakeScaling_SpeedRange;                           // 0x98(0x10)(None)
	struct FVector2D                             ShakeScaling_ScaleRange;                           // 0xA8(0x10)(None)
	struct FIIRInterpolatorFloat                 ShakeScaleInterpolator;                            // 0xB8(0x20)(None)
	bool                                         bDrawDebugShake;                                   // 0xD8(0x1)(None)
	bool                                         bUseCustomFocusDistance;                           // 0xD9(0x1)(None)
	bool                                         bOverrideViewPitchMinAndMax;                       // 0xDA(0x1)(None)
	uint8                                        Pad_1FE3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ViewPitchMinOverride;                              // 0xDC(0x4)(None)
	float                                        ViewPitchMaxOverride;                              // 0xE0(0x4)(None)
	uint8                                        Pad_1FE4[0x6C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USPCameraMode* GetDefaultObj();

	void ResetToDefaultSettings();
	void GetCustomFocusDistance(class AActor* ViewTarget, const struct FTransform& ViewToWorld, float ReturnValue);
};

// 0x370 (0x4C0 - 0x150)
// Class SP_Camera.SPCam_AttachedCamera
class USPCam_AttachedCamera : public USPCameraMode
{
public:
	struct FDoubleIIRInterpolatorVector          LocInterpolator;                                   // 0x150(0x108)(None)
	struct FDoubleIIRInterpolatorRotator         RotInterpolator;                                   // 0x258(0x108)(None)
	bool                                         bAllowPlayerRotationControl;                       // 0x360(0x1)(None)
	uint8                                        Pad_1FF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDoubleIIRInterpolatorRotator         PlayerControlRotInterpolator;                      // 0x368(0x108)(None)
	struct FIIRInterpolatorFloat                 ExtraLocZInterpolator;                             // 0x470(0x20)(None)
	struct FVector2D                             PivotPitchLimits;                                  // 0x490(0x10)(None)
	struct FVector2D                             PivotYawLimits;                                    // 0x4A0(0x10)(None)
	class UCameraComponent*                      LastViewCameraComponent;                           // 0x4B0(0x8)(ZeroConstructor)
	uint8                                        Pad_1FF7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USPCam_AttachedCamera* GetDefaultObj();

	void ChooseViewCameraComponent(class AActor* ViewTarget, class UCameraComponent* ReturnValue);
};

// 0x6F0 (0x840 - 0x150)
// Class SP_Camera.SPCam_ThirdPerson
class USPCam_ThirdPerson : public USPCameraMode
{
public:
	struct FTransform                            PivotToViewTarget;                                 // 0x150(0x60)(None)
	struct FDoubleIIRInterpolatorVector          PivotLocInterpolator;                              // 0x1B0(0x108)(None)
	struct FDoubleIIRInterpolatorRotator         PivotRotInterpolator;                              // 0x2B8(0x108)(None)
	struct FIIRInterpolatorFloat                 ExtraPivotLocZInterpolator;                        // 0x3C0(0x20)(None)
	struct FVector2D                             PivotPitchLimits;                                  // 0x3E0(0x10)(None)
	struct FVector2D                             PivotYawLimits;                                    // 0x3F0(0x10)(None)
	struct FTransform                            CameraToPivot;                                     // 0x400(0x60)(None)
	struct FDoubleIIRInterpolatorVector          CameraToPivotTranslationInterpolator;              // 0x460(0x108)(None)
	class UCurveVector*                          CameraToPivot_PitchAdjustmentCurve;                // 0x568(0x8)(ZeroConstructor)
	float                                        CameraToPivot_PitchAdjustmentCurveScale;           // 0x570(0x4)(None)
	uint8                                        Pad_1FFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          CameraToPivot_SpeedAdjustmentCurve;                // 0x578(0x8)(ZeroConstructor)
	float                                        CameraToPivot_SpeedAdjustmentCurveScale;           // 0x580(0x4)(None)
	uint8                                        Pad_1FFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CameraToPivot_SpeedAdjustment_SpeedRange;          // 0x588(0x10)(None)
	enum class ECameraAutoFollowMode             AutoFollowMode;                                    // 0x598(0x1)(None)
	uint8                                        Pad_1FFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LazyAutoFollowPitchLimits;                         // 0x5A0(0x10)(None)
	bool                                         bAllowLazyAutoFollowPitchControl;                  // 0x5B0(0x1)(None)
	uint8                                        Pad_1FFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LazyFollowGoalPitch;                               // 0x5B4(0x4)(None)
	float                                        LazyFollowLaziness;                                // 0x5B8(0x4)(None)
	float                                        LazyFollowDelayAfterUserControl;                   // 0x5BC(0x4)(None)
	uint8                                        Pad_2000[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookatOffsetLocal;                                 // 0x5C8(0x18)(None)
	struct FIIRInterpolatorVector                LookatWorldSpaceInterpolator;                      // 0x5E0(0x78)(None)
	uint8                                        Pad_2001[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseLookatPoint : 1;                               // Mask: 0x1, PropSize: 0x10x670(0x1)(None)
	uint8                                        bDoPredictiveLookat : 1;                           // Mask: 0x2, PropSize: 0x10x670(0x1)(None)
	uint8                                        BitPad_171 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2002[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PredictiveLookatTime;                              // 0x674(0x4)(None)
	TArray<struct FPenetrationAvoidanceRay>      CameraPenetrationAvoidanceRays;                    // 0x678(0x10)(None)
	TArray<struct FPenetrationAvoidanceRay>      SafeLocPenetrationAvoidanceRays;                   // 0x688(0x10)(None)
	struct FVector                               SafeLocationOffset;                                // 0x698(0x18)(None)
	struct FIIRInterpolatorVector                SafeLocationInterpolator;                          // 0x6B0(0x78)(None)
	uint8                                        bValidateSafeLoc : 1;                              // Mask: 0x1, PropSize: 0x10x728(0x1)(None)
	uint8                                        bPreventCameraPenetration : 1;                     // Mask: 0x2, PropSize: 0x10x728(0x1)(None)
	uint8                                        bDoPredictiveAvoidance : 1;                        // Mask: 0x4, PropSize: 0x10x728(0x1)(None)
	uint8                                        BitPad_172 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2003[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PenetrationBlendInTime;                            // 0x72C(0x4)(None)
	float                                        PenetrationBlendOutTime;                           // 0x730(0x4)(None)
	uint8                                        Pad_2006[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastSafeLocationLocal;                             // 0x738(0x18)(None)
	float                                        LastPenetrationBlockedPct;                         // 0x750(0x4)(None)
	uint8                                        Pad_2007[0xE4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDrawDebugPivot;                                   // 0x838(0x1)(None)
	bool                                         bDrawDebugLookat;                                  // 0x839(0x1)(None)
	bool                                         bDrawDebugSafeLoc;                                 // 0x83A(0x1)(None)
	bool                                         bDrawDebugPenetrationAvoidance;                    // 0x83B(0x1)(None)
	uint8                                        Pad_2009[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USPCam_ThirdPerson* GetDefaultObj();

};

// 0x8C0 (0x4270 - 0x39B0)
// Class SP_Camera.SPPlayerCameraManager
class ASPPlayerCameraManager : public APlayerCameraManager
{
public:
	float                                        BasePelvisRelativeZ;                               // 0x39B0(0x4)(None)
	class FName                                  PelvisBoneName;                                    // 0x39B4(0x8)(None)
	uint8                                        Pad_200E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AltViewTarget;                                     // 0x39C8(0x8)(ZeroConstructor)
	uint8                                        Pad_200F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SavedMainViewTarget;                               // 0x39D8(0x8)(ZeroConstructor)
	TArray<struct FActiveSPCamera>               CameraBlendStack;                                  // 0x39E0(0x10)(ZeroConstructor)
	TArray<struct FSPCameraModeInstance>         CameraModeInstances;                               // 0x39F0(0x10)(ZeroConstructor)
	uint8                                        Pad_2010[0x870];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASPPlayerCameraManager* GetDefaultObj();

	void StopAmbientCameraShake(bool bImmediate);
	void StartAmbientCameraShake();
	void SkipNextInterpolation();
	void SkipBlends();
	void SetViewPitchLimits(float MinPitch, float MaxPitch);
	void SetUsingAlternateCamera(bool bNewUsingAltCamera);
	void SetDebugCameraStyle(enum class EDebugCameraStyle NewDebugCameraStyle);
	void ResetViewPitchLimits();
	void IsUsingAlternateCamera(bool ReturnValue);
	void GetCurrentCameraMode(class USPCameraMode* ReturnValue);
	void GetCameraClassForCharacter(class AActor* InViewTarget, class UClass* ReturnValue);
	void ConfigureAlternateCamera(class UClass* NewAltCameraMode, class AActor* NewAltViewTarget, float NewAltCameraTransitionTime);
	void ClearAlternateCamera();
};

}


