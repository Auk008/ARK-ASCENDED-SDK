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

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
struct UTypedElementSelectionSetLibrary_SetSelectionFromList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(None)
	struct FTypedElementSelectionOptions         SelectionOptions;                                  // 0x18(0x5)(None)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(None)
	uint8                                        Pad_266B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
struct UTypedElementSelectionSetLibrary_SelectElementsFromList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(None)
	struct FTypedElementSelectionOptions         SelectionOptions;                                  // 0x18(0x5)(None)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(None)
	uint8                                        Pad_2671[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
struct UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;                              // 0x8(0x2)(None)
	uint8                                        Pad_2673[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
struct UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(None)
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;                              // 0x18(0x2)(None)
	uint8                                        Pad_2677[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptTypedElementListProxy          ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
struct UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          ElementList;                                       // 0x8(0x10)(None)
	struct FTypedElementSelectionOptions         SelectionOptions;                                  // 0x18(0x5)(None)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(None)
	uint8                                        Pad_2679[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
struct UTypedElementSelectionSet_SetSelection_Params
{
public:
	TArray<struct FScriptTypedElementHandle>     InElementHandles;                                  // 0x0(0x10)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x10(0x5)(None)
	bool                                         ReturnValue;                                       // 0x15(0x1)(None)
	uint8                                        Pad_267A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
struct UTypedElementSelectionSet_SelectElements_Params
{
public:
	TArray<struct FScriptTypedElementHandle>     InElementHandles;                                  // 0x0(0x10)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x10(0x5)(None)
	bool                                         ReturnValue;                                       // 0x15(0x1)(None)
	uint8                                        Pad_267B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
struct UTypedElementSelectionSet_SelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(None)
	bool                                         ReturnValue;                                       // 0xD(0x1)(None)
	uint8                                        Pad_267C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
struct UTypedElementSelectionSet_RestoreSelectionState_Params
{
public:
	struct FTypedElementSelectionSetState        InSelectionState;                                  // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
struct UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
struct UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params
{
public:
	class UTypedElementSelectionSet*             SelectionSet;                                      // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
struct UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params
{
public:
	class UClass*                                InBaseInterfaceType;                               // 0x0(0x8)(None)
	TArray<struct FScriptTypedElementHandle>     ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
struct UTypedElementSelectionSet_IsElementSelected_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementIsSelectedOptions        InSelectionOptions;                                // 0x8(0x1)(None)
	bool                                         ReturnValue;                                       // 0x9(0x1)(None)
	uint8                                        Pad_2681[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
struct UTypedElementSelectionSet_HasSelectedObjects_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2682[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
struct UTypedElementSelectionSet_HasSelectedElements_Params
{
public:
	class UClass*                                InBaseInterfaceType;                               // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2683[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
struct UTypedElementSelectionSet_GetTopSelectedObject_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
struct UTypedElementSelectionSet_GetSelectionElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	enum class ETypedElementSelectionMethod      InSelectionMethod;                                 // 0x8(0x1)(None)
	uint8                                        Pad_2684[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
struct UTypedElementSelectionSet_GetSelectedObjects_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(ZeroConstructor)
	TArray<class UObject*>                       ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
struct UTypedElementSelectionSet_GetNumSelectedElements_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
struct UTypedElementSelectionSet_GetCurrentSelectionState_Params
{
public:
	struct FTypedElementSelectionSetState        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
struct UTypedElementSelectionSet_GetBottomSelectedObject_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
struct UTypedElementSelectionSet_DeselectElements_Params
{
public:
	TArray<struct FScriptTypedElementHandle>     InElementHandles;                                  // 0x0(0x10)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x10(0x5)(None)
	bool                                         ReturnValue;                                       // 0x15(0x1)(None)
	uint8                                        Pad_2686[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
struct UTypedElementSelectionSet_DeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(None)
	bool                                         ReturnValue;                                       // 0xD(0x1)(None)
	uint8                                        Pad_268A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
struct UTypedElementSelectionSet_CountSelectedObjects_Params
{
public:
	class UClass*                                InRequiredClass;                                   // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_268C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
struct UTypedElementSelectionSet_CountSelectedElements_Params
{
public:
	class UClass*                                InBaseInterfaceType;                               // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_268D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6 (0x6 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
struct UTypedElementSelectionSet_ClearSelection_Params
{
public:
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x0(0x5)(None)
	bool                                         ReturnValue;                                       // 0x5(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
struct UTypedElementSelectionSet_CanSelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(None)
	bool                                         ReturnValue;                                       // 0xD(0x1)(None)
	uint8                                        Pad_2692[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
struct UTypedElementSelectionSet_CanDeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(None)
	bool                                         ReturnValue;                                       // 0xD(0x1)(None)
	uint8                                        Pad_2694[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
struct UTypedElementSelectionSet_AllowSelectionModifiers_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2698[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
struct ITypedElementAssetDataInterface_GetAssetData_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FAssetData                            ReturnValue;                                       // 0x8(0x68)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
struct ITypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	TArray<struct FAssetData>                    ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
struct ITypedElementHierarchyInterface_GetParentElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	bool                                         bAllowCreate;                                      // 0x8(0x1)(None)
	uint8                                        Pad_26AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
struct ITypedElementHierarchyInterface_GetChildElements_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	TArray<struct FScriptTypedElementHandle>     OutElementHandles;                                 // 0x8(0x10)(None)
	bool                                         bAllowCreate;                                      // 0x18(0x1)(None)
	uint8                                        Pad_26B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
struct ITypedElementObjectInterface_GetObjectClass_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
struct ITypedElementObjectInterface_GetObject_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
struct ITypedElementSelectionInterface_SelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x18(0x5)(None)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(None)
	uint8                                        Pad_26BD[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
struct ITypedElementSelectionInterface_IsElementSelected_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(None)
	struct FTypedElementIsSelectedOptions        InSelectionOptions;                                // 0x18(0x1)(None)
	bool                                         ReturnValue;                                       // 0x19(0x1)(None)
	uint8                                        Pad_26C0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
struct ITypedElementSelectionInterface_GetSelectionElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          InCurrentSelection;                                // 0x8(0x10)(None)
	enum class ETypedElementSelectionMethod      InSelectionMethod;                                 // 0x18(0x1)(None)
	uint8                                        Pad_26C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScriptTypedElementHandle             ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
struct ITypedElementSelectionInterface_DeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x18(0x5)(None)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(None)
	uint8                                        Pad_26C4[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
struct ITypedElementSelectionInterface_CanSelectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(None)
	bool                                         ReturnValue;                                       // 0xD(0x1)(None)
	uint8                                        Pad_26C8[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
struct ITypedElementSelectionInterface_CanDeselectElement_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FTypedElementSelectionOptions         InSelectionOptions;                                // 0x8(0x5)(None)
	bool                                         ReturnValue;                                       // 0xD(0x1)(None)
	uint8                                        Pad_26CD[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
struct ITypedElementSelectionInterface_AllowSelectionModifiers_Params
{
public:
	struct FScriptTypedElementHandle             InElementHandle;                                   // 0x0(0x8)(None)
	struct FScriptTypedElementListProxy          InSelectionSet;                                    // 0x8(0x10)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_26D1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


