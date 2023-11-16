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

// 0x80 (0x80 - 0x0)
// Function SP_Camera.SPCameraMode.GetCustomFocusDistance
struct USPCameraMode_GetCustomFocusDistance_Params
{
public:
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(None)
	uint8                                        Pad_1FDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ViewToWorld;                                       // 0x10(0x60)(None)
	float                                        ReturnValue;                                       // 0x70(0x4)(None)
	uint8                                        Pad_1FE0[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent
struct USPCam_AttachedCamera_ChooseViewCameraComponent_Params
{
public:
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(ZeroConstructor)
	class UCameraComponent*                      ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake
struct ASPPlayerCameraManager_StopAmbientCameraShake_Params
{
public:
	bool                                         bImmediate;                                        // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits
struct ASPPlayerCameraManager_SetViewPitchLimits_Params
{
public:
	float                                        MinPitch;                                          // 0x0(0x4)(None)
	float                                        MaxPitch;                                          // 0x4(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
struct ASPPlayerCameraManager_SetUsingAlternateCamera_Params
{
public:
	bool                                         bNewUsingAltCamera;                                // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
struct ASPPlayerCameraManager_SetDebugCameraStyle_Params
{
public:
	enum class EDebugCameraStyle                 NewDebugCameraStyle;                               // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera
struct ASPPlayerCameraManager_IsUsingAlternateCamera_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
struct ASPPlayerCameraManager_GetCurrentCameraMode_Params
{
public:
	class USPCameraMode*                         ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
struct ASPPlayerCameraManager_GetCameraClassForCharacter_Params
{
public:
	class AActor*                                InViewTarget;                                      // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
struct ASPPlayerCameraManager_ConfigureAlternateCamera_Params
{
public:
	class UClass*                                NewAltCameraMode;                                  // 0x0(0x8)(ZeroConstructor)
	class AActor*                                NewAltViewTarget;                                  // 0x8(0x8)(None)
	float                                        NewAltCameraTransitionTime;                        // 0x10(0x4)(None)
	uint8                                        Pad_200D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


