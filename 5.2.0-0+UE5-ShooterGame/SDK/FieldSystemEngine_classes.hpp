#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4C0 - 0x4B8)
// Class FieldSystemEngine.FieldSystemActor
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AFieldSystemActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FieldSystemEngine.FieldSystem
class UFieldSystem : public UObject
{
public:
	uint8                                        Pad_26E9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldSystem* GetDefaultObj();

};

// 0xD0 (0x750 - 0x680)
// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                          FieldSystem;                                       // 0x680(0x8)(ZeroConstructor)
	bool                                         bIsWorldField;                                     // 0x688(0x1)(None)
	bool                                         bIsChaosField;                                     // 0x689(0x1)(None)
	uint8                                        Pad_2700[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;                                  // 0x690(0x10)(ZeroConstructor)
	struct FFieldObjectCommands                  ConstructionCommands;                              // 0x6A0(0x30)(ZeroConstructor)
	struct FFieldObjectCommands                  BufferCommands;                                    // 0x6D0(0x30)(ZeroConstructor)
	uint8                                        Pad_2702[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldSystemComponent* GetDefaultObj();

	void ResetFieldSystem();
	void RemovePersistentFields();
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32 Iterations);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaData
class UFieldSystemMetaData : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UFieldSystemMetaData* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataIteration
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int32                                        Iterations;                                        // 0xB8(0x4)(None)
	uint8                                        Pad_270D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataIteration* GetDefaultObj();

	void SetMetaDataIteration(int32 Iterations, class UFieldSystemMetaDataIteration* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0xB8(0x1)(None)
	uint8                                        Pad_2711[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataProcessingResolution* GetDefaultObj();

	void SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType, class UFieldSystemMetaDataProcessingResolution* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.FieldSystemMetaDataFilter
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0xB8(0x1)(None)
	enum class EFieldObjectType                  ObjectType;                                        // 0xB9(0x1)(None)
	enum class EFieldPositionType                PositionType;                                      // 0xBA(0x1)(None)
	uint8                                        Pad_2715[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFieldSystemMetaDataFilter* GetDefaultObj();

	void SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType, class UFieldSystemMetaDataFilter* ReturnValue);
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeBase
class UFieldNodeBase : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeBase* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeInt
class UFieldNodeInt : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeInt* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeFloat
class UFieldNodeFloat : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeFloat* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.FieldNodeVector
class UFieldNodeVector : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UFieldNodeVector* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformInteger
class UUniformInteger : public UFieldNodeInt
{
public:
	int32                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_271B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUniformInteger* GetDefaultObj();

	void SetUniformInteger(int32 Magnitude, class UUniformInteger* ReturnValue);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(None)
	uint8                                        Pad_271F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xC0(0x18)(None)
	int32                                        InteriorValue;                                     // 0xD8(0x4)(None)
	int32                                        ExteriorValue;                                     // 0xDC(0x4)(None)
	enum class ESetMaskConditionType             SetMaskCondition;                                  // 0xE0(0x1)(None)
	uint8                                        Pad_2721[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URadialIntMask* GetDefaultObj();

	void SetRadialIntMask(float Radius, const struct FVector& Position, int32 InteriorValue, int32 ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn, class URadialIntMask* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_2725[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUniformScalar* GetDefaultObj();

	void SetUniformScalar(float Magnitude, class UUniformScalar* ReturnValue);
};

// 0x30 (0xE8 - 0xB8)
// Class FieldSystemEngine.WaveScalar
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_2730[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xC0(0x18)(None)
	float                                        Wavelength;                                        // 0xD8(0x4)(None)
	float                                        Period;                                            // 0xDC(0x4)(None)
	enum class EWaveFunctionType                 Function;                                          // 0xE0(0x1)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE1(0x1)(None)
	uint8                                        Pad_2731[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaveScalar* GetDefaultObj();

	void SetWaveScalar(float Magnitude, const struct FVector& Position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff, class UWaveScalar* ReturnValue);
};

// 0x38 (0xF0 - 0xB8)
// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	float                                        MinRange;                                          // 0xBC(0x4)(None)
	float                                        MaxRange;                                          // 0xC0(0x4)(None)
	float                                        Default;                                           // 0xC4(0x4)(None)
	float                                        Radius;                                            // 0xC8(0x4)(None)
	uint8                                        Pad_2737[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xD0(0x18)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE8(0x1)(None)
	uint8                                        Pad_2738[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URadialFalloff* GetDefaultObj();

	void SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, enum class EFieldFalloffType Falloff, class URadialFalloff* ReturnValue);
};

// 0x50 (0x108 - 0xB8)
// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	float                                        MinRange;                                          // 0xBC(0x4)(None)
	float                                        MaxRange;                                          // 0xC0(0x4)(None)
	float                                        Default;                                           // 0xC4(0x4)(None)
	float                                        Distance;                                          // 0xC8(0x4)(None)
	uint8                                        Pad_273B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xD0(0x18)(None)
	struct FVector                               Normal;                                            // 0xE8(0x18)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0x100(0x1)(None)
	uint8                                        Pad_273C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneFalloff* GetDefaultObj();

	void SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, enum class EFieldFalloffType Falloff, class UPlaneFalloff* ReturnValue);
};

// 0x88 (0x140 - 0xB8)
// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	float                                        MinRange;                                          // 0xBC(0x4)(None)
	float                                        MaxRange;                                          // 0xC0(0x4)(None)
	float                                        Default;                                           // 0xC4(0x4)(None)
	uint8                                        Pad_2741[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xD0(0x60)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0x130(0x1)(None)
	uint8                                        Pad_2742[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBoxFalloff* GetDefaultObj();

	void SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, enum class EFieldFalloffType Falloff, class UBoxFalloff* ReturnValue);
};

// 0x68 (0x120 - 0xB8)
// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                        MinRange;                                          // 0xB8(0x4)(None)
	float                                        MaxRange;                                          // 0xBC(0x4)(None)
	struct FTransform                            Transform;                                         // 0xC0(0x60)(None)

	static class UClass* StaticClass();
	static class UNoiseField* GetDefaultObj();

	void SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform, class UNoiseField* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_274C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0xC0(0x18)(None)

	static class UClass* StaticClass();
	static class UUniformVector* GetDefaultObj();

	void SetUniformVector(float Magnitude, const struct FVector& Direction, class UUniformVector* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_2751[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xC0(0x18)(None)

	static class UClass* StaticClass();
	static class URadialVector* GetDefaultObj();

	void SetRadialVector(float Magnitude, const struct FVector& Position, class URadialVector* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_2755[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URandomVector* GetDefaultObj();

	void SetRandomVector(float Magnitude, class URandomVector* ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase
{
public:
	float                                        Magnitude;                                         // 0xB8(0x4)(None)
	uint8                                        Pad_2759[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldNodeBase*                        RightField;                                        // 0xC0(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        LeftField;                                         // 0xC8(0x8)(ZeroConstructor)
	enum class EFieldOperationType               Operation;                                         // 0xD0(0x1)(None)
	uint8                                        Pad_275A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOperatorField* GetDefaultObj();

	void SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, enum class EFieldOperationType Operation, class UOperatorField* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0xB8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UToIntegerField* GetDefaultObj();

	void SetToIntegerField(class UFieldNodeFloat* FloatField, class UToIntegerField* ReturnValue);
};

// 0x8 (0xC0 - 0xB8)
// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                         IntField;                                          // 0xB8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UToFloatField* GetDefaultObj();

	void SetToFloatField(class UFieldNodeInt* IntegerField, class UToFloatField* ReturnValue);
};

// 0x18 (0xD0 - 0xB8)
// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0xB8(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        Field;                                             // 0xC0(0x8)(ZeroConstructor)
	enum class EFieldCullingOperationType        Operation;                                         // 0xC8(0x1)(None)
	uint8                                        Pad_2778[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCullingField* GetDefaultObj();

	void SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation, class UCullingField* ReturnValue);
};

// 0x0 (0xB8 - 0xB8)
// Class FieldSystemEngine.ReturnResultsTerminal
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static class UClass* StaticClass();
	static class UReturnResultsTerminal* GetDefaultObj();

	void SetReturnResultsTerminal(class UReturnResultsTerminal* ReturnValue);
};

}


