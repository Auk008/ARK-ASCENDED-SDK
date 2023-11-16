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
// Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
struct UStructUtilsFunctionLibrary_SetInstancedStructValue_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(None)
	int32                                        Value;                                             // 0x10(0x4)(None)
	uint8                                        Pad_6B8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.Reset
struct UStructUtilsFunctionLibrary_Reset_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ZeroConstructor)
	class UScriptStruct*                         StructType;                                        // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
struct UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      A;                                                 // 0x0(0x10)(ZeroConstructor)
	struct FInstancedStruct                      B;                                                 // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_6B9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
struct UStructUtilsFunctionLibrary_MakeInstancedStruct_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(None)
	uint8                                        Pad_6BA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedStruct                      ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
struct UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_6BB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
struct UStructUtilsFunctionLibrary_IsInstancedStructValid_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(None)
	enum class EStructUtilsResult                ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_6BC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
struct UStructUtilsFunctionLibrary_GetInstancedStructValue_Params
{
public:
	enum class EStructUtilsResult                ExecResult;                                        // 0x0(0x1)(None)
	uint8                                        Pad_6BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedStruct                      InstancedStruct;                                   // 0x8(0x10)(None)
	int32                                        Value;                                             // 0x18(0x4)(None)
	uint8                                        Pad_6BE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
struct UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      A;                                                 // 0x0(0x10)(ZeroConstructor)
	struct FInstancedStruct                      B;                                                 // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_6BF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


