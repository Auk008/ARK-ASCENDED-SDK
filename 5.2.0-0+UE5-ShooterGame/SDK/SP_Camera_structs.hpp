#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECameraAutoFollowMode : uint8
{
	None                           = 0,
	LazyFollow                     = 1,
	FullFollow                     = 2,
	ECameraAutoFollowMode_MAX      = 3,
};

enum class EDebugCameraStyle : uint8
{
	None                           = 0,
	Fixed                          = 1,
	ThirdPerson                    = 2,
	FreeCam                        = 3,
	FreeCam_Default                = 4,
	FirstPerson                    = 5,
	EDebugCameraStyle_MAX          = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct SP_Camera.PenetrationAvoidanceRay
struct FPenetrationAvoidanceRay
{
public:
	struct FRotator                              AdjustmentRot;                                     // 0x0(0x18)(None)
	float                                        WorldWeight;                                       // 0x18(0x4)(None)
	float                                        Radius;                                            // 0x1C(0x4)(None)
	int32                                        TraceInterval;                                     // 0x20(0x4)(None)
	int32                                        FramesUntilNextTrace;                              // 0x24(0x4)(None)
	bool                                         bEnabled;                                          // 0x28(0x1)(None)
	bool                                         bPrimaryRay;                                       // 0x29(0x1)(None)
	uint8                                        Pad_2011[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x890 (0x890 - 0x0)
// ScriptStruct SP_Camera.ActiveSPCamera
struct FActiveSPCamera
{
public:
	class USPCameraMode*                         Camera;                                            // 0x0(0x8)(ZeroConstructor)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(None)
	uint8                                        Pad_2012[0x880];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SP_Camera.SPCameraModeInstance
struct FSPCameraModeInstance
{
public:
	class UClass*                                CameraModeClass;                                   // 0x0(0x8)(ZeroConstructor)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(ZeroConstructor)
	class USPCameraMode*                         CameraMode;                                        // 0x10(0x8)(ZeroConstructor)
	class UCineCameraComponent*                  CineCameraComponent;                               // 0x18(0x8)(None)
};

}


