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
// Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
struct UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params
{
public:
	class UMoviePipeline*                        ForPipeline;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
struct UMoviePipelineConsoleVariableSetting_UpdateConsoleVariableEnableState_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	bool                                         bIsEnabled;                                        // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_12AA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
struct UMoviePipelineConsoleVariableSetting_RemoveConsoleVariable_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	bool                                         bRemoveAllInstances;                               // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_12AD[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
struct UMoviePipelineConsoleVariableSetting_GetConsoleVariables_Params
{
public:
	TArray<struct FMoviePipelineConsoleVariableEntry> ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
struct UMoviePipelineConsoleVariableSetting_AddOrUpdateConsoleVariable_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	float                                        Value;                                             // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_12B5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
struct UMoviePipelineConsoleVariableSetting_AddConsoleVariable_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	float                                        Value;                                             // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_12B7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


