#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class PhysicsCore.PhysicalMaterialPropertyBase
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPhysicalMaterialPropertyBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PhysicsCore.BodySetupCore
class UBodySetupCore : public UObject
{
public:
	class FName                                  BoneName;                                          // 0x28(0x8)(None)
	enum class EPhysicsType                      PhysicsType;                                       // 0x30(0x1)(None)
	enum class ECollisionTraceFlag               CollisionTraceFlag;                                // 0x31(0x1)(None)
	enum class EBodyCollisionResponse            CollisionReponse;                                  // 0x32(0x1)(None)
	uint8                                        Pad_2ACE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bReallyUseTriangleMeshCollisions : 1;              // Mask: 0x1, PropSize: 0x10x34(0x1)(None)
	uint8                                        bUseLastLODInsteadOfFirstForCollisionMesh : 1;     // Mask: 0x2, PropSize: 0x10x34(0x1)(None)
	uint8                                        bUseSecondToLastLODInsteadOfFirstForCollisionMesh : 1; // Mask: 0x4, PropSize: 0x10x34(0x1)(None)
	uint8                                        bUsesSkelCustomIgnore : 1;                         // Mask: 0x8, PropSize: 0x10x34(0x1)(None)
	uint8                                        Pad_2AD0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBodySetupCore* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PhysicsCore.ChaosPhysicalMaterial
class UChaosPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(None)
	float                                        StaticFriction;                                    // 0x2C(0x4)(None)
	float                                        Restitution;                                       // 0x30(0x4)(None)
	float                                        LinearEtherDrag;                                   // 0x34(0x4)(None)
	float                                        AngularEtherDrag;                                  // 0x38(0x4)(None)
	float                                        SleepingLinearVelocityThreshold;                   // 0x3C(0x4)(None)
	float                                        SleepingAngularVelocityThreshold;                  // 0x40(0x4)(None)
	uint8                                        Pad_2AD4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosPhysicalMaterial* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class PhysicsCore.PhysicalMaterial
class UPhysicalMaterial : public UObject
{
public:
	float                                        Friction;                                          // 0x28(0x4)(None)
	float                                        StaticFriction;                                    // 0x2C(0x4)(None)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x30(0x1)(None)
	bool                                         bOverrideFrictionCombineMode;                      // 0x31(0x1)(None)
	uint8                                        Pad_2ADB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Restitution;                                       // 0x34(0x4)(None)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x38(0x1)(None)
	bool                                         bOverrideRestitutionCombineMode;                   // 0x39(0x1)(None)
	uint8                                        Pad_2ADC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Density;                                           // 0x3C(0x4)(None)
	float                                        SleepLinearVelocityThreshold;                      // 0x40(0x4)(None)
	float                                        SleepAngularVelocityThreshold;                     // 0x44(0x4)(None)
	int32                                        SleepCounterThreshold;                             // 0x48(0x4)(None)
	float                                        RaiseMassToPower;                                  // 0x4C(0x4)(None)
	float                                        DestructibleDamageThresholdScale;                  // 0x50(0x4)(None)
	uint8                                        Pad_2ADD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterialPropertyBase*         PhysicalMaterialProperty;                          // 0x58(0x8)(None)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x60(0x1)(None)
	uint8                                        Pad_2ADE[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanDigForWater;                                   // 0x80(0x1)(None)
	uint8                                        Pad_2ADF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaterRichness;                                     // 0x84(0x4)(None)
	enum class ESoilType                         SoilType;                                          // 0x88(0x1)(None)
	uint8                                        Pad_2AE0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPhysicalMaterial* GetDefaultObj();

};

// 0xA8 (0xE0 - 0x38)
// Class PhysicsCore.PhysicsSettingsCore
class UPhysicsSettingsCore : public UDeveloperSettings
{
public:
	float                                        DefaultGravityZ;                                   // 0x38(0x4)(None)
	float                                        DefaultTerminalVelocity;                           // 0x3C(0x4)(None)
	float                                        DefaultFluidFriction;                              // 0x40(0x4)(None)
	int32                                        SimulateScratchMemorySize;                         // 0x44(0x4)(None)
	int32                                        RagdollAggregateThreshold;                         // 0x48(0x4)(None)
	float                                        TriangleMeshTriangleMinAreaThreshold;              // 0x4C(0x4)(None)
	bool                                         bEnableEnhancedDeterminism;                        // 0x50(0x1)(None)
	bool                                         bEnableShapeSharing;                               // 0x51(0x1)(None)
	bool                                         bEnablePCM;                                        // 0x52(0x1)(None)
	bool                                         bEnableStabilization;                              // 0x53(0x1)(None)
	bool                                         bWarnMissingLocks;                                 // 0x54(0x1)(None)
	bool                                         bEnable2DPhysics;                                  // 0x55(0x1)(None)
	bool                                         bDefaultHasComplexCollision;                       // 0x56(0x1)(None)
	uint8                                        Pad_2AE1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BounceThresholdVelocity;                           // 0x58(0x4)(None)
	enum class EFrictionCombineMode              FrictionCombineMode;                               // 0x5C(0x1)(None)
	enum class EFrictionCombineMode              RestitutionCombineMode;                            // 0x5D(0x1)(None)
	uint8                                        Pad_2AE3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAngularVelocity;                                // 0x60(0x4)(None)
	float                                        MaxDepenetrationVelocity;                          // 0x64(0x4)(None)
	float                                        ContactOffsetMultiplier;                           // 0x68(0x4)(None)
	float                                        MinContactOffset;                                  // 0x6C(0x4)(None)
	float                                        MaxContactOffset;                                  // 0x70(0x4)(None)
	bool                                         bSimulateSkeletalMeshOnDedicatedServer;            // 0x74(0x1)(None)
	enum class ECollisionTraceFlag               DefaultShapeComplexity;                            // 0x75(0x1)(None)
	uint8                                        Pad_2AE5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChaosSolverConfiguration             SolverOptions;                                     // 0x78(0x68)(None)

	static class UClass* StaticClass();
	static class UPhysicsSettingsCore* GetDefaultObj();

};

}


