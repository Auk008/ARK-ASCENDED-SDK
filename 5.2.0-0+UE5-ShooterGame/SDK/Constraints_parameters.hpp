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

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
struct UConstraintsScriptingLibrary_RemoveThisConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	class UTickableConstraint*                   InTickableConstraint;                              // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_11D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
struct UConstraintsScriptingLibrary_RemoveConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(None)
	int32                                        InIndex;                                           // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_11DD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.GetManager
struct UConstraintsScriptingLibrary_GetManager_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	class UConstraintsManager*                   ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
struct UConstraintsScriptingLibrary_GetConstraintsArray_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	TArray<class UTickableConstraint*>           ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
struct UConstraintsScriptingLibrary_CreateTransformableHandle_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	class UObject*                               InObject;                                          // 0x8(0x8)(ZeroConstructor)
	class FName                                  InAttachmentName;                                  // 0x10(0x8)(None)
	class UTransformableHandle*                  ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
struct UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	class USceneComponent*                       InSceneComponent;                                  // 0x8(0x8)(ZeroConstructor)
	class FName                                  InSocketName;                                      // 0x10(0x8)(None)
	class UTransformableComponentHandle*         ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
struct UConstraintsScriptingLibrary_CreateFromType_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	enum class ETransformConstraintType          InType;                                            // 0x8(0x1)(None)
	uint8                                        Pad_11FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTickableTransformConstraint*          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
struct UConstraintsScriptingLibrary_AddConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(ZeroConstructor)
	class UTransformableHandle*                  InParentHandle;                                    // 0x8(0x8)(ZeroConstructor)
	class UTransformableHandle*                  InChildHandle;                                     // 0x10(0x8)(ZeroConstructor)
	class UTickableTransformConstraint*          InConstraint;                                      // 0x18(0x8)(None)
	bool                                         bMaintainOffset;                                   // 0x20(0x1)(None)
	bool                                         ReturnValue;                                       // 0x21(0x1)(None)
	uint8                                        Pad_1202[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


