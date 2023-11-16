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

// 0x40 (0x40 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
struct UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ShakeClass;                                        // 0x8(0x8)(ZeroConstructor)
	class UCameraShakeSourceComponent*           SourceComponent;                                   // 0x10(0x8)(ZeroConstructor)
	float                                        Scale;                                             // 0x18(0x4)(None)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x1C(0x1)(None)
	uint8                                        Pad_20CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserPlaySpaceRot;                                  // 0x20(0x18)(None)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
struct UMatineeCameraShake_StartMatineeCameraShake_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ShakeClass;                                        // 0x8(0x8)(ZeroConstructor)
	float                                        Scale;                                             // 0x10(0x4)(None)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x14(0x1)(None)
	uint8                                        Pad_20D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserPlaySpaceRot;                                  // 0x18(0x18)(None)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
struct UMatineeCameraShake_ReceiveStopShake_Params
{
public:
	bool                                         bImmediately;                                      // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
struct UMatineeCameraShake_ReceivePlayShake_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
struct UMatineeCameraShake_ReceiveIsFinished_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10D0 (0x10D0 - 0x0)
// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
struct UMatineeCameraShake_BlueprintUpdateCameraShake_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
	float                                        Alpha;                                             // 0x4(0x4)(None)
	uint8                                        Pad_20D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x860)(ZeroConstructor)
	struct FMinimalViewInfo                      ModifiedPOV;                                       // 0x870(0x860)(None)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
struct UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params
{
public:
	class UCameraShakeBase*                      CameraShake;                                       // 0x0(0x8)(ZeroConstructor)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x6 (0x6 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
struct UCameraAnimationCameraModifier_StopCameraAnimation_Params
{
public:
	struct FCameraAnimationHandle                Handle;                                            // 0x0(0x4)(None)
	bool                                         bImmediate;                                        // 0x4(0x1)(None)
	uint8                                        Pad_20DE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
struct UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(None)
	bool                                         bImmediate;                                        // 0x8(0x1)(None)
	uint8                                        Pad_20DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
struct UCameraAnimationCameraModifier_StopAllCameraAnimations_Params
{
public:
	bool                                         bImmediate;                                        // 0x0(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
struct UCameraAnimationCameraModifier_PlayCameraAnimation_Params
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(None)
	struct FCameraAnimationParams                Params;                                            // 0x8(0x40)(None)
	struct FCameraAnimationHandle                ReturnValue;                                       // 0x48(0x4)(None)
	uint8                                        Pad_20E1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6 (0x6 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
struct UCameraAnimationCameraModifier_IsCameraAnimationActive_Params
{
public:
	struct FCameraAnimationHandle                Handle;                                            // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_20E9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	int32                                        ControllerId;                                      // 0x8(0x4)(None)
	uint8                                        Pad_20F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	int32                                        PlayerIndex;                                       // 0x8(0x4)(None)
	uint8                                        Pad_20F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
struct UGameplayCamerasSubsystem_StopCameraAnimation_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(None)
	struct FCameraAnimationHandle                Handle;                                            // 0x8(0x4)(None)
	bool                                         bImmediate;                                        // 0xC(0x1)(None)
	uint8                                        Pad_20FD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
struct UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class UCameraAnimationSequence*              Sequence;                                          // 0x8(0x8)(None)
	bool                                         bImmediate;                                        // 0x10(0x1)(None)
	uint8                                        Pad_2100[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
struct UGameplayCamerasSubsystem_StopAllCameraAnimations_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(None)
	bool                                         bImmediate;                                        // 0x8(0x1)(None)
	uint8                                        Pad_2102[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
struct UGameplayCamerasSubsystem_PlayCameraAnimation_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor)
	class UCameraAnimationSequence*              Sequence;                                          // 0x8(0x8)(None)
	struct FCameraAnimationParams                Params;                                            // 0x10(0x40)(None)
	struct FCameraAnimationHandle                ReturnValue;                                       // 0x50(0x4)(None)
	uint8                                        Pad_2105[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
struct UGameplayCamerasSubsystem_IsCameraAnimationActive_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(None)
	struct FCameraAnimationHandle                Handle;                                            // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_2107[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


