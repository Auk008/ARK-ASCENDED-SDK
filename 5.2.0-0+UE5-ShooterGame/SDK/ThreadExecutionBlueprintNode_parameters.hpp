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

// 0x1 (0x1 - 0x0)
// Function ThreadExecutionBlueprintNode.Mutex.TryLock
struct UMutex_TryLock_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLoop.CreateThreadExecLoop
struct UThreadAsyncExecLoop_CreateThreadExecLoop_Params
{
public:
	float                                        Interval;                                          // 0x0(0x4)(None)
	bool                                         bLongTask;                                         // 0x4(0x1)(None)
	uint8                                        Pad_1914[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UThreadAsyncExecLoop*                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.SyncExecOnce.CreateSyncExecOnce
struct USyncExecOnce_CreateSyncExecOnce_Params
{
public:
	class USyncExecOnce*                         ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ThreadWait
struct UThreadAsyncExecLibrary_ThreadWait_Params
{
public:
	float                                        Seconds;                                           // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickableWhenPaused
struct UThreadAsyncExecLibrary_SetTickableWhenPaused_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(None)
	bool                                         NewValue;                                          // 0x8(0x1)(None)
	uint8                                        Pad_1930[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickable
struct UThreadAsyncExecLibrary_SetTickable_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(None)
	bool                                         NewValue;                                          // 0x8(0x1)(None)
	uint8                                        Pad_1939[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickableWhenPaused
struct UThreadAsyncExecLibrary_IsTickableWhenPaused_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1942[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickable
struct UThreadAsyncExecLibrary_IsTickable_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1943[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsGameThread
struct UThreadAsyncExecLibrary_IsGameThread_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadName
struct UThreadAsyncExecLibrary_GetCurrentThreadName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadID
struct UThreadAsyncExecLibrary_GetCurrentThreadID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ExecIsGameThread
struct UThreadAsyncExecLibrary_ExecIsGameThread_Params
{
public:
	bool                                         bIsInGameThread;                                   // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextTick
struct UThreadAsyncExecLibrary_BreakNextTick_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextLoop
struct UThreadAsyncExecLibrary_BreakNextLoop_Params
{
public:
	class UThreadAsyncExecLoop*                  LoopHandle;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecOnce.CreateThreadExecOnce
struct UThreadAsyncExecOnce_CreateThreadExecOnce_Params
{
public:
	bool                                         bLongTask;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1955[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UThreadAsyncExecOnce*                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ThreadExecutionBlueprintNode.ThreadAsyncExecTick.OnTick__DelegateSignature
struct UThreadAsyncExecTick_OnTick__DelegateSignature_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(None)
	uint8                                        Pad_1962[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.CreateThreadExecTick
struct UThreadAsyncExecTick_CreateThreadExecTick_Params
{
public:
	bool                                         bLongTask;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1964[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UThreadAsyncExecTick*                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings.Get
struct UThreadExecDeveloperSettings_Get_Params
{
public:
	class UThreadExecDeveloperSettings*          ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecTicks
struct UThreadNodeSubsystem_GetAllThreadExecTicks_Params
{
public:
	TSet<class UThreadAsyncExecTick*>            ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecOnces
struct UThreadNodeSubsystem_GetAllThreadExecOnces_Params
{
public:
	TSet<class UThreadAsyncExecOnce*>            ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecNodes
struct UThreadNodeSubsystem_GetAllThreadExecNodes_Params
{
public:
	TSet<class UThreadAsyncExecBase*>            ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecLoops
struct UThreadNodeSubsystem_GetAllThreadExecLoops_Params
{
public:
	TSet<class UThreadAsyncExecLoop*>            ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllMutexes
struct UThreadNodeSubsystem_GetAllMutexes_Params
{
public:
	TSet<class UMutex*>                          ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.DestoryMutex
struct UThreadNodeSubsystem_DestoryMutex_Params
{
public:
	class UMutex*                                Mutex;                                             // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.CreateNewMutex
struct UThreadNodeSubsystem_CreateNewMutex_Params
{
public:
	class UMutex*                                ReturnValue;                                       // 0x0(0x8)(None)
};

}
}


