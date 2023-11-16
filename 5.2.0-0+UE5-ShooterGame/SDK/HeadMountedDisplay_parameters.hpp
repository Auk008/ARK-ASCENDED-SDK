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
// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
struct UHandKeypointConversion_Conv_HandKeypointToInt32_Params
{
public:
	enum class EHandKeypoint                     Input;                                             // 0x0(0x1)(None)
	uint8                                        Pad_2B37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
struct UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params
{
public:
	struct FTransform                            ExternalTrackingTransform;                         // 0x0(0x60)(None)
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(None)
	FDelegateProperty_                           InDelegate;                                        // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params
{
public:
	FDelegateProperty_                           InDisconnectedDelegate;                            // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	float                                        NewScale;                                          // 0x8(0x4)(None)
	uint8                                        Pad_2B38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params
{
public:
	class UTexture*                              InTexture;                                         // 0x0(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params
{
public:
	struct FVector2D                             EyeRectMin;                                        // 0x0(0x10)(None)
	struct FVector2D                             EyeRectMax;                                        // 0x10(0x10)(None)
	struct FVector2D                             TextureRectMin;                                    // 0x20(0x10)(None)
	struct FVector2D                             TextureRectMax;                                    // 0x30(0x10)(None)
	bool                                         bDrawEyeFirst;                                     // 0x40(0x1)(None)
	bool                                         bClearBlack;                                       // 0x41(0x1)(None)
	bool                                         bUseAlpha;                                         // 0x42(0x1)(None)
	uint8                                        Pad_2B39[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params
{
public:
	enum class ESpectatorScreenMode              Mode;                                              // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
struct UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params
{
public:
	float                                        Near;                                              // 0x0(0x4)(None)
	float                                        Far;                                               // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
public:
	float                                        Yaw;                                               // 0x0(0x4)(None)
	enum class EOrientPositionSelector           Options;                                           // 0x4(0x1)(None)
	uint8                                        Pad_2B3B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
struct UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
struct UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params
{
public:
	struct FXRDeviceId                           XRDeviceId;                                        // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_2B3D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
struct UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_2B3E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
struct UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params
{
public:
	bool                                         bUseFocus;                                         // 0x0(0x1)(None)
	bool                                         bHasFocus;                                         // 0x1(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
struct UHeadMountedDisplayFunctionLibrary_GetVersionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	uint8                                        Pad_2B3F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x58 (0x58 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
struct UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	float                                        LeftFOV;                                           // 0x30(0x4)(None)
	float                                        RightFOV;                                          // 0x34(0x4)(None)
	float                                        TopFOV;                                            // 0x38(0x4)(None)
	float                                        BottomFOV;                                         // 0x3C(0x4)(None)
	float                                        Distance;                                          // 0x40(0x4)(None)
	float                                        NearPlane;                                         // 0x44(0x4)(None)
	float                                        FarPlane;                                          // 0x48(0x4)(None)
	bool                                         IsActive;                                          // 0x4C(0x1)(None)
	uint8                                        Pad_2B41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x50(0x4)(None)
	uint8                                        Pad_2B42[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(None)
	uint8                                        Pad_2B43[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OutTransform;                                      // 0x10(0x60)(None)
	bool                                         ReturnValue;                                       // 0x70(0x1)(None)
	uint8                                        Pad_2B44[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params
{
public:
	enum class EHMDTrackingOrigin                ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
public:
	struct FVector                               CameraOrigin;                                      // 0x0(0x18)(None)
	struct FRotator                              CameraRotation;                                    // 0x18(0x18)(None)
	float                                        HFOV;                                              // 0x30(0x4)(None)
	float                                        VFOV;                                              // 0x34(0x4)(None)
	float                                        CameraDistance;                                    // 0x38(0x4)(None)
	float                                        NearPlane;                                         // 0x3C(0x4)(None)
	float                                        FarPlane;                                          // 0x40(0x4)(None)
	uint8                                        Pad_2B49[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Params
{
public:
	struct FTransform                            OutTransform;                                      // 0x0(0x60)(None)
	struct FVector2D                             OutRect;                                           // 0x60(0x10)(None)
	bool                                         ReturnValue;                                       // 0x70(0x1)(None)
	uint8                                        Pad_2B4A[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(None)
	uint8                                        Pad_2B4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
struct UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
public:
	struct FRotator                              DeviceRotation;                                    // 0x0(0x18)(None)
	struct FVector                               DevicePosition;                                    // 0x18(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
struct UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x130 (0x130 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
struct UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	enum class EControllerHand                   Hand;                                              // 0x8(0x1)(None)
	uint8                                        Pad_2B4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FXRMotionControllerData               MotionControllerData;                              // 0x10(0x120)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
struct UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params
{
public:
	enum class EHMDWornState                     ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
struct UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
struct UHeadMountedDisplayFunctionLibrary_GetHMDData_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	uint8                                        Pad_2B50[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FXRHMDData                            HMDData;                                           // 0x10(0x60)(None)
};

// 0x50 (0x50 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
struct UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(None)
	bool                                         bIsTracked;                                        // 0x14(0x1)(None)
	uint8                                        Pad_2B51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Orientation;                                       // 0x18(0x18)(None)
	bool                                         bHasPositionalTracking;                            // 0x30(0x1)(None)
	uint8                                        Pad_2B52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x38(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
struct UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params
{
public:
	struct FXRDeviceId                           XRDeviceId;                                        // 0x0(0xC)(None)
	bool                                         bIsTracked;                                        // 0xC(0x1)(None)
	uint8                                        Pad_2B54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Orientation;                                       // 0x10(0x18)(None)
	bool                                         bHasPositionalTracking;                            // 0x28(0x1)(None)
	uint8                                        Pad_2B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x30(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
struct UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params
{
public:
	enum class EControllerHand                   Hand;                                              // 0x0(0x1)(None)
	uint8                                        Pad_2B57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InteractionProfile;                                // 0x8(0x10)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2B58[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
struct UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(None)
	int32                                        ControllerIndex;                                   // 0x8(0x4)(None)
	class FName                                  MotionSource;                                      // 0xC(0x8)(None)
	uint8                                        Pad_2B5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             Time;                                              // 0x18(0x8)(None)
	bool                                         bTimeWasUsed;                                      // 0x20(0x1)(None)
	uint8                                        Pad_2B5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Orientation;                                       // 0x28(0x18)(None)
	struct FVector                               Position;                                          // 0x40(0x18)(None)
	bool                                         bProvidedLinearVelocity;                           // 0x58(0x1)(None)
	uint8                                        Pad_2B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearVelocity;                                    // 0x60(0x18)(None)
	bool                                         bProvidedAngularVelocity;                          // 0x78(0x1)(None)
	uint8                                        Pad_2B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AngularVelocityRadPerSec;                          // 0x80(0x18)(None)
	bool                                         bProvidedLinearAcceleration;                       // 0x98(0x1)(None)
	uint8                                        Pad_2B61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearAcceleration;                                // 0xA0(0x18)(None)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(None)
	uint8                                        Pad_2B62[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
struct UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params
{
public:
	class FName                                  SystemId;                                          // 0x0(0x8)(None)
	enum class EXRTrackedDeviceType              DeviceType;                                        // 0x8(0x1)(None)
	uint8                                        Pad_2B65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FXRDeviceId>                   ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
struct UHeadMountedDisplayFunctionLibrary_EnableHMD_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
struct UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params
{
public:
	class FString                                IpAddress;                                         // 0x0(0x10)(None)
	int32                                        BitRate;                                           // 0x10(0x4)(None)
	enum class EXRDeviceConnectionResult         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_2B68[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7 (0x7 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
struct UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params
{
public:
	struct FXRGestureConfig                      GestureConfig;                                     // 0x0(0x6)(None)
	bool                                         ReturnValue;                                       // 0x6(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params
{
public:
	class FName                                  ActionPath;                                        // 0x0(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
struct UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params
{
public:
	struct FTransform                            ExternalTrackingTransform;                         // 0x0(0x60)(None)
};

// 0x58 (0x58 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
struct UHeadMountedDisplayFunctionLibrary_BreakKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(None)
	class FString                                InteractionProfile;                                // 0x18(0x10)(None)
	enum class EControllerHand                   Hand;                                              // 0x28(0x1)(None)
	uint8                                        Pad_2B6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MotionSource;                                      // 0x2C(0x8)(None)
	uint8                                        Pad_2B6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Indentifier;                                       // 0x38(0x10)(None)
	class FString                                Component;                                         // 0x48(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct UMotionControllerComponent_SetTrackingSource_Params
{
public:
	enum class EControllerHand                   NewSource;                                         // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct UMotionControllerComponent_SetTrackingMotionSource_Params
{
public:
	class FName                                  NewSource;                                         // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct UMotionControllerComponent_SetShowDeviceModel_Params
{
public:
	bool                                         bShowControllerModel;                              // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct UMotionControllerComponent_SetDisplayModelSource_Params
{
public:
	class FName                                  NewDisplayModelSource;                             // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct UMotionControllerComponent_SetCustomDisplayMesh_Params
{
public:
	class UStaticMesh*                           NewDisplayMesh;                                    // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct UMotionControllerComponent_SetAssociatedPlayerIndex_Params
{
public:
	int32                                        NewPlayer;                                         // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UMotionControllerComponent_IsTracked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct UMotionControllerComponent_GetTrackingSource_Params
{
public:
	enum class EControllerHand                   ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct UMotionControllerComponent_GetParameterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	bool                                         bValueFound;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2B84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
struct UMotionControllerComponent_GetHandJointPosition_Params
{
public:
	int32                                        JointIndex;                                        // 0x0(0x4)(None)
	bool                                         bValueFound;                                       // 0x4(0x1)(None)
	uint8                                        Pad_2B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	class FName                                  SourceName;                                        // 0x4(0x8)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_2B91[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(None)
	bool                                         ReturnValue;                                       // 0x5(0x1)(None)
	uint8                                        Pad_2B93[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2B94[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
struct UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	class FName                                  SourceName;                                        // 0x4(0x8)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_2B96[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
struct UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
struct UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	class FName                                  SourceName;                                        // 0x4(0x8)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_2B98[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(None)
	bool                                         ReturnValue;                                       // 0x5(0x1)(None)
	uint8                                        Pad_2B9A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2B9C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	class FName                                  SourceName;                                        // 0x4(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(None)
	uint8                                        Pad_2B9D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor)
	class FName                                  SystemName;                                        // 0x8(0x8)(None)
	class FName                                  DeviceName;                                        // 0x10(0x8)(None)
	bool                                         bManualAttachment;                                 // 0x18(0x1)(None)
	uint8                                        Pad_2BA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(None)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x80(0xC)(None)
	uint8                                        Pad_2BA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_2BA6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(None)
	bool                                         bManualAttachment;                                 // 0x14(0x1)(None)
	uint8                                        Pad_2BA8[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(None)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x80(0x8)(None)
	uint8                                        Pad_2BA9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor)
	class FName                                  SystemName;                                        // 0x8(0x8)(None)
	class FName                                  DeviceName;                                        // 0x10(0x8)(None)
	bool                                         bManualAttachment;                                 // 0x18(0x1)(None)
	uint8                                        Pad_2BB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(None)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x80(0xC)(None)
	uint8                                        Pad_2BB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   NewComponent;                                      // 0x90(0x8)(ZeroConstructor)
	class UAsyncTask_LoadXRDeviceVisComponent*   ReturnValue;                                       // 0x98(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(None)
	bool                                         bManualAttachment;                                 // 0x14(0x1)(None)
	uint8                                        Pad_2BBB[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(None)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x80(0x8)(ZeroConstructor)
	class UAsyncTask_LoadXRDeviceVisComponent*   ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsVisualizationActive
struct UXRDeviceVisualizationComponent_SetIsVisualizationActive_Params
{
public:
	bool                                         bNewVisualizationState;                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsRenderingActive
struct UXRDeviceVisualizationComponent_SetIsRenderingActive_Params
{
public:
	bool                                         bRenderingIsActive;                                // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetDisplayModelSource
struct UXRDeviceVisualizationComponent_SetDisplayModelSource_Params
{
public:
	class FName                                  NewDisplayModelSource;                             // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetCustomDisplayMesh
struct UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Params
{
public:
	class UStaticMesh*                           NewDisplayMesh;                                    // 0x0(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
struct UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(None)
	struct FVector2D                             Scale;                                             // 0x8(0x10)(None)
	struct FVector                               Offset;                                            // 0x18(0x18)(None)
	bool                                         bShowLoadingMovie;                                 // 0x30(0x1)(None)
	bool                                         bShowOnSet;                                        // 0x31(0x1)(None)
	uint8                                        Pad_2BDB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
struct UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(None)
	struct FVector                               Translation;                                       // 0x8(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(None)
	struct FVector2D                             Size;                                              // 0x38(0x10)(None)
	struct FRotator                              DeltaRotation;                                     // 0x48(0x18)(None)
	bool                                         bClearBeforeAdd;                                   // 0x60(0x1)(None)
	uint8                                        Pad_2BDE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


