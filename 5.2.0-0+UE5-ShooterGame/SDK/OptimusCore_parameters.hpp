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
// Function OptimusCore.OptimusNode.SetGraphPosition
struct UOptimusNode_SetGraphPosition_Params
{
public:
	struct FVector2D                             InPosition;                                        // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_70C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function OptimusCore.OptimusNode.GetNodeName
struct UOptimusNode_GetNodeName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function OptimusCore.OptimusNode.GetNodeCategory
struct UOptimusNode_GetNodeCategory_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNode.GetGraphPosition
struct UOptimusNode_GetGraphPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNode.GetDisplayName
struct UOptimusNode_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusDeformer.GetVariables
struct UOptimusDeformer_GetVariables_Params
{
public:
	TArray<class UOptimusVariableDescription*>   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusDeformer.GetResources
struct UOptimusDeformer_GetResources_Params
{
public:
	TArray<class UOptimusResourceDescription*>   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusDeformer.GetComponentBindings
struct UOptimusDeformer_GetComponentBindings_Params
{
public:
	TArray<class UOptimusComponentSourceBinding*> ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function OptimusCore.OptimusDeformerInstance.SetVectorVariable
struct UOptimusDeformerInstance_SetVectorVariable_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	struct FVector                               InValue;                                           // 0x8(0x18)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_73C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function OptimusCore.OptimusDeformerInstance.SetVector4Variable
struct UOptimusDeformerInstance_SetVector4Variable_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_73E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              InValue;                                           // 0x10(0x20)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_73F[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function OptimusCore.OptimusDeformerInstance.SetTransformVariable
struct UOptimusDeformerInstance_SetTransformVariable_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_742[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InValue;                                           // 0x10(0x60)(None)
	bool                                         ReturnValue;                                       // 0x70(0x1)(None)
	uint8                                        Pad_743[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusDeformerInstance.SetIntVariable
struct UOptimusDeformerInstance_SetIntVariable_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	int32                                        InValue;                                           // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_746[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusDeformerInstance.SetFloatVariable
struct UOptimusDeformerInstance_SetFloatVariable_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	double                                       InValue;                                           // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_74B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function OptimusCore.OptimusDeformerInstance.SetBoolVariable
struct UOptimusDeformerInstance_SetBoolVariable_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	bool                                         InValue;                                           // 0x8(0x1)(None)
	bool                                         ReturnValue;                                       // 0x9(0x1)(None)
	uint8                                        Pad_74C[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusDeformerInstance.GetVariables
struct UOptimusDeformerInstance_GetVariables_Params
{
public:
	TArray<class UOptimusVariableDescription*>   ReturnValue;                                       // 0x0(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
struct UOptimusDeformerInstance_EnqueueTriggerGraph_Params
{
public:
	class FName                                  InTriggerGraphName;                                // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_74F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.RenameGraph
struct UOptimusNodeGraph_RenameGraph_Params
{
public:
	class UOptimusNodeGraph*                     InGraph;                                           // 0x0(0x8)(None)
	class FString                                InNewName;                                         // 0x8(0x10)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_752[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNodeGraph.RemoveNodes
struct UOptimusNodeGraph_RemoveNodes_Params
{
public:
	TArray<class UOptimusNode*>                  InNodes;                                           // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_753[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.RemoveNode
struct UOptimusNodeGraph_RemoveNode_Params
{
public:
	class UOptimusNode*                          InNode;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_754[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNodeGraph.RemoveLink
struct UOptimusNodeGraph_RemoveLink_Params
{
public:
	class UOptimusNodePin*                       InNodeOutputPin;                                   // 0x0(0x8)(ZeroConstructor)
	class UOptimusNodePin*                       InNodeInputPin;                                    // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_756[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.RemoveAllLinks
struct UOptimusNodeGraph_RemoveAllLinks_Params
{
public:
	class UOptimusNodePin*                       InNodePin;                                         // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_759[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.MoveGraph
struct UOptimusNodeGraph_MoveGraph_Params
{
public:
	class UOptimusNodeGraph*                     InGraph;                                           // 0x0(0x8)(None)
	int32                                        InInsertBefore;                                    // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_75A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.IsSubGraphReference
struct UOptimusNodeGraph_IsSubGraphReference_Params
{
public:
	class UOptimusNode*                          InNode;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_75B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.IsKernelFunction
struct UOptimusNodeGraph_IsKernelFunction_Params
{
public:
	class UOptimusNode*                          InNode;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_75C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.IsFunctionReference
struct UOptimusNodeGraph_IsFunctionReference_Params
{
public:
	class UOptimusNode*                          InNode;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_75D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OptimusCore.OptimusNodeGraph.IsFunctionGraph
struct UOptimusNodeGraph_IsFunctionGraph_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function OptimusCore.OptimusNodeGraph.IsExecutionGraph
struct UOptimusNodeGraph_IsExecutionGraph_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.IsCustomKernel
struct UOptimusNodeGraph_IsCustomKernel_Params
{
public:
	class UOptimusNode*                          InNode;                                            // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_75F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function OptimusCore.OptimusNodeGraph.GetGraphType
struct UOptimusNodeGraph_GetGraphType_Params
{
public:
	enum class EOptimusNodeGraphType             ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.GetGraphs
struct UOptimusNodeGraph_GetGraphs_Params
{
public:
	TArray<class UOptimusNodeGraph*>             ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function OptimusCore.OptimusNodeGraph.GetGraphIndex
struct UOptimusNodeGraph_GetGraphIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
struct UOptimusNodeGraph_ExpandCollapsedNodes_Params
{
public:
	class UOptimusNode*                          InFunctionNode;                                    // 0x0(0x8)(ZeroConstructor)
	TArray<class UOptimusNode*>                  ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function OptimusCore.OptimusNodeGraph.DuplicateNodes
struct UOptimusNodeGraph_DuplicateNodes_Params
{
public:
	TArray<class UOptimusNode*>                  InNodes;                                           // 0x0(0x10)(None)
	struct FVector2D                             InPosition;                                        // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_761[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.DuplicateNode
struct UOptimusNodeGraph_DuplicateNode_Params
{
public:
	class UOptimusNode*                          InNode;                                            // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
struct UOptimusNodeGraph_ConvertFunctionToCustomKernel_Params
{
public:
	class UOptimusNode*                          InKernelFunction;                                  // 0x0(0x8)(ZeroConstructor)
	class UOptimusNode*                          ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
struct UOptimusNodeGraph_ConvertCustomKernelToFunction_Params
{
public:
	class UOptimusNode*                          InCustomKernel;                                    // 0x0(0x8)(ZeroConstructor)
	class UOptimusNode*                          ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
struct UOptimusNodeGraph_CollapseNodesToSubGraph_Params
{
public:
	TArray<class UOptimusNode*>                  InNodes;                                           // 0x0(0x10)(ZeroConstructor)
	class UOptimusNode*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
struct UOptimusNodeGraph_CollapseNodesToFunction_Params
{
public:
	TArray<class UOptimusNode*>                  InNodes;                                           // 0x0(0x10)(ZeroConstructor)
	class UOptimusNode*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddVariableGetNode
struct UOptimusNodeGraph_AddVariableGetNode_Params
{
public:
	class UOptimusVariableDescription*           InVariableDesc;                                    // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddValueNode
struct UOptimusNodeGraph_AddValueNode_Params
{
public:
	struct FOptimusDataTypeRef                   InDataTypeRef;                                     // 0x0(0x10)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x10(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddResourceSetNode
struct UOptimusNodeGraph_AddResourceSetNode_Params
{
public:
	class UOptimusResourceDescription*           InResourceDesc;                                    // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddResourceNode
struct UOptimusNodeGraph_AddResourceNode_Params
{
public:
	class UOptimusResourceDescription*           InResourceDesc;                                    // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddResourceGetNode
struct UOptimusNodeGraph_AddResourceGetNode_Params
{
public:
	class UOptimusResourceDescription*           InResourceDesc;                                    // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddNode
struct UOptimusNodeGraph_AddNode_Params
{
public:
	class UClass*                                InNodeClass;                                       // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddLink
struct UOptimusNodeGraph_AddLink_Params
{
public:
	class UOptimusNodePin*                       InNodeOutputPin;                                   // 0x0(0x8)(ZeroConstructor)
	class UOptimusNodePin*                       InNodeInputPin;                                    // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_766[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
struct UOptimusNodeGraph_AddDataInterfaceNode_Params
{
public:
	class UClass*                                InDataInterfaceClass;                              // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
struct UOptimusNodeGraph_AddComponentBindingGetNode_Params
{
public:
	class UOptimusComponentSourceBinding*        InComponentBinding;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             InPosition;                                        // 0x8(0x10)(None)
	class UOptimusNode*                          ReturnValue;                                       // 0x18(0x8)(None)
};

}
}


