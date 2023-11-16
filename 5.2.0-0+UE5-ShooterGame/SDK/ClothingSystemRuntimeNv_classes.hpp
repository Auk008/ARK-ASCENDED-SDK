#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x1A0 - 0x28)
// Class ClothingSystemRuntimeNv.ClothConfigNv
class UClothConfigNv : public UClothConfigCommon
{
public:
	enum class EClothingWindMethodNv             ClothingWindMethod;                                // 0x28(0x1)(None)
	uint8                                        Pad_2F6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothConstraintSetupNv               VerticalConstraint;                                // 0x2C(0x10)(None)
	struct FClothConstraintSetupNv               HorizontalConstraint;                              // 0x3C(0x10)(None)
	struct FClothConstraintSetupNv               BendConstraint;                                    // 0x4C(0x10)(None)
	struct FClothConstraintSetupNv               ShearConstraint;                                   // 0x5C(0x10)(None)
	float                                        SelfCollisionRadius;                               // 0x6C(0x4)(None)
	float                                        SelfCollisionStiffness;                            // 0x70(0x4)(None)
	float                                        SelfCollisionCullScale;                            // 0x74(0x4)(None)
	struct FVector                               Damping;                                           // 0x78(0x18)(None)
	float                                        Friction;                                          // 0x90(0x4)(None)
	float                                        WindDragCoefficient;                               // 0x94(0x4)(None)
	float                                        WindLiftCoefficient;                               // 0x98(0x4)(None)
	uint8                                        Pad_2F6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearDrag;                                        // 0xA0(0x18)(None)
	struct FVector                               AngularDrag;                                       // 0xB8(0x18)(None)
	struct FVector                               LinearInertiaScale;                                // 0xD0(0x18)(None)
	struct FVector                               AngularInertiaScale;                               // 0xE8(0x18)(None)
	struct FVector                               CentrifugalInertiaScale;                           // 0x100(0x18)(None)
	float                                        SolverFrequency;                                   // 0x118(0x4)(None)
	float                                        StiffnessFrequency;                                // 0x11C(0x4)(None)
	float                                        GravityScale;                                      // 0x120(0x4)(None)
	uint8                                        Pad_2F6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityOverride;                                   // 0x128(0x18)(None)
	bool                                         bUseGravityOverride;                               // 0x140(0x1)(None)
	uint8                                        Pad_2F6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetherStiffness;                                   // 0x144(0x4)(None)
	float                                        TetherLimit;                                       // 0x148(0x4)(None)
	float                                        CollisionThickness;                                // 0x14C(0x4)(None)
	float                                        AnimDriveSpringStiffness;                          // 0x150(0x4)(None)
	float                                        AnimDriveDamperStiffness;                          // 0x154(0x4)(None)
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x158(0x1)(None)
	uint8                                        Pad_2F6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x15C(0x10)(None)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x16C(0x10)(None)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x17C(0x10)(None)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x18C(0x10)(None)
	uint8                                        Pad_2F70[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClothConfigNv* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactoryNv* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationInteractorNv* GetDefaultObj();

	void SetAnimDriveDamperStiffness(float InStiffness);
};

// 0x40 (0x120 - 0xE0)
// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                MaxDistances;                                      // 0xE0(0x10)(None)
	TArray<float>                                BackstopDistances;                                 // 0xF0(0x10)(None)
	TArray<float>                                BackstopRadiuses;                                  // 0x100(0x10)(None)
	TArray<float>                                AnimDriveMultipliers;                              // 0x110(0x10)(None)

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj();

};

}


