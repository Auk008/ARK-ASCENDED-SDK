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

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetStructRef
struct UPropertyPathTestObject_SetStructRef_Params
{
public:
	struct FPropertyPathTestStruct               InStruct;                                          // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetStructConstRef
struct UPropertyPathTestObject_SetStructConstRef_Params
{
public:
	struct FPropertyPathTestStruct               InStruct;                                          // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetStruct
struct UPropertyPathTestObject_SetStruct_Params
{
public:
	struct FPropertyPathTestStruct               InStruct;                                          // 0x0(0x50)(None)
};

// 0x4 (0x4 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetFloat
struct UPropertyPathTestObject_SetFloat_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetStructRef
struct UPropertyPathTestObject_GetStructRef_Params
{
public:
	struct FPropertyPathTestStruct               ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetStructConstRef
struct UPropertyPathTestObject_GetStructConstRef_Params
{
public:
	struct FPropertyPathTestStruct               ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetStruct
struct UPropertyPathTestObject_GetStruct_Params
{
public:
	struct FPropertyPathTestStruct               ReturnValue;                                       // 0x0(0x50)(None)
};

// 0x4 (0x4 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetFloat
struct UPropertyPathTestObject_GetFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

}
}


