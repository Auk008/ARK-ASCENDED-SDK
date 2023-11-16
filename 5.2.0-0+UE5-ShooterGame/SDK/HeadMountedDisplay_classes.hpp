#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HandKeypointConversion
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHandKeypointConversion* GetDefaultObj();

	void Conv_HandKeypointToInt32(enum class EHandKeypoint Input, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj();

	void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
	void SetXRTimedInputActionDelegate(class FName ActionName, FDelegateProperty_ InDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_ InDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin);
	void SetSpectatorScreenTexture(class UTexture* InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options);
	void IsSpectatorScreenModeControllable(bool ReturnValue);
	void IsInLowPersistenceMode(bool ReturnValue);
	void IsHeadMountedDisplayEnabled(bool ReturnValue);
	void IsHeadMountedDisplayConnected(bool ReturnValue);
	void IsDeviceTracking(const struct FXRDeviceId& XRDeviceId, bool ReturnValue);
	void HasValidTrackingPosition(bool ReturnValue);
	void GetXRSystemFlags(int32 ReturnValue);
	void GetWorldToMetersScale(class UObject* WorldContext, float ReturnValue);
	void GetVRFocusState(bool bUseFocus, bool bHasFocus);
	void GetVersionString(const class FString& ReturnValue);
	void GetTrackingToWorldTransform(class UObject* WorldContext, const struct FTransform& ReturnValue);
	void GetTrackingSensorParameters(const struct FVector& Origin, const struct FRotator& Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float Distance, float NearPlane, float FarPlane, bool IsActive, int32 Index);
	void GetTrackingOriginTransform(enum class EHMDTrackingOrigin Origin, const struct FTransform& OutTransform, bool ReturnValue);
	void GetTrackingOrigin(enum class EHMDTrackingOrigin ReturnValue);
	void GetPositionalTrackingCameraParameters(const struct FVector& CameraOrigin, const struct FRotator& CameraRotation, float HFOV, float VFOV, float CameraDistance, float NearPlane, float FarPlane);
	void GetPlayAreaRect(const struct FTransform& OutTransform, const struct FVector2D& OutRect, bool ReturnValue);
	void GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin, const struct FVector2D& ReturnValue);
	void GetPixelDensity(float ReturnValue);
	void GetOrientationAndPosition(const struct FRotator& DeviceRotation, const struct FVector& DevicePosition);
	void GetNumOfTrackingSensors(int32 ReturnValue);
	void GetMotionControllerData(class UObject* WorldContext, enum class EControllerHand Hand, const struct FXRMotionControllerData& MotionControllerData);
	void GetHMDWornState(enum class EHMDWornState ReturnValue);
	void GetHMDDeviceName(class FName ReturnValue);
	void GetHMDData(class UObject* WorldContext, const struct FXRHMDData& HMDData);
	void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool bIsTracked, const struct FRotator& Orientation, bool bHasPositionalTracking, const struct FVector& Position);
	void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool bIsTracked, const struct FRotator& Orientation, bool bHasPositionalTracking, const struct FVector& Position);
	void GetCurrentInteractionProfile(enum class EControllerHand Hand, const class FString& InteractionProfile, bool ReturnValue);
	void GetControllerTransformForTime(class UObject* WorldContext, int32 ControllerIndex, class FName MotionSource, const struct FTimespan& Time, bool bTimeWasUsed, const struct FRotator& Orientation, const struct FVector& Position, bool bProvidedLinearVelocity, const struct FVector& LinearVelocity, bool bProvidedAngularVelocity, const struct FVector& AngularVelocityRadPerSec, bool bProvidedLinearAcceleration, const struct FVector& LinearAcceleration, bool ReturnValue);
	void EnumerateTrackedDevices(class FName SystemId, enum class EXRTrackedDeviceType DeviceType, const TArray<struct FXRDeviceId>& ReturnValue);
	void EnableLowPersistenceMode(bool bEnable);
	void EnableHMD(bool bEnable, bool ReturnValue);
	void DisconnectRemoteXRDevice();
	void ConnectRemoteXRDevice(const class FString& IpAddress, int32 BitRate, enum class EXRDeviceConnectionResult ReturnValue);
	void ConfigureGestures(const struct FXRGestureConfig& GestureConfig, bool ReturnValue);
	void ClearXRTimedInputActionDelegate(class FName ActionPath);
	void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
	void BreakKey(const struct FKey& InKey, const class FString& InteractionProfile, enum class EControllerHand Hand, class FName MotionSource, const class FString& Indentifier, const class FString& Component);
};

// 0x140 (0x7C0 - 0x680)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x680(0x4)(None)
	enum class EControllerHand                   Hand;                                              // 0x684(0x1)(None)
	uint8                                        Pad_2B88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MotionSource;                                      // 0x688(0x8)(None)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x690(0x1)(None)
	uint8                                        BitPad_211 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x694(0x1)(None)
	uint8                                        Pad_2B8A[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDisplayDeviceModel;                               // 0x6A0(0x1)(None)
	uint8                                        Pad_2B8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayModelSource;                                // 0x6A4(0x8)(None)
	uint8                                        Pad_2B8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x6B0(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x6B8(0x10)(ZeroConstructor)
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x6C8(0x8)(ZeroConstructor)
	uint8                                        Pad_2B8E[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMotionControllerComponent* GetDefaultObj();

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(class FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int32 NewPlayer);
	void OnMotionControllerUpdated();
	void IsTracked(bool ReturnValue);
	void GetTrackingSource(enum class EControllerHand ReturnValue);
	void GetParameterValue(class FName InName, bool bValueFound, float ReturnValue);
	void GetHandJointPosition(int32 JointIndex, bool bValueFound, const struct FVector& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	void IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName, bool ReturnValue);
	void IsMotionTrackingEnabledForDevice(int32 PlayerIndex, enum class EControllerHand Hand, bool ReturnValue);
	void IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent, bool ReturnValue);
	void IsMotionTrackedDeviceCountManagementNecessary(bool ReturnValue);
	void IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName, bool ReturnValue);
	void GetMotionTrackingEnabledControllerCount(int32 ReturnValue);
	void GetMaximumMotionTrackedControllerCount(int32 ReturnValue);
	void GetActiveTrackingSystemName(class FName ReturnValue);
	void EnumerateMotionSources(const TArray<class FName>& ReturnValue);
	void EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName, bool ReturnValue);
	void EnableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand, bool ReturnValue);
	void EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent, bool ReturnValue);
	void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	void DisableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// 0xC0 (0x178 - 0xB8)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xC8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xD8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xE8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xF8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0x108(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x118(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x128(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x138(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x148(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x158(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            XRInteractionProfileChangedDelegate;               // 0x168(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UVRNotificationsComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRAssetFunctionLibrary
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRAssetFunctionLibrary* GetDefaultObj();

	void AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, const struct FXRDeviceId& XRDeviceId, class UPrimitiveComponent* ReturnValue);
	void AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(ZeroConstructor)
	uint8                                        Pad_2BD6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(None)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	void AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, const struct FXRDeviceId& XRDeviceId, class UPrimitiveComponent* NewComponent, class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue);
	void AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent* NewComponent, class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue);
};

// 0x50 (0x7A0 - 0x750)
// Class HeadMountedDisplay.XRDeviceVisualizationComponent
class UXRDeviceVisualizationComponent : public UStaticMeshComponent
{
public:
	bool                                         bIsVisualizationActive;                            // 0x750(0x1)(None)
	uint8                                        Pad_2BD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayModelSource;                                // 0x754(0x8)(None)
	uint8                                        Pad_2BD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x760(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x768(0x10)(ZeroConstructor)
	uint8                                        Pad_2BD9[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXRDeviceVisualizationComponent* GetDefaultObj();

	void SetIsVisualizationActive(bool bNewVisualizationState);
	void SetIsRenderingActive(bool bRenderingIsActive);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj();

	void ShowLoadingScreen();
	void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};

}


