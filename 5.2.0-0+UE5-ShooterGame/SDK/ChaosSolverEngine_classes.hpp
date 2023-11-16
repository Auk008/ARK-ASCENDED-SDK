#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// Class ChaosSolverEngine.ChaosDebugDrawComponent
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	uint8                                        Pad_2477[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_2478[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosEventListenerComponent* GetDefaultObj();

};

// 0x260 (0x320 - 0xC0)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_247A[0x110];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x1D0(0x50)(ZeroConstructor)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x220(0x50)(ZeroConstructor)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x270(0x50)(ZeroConstructor)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x2C0(0x50)(ZeroConstructor)
	uint8                                        Pad_247B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosGameplayEventDispatcher* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
class IChaosNotifyHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChaosNotifyHandlerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj();

	void ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision, const struct FHitResult& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolver
class UChaosSolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UChaosSolver* GetDefaultObj();

};

// 0xF8 (0x5B0 - 0x4B8)
// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration             Properties;                                        // 0x4B8(0x68)(None)
	float                                        TimeStepMultiplier;                                // 0x520(0x4)(None)
	int32                                        CollisionIterations;                               // 0x524(0x4)(None)
	int32                                        PushOutIterations;                                 // 0x528(0x4)(None)
	int32                                        PushOutPairIterations;                             // 0x52C(0x4)(None)
	float                                        ClusterConnectionFactor;                           // 0x530(0x4)(None)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x534(0x1)(None)
	bool                                         DoGenerateCollisionData;                           // 0x535(0x1)(None)
	uint8                                        Pad_2480[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x538(0x10)(None)
	bool                                         DoGenerateBreakingData;                            // 0x548(0x1)(None)
	uint8                                        Pad_2481[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x54C(0x10)(None)
	bool                                         DoGenerateTrailingData;                            // 0x55C(0x1)(None)
	uint8                                        Pad_2482[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x560(0x10)(None)
	float                                        MassScale;                                         // 0x570(0x4)(None)
	bool                                         bHasFloor;                                         // 0x574(0x1)(None)
	uint8                                        Pad_2483[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloorHeight;                                       // 0x578(0x4)(None)
	struct FChaosDebugSubstepControl             ChaosDebugSubstepControl;                          // 0x57C(0x3)(None)
	uint8                                        Pad_2484[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBillboardComponent*                   SpriteComponent;                                   // 0x580(0x8)(ZeroConstructor)
	uint8                                        Pad_2485[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x5A0(0x8)(ZeroConstructor)
	uint8                                        Pad_2486[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AChaosSolverActor* GetDefaultObj();

	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// 0x28 (0x60 - 0x38)
// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_2488[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        DefaultChaosSolverActorClass;                      // 0x40(0x20)(None)

	static class UClass* StaticClass();
	static class UChaosSolverSettings* GetDefaultObj();

};

}


