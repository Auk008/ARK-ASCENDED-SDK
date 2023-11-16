#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x320 - 0x320)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget
class UMoviePipelineBurnInWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInWidget* GetDefaultObj();

	void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
public:
	struct FSoftClassPath                        BurnInClass;                                       // 0x48(0x20)(None)
	bool                                         bCompositeOntoFinalImage;                          // 0x68(0x1)(None)
	uint8                                        Pad_12A6[0x2F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x98(0x8)(ZeroConstructor)
	TArray<class UMoviePipelineBurnInWidget*>    BurnInWidgetInstances;                             // 0xA0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMoviePipelineBurnInSetting* GetDefaultObj();

};

// 0xB0 (0xF8 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
public:
	TArray<TScriptInterface<class IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets;                            // 0x48(0x10)(ZeroConstructor)
	TMap<class FString, float>                   ConsoleVariables;                                  // 0x58(0x50)(None)
	TArray<class FString>                        StartConsoleCommands;                              // 0xA8(0x10)(None)
	TArray<class FString>                        EndConsoleCommands;                                // 0xB8(0x10)(None)
	TArray<struct FMoviePipelineConsoleVariableEntry> CVars;                                             // 0xC8(0x10)(None)
	uint8                                        Pad_12B8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineConsoleVariableSetting* GetDefaultObj();

	void UpdateConsoleVariableEnableState(const class FString& Name, bool bIsEnabled, bool ReturnValue);
	void RemoveConsoleVariable(const class FString& Name, bool bRemoveAllInstances, bool ReturnValue);
	void GetConsoleVariables(const TArray<struct FMoviePipelineConsoleVariableEntry>& ReturnValue);
	void AddOrUpdateConsoleVariable(const class FString& Name, float Value, bool ReturnValue);
	void AddConsoleVariable(const class FString& Name, float Value, bool ReturnValue);
};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
public:
	bool                                         bCompositeOntoFinalImage;                          // 0x48(0x1)(None)
	uint8                                        Pad_12BD[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x60(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMoviePipelineWidgetRenderer* GetDefaultObj();

};

}


