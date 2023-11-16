#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELiveLinkCameraProjectionMode : uint8
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class ELiveLinkSourceMode : uint8
{
	Latest                         = 0,
	EngineTime                     = 1,
	Timecode                       = 2,
	ELiveLinkSourceMode_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
struct FLiveLinkSubjectName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
struct FLiveLinkSubjectKey
{
public:
	struct FGuid                                 Source;                                            // 0x0(0x10)(None)
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x10(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
struct FLiveLinkSubjectPreset
{
public:
	struct FLiveLinkSubjectKey                   Key;                                               // 0x0(0x18)(None)
	class UClass*                                Role;                                              // 0x18(0x8)(ZeroConstructor)
	class ULiveLinkSubjectSettings*              Settings;                                          // 0x20(0x8)(ZeroConstructor)
	class ULiveLinkVirtualSubject*               VirtualSubject;                                    // 0x28(0x8)(None)
	bool                                         bEnabled;                                          // 0x30(0x1)(None)
	uint8                                        Pad_12B9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
struct FLiveLinkSourceHandle
{
public:
	uint8                                        Pad_12BB[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
struct FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          PropertyNames;                                     // 0x0(0x10)(None)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<int32>                                BoneParents;                                       // 0x20(0x10)(AutoWeak, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
struct FLiveLinkWorldTime
{
public:
	double                                       Time;                                              // 0x0(0x8)(None)
	double                                       Offset;                                            // 0x8(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkMetaData
struct FLiveLinkMetaData
{
public:
	TMap<class FName, class FString>             StringMetaData;                                    // 0x0(0x50)(None)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x50(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
struct FLiveLinkBaseFrameData
{
public:
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x0(0x10)(None)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x10(0x60)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<float>                                PropertyValues;                                    // 0x70(0x10)(None)
	uint8                                        Pad_12BF[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0xA0(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
struct FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_12C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkBaseStaticData               StaticData;                                        // 0x8(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLiveLinkBaseFrameData                FrameData;                                         // 0x18(0xA0)(None)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
public:
	bool                                         bIsLocationSupported;                              // 0x10(0x1)(None)
	bool                                         bIsRotationSupported;                              // 0x11(0x1)(None)
	bool                                         bIsScaleSupported;                                 // 0x12(0x1)(None)
	uint8                                        Pad_12C4[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsFieldOfViewSupported;                           // 0x18(0x1)(None)
	bool                                         bIsAspectRatioSupported;                           // 0x19(0x1)(None)
	bool                                         bIsFocalLengthSupported;                           // 0x1A(0x1)(None)
	bool                                         bIsProjectionModeSupported;                        // 0x1B(0x1)(None)
	float                                        FilmBackWidth;                                     // 0x1C(0x4)(None)
	float                                        FilmBackHeight;                                    // 0x20(0x4)(None)
	bool                                         bIsApertureSupported;                              // 0x24(0x1)(None)
	bool                                         bIsFocusDistanceSupported;                         // 0x25(0x1)(None)
	bool                                         bIsDepthOfFieldSupported;                          // 0x26(0x1)(None)
	uint8                                        Pad_12C5[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x100 - 0xA0)
// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
public:
	struct FTransform                            Transform;                                         // 0xA0(0x60)(None)
};

// 0x20 (0x120 - 0x100)
// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        FieldOfView;                                       // 0x100(0x4)(None)
	float                                        AspectRatio;                                       // 0x104(0x4)(None)
	float                                        FocalLength;                                       // 0x108(0x4)(None)
	float                                        Aperture;                                          // 0x10C(0x4)(None)
	float                                        FocusDistance;                                     // 0x110(0x4)(None)
	enum class ELiveLinkCameraProjectionMode     ProjectionMode;                                    // 0x114(0x1)(None)
	uint8                                        Pad_12C7[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x150 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkCameraStaticData             StaticData;                                        // 0x8(0x28)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLiveLinkCameraFrameData              FrameData;                                         // 0x30(0x120)(None)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsTemperatureSupported;                           // 0x18(0x1)(None)
	bool                                         bIsIntensitySupported;                             // 0x19(0x1)(None)
	bool                                         bIsLightColorSupported;                            // 0x1A(0x1)(None)
	bool                                         bIsInnerConeAngleSupported;                        // 0x1B(0x1)(None)
	bool                                         bIsOuterConeAngleSupported;                        // 0x1C(0x1)(None)
	bool                                         bIsAttenuationRadiusSupported;                     // 0x1D(0x1)(None)
	bool                                         bIsSourceLenghtSupported;                          // 0x1E(0x1)(None)
	bool                                         bIsSourceRadiusSupported;                          // 0x1F(0x1)(None)
	bool                                         bIsSoftSourceRadiusSupported;                      // 0x20(0x1)(None)
	uint8                                        Pad_12CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x130 - 0x100)
// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        Temperature;                                       // 0x100(0x4)(None)
	float                                        Intensity;                                         // 0x104(0x4)(None)
	struct FColor                                LightColor;                                        // 0x108(0x4)(None)
	float                                        InnerConeAngle;                                    // 0x10C(0x4)(None)
	float                                        OuterConeAngle;                                    // 0x110(0x4)(None)
	float                                        AttenuationRadius;                                 // 0x114(0x4)(None)
	float                                        SourceRadius;                                      // 0x118(0x4)(None)
	float                                        SoftSourceRadius;                                  // 0x11C(0x4)(None)
	float                                        SourceLength;                                      // 0x120(0x4)(None)
	uint8                                        Pad_12CC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x160 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkLightStaticData              StaticData;                                        // 0x8(0x28)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLiveLinkLightFrameData               FrameData;                                         // 0x30(0x130)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
struct FLiveLinkSourcePreset
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	class ULiveLinkSourceSettings*               Settings;                                          // 0x10(0x8)(None)
	class FText                                  SourceType;                                        // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
struct FLiveLinkRefSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<int32>                                BoneParents;                                       // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
struct FLiveLinkSubjectRepresentation
{
public:
	struct FLiveLinkSubjectName                  Subject;                                           // 0x0(0x8)(None)
	class UClass*                                Role;                                              // 0x8(0x8)(None)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkTransformStaticData          StaticData;                                        // 0x8(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLiveLinkTransformFrameData           FrameData;                                         // 0x20(0x100)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
struct FLiveLinkCurveConversionSettings
{
public:
	TMap<class FString, struct FSoftObjectPath>  CurveConversionAssetMap;                           // 0x0(0x50)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
struct FLiveLinkSourceBufferManagementSettings
{
public:
	bool                                         bValidEngineTimeEnabled;                           // 0x0(0x1)(None)
	uint8                                        Pad_12D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValidEngineTime;                                   // 0x4(0x4)(None)
	float                                        EngineTimeOffset;                                  // 0x8(0x4)(None)
	uint8                                        Pad_12D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EngineTimeClockOffset;                             // 0x10(0x8)(None)
	double                                       SmoothEngineTimeOffset;                            // 0x18(0x8)(None)
	bool                                         bGenerateSubFrame;                                 // 0x20(0x1)(None)
	uint8                                        Pad_12D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            DetectedFrameRate;                                 // 0x24(0x8)(None)
	bool                                         bUseTimecodeSmoothLatest;                          // 0x2C(0x1)(None)
	uint8                                        Pad_12D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            SourceTimecodeFrameRate;                           // 0x30(0x8)(None)
	bool                                         bValidTimecodeFrameEnabled;                        // 0x38(0x1)(None)
	uint8                                        Pad_12D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ValidTimecodeFrame;                                // 0x3C(0x4)(None)
	float                                        TimecodeFrameOffset;                               // 0x40(0x4)(None)
	uint8                                        Pad_12D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimecodeClockOffset;                               // 0x48(0x8)(None)
	int32                                        LatestOffset;                                      // 0x50(0x4)(None)
	int32                                        MaxNumberOfFrameToBuffered;                        // 0x54(0x4)(None)
	bool                                         bKeepAtLeastOneFrame;                              // 0x58(0x1)(None)
	uint8                                        Pad_12D8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
struct FLiveLinkSourceDebugInfo
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(None)
	int32                                        SnapshotIndex;                                     // 0x8(0x4)(None)
	int32                                        NumberOfBufferAtSnapshot;                          // 0xC(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
struct FLiveLinkTimeSynchronizationSettings
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(None)
	struct FFrameNumber                          FrameOffset;                                       // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
struct FLiveLinkInterpolationSettings
{
public:
	bool                                         bUseInterpolation;                                 // 0x0(0x1)(None)
	uint8                                        Pad_12DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpolationOffset;                               // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTime
struct FLiveLinkTime
{
public:
	double                                       WorldTime;                                         // 0x0(0x8)(None)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x8(0x10)(None)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
struct FLiveLinkFrameRate : public FFrameRate
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(None)
	int32                                        Frames;                                            // 0x4(0x4)(None)
	struct FLiveLinkFrameRate                    FrameRate;                                         // 0x8(0x8)(None)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
struct FLiveLinkCurveElement
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(None)
	float                                        CurveValue;                                        // 0x8(0x4)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkFrameData
struct FLiveLinkFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkCurveElement>         CurveElements;                                     // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x20(0x10)(None)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x30(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LiveLinkInterface.SubjectMetadata
struct FSubjectMetadata
{
public:
	TMap<class FName, class FString>             StringMetaData;                                    // 0x0(0x50)(None)
	struct FTimecode                             SceneTimecode;                                     // 0x50(0x14)(None)
	struct FFrameRate                            SceneFramerate;                                    // 0x64(0x8)(None)
	uint8                                        Pad_12E2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct LiveLinkInterface.CachedSubjectFrame
struct FCachedSubjectFrame
{
public:
	uint8                                        Pad_12E3[0x160];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTransform
struct FLiveLinkTransform
{
public:
	uint8                                        Pad_12E4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LiveLinkInterface.SubjectFrameHandle
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_12E5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


