#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClusterConnectionTypeEnum : uint8
{
	Chaos_PointImplicit            = 0,
	Chaos_DelaunayTriangulation    = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
	Chaos_None                     = 5,
	Chaos_EClsuterCreationParameters_Max = 6,
	Chaos_MAX                      = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   OtherComponent;                                    // 0x8(0x8)(None)
	struct FVector                               Location;                                          // 0x10(0x18)(None)
	struct FVector                               Normal;                                            // 0x28(0x18)(None)
	struct FVector                               AccumulatedImpulse;                                // 0x40(0x18)(None)
	struct FVector                               Velocity;                                          // 0x58(0x18)(None)
	struct FVector                               OtherVelocity;                                     // 0x70(0x18)(None)
	struct FVector                               AngularVelocity;                                   // 0x88(0x18)(None)
	struct FVector                               OtherAngularVelocity;                              // 0xA0(0x18)(None)
	float                                        Mass;                                              // 0xB8(0x4)(None)
	float                                        OtherMass;                                         // 0xBC(0x4)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FVector                               Velocity;                                          // 0x20(0x18)(None)
	struct FVector                               AngularVelocity;                                   // 0x38(0x18)(None)
	struct FVector                               Extents;                                           // 0x50(0x18)(None)
	float                                        Mass;                                              // 0x68(0x4)(None)
	int32                                        Index;                                             // 0x6C(0x4)(None)
	bool                                         bFromCrumble;                                      // 0x70(0x1)(None)
	uint8                                        Pad_248A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosCrumblingEvent
struct FChaosCrumblingEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FQuat                                 Orientation;                                       // 0x20(0x20)(None)
	struct FVector                               LinearVelocity;                                    // 0x40(0x18)(None)
	struct FVector                               AngularVelocity;                                   // 0x58(0x18)(None)
	float                                        Mass;                                              // 0x70(0x4)(None)
	uint8                                        Pad_248C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  LocalBounds;                                       // 0x78(0x38)(None)
	TArray<int32>                                Children;                                          // 0xB0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosRemovalEvent
struct FChaosRemovalEvent
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	float                                        Mass;                                              // 0x20(0x4)(None)
	uint8                                        Pad_248F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
struct FBreakEventCallbackWrapper
{
public:
	uint8                                        Pad_2490[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.RemovalEventCallbackWrapper
struct FRemovalEventCallbackWrapper
{
public:
	uint8                                        Pad_2491[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ChaosSolverEngine.CrumblingEventCallbackWrapper
struct FCrumblingEventCallbackWrapper
{
public:
	uint8                                        Pad_2492[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet
{
public:
	uint8                                        Pad_2494[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UObject*>                         ChaosHandlers;                                     // 0x8(0x50)(None)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(None)
	bool                                         bSubstep;                                          // 0x1(0x1)(None)
	bool                                         bStep;                                             // 0x2(0x1)(None)
};

}


