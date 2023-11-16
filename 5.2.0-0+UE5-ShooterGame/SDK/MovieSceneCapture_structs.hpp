#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6,
};

enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                           = 0,
	Initialized                    = 1,
	Capturing                      = 2,
	Finalizing                     = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses
{
public:
	TArray<class FString>                        Value;                                             // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution
{
public:
	int32                                        ResX;                                              // 0x0(0x4)(None)
	int32                                        ResY;                                              // 0x4(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x0(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                GameModeOverride;                                  // 0x10(0x8)(None)
	class FString                                OutputFormat;                                      // 0x18(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bOverwriteExisting;                                // 0x28(0x1)(None)
	bool                                         bUseRelativeFrameNumbers;                          // 0x29(0x1)(None)
	uint8                                        Pad_2A1C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HandleFrames;                                      // 0x2C(0x4)(None)
	class FString                                MovieExtension;                                    // 0x30(0x10)(None)
	uint8                                        ZeroPadFrameNumbers;                               // 0x40(0x1)(None)
	uint8                                        Pad_2A1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            FrameRate;                                         // 0x44(0x8)(None)
	bool                                         bUseCustomFrameRate;                               // 0x4C(0x1)(None)
	uint8                                        Pad_2A1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            CustomFrameRate;                                   // 0x50(0x8)(None)
	struct FCaptureResolution                    Resolution;                                        // 0x58(0x8)(None)
	bool                                         bEnableTextureStreaming;                           // 0x60(0x1)(None)
	bool                                         bCinematicEngineScalability;                       // 0x61(0x1)(None)
	bool                                         bCinematicMode;                                    // 0x62(0x1)(None)
	bool                                         bAllowMovement;                                    // 0x63(0x1)(None)
	bool                                         bAllowTurning;                                     // 0x64(0x1)(None)
	bool                                         bShowPlayer;                                       // 0x65(0x1)(None)
	bool                                         bShowHUD;                                          // 0x66(0x1)(None)
	bool                                         bUsePathTracer;                                    // 0x67(0x1)(None)
	int32                                        PathTracerSamplePerPixel;                          // 0x68(0x4)(None)
	uint8                                        Pad_2A1F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics
{
public:
	float                                        TotalElapsedTime;                                  // 0x0(0x4)(None)
	float                                        FrameDelta;                                        // 0x4(0x4)(None)
	int32                                        FrameNumber;                                       // 0x8(0x4)(None)
	int32                                        NumDroppedFrames;                                  // 0xC(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID
{
public:
	TMap<class FName, class FName>               Identifiers;                                       // 0x0(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixels
struct FCapturedPixels
{
public:
	uint8                                        Pad_2A20[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


