#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4E8 - 0x4B8)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x4B8(0x4)(None)
	float                                        CraneYaw;                                          // 0x4BC(0x4)(None)
	float                                        CraneArmLength;                                    // 0x4C0(0x4)(None)
	bool                                         bLockMountPitch;                                   // 0x4C4(0x1)(None)
	bool                                         bLockMountYaw;                                     // 0x4C5(0x1)(None)
	uint8                                        Pad_2E4E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x4C8(0x8)(ZeroConstructor)
	class USceneComponent*                       CraneYawControl;                                   // 0x4D0(0x8)(ZeroConstructor)
	class USceneComponent*                       CranePitchControl;                                 // 0x4D8(0x8)(ZeroConstructor)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4E0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4D8 - 0x4B8)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4B8(0x4)(None)
	bool                                         bLockOrientationToRail;                            // 0x4BC(0x1)(None)
	uint8                                        Pad_2E50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x4C0(0x8)(ZeroConstructor)
	class USplineComponent*                      RailSplineComponent;                               // 0x4C8(0x8)(ZeroConstructor)
	class USceneComponent*                       RailCameraMount;                                   // 0x4D0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	void GetRailSplineComponent(class USplineComponent* ReturnValue);
};

// 0x80 (0xCE0 - 0xC60)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC60(0x70)(ZeroConstructor)
	uint8                                        Pad_2E52[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	void GetCineCameraComponent(class UCineCameraComponent* ReturnValue);
};

// 0x120 (0xC00 - 0xAE0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAE0(0xC)(None)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAEC(0xC)(None)
	struct FCameraLensSettings                   LensSettings;                                      // 0xAF8(0x1C)(None)
	uint8                                        Pad_2E67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB18(0x68)(ZeroConstructor)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB80(0x4)(None)
	float                                        CurrentFocalLength;                                // 0xB84(0x4)(None)
	float                                        CurrentAperture;                                   // 0xB88(0x4)(None)
	float                                        CurrentFocusDistance;                              // 0xB8C(0x4)(None)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xB90(0x1)(None)
	uint8                                        BitPad_24F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2E68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomNearClippingPlane;                           // 0xB94(0x4)(None)
	uint8                                        Pad_2E69[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBA0(0x10)(None)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBB0(0x10)(None)
	class FString                                DefaultFilmbackPresetName;                         // 0xBC0(0x10)(None)
	class FString                                DefaultFilmbackPreset;                             // 0xBD0(0x10)(None)
	class FString                                DefaultLensPresetName;                             // 0xBE0(0x10)(None)
	float                                        DefaultLensFocalLength;                            // 0xBF0(0x4)(None)
	float                                        DefaultLensFStop;                                  // 0xBF4(0x4)(None)
	uint8                                        Pad_2E6A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCineCameraComponent* GetDefaultObj();

	void SetLensSettings(const struct FCameraLensSettings& NewLensSettings);
	void SetLensPresetByName(const class FString& InPresetName);
	void SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetFilmback(const struct FCameraFilmbackSettings& NewFilmback);
	void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);
	void SetCurrentFocalLength(float InFocalLength);
	void SetCurrentAperture(float NewCurrentAperture);
	void SetCropSettings(const struct FPlateCropSettings& NewCropSettings);
	void SetCropPresetByName(const class FString& InPresetName);
	void GetVerticalFieldOfView(float ReturnValue);
	void GetLensPresetsCopy(const TArray<struct FNamedLensPreset>& ReturnValue);
	void GetLensPresetName(const class FString& ReturnValue);
	void GetHorizontalFieldOfView(float ReturnValue);
	void GetFilmbackPresetsCopy(const TArray<struct FNamedFilmbackPreset>& ReturnValue);
	void GetFilmbackPresetName(const class FString& ReturnValue);
	void GetDefaultFilmbackPresetName(const class FString& ReturnValue);
	void GetCropPresetName(const class FString& ReturnValue);
};

// 0x78 (0xB0 - 0x38)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(None)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(None)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(None)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(None)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(None)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(None)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(None)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(None)
	uint8                                        Pad_2EB2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCineCameraSettings* GetDefaultObj();

	void SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets);
	void SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetDefaultLensFStop(float InDefaultLensFStop);
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
	void SetCropPresets(const TArray<struct FNamedPlateCropPreset>& InCropPresets);
	void GetLensPresetNames(const TArray<class FString>& ReturnValue);
	void GetLensPresetByName(const class FString& PresetName, const struct FCameraLensSettings& LensSettings, bool ReturnValue);
	void GetFilmbackPresetNames(const TArray<class FString>& ReturnValue);
	void GetFilmbackPresetByName(const class FString& PresetName, const struct FCameraFilmbackSettings& FilmbackSettings, bool ReturnValue);
	void GetCropPresetNames(const TArray<class FString>& ReturnValue);
	void GetCropPresetByName(const class FString& PresetName, const struct FPlateCropSettings& CropSettings, bool ReturnValue);
	void GetCineCameraSettings(class UCineCameraSettings* ReturnValue);
};

}


