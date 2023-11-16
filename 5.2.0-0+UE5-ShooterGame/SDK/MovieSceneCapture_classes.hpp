#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	uint8                                        Pad_29FC[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneCaptureProtocolState   State;                                             // 0x50(0x1)(None)
	uint8                                        Pad_29FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCaptureProtocolBase* GetDefaultObj();

	void IsCapturing(bool ReturnValue);
	void GetState(enum class EMovieSceneCaptureProtocolState ReturnValue);
};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneAudioCaptureProtocolBase* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.NullAudioCaptureProtocol
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:

	static class UClass* StaticClass();
	static class UNullAudioCaptureProtocol* GetDefaultObj();

};

// 0x38 (0x90 - 0x58)
// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	class FString                                Filename;                                          // 0x58(0x10)(None)
	uint8                                        Pad_2A00[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMasterAudioSubmixCaptureProtocol* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneImageCaptureProtocolBase* GetDefaultObj();

};

// 0x70 (0xC8 - 0x58)
// Class MovieSceneCapture.CompositionGraphCaptureProtocol
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses        IncludeRenderPasses;                               // 0x58(0x10)(None)
	bool                                         bCaptureFramesInHDR;                               // 0x68(0x1)(None)
	uint8                                        Pad_2A01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HDRCompressionQuality;                             // 0x6C(0x4)(None)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0x70(0x1)(None)
	uint8                                        Pad_2A02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       PostProcessingMaterial;                            // 0x78(0x20)(None)
	bool                                         bDisableScreenPercentage;                          // 0x98(0x1)(None)
	uint8                                        Pad_2A03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    PostProcessingMaterialPtr;                         // 0xA0(0x8)(None)
	uint8                                        Pad_2A04[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositionGraphCaptureProtocol* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureInterface
class IMovieSceneCaptureInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCaptureInterface* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class MovieSceneCapture.FrameGrabberProtocol
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	uint8                                        Pad_2A05[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFrameGrabberProtocol* GetDefaultObj();

};

// 0x70 (0xD8 - 0x68)
// Class MovieSceneCapture.ImageSequenceProtocol
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	uint8                                        Pad_2A06[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImageSequenceProtocol* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.CompressedImageSequenceProtocol
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int32                                        CompressionQuality;                                // 0xD8(0x4)(None)
	uint8                                        Pad_2A07[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompressedImageSequenceProtocol* GetDefaultObj();

};

// 0x0 (0xD8 - 0xD8)
// Class MovieSceneCapture.ImageSequenceProtocol_BMP
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_BMP* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneCapture.ImageSequenceProtocol_PNG
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_PNG* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneCapture.ImageSequenceProtocol_JPG
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_JPG* GetDefaultObj();

};

// 0x10 (0xE8 - 0xD8)
// Class MovieSceneCapture.ImageSequenceProtocol_EXR
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                         bCompressed;                                       // 0xD8(0x1)(None)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0xD9(0x1)(None)
	uint8                                        Pad_2A08[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_EXR* GetDefaultObj();

};

// 0x210 (0x238 - 0x28)
// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public UObject
{
public:
	uint8                                        Pad_2A09[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        ImageCaptureProtocolType;                          // 0x38(0x20)(None)
	struct FSoftClassPath                        AudioCaptureProtocolType;                          // 0x58(0x20)(None)
	class UMovieSceneImageCaptureProtocolBase*   ImageCaptureProtocol;                              // 0x78(0x8)(ZeroConstructor)
	class UMovieSceneAudioCaptureProtocolBase*   AudioCaptureProtocol;                              // 0x80(0x8)(ZeroConstructor)
	struct FMovieSceneCaptureSettings            Settings;                                          // 0x88(0x70)(None)
	bool                                         bUseSeparateProcess;                               // 0xF8(0x1)(None)
	bool                                         bCloseEditorWhenCaptureStarts;                     // 0xF9(0x1)(None)
	uint8                                        Pad_2A0B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArguments;                    // 0x100(0x10)(None)
	class FString                                InheritedCommandLineArguments;                     // 0x110(0x10)(None)
	uint8                                        Pad_2A0C[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCapture* GetDefaultObj();

	void SetImageCaptureProtocolType(class UClass* ProtocolType);
	void SetAudioCaptureProtocolType(class UClass* ProtocolType);
	void GetImageCaptureProtocol(class UMovieSceneCaptureProtocolBase* ReturnValue);
	void GetAudioCaptureProtocol(class UMovieSceneCaptureProtocolBase* ReturnValue);
};

// 0x20 (0x258 - 0x238)
// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                         bAutoStartCapture;                                 // 0x238(0x1)(None)
	uint8                                        Pad_2A0D[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 PrerequisiteActorId;                               // 0x244(0x10)(None)
	uint8                                        Pad_2A0E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelCapture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureEnvironment
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCaptureEnvironment* GetDefaultObj();

	void IsCaptureInProgress(bool ReturnValue);
	void GetCaptureFrameNumber(int32 ReturnValue);
	void GetCaptureElapsedTime(float ReturnValue);
	void FindImageCaptureProtocol(class UMovieSceneImageCaptureProtocolBase* ReturnValue);
	void FindAudioCaptureProtocol(class UMovieSceneAudioCaptureProtocolBase* ReturnValue);
};

// 0x80 (0xD8 - 0x58)
// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                World;                                             // 0x58(0x8)(None)
	uint8                                        Pad_2A17[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUserDefinedCaptureProtocol* GetDefaultObj();

	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);
	void ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	void OnSetup(bool ReturnValue);
	void OnPreTick();
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	void OnCanFinalize(bool ReturnValue);
	void OnBeginFinalize();
	void GetCurrentFrameMetrics(const struct FFrameMetrics& ReturnValue);
	void GenerateFilename(const struct FFrameMetrics& InFrameMetrics, const class FString& ReturnValue);
};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	enum class EDesiredImageFormat               Format;                                            // 0xD8(0x1)(None)
	bool                                         bEnableCompression;                                // 0xD9(0x1)(None)
	uint8                                        Pad_2A19[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CompressionQuality;                                // 0xDC(0x4)(None)

	static class UClass* StaticClass();
	static class UUserDefinedImageCaptureProtocol* GetDefaultObj();

	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
	void GenerateFilenameForCurrentFrame(const class FString& ReturnValue);
	void GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID, const class FString& ReturnValue);
};

// 0x18 (0x80 - 0x68)
// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                         bUseCompression;                                   // 0x68(0x1)(None)
	uint8                                        Pad_2A1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CompressionQuality;                                // 0x6C(0x4)(None)
	uint8                                        Pad_2A1B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVideoCaptureProtocol* GetDefaultObj();

};

}


