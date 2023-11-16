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

// 0x10 (0x10 - 0x0)
// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
struct UGameplayTasksComponent_OnRep_SimulatedTasks_Params
{
public:
	TArray<class UGameplayTask*>                 PreviousSimulatedTasks;                            // 0x0(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct UGameplayTasksComponent_K2_RunGameplayTask_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(ZeroConstructor)
	class UGameplayTask*                         Task;                                              // 0x10(0x8)(ZeroConstructor)
	uint8                                        Priority;                                          // 0x18(0x1)(None)
	uint8                                        Pad_3F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        AdditionalRequiredResources;                       // 0x20(0x10)(ZeroConstructor)
	TArray<class UClass*>                        AdditionalClaimedResources;                        // 0x30(0x10)(None)
	enum class EGameplayTaskRunResult            ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_3F3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
struct UGameplayTask_ClaimResource_ClaimResources_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0(0x10)(ZeroConstructor)
	TArray<class UClass*>                        ResourceClasses;                                   // 0x10(0x10)(ZeroConstructor)
	uint8                                        Priority;                                          // 0x20(0x1)(None)
	uint8                                        Pad_3FA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TaskInstanceName;                                  // 0x24(0x8)(None)
	uint8                                        Pad_3FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask_ClaimResource*           ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
struct UGameplayTask_ClaimResource_ClaimResource_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0(0x10)(ZeroConstructor)
	class UClass*                                ResourceClass;                                     // 0x10(0x8)(ZeroConstructor)
	uint8                                        Priority;                                          // 0x18(0x1)(None)
	uint8                                        Pad_3FE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TaskInstanceName;                                  // 0x1C(0x8)(None)
	uint8                                        Pad_3FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask_ClaimResource*           ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct UGameplayTask_SpawnActor_SpawnActor_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(ZeroConstructor)
	struct FVector                               SpawnLocation;                                     // 0x10(0x18)(None)
	struct FRotator                              SpawnRotation;                                     // 0x28(0x18)(None)
	class UClass*                                Class;                                             // 0x40(0x8)(ZeroConstructor)
	bool                                         bSpawnOnlyOnAuthority;                             // 0x48(0x1)(None)
	uint8                                        Pad_400[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask_SpawnActor*              ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class AActor*                                SpawnedActor;                                      // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class AActor*                                SpawnedActor;                                      // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_402[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(ZeroConstructor)
	float                                        Time;                                              // 0x10(0x4)(None)
	uint8                                        Priority;                                          // 0x14(0x1)(None)
	uint8                                        Pad_409[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask_WaitDelay*               ReturnValue;                                       // 0x18(0x8)(None)
};

}
}


