#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class GameplayTasks.GameplayTask
class UGameplayTask : public UObject
{
public:
	uint8                                        Pad_3E5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InstanceName;                                      // 0x30(0x8)(None)
	uint8                                        Pad_3E6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x3A(0x1)(None)
	uint8                                        Pad_3E7[0x25];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(None)

	static class UClass* StaticClass();
	static class UGameplayTask* GetDefaultObj();

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTasks.GameplayTaskOwnerInterface
class IGameplayTaskOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTaskOwnerInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public UObject
{
public:
	int32                                        ManualResourceID;                                  // 0x28(0x4)(None)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(None)
	uint8                                        Pad_3EB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        Pad_3ED[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTaskResource* GetDefaultObj();

};

// 0x78 (0x130 - 0xB8)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_3F4[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BitPad_35 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bIsNetDirty : 1;                                   // Mask: 0x2, PropSize: 0x10xCC(0x1)(None)
	uint8                                        BitPad_36 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0xD0(0x10)(ZeroConstructor)
	uint8                                        Pad_3F6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0xF0(0x10)(ZeroConstructor)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0x100(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnClaimedResourcesChange;                          // 0x110(0x10)(ZeroConstructor)
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x120(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UGameplayTasksComponent* GetDefaultObj();

	void OnRep_SimulatedTasks(const TArray<class UGameplayTask*>& PreviousSimulatedTasks);
	void K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<class UClass*>& AdditionalRequiredResources, const TArray<class UClass*>& AdditionalClaimedResources, enum class EGameplayTaskRunResult ReturnValue);
};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass();
	static class UGameplayTask_ClaimResource* GetDefaultObj();

	void ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const TArray<class UClass*>& ResourceClasses, uint8 Priority, class FName TaskInstanceName, class UGameplayTask_ClaimResource* ReturnValue);
	void ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, class UClass* ResourceClass, uint8 Priority, class FName TaskInstanceName, class UGameplayTask_ClaimResource* ReturnValue);
};

// 0x58 (0xC0 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x68(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x78(0x10)(ZeroConstructor)
	uint8                                        Pad_405[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ClassToSpawn;                                      // 0xB8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UGameplayTask_SpawnActor* GetDefaultObj();

	void SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority, class UGameplayTask_SpawnActor* ReturnValue);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	void BeginSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor, bool ReturnValue);
};

// 0x38 (0xA0 - 0x68)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x68(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTimeExpired;                                     // 0x78(0x10)(ZeroConstructor)
	uint8                                        Pad_406[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_TimeLimitedExecution* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x68(0x10)(ZeroConstructor)
	uint8                                        Pad_40D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_WaitDelay* GetDefaultObj();

	void TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, float Time, uint8 Priority, class UGameplayTask_WaitDelay* ReturnValue);
	void TaskDelayDelegate__DelegateSignature();
};

}


