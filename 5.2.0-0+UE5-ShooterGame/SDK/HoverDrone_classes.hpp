#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C0 (0x550 - 0x190)
// Class HoverDrone.HoverDroneMovementComponent
class UHoverDroneMovementComponent : public USpectatorPawnMovement
{
public:
	uint8                                        Pad_214C[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxAllowedSpeedIndex;                              // 0x1A8(0x4)(None)
	uint8                                        Pad_214D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MaxAllowedSpeedUpdated;                            // 0x1B0(0x10)(ZeroConstructor)
	uint8                                        Pad_214E[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirectRotationInputYawScale;                       // 0x208(0x4)(None)
	float                                        DirectRotationInputPitchScale;                     // 0x20C(0x4)(None)
	uint8                                        Pad_2151[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirectRotationInputInterpSpeed;                    // 0x228(0x4)(None)
	bool                                         bUseFOVScaling;                                    // 0x22C(0x1)(None)
	uint8                                        Pad_2152[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CameraFovRange;                                    // 0x230(0x10)(None)
	struct FVector2D                             InputFovScaleRange;                                // 0x240(0x10)(None)
	float                                        RotAcceleration;                                   // 0x250(0x4)(None)
	float                                        RotDeceleration;                                   // 0x254(0x4)(None)
	float                                        MaxPitchRotSpeed;                                  // 0x258(0x4)(None)
	float                                        MaxYawRotSpeed;                                    // 0x25C(0x4)(None)
	float                                        FullAirFrictionVelocity;                           // 0x260(0x4)(None)
	uint8                                        Pad_2155[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MovementAccelFactor;                               // 0x268(0x18)(None)
	uint8                                        Pad_2156[0x170];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters;                              // 0x3F0(0x10)(None)
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters_NewModel;                     // 0x400(0x10)(None)
	float                                        Acceleration_NewModel;                             // 0x410(0x4)(None)
	float                                        Deceleration_NewModel;                             // 0x414(0x4)(None)
	float                                        MaxSpeed_NewModel;                                 // 0x418(0x4)(None)
	float                                        MaxYawRotSpeed_NewModel;                           // 0x41C(0x4)(None)
	float                                        MaxPitchRotSpeed_NewModel;                         // 0x420(0x4)(None)
	float                                        RotAcceleration_NewModel;                          // 0x424(0x4)(None)
	float                                        RotDeceleration_NewModel;                          // 0x428(0x4)(None)
	bool                                         bUseNewDroneFlightModel;                           // 0x42C(0x1)(None)
	uint8                                        Pad_2157[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAirFriction;                                    // 0x430(0x4)(None)
	int32                                        DroneSpeedParamIndex;                              // 0x434(0x4)(None)
	uint8                                        Pad_2158[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSpeedHeight;                                    // 0x43C(0x4)(None)
	float                                        MaxSpeedHeight;                                    // 0x440(0x4)(None)
	float                                        MaxSpeedHeightMultiplier;                          // 0x444(0x4)(None)
	float                                        MinPitch;                                          // 0x448(0x4)(None)
	float                                        MaxPitch;                                          // 0x44C(0x4)(None)
	uint8                                        Pad_2159[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DroneMaxAltitude;                                  // 0x454(0x4)(None)
	uint8                                        Pad_215A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinHoverHeight;                                    // 0x460(0x4)(None)
	float                                        MaintainHoverHeightTolerance;                      // 0x464(0x4)(None)
	float                                        MaintainHoverHeightPredictionTime;                 // 0x468(0x4)(None)
	uint8                                        Pad_215B[0x3C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ForceFacingInterpInTime;                           // 0x4A8(0x4)(None)
	uint8                                        bSimulateRotation : 1;                             // Mask: 0x1, PropSize: 0x10x4AC(0x1)(None)
	uint8                                        bIgnoreDroneLimiters : 1;                          // Mask: 0x2, PropSize: 0x10x4AC(0x1)(None)
	uint8                                        BitPad_17E : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_215D[0x33];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FollowedActorPositionInterpSpeed;                  // 0x4E0(0x4)(None)
	uint8                                        Pad_215F[0x6C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoverDroneMovementComponent* GetDefaultObj();

	void StopForceFacing();
	void SetCurrentFOV(float NewFOV);
	void ForceFacing(const struct FVector& Location);
	void AddVelocity(const struct FVector& VelocityImpulse);
	void AddRotationalVelocity(const struct FRotator& RotationalVel);
};

// 0x8 (0x5A0 - 0x598)
// Class HoverDrone.HoverDronePawnBase
class AHoverDronePawnBase : public ADefaultPawn
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x598(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AHoverDronePawnBase* GetDefaultObj();

};

// 0xD0 (0x670 - 0x5A0)
// Class HoverDrone.HoverDronePawn
class AHoverDronePawn : public AHoverDronePawnBase
{
public:
	bool                                         bIsTiltingEnabled;                                 // 0x5A0(0x1)(None)
	bool                                         bAllowSpeedChange;                                 // 0x5A1(0x1)(None)
	bool                                         bConstrainMovementToXYPlane;                       // 0x5A2(0x1)(None)
	uint8                                        Pad_2181[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIRInterpolatorRotator               DroneTiltInterpolator;                             // 0x5A8(0x78)(None)
	struct FVector                               TiltUpVector;                                      // 0x620(0x18)(None)
	bool                                         bEnableTiltLimits;                                 // 0x638(0x1)(None)
	uint8                                        Pad_2183[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              TiltLimits;                                        // 0x640(0x18)(None)
	uint8                                        Pad_2184[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AHoverDronePawn* GetDefaultObj();

	void TurnAccel(float Val);
	void SetToDefaultDroneSpeedIndex();
	void SetDroneSpeedIndex(int32 SpeedIndex);
	void SetAllowSpeedChange(bool bOnOff);
	void MoveUp(float Val);
	void LookUpAccel(float Val);
	void IsMaintainingConstantAltitude(bool ReturnValue);
	void GetTiltedDroneRotation(float DeltaTime, const struct FRotator& ReturnValue);
	void GetDroneSpeedIndex(int32 ReturnValue);
	void GetAltitude(float ReturnValue);
	void EndLookat();
	void BeginLookat();
};

// 0x8 (0x510 - 0x508)
// Class HoverDrone.HoverDroneSpeedLimitBox
class AHoverDroneSpeedLimitBox : public AVolume
{
public:
	int32                                        MaxAllowedSpeedIndex;                              // 0x508(0x4)(None)
	uint8                                        Pad_2186[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AHoverDroneSpeedLimitBox* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class HoverDrone.HoverDroneVolumeManager
class UHoverDroneVolumeManager : public UGameInstanceSubsystem
{
public:
	TSet<class AHoverDroneSpeedLimitBox*>        SpeedLimitBoxes;                                   // 0x30(0x50)(ZeroConstructor)
	TSet<class ABlockingVolume*>                 BlockingVolumes;                                   // 0x80(0x50)(None)
	uint8                                        Pad_2187[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoverDroneVolumeManager* GetDefaultObj();

};

}


