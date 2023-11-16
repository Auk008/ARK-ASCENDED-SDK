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

// 0x8 (0x8 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.Release
struct UTypedElementHandleLibrary_Release_Params
{
public:
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
struct UTypedElementHandleLibrary_NotEqual_Params
{
public:
	struct FScriptTypedElementHandle             LHS;                                               // 0x0(0x8)(None)
	struct FScriptTypedElementHandle             RHS;                                               // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2B6F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
struct UTypedElementHandleLibrary_IsSet_Params
{
public:
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2B71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementHandleLibrary.Equal
struct UTypedElementHandleLibrary_Equal_Params
{
public:
	struct FScriptTypedElementHandle             LHS;                                               // 0x0(0x8)(None)
	struct FScriptTypedElementHandle             RHS;                                               // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2B72[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Shrink
struct UTypedElementListLibrary_Shrink_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Reset
struct UTypedElementListLibrary_Reset_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Reserve
struct UTypedElementListLibrary_Reserve_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	int32                                        Size;                                              // 0x10(0x4)(None)
	uint8                                        Pad_2B74[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Remove
struct UTypedElementListLibrary_Remove_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2B76[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Num
struct UTypedElementListLibrary_Num_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2B78[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
struct UTypedElementListLibrary_IsValidIndex_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_2B7B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
struct UTypedElementListLibrary_HasElementsOfType_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	class FName                                  ElementTypeName;                                   // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2B7E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.HasElements
struct UTypedElementListLibrary_HasElements_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	class UClass*                                BaseInterfaceType;                                 // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2B7F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
struct UTypedElementListLibrary_GetElementInterface_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(None)
	class UClass*                                BaseInterfaceType;                                 // 0x18(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
struct UTypedElementListLibrary_GetElementHandles_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	class UClass*                                BaseInterfaceType;                                 // 0x10(0x8)(None)
	TArray<struct FScriptTypedElementHandle>     ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
struct UTypedElementListLibrary_GetElementHandleAt_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_2B8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Empty
struct UTypedElementListLibrary_Empty_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	int32                                        Slack;                                             // 0x10(0x4)(None)
	uint8                                        Pad_2B8F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
struct UTypedElementListLibrary_CreateScriptElementList_Params
{
public:
	class UTypedElementRegistry*                 Registry;                                          // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
struct UTypedElementListLibrary_CountElementsOfType_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	class FName                                  ElementTypeName;                                   // 0x10(0x8)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_2B90[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.CountElements
struct UTypedElementListLibrary_CountElements_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	class UClass*                                BaseInterfaceType;                                 // 0x10(0x8)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_2B92[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Contains
struct UTypedElementListLibrary_Contains_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2B95[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Clone
struct UTypedElementListLibrary_Clone_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.AppendList
struct UTypedElementListLibrary_AppendList_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	struct FScriptTypedElementListProxy          OtherElementList;                                  // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Append
struct UTypedElementListLibrary_Append_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	TArray<struct FScriptTypedElementHandle>     ElementHandles;                                    // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TypedElementListLibrary.Add
struct UTypedElementListLibrary_Add_Params
{
public:
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x0(0x10)(None)
	struct FScriptTypedElementHandle             ElementHandle;                                     // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2B99[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TypedElementFramework.TypedElementRegistry.GetInstance
struct UTypedElementRegistry_GetInstance_Params
{
public:
	class UTypedElementRegistry*                 ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
struct UTypedElementRegistry_GetElementInterface_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	class UClass*                                InBaseInterfaceType;                               // 0x8(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
struct ITestTypedElementInterfaceA_SetDisplayName_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	class FText                                  InNewName;                                         // 0x8(0x18)(None)
	bool                                         bNotify;                                           // 0x20(0x1)(None)
	bool                                         ReturnValue;                                       // 0x21(0x1)(None)
	uint8                                        Pad_2BA1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
struct ITestTypedElementInterfaceA_GetDisplayName_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
struct ITestTypedElementInterfaceB_MarkAsTested_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2BA7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
struct ITestTypedElementInterfaceC_GetIsTested_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2BAB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


