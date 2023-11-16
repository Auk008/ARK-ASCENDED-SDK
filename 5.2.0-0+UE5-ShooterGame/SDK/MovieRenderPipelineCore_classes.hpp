#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineSetting
class UMoviePipelineSetting : public UObject
{
public:
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(None)
	bool                                         bEnabled;                                          // 0x30(0x1)(None)
	uint8                                        Pad_18[0x17];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	void SetIsEnabled(bool bInEnabled);
	void IsEnabled(bool ReturnValue);
	void BuildNewProcessCommandLineArgs(const TArray<class FString>& InOutUnrealURLParams, const TArray<class FString>& InOutCommandLineArgs, const TArray<class FString>& InOutDeviceProfileCvars, const TArray<class FString>& InOutExecCmds);
	void BuildNewProcessCommandLine(const class FString& InOutUnrealURLParams, const class FString& InOutCommandLineArgs);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(None)
	uint8                                        Pad_19[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverscanPercentage;                                // 0x4C(0x4)(None)
	bool                                         bRenderAllCameras;                                 // 0x50(0x1)(None)
	uint8                                        Pad_1A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCameraSetting* GetDefaultObj();

};

// 0x0 (0x558 - 0x558)
// Class MovieRenderPipelineCore.MoviePipelineGameMode
class AMoviePipelineGameMode : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class AMoviePipelineGameMode* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
public:
	int32                                        TileCount;                                         // 0x48(0x4)(None)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(None)
	float                                        OverlapRatio;                                      // 0x50(0x4)(None)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(None)
	uint8                                        Pad_1C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(None)
	bool                                         bAllocateHistoryPerTile;                           // 0x5C(0x1)(None)
	uint8                                        Pad_1D[0xB];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(None)
	uint8                                        Pad_1E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(None)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(None)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(None)
	uint8                                        Pad_1F[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutorSettings* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputBase
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineOutputBase* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
public:
	class FText                                  CategoryText;                                      // 0x48(0x18)(None)
	bool                                         bIsValidOnPrimary;                                 // 0x60(0x1)(None)
	bool                                         bIsValidOnShots;                                   // 0x61(0x1)(None)
	bool                                         bCanBeDisabled;                                    // 0x62(0x1)(None)
	uint8                                        Pad_24[0x5];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineSetting_BlueprintBase* GetDefaultObj();

	void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
	void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
	void ReceiveGetFormatArguments(const struct FMoviePipelineFormatArgs& InOutFormatArgs, const struct FMoviePipelineFormatArgs& ReturnValue);
	void OnEngineTickBeginFrame();
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineViewFamilySetting* GetDefaultObj();

};

// 0x0 (0x320 - 0x320)
// Class MovieRenderPipelineCore.MovieRenderDebugWidget
class UMovieRenderDebugWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMovieRenderDebugWidget* GetDefaultObj();

	void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
};

// 0x3E8 (0x410 - 0x28)
// Class MovieRenderPipelineCore.MoviePipeline
class UMoviePipeline : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x38(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x48(0x10)(ZeroConstructor)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x58(0x8)(ZeroConstructor)
	uint8                                        Pad_36[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0x70(0x8)(ZeroConstructor)
	class ULevelSequence*                        TargetSequence;                                    // 0x78(0x8)(ZeroConstructor)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x80(0x8)(ZeroConstructor)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0x88(0x8)(ZeroConstructor)
	class UTexture*                              PreviewTexture;                                    // 0x90(0x8)(ZeroConstructor)
	uint8                                        Pad_38[0x288];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DebugWidgetClass;                                  // 0x320(0x8)(ZeroConstructor)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x328(0x8)(None)
	uint8                                        Pad_39[0xE0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	void Shutdown(bool bError);
	void SetInitializationTime(const struct FDateTime& InDateTime);
	void RequestShutdown(bool bIsError);
	void OnMoviePipelineFinishedImpl();
	void IsShutdownRequested(bool ReturnValue);
	void Initialize(class UMoviePipelineExecutorJob* InJob);
	void GetPreviewTexture(class UTexture* ReturnValue);
	void GetPipelinePrimaryConfig(class UMoviePipelinePrimaryConfig* ReturnValue);
	void GetPipelineMasterConfig(class UMoviePipelinePrimaryConfig* ReturnValue);
	void GetInitializationTime(const struct FDateTime& ReturnValue);
	void GetCurrentJob(class UMoviePipelineExecutorJob* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_43[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(None)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(None)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(None)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(None)
	uint8                                        Pad_47[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(None)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(None)
	uint8                                        Pad_48[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(None)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(None)
	uint8                                        Pad_49[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineAntiAliasingSetting* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBlueprintLibrary* GetDefaultObj();

	void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool bShotsChanged);
	void ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams, bool bGetNextVersion, int32 ReturnValue);
	void ResolveFilenameFormatArguments(const class FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, const class FString& OutFinalPath, const struct FMoviePipelineFormatArgs& OutMergedFormatArgs);
	void LoadManifestFileFromString(const class FString& InManifestFilePath, class UMoviePipelineQueue* ReturnValue);
	void GetRootTimecode(class UMoviePipeline* InMoviePipeline, const struct FTimecode& ReturnValue);
	void GetRootFrameNumber(class UMoviePipeline* InMoviePipeline, const struct FFrameNumber& ReturnValue);
	void GetPipelineState(class UMoviePipeline* InPipeline, enum class EMovieRenderPipelineState ReturnValue);
	void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32 OutCurrentIndex, int32 OutTotalCount);
	void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32 OutCurrentIndex, int32 OutTotalCount);
	void GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline, class FText ReturnValue);
	void GetMasterTimecode(class UMoviePipeline* InMoviePipeline, const struct FTimecode& ReturnValue);
	void GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline, const struct FFrameNumber& ReturnValue);
	void GetMapPackageName(class UMoviePipelineExecutorJob* InJob, const class FString& ReturnValue);
	void GetJobName(class UMoviePipeline* InMoviePipeline, class FText ReturnValue);
	void GetJobInitializationTime(class UMoviePipeline* InMoviePipeline, const struct FDateTime& ReturnValue);
	void GetJobAuthor(class UMoviePipeline* InMoviePipeline, class FText ReturnValue);
	void GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, const struct FTimespan& OutEstimate, bool ReturnValue);
	void GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot, const struct FIntPoint& ReturnValue);
	void GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline, const struct FTimecode& ReturnValue);
	void GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline, const struct FFrameNumber& ReturnValue);
	void GetCurrentSequence(class UMoviePipeline* InMoviePipeline, class ULevelSequence* ReturnValue);
	void GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline, const struct FMoviePipelineSegmentWorkMetrics& ReturnValue);
	void GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline, enum class EMovieRenderShotState ReturnValue);
	void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText OutOuterName, class FText OutInnerName);
	void GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline, float ReturnValue);
	void GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline, float ReturnValue);
	void GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline, class UMoviePipelineExecutorShot* ReturnValue);
	void GetCurrentAperture(class UMoviePipeline* InMoviePipeline, float ReturnValue);
	void GetCompletionPercentage(class UMoviePipeline* InPipeline, float ReturnValue);
	void FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot, class UMoviePipelineSetting* ReturnValue);
	void DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence, class UMovieSceneSequence* ReturnValue);
};

// 0xA8 (0xF0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0xA0)(ZeroConstructor)
	bool                                         bDisableToneCurve;                                 // 0xE8(0x1)(None)
	uint8                                        Pad_7A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(None)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(None)
	uint8                                        Pad_7B[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(None)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(None)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(None)
	bool                                         bWriteEachFrameDuration;                           // 0x72(0x1)(None)
	uint8                                        Pad_7C[0x15];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(None)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(None)
	class FString                                VideoCodec;                                        // 0x60(0x10)(None)
	class FString                                AudioCodec;                                        // 0x70(0x10)(None)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(None)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(None)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(None)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(None)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(None)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(None)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(None)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(None)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(None)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(ZeroConstructor)
	TSoftObjectPtr<class UMoviePipelineConfigBase> ConfigOrigin;                                      // 0x48(0x30)(None)
	uint8                                        Pad_80[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	void SetConfigOrigin(class UMoviePipelineConfigBase* InConfig);
	void RemoveSetting(class UMoviePipelineSetting* InSetting);
	void GetUserSettings(const TArray<class UMoviePipelineSetting*>& ReturnValue);
	void GetConfigOrigin(class UMoviePipelineConfigBase* ReturnValue);
	void FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch, const TArray<class UMoviePipelineSetting*>& ReturnValue);
	void FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch, class UMoviePipelineSetting* ReturnValue);
	void FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch, class UMoviePipelineSetting* ReturnValue);
	void CopyFrom(class UMoviePipelineConfigBase* InConfig);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(None)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(None)
	uint8                                        Pad_81[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(None)
	bool                                         bCaptureUnrealInsightsTrace;                       // 0x50(0x1)(None)
	uint8                                        Pad_82[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(ZeroConstructor)
	uint8                                        Pad_87[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(ZeroConstructor)
	uint8                                        Pad_88[0x20];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(ZeroConstructor)
	class UClass*                                DebugWidgetClass;                                  // 0xA0(0x8)(ZeroConstructor)
	uint8                                        Pad_89[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserData;                                          // 0xB8(0x10)(None)
	class UClass*                                TargetPipelineClass;                               // 0xC8(0x8)(None)
	uint8                                        Pad_8A[0x48];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetMoviePipelineClass(class UClass* InPipelineClass);
	void SendSocketMessage(const class FString& InMessage, bool ReturnValue);
	void SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString> InHeaders, int32 ReturnValue);
	void OnExecutorFinishedImpl();
	void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, class FText ErrorReason);
	void OnBeginFrame();
	void IsSocketConnected(bool ReturnValue);
	void IsRendering(bool ReturnValue);
	void GetStatusProgress(float ReturnValue);
	void GetStatusMessage(const class FString& ReturnValue);
	void Execute(class UMoviePipelineQueue* InPipelineQueue);
	void DisconnectSocket();
	void ConnectSocket(const class FString& InHostName, int32 InPort, bool ReturnValue);
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_8B[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(None)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(None)
	uint8                                        Pad_8C[0x1F];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	class UClass*                                GameModeOverride;                                  // 0x48(0x8)(ZeroConstructor)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(None)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(None)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(None)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(None)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(None)
	uint8                                        Pad_8D[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(None)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(None)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(None)
	uint8                                        Pad_8E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(None)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(None)
	bool                                         bFlushStreamingManagers;                           // 0x69(0x1)(None)
	bool                                         bOverrideVirtualTextureFeedbackFactor;             // 0x6A(0x1)(None)
	uint8                                        Pad_8F[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualTextureFeedbackFactor;                      // 0x6C(0x4)(None)
	uint8                                        Pad_90[0xC0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x28 (0x140 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x118(0x8)(ZeroConstructor)
	class UMoviePipeline*                        ActiveMoviePipeline;                               // 0x120(0x8)(ZeroConstructor)
	uint8                                        Pad_91[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x50 (0x190 - 0x140)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x140(0x1)(None)
	uint8                                        Pad_92[0x4F];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(None)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(None)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(None)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(None)
	uint8                                        Pad_93[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(None)
	uint8                                        Pad_94[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(None)
	uint8                                        Pad_95[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(None)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(None)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(None)
	uint8                                        Pad_96[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(None)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(None)
	int32                                        VersionNumber;                                     // 0x98(0x4)(None)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(None)
	uint8                                        Pad_97[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(None)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(None)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(None)
	uint8                                        Pad_98[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x68 (0xE8 - 0x80)
// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{
public:
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x80(0x50)(ZeroConstructor)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xD0(0x8)(ZeroConstructor)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xD8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMoviePipelinePrimaryConfig* GetDefaultObj();

	void InitializeTransientSettings();
	void GetTransientSettings(const TArray<class UMoviePipelineSetting*>& ReturnValue);
	void GetEffectiveFrameRate(class ULevelSequence* InSequence, const struct FFrameRate& ReturnValue);
	void GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings, const TArray<class UMoviePipelineSetting*>& ReturnValue);
};

// 0x18 (0x130 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	class UClass*                                ExecutorClass;                                     // 0x118(0x8)(ZeroConstructor)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x120(0x8)(ZeroConstructor)
	class UWorld*                                LastLoadedWorld;                                   // 0x128(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	void OnMapLoad(class UWorld* InWorld);
	void GetLastLoadedWorld(class UWorld* ReturnValue);
	void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
};

// 0x130 (0x158 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(None)
	uint8                                        Pad_9B[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OuterName;                                         // 0x30(0x10)(None)
	class FString                                InnerName;                                         // 0x40(0x10)(None)
	TArray<struct FMoviePipelineSidecarCamera>   SidecarCameras;                                    // 0x50(0x10)(None)
	uint8                                        Pad_9C[0xA8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Progress;                                          // 0x108(0x4)(None)
	uint8                                        Pad_9D[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StatusMessage;                                     // 0x110(0x10)(None)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x120(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x128(0x30)(None)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	void ShouldRender(bool ReturnValue);
	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
	void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
	void GetStatusProgress(float ReturnValue);
	void GetStatusMessage(const class FString& ReturnValue);
	void GetShotOverridePresetOrigin(class UMoviePipelineShotConfig* ReturnValue);
	void GetShotOverrideConfiguration(class UMoviePipelineShotConfig* ReturnValue);
	void GetCameraName(int32 InCameraIndex, const class FString& ReturnValue);
	void AllocateNewShotOverrideConfig(class UClass* InConfigType, class UMoviePipelineShotConfig* ReturnValue);
};

// 0xE8 (0x110 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
class UMoviePipelineExecutorJob : public UObject
{
public:
	class FString                                JobName;                                           // 0x28(0x10)(None)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x20)(None)
	struct FSoftObjectPath                       Map;                                               // 0x58(0x20)(None)
	class FString                                Author;                                            // 0x78(0x10)(None)
	class FString                                Comment;                                           // 0x88(0x10)(None)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x98(0x10)(ZeroConstructor)
	class FString                                UserData;                                          // 0xA8(0x10)(None)
	class FString                                StatusMessage;                                     // 0xB8(0x10)(None)
	float                                        StatusProgress;                                    // 0xC8(0x4)(None)
	bool                                         bIsConsumed;                                       // 0xCC(0x1)(None)
	uint8                                        Pad_9E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoviePipelinePrimaryConfig*           Configuration;                                     // 0xD0(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UMoviePipelinePrimaryConfig> PresetOrigin;                                      // 0xD8(0x30)(None)
	bool                                         bEnabled;                                          // 0x108(0x1)(None)
	uint8                                        Pad_9F[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetSequence(const struct FSoftObjectPath& InSequence);
	void SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset);
	void SetIsEnabled(bool bInEnabled);
	void SetConsumed(bool bInConsumed);
	void SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset);
	void OnDuplicated();
	void IsEnabled(bool ReturnValue);
	void IsConsumed(bool ReturnValue);
	void GetStatusProgress(float ReturnValue);
	void GetStatusMessage(const class FString& ReturnValue);
	void GetPresetOrigin(class UMoviePipelinePrimaryConfig* ReturnValue);
	void GetConfiguration(class UMoviePipelinePrimaryConfig* ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineQueue
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(ZeroConstructor)
	TSoftObjectPtr<class UMoviePipelineQueue>    QueueOrigin;                                       // 0x38(0x30)(None)
	uint8                                        Pad_A1[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	void SetQueueOrigin(class UMoviePipelineQueue* InConfig);
	void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index);
	void GetQueueOrigin(class UMoviePipelineQueue* ReturnValue);
	void GetJobs(const TArray<class UMoviePipelineExecutorJob*>& ReturnValue);
	void DuplicateJob(class UMoviePipelineExecutorJob* InJob, class UMoviePipelineExecutorJob* ReturnValue);
	void DeleteJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteAllJobs();
	void CopyFrom(class UMoviePipelineQueue* InQueue);
	void AllocateNewJob(class UClass* InJobType, class UMoviePipelineExecutorJob* ReturnValue);
};

// 0x60 (0x90 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnRenderFinished;                                  // 0x30(0x10)(ZeroConstructor)
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x40(0x8)(ZeroConstructor)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x48(0x8)(None)
	uint8                                        Pad_A3[0x40];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	void SetConfiguration(class UClass* InProgressWidgetClass, bool bRenderPlayerViewport);
	void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
	void RenderQueueWithExecutor(class UClass* InExecutorType, class UMoviePipelineExecutorBase* ReturnValue);
	void RenderJob(class UMoviePipelineExecutorJob* InJob);
	void IsRendering(bool ReturnValue);
	void GetQueue(class UMoviePipelineQueue* ReturnValue);
	void GetActiveExecutor(class UMoviePipelineExecutorBase* ReturnValue);
	void AllocateJob(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* ReturnValue);
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineRenderPass
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineRenderPass* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class MovieRenderPipelineCore.MoviePipelineShotConfig
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineShotConfig* GetDefaultObj();

};

// 0x48 (0x90 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_A4[0x48];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineVideoOutputBase* GetDefaultObj();

};

}


