#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Constraints.TransformableHandle
class UTransformableHandle : public UObject
{
public:
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x28(0x18)(None)
	uint8                                        Pad_11C2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformableHandle* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class Constraints.ConstraintsActor
class AConstraintsActor : public AActor
{
public:
	class UConstraintsManager*                   ConstraintsManager;                                // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AConstraintsActor* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class Constraints.TickableConstraint
class UTickableConstraint : public UObject
{
public:
	struct FConstraintTickFunction               ConstraintTick;                                    // 0x28(0x40)(None)
	bool                                         Active;                                            // 0x68(0x1)(None)
	uint8                                        Pad_11C6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTickableConstraint* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Constraints.ConstraintsManager
class UConstraintsManager : public UObject
{
public:
	FMulticastSparseDelegateProperty_            OnConstraintAdded_BP;                              // 0x28(0x1)(ZeroConstructor)
	FMulticastSparseDelegateProperty_            OnConstraintRemoved_BP;                            // 0x29(0x1)(ZeroConstructor)
	uint8                                        Pad_11CE[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTickableConstraint*>           Constraints;                                       // 0x38(0x10)(None)

	static class UClass* StaticClass();
	static class UConstraintsManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Constraints.ConstraintsScriptingLibrary
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConstraintsScriptingLibrary* GetDefaultObj();

	void RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint, bool ReturnValue);
	void RemoveConstraint(class UWorld* InWorld, int32 InIndex, bool ReturnValue);
	void GetManager(class UWorld* InWorld, class UConstraintsManager* ReturnValue);
	void GetConstraintsArray(class UWorld* InWorld, const TArray<class UTickableConstraint*>& ReturnValue);
	void CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, class FName InAttachmentName, class UTransformableHandle* ReturnValue);
	void CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, class FName InSocketName, class UTransformableComponentHandle* ReturnValue);
	void CreateFromType(class UWorld* InWorld, enum class ETransformConstraintType InType, class UTickableTransformConstraint* ReturnValue);
	void AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset, bool ReturnValue);
};

// 0x10 (0x68 - 0x58)
// Class Constraints.TransformableComponentHandle
class UTransformableComponentHandle : public UTransformableHandle
{
public:
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x58(0x8)(None)
	class FName                                  SocketName;                                        // 0x60(0x8)(None)

	static class UClass* StaticClass();
	static class UTransformableComponentHandle* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class Constraints.TickableTransformConstraint
class UTickableTransformConstraint : public UTickableConstraint
{
public:
	class UTransformableHandle*                  ParentTRSHandle;                                   // 0x70(0x8)(ZeroConstructor)
	class UTransformableHandle*                  ChildTRSHandle;                                    // 0x78(0x8)(None)
	bool                                         bMaintainOffset;                                   // 0x80(0x1)(None)
	uint8                                        Pad_1215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x84(0x4)(None)
	bool                                         bDynamicOffset;                                    // 0x88(0x1)(None)
	enum class ETransformConstraintType          Type;                                              // 0x89(0x1)(None)
	uint8                                        Pad_1216[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTickableTransformConstraint* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class Constraints.TickableTranslationConstraint
class UTickableTranslationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_1219[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetTranslation;                                 // 0x98(0x18)(None)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xB0(0x3)(None)
	uint8                                        Pad_121A[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTickableTranslationConstraint* GetDefaultObj();

};

// 0x40 (0xD0 - 0x90)
// Class Constraints.TickableRotationConstraint
class UTickableRotationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_121D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 OffsetRotation;                                    // 0xA0(0x20)(None)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xC0(0x3)(None)
	uint8                                        Pad_121F[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTickableRotationConstraint* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class Constraints.TickableScaleConstraint
class UTickableScaleConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_1221[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetScale;                                       // 0x98(0x18)(None)
	struct FFilterOptionPerAxis                  AxisFilter;                                        // 0xB0(0x3)(None)
	uint8                                        Pad_1222[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTickableScaleConstraint* GetDefaultObj();

};

// 0x80 (0x110 - 0x90)
// Class Constraints.TickableParentConstraint
class UTickableParentConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_1225[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0xA0(0x60)(None)
	bool                                         bScaling;                                          // 0x100(0x1)(None)
	struct FTransformFilter                      TransformFilter;                                   // 0x101(0x9)(None)
	uint8                                        Pad_1226[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTickableParentConstraint* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class Constraints.TickableLookAtConstraint
class UTickableLookAtConstraint : public UTickableTransformConstraint
{
public:
	struct FVector                               Axis;                                              // 0x90(0x18)(None)

	static class UClass* StaticClass();
	static class UTickableLookAtConstraint* GetDefaultObj();

};

}


