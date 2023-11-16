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
// Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
struct URigHierarchy_UnsetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bSetupUndo;                                        // 0x4(0x1)(None)
	uint8                                        Pad_11BE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.UnsetCurveValue
struct URigHierarchy_UnsetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(None)
	uint8                                        Pad_11C0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SwitchToWorldSpace
struct URigHierarchy_SwitchToWorldSpace_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	bool                                         bAffectChildren;                                   // 0xD(0x1)(None)
	bool                                         ReturnValue;                                       // 0xE(0x1)(None)
	uint8                                        Pad_11C3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SwitchToParent
struct URigHierarchy_SwitchToParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	bool                                         bInitial;                                          // 0x18(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x19(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(None)
	uint8                                        Pad_11C9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SwitchToDefaultParent
struct URigHierarchy_SwitchToDefaultParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	bool                                         bAffectChildren;                                   // 0xD(0x1)(None)
	bool                                         ReturnValue;                                       // 0xE(0x1)(None)
	uint8                                        Pad_11D3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.SortKeys
struct URigHierarchy_SortKeys_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(None)
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function ControlRig.RigHierarchy.SetVectorMetadata
struct URigHierarchy_SetVectorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_11DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InValue;                                           // 0x18(0x18)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_11DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
struct URigHierarchy_SetVectorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_11DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_11DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchy.SetTransformMetadata
struct URigHierarchy_SetTransformMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_11E3[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InValue;                                           // 0x20(0x60)(None)
	bool                                         ReturnValue;                                       // 0x80(0x1)(None)
	uint8                                        Pad_11E4[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
struct URigHierarchy_SetTransformArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_11EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_11EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.SetTag
struct URigHierarchy_SetTag_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InTag;                                             // 0xC(0x8)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_11F0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ControlRig.RigHierarchy.SetRotatorMetadata
struct URigHierarchy_SetRotatorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_11F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InValue;                                           // 0x18(0x18)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_11F2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
struct URigHierarchy_SetRotatorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_11FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_11FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
struct URigHierarchy_SetRigElementKeyMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	struct FRigElementKey                        InValue;                                           // 0x14(0xC)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_1201[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
struct URigHierarchy_SetRigElementKeyArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1207[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1208[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ControlRig.RigHierarchy.SetQuatMetadata
struct URigHierarchy_SetQuatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_120C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 InValue;                                           // 0x20(0x20)(None)
	bool                                         ReturnValue;                                       // 0x40(0x1)(None)
	uint8                                        Pad_120D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
struct URigHierarchy_SetQuatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1213[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuat>                         InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1218[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
struct URigHierarchy_SetPose_ForBlueprint_Params
{
public:
	struct FRigPose                              InPose;                                            // 0x0(0x70)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetParentWeightArray
struct URigHierarchy_SetParentWeightArray_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	uint8                                        Pad_1223[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             InWeights;                                         // 0x10(0x10)(None)
	bool                                         bInitial;                                          // 0x20(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x21(0x1)(None)
	bool                                         ReturnValue;                                       // 0x22(0x1)(None)
	uint8                                        Pad_1224[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetParentWeight
struct URigHierarchy_SetParentWeight_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	struct FRigElementWeight                     InWeight;                                          // 0x18(0xC)(None)
	bool                                         bInitial;                                          // 0x24(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x25(0x1)(None)
	bool                                         ReturnValue;                                       // 0x26(0x1)(None)
	uint8                                        Pad_1227[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.SetNameMetadata
struct URigHierarchy_SetNameMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	class FName                                  InValue;                                           // 0x14(0x8)(None)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(None)
	uint8                                        Pad_122C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetNameArrayMetadata
struct URigHierarchy_SetNameArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_122D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_122E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
struct URigHierarchy_SetLocalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	uint8                                        Pad_1232[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(None)
	uint8                                        Pad_1233[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetLocalTransform
struct URigHierarchy_SetLocalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_1234[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(None)
	uint8                                        Pad_1235[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetLinearColorMetadata
struct URigHierarchy_SetLinearColorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	struct FLinearColor                          InValue;                                           // 0x14(0x10)(None)
	bool                                         ReturnValue;                                       // 0x24(0x1)(None)
	uint8                                        Pad_1239[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
struct URigHierarchy_SetLinearColorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_123B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_123C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SetInt32Metadata
struct URigHierarchy_SetInt32Metadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	int32                                        InValue;                                           // 0x14(0x4)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_123D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
struct URigHierarchy_SetInt32ArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_123F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1240[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
struct URigHierarchy_SetGlobalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	uint8                                        Pad_1244[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x73(0x1)(None)
	uint8                                        Pad_1245[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetGlobalTransform
struct URigHierarchy_SetGlobalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_124D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x73(0x1)(None)
	uint8                                        Pad_124E[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SetFloatMetadata
struct URigHierarchy_SetFloatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	float                                        InValue;                                           // 0x14(0x4)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_1253[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
struct URigHierarchy_SetFloatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1254[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1255[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ControlRig.RigHierarchy.SetCurveValueByIndex
struct URigHierarchy_SetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	float                                        InValue;                                           // 0x4(0x4)(None)
	bool                                         bSetupUndo;                                        // 0x8(0x1)(None)
	uint8                                        Pad_1256[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.SetCurveValue
struct URigHierarchy_SetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	float                                        InValue;                                           // 0xC(0x4)(None)
	bool                                         bSetupUndo;                                        // 0x10(0x1)(None)
	uint8                                        Pad_1258[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
struct URigHierarchy_SetControlVisibilityByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bVisibility;                                       // 0x4(0x1)(None)
	uint8                                        Pad_1259[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SetControlVisibility
struct URigHierarchy_SetControlVisibility_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bVisibility;                                       // 0xC(0x1)(None)
	uint8                                        Pad_125A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8C (0x8C - 0x0)
// Function ControlRig.RigHierarchy.SetControlValueByIndex
struct URigHierarchy_SetControlValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	struct FRigControlValue                      InValue;                                           // 0x4(0x84)(None)
	enum class ERigControlValueType              InValueType;                                       // 0x88(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x89(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x8A(0x1)(None)
	uint8                                        Pad_125B[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x94 (0x94 - 0x0)
// Function ControlRig.RigHierarchy.SetControlValue
struct URigHierarchy_SetControlValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	struct FRigControlValue                      InValue;                                           // 0xC(0x84)(None)
	enum class ERigControlValueType              InValueType;                                       // 0x90(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x91(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x92(0x1)(None)
	uint8                                        Pad_1263[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
struct URigHierarchy_SetControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	uint8                                        Pad_1266[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x71(0x1)(None)
	uint8                                        Pad_1267[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlShapeTransform
struct URigHierarchy_SetControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_126A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x71(0x1)(None)
	uint8                                        Pad_126B[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C0 (0x1C0 - 0x0)
// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
struct URigHierarchy_SetControlSettingsByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	uint8                                        Pad_126D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x8(0x1B0)(None)
	bool                                         bSetupUndo;                                        // 0x1B8(0x1)(None)
	bool                                         bForce;                                            // 0x1B9(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x1BA(0x1)(None)
	uint8                                        Pad_126F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x1C8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlSettings
struct URigHierarchy_SetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_1276[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x10(0x1B0)(None)
	bool                                         bSetupUndo;                                        // 0x1C0(0x1)(None)
	bool                                         bForce;                                            // 0x1C1(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x1C2(0x1)(None)
	uint8                                        Pad_1277[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
struct URigHierarchy_SetControlPreferredRotatorByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	uint8                                        Pad_127E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InValue;                                           // 0x8(0x18)(None)
	bool                                         bInitial;                                          // 0x20(0x1)(None)
	bool                                         bFixEulerFlips;                                    // 0x21(0x1)(None)
	uint8                                        Pad_127F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotator
struct URigHierarchy_SetControlPreferredRotator_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_1282[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InValue;                                           // 0x10(0x18)(None)
	bool                                         bInitial;                                          // 0x28(0x1)(None)
	bool                                         bFixEulerFlips;                                    // 0x29(0x1)(None)
	uint8                                        Pad_1283[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
struct URigHierarchy_SetControlOffsetTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	uint8                                        Pad_1283[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(None)
	uint8                                        Pad_1285[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlOffsetTransform
struct URigHierarchy_SetControlOffsetTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_128B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(None)
	bool                                         bInitial;                                          // 0x70(0x1)(None)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(None)
	uint8                                        Pad_128C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.SetBoolMetadata
struct URigHierarchy_SetBoolMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	bool                                         InValue;                                           // 0x14(0x1)(None)
	bool                                         ReturnValue;                                       // 0x15(0x1)(None)
	uint8                                        Pad_128E[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
struct URigHierarchy_SetBoolArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1291[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 InValue;                                           // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1292[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.SendAutoKeyEvent
struct URigHierarchy_SendAutoKeyEvent_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(None)
	float                                        InOffsetInSeconds;                                 // 0xC(0x4)(None)
	bool                                         bAsynchronous;                                     // 0x10(0x1)(None)
	uint8                                        Pad_1294[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchy.ResetPoseToInitial
struct URigHierarchy_ResetPoseToInitial_Params
{
public:
	enum class ERigElementType                   InTypeFilter;                                      // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.RemoveMetadata
struct URigHierarchy_RemoveMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_129B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.RemoveAllMetadata
struct URigHierarchy_RemoveAllMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_129F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.RigHierarchy.Num
struct URigHierarchy_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x98 (0x98 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
struct URigHierarchy_MakeControlValueFromVector2D_Params
{
public:
	struct FVector2D                             InValue;                                           // 0x0(0x10)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x10(0x84)(None)
	uint8                                        Pad_12A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromVector
struct URigHierarchy_MakeControlValueFromVector_Params
{
public:
	struct FVector                               InValue;                                           // 0x0(0x18)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x18(0x84)(None)
	uint8                                        Pad_12A7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
struct URigHierarchy_MakeControlValueFromTransformNoScale_Params
{
public:
	struct FTransformNoScale                     InValue;                                           // 0x0(0x40)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x40(0x84)(None)
	uint8                                        Pad_12A9[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
struct URigHierarchy_MakeControlValueFromTransform_Params
{
public:
	struct FTransform                            InValue;                                           // 0x0(0x60)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x60(0x84)(None)
	uint8                                        Pad_12AC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
struct URigHierarchy_MakeControlValueFromRotator_Params
{
public:
	struct FRotator                              InValue;                                           // 0x0(0x18)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x18(0x84)(None)
	uint8                                        Pad_12B0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromInt
struct URigHierarchy_MakeControlValueFromInt_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(None)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
struct URigHierarchy_MakeControlValueFromFloat_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
struct URigHierarchy_MakeControlValueFromEulerTransform_Params
{
public:
	struct FEulerTransform                       InValue;                                           // 0x0(0x48)(None)
	struct FRigControlValue                      ReturnValue;                                       // 0x48(0x84)(None)
	uint8                                        Pad_12F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromBool
struct URigHierarchy_MakeControlValueFromBool_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(None)
	uint8                                        Pad_12F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsValidIndex
struct URigHierarchy_IsValidIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_12F4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsSelectedByIndex
struct URigHierarchy_IsSelectedByIndex_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_12F6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsSelected
struct URigHierarchy_IsSelected_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_12F8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsProcedural
struct URigHierarchy_IsProcedural_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_12FB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.IsParentedTo
struct URigHierarchy_IsParentedTo_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_12FD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
struct URigHierarchy_IsCurveValueSetByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_12FF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsCurveValueSet
struct URigHierarchy_IsCurveValueSet_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_1305[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchy.IsControllerAvailable
struct URigHierarchy_IsControllerAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.HasTag
struct URigHierarchy_HasTag_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InTag;                                             // 0xC(0x8)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_130A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorMetadata
struct URigHierarchy_GetVectorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_130D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultValue;                                      // 0x18(0x18)(None)
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorFromControlValue
struct URigHierarchy_GetVectorFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	uint8                                        Pad_130F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x88(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
struct URigHierarchy_GetVectorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1311[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x98 (0x98 - 0x0)
// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
struct URigHierarchy_GetVector2DFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	uint8                                        Pad_1314[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x88(0x10)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
struct URigHierarchy_GetTransformNoScaleFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	uint8                                        Pad_131C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransformNoScale                     ReturnValue;                                       // 0x90(0x40)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformMetadata
struct URigHierarchy_GetTransformMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_131F[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DefaultValue;                                      // 0x20(0x60)(None)
	struct FTransform                            ReturnValue;                                       // 0x80(0x60)(None)
};

// 0xF0 (0xF0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformFromControlValue
struct URigHierarchy_GetTransformFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	uint8                                        Pad_1324[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x90(0x60)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
struct URigHierarchy_GetTransformArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1328[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetTags
struct URigHierarchy_GetTags_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	uint8                                        Pad_1329[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetSelectedKeys
struct URigHierarchy_GetSelectedKeys_Params
{
public:
	enum class ERigElementType                   InTypeFilter;                                      // 0x0(0x1)(None)
	uint8                                        Pad_132A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorMetadata
struct URigHierarchy_GetRotatorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_132B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DefaultValue;                                      // 0x18(0x18)(None)
	struct FRotator                              ReturnValue;                                       // 0x30(0x18)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
struct URigHierarchy_GetRotatorFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	uint8                                        Pad_132C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x88(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
struct URigHierarchy_GetRotatorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1332[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetRootElementKeys
struct URigHierarchy_GetRootElementKeys_Params
{
public:
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetRigidBodyKeys
struct URigHierarchy_GetRigidBodyKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1340[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x2C (0x2C - 0x0)
// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
struct URigHierarchy_GetRigElementKeyMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	struct FRigElementKey                        DefaultValue;                                      // 0x14(0xC)(None)
	struct FRigElementKey                        ReturnValue;                                       // 0x20(0xC)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
struct URigHierarchy_GetRigElementKeyArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_134D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetReferenceKeys
struct URigHierarchy_GetReferenceKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1352[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.RigHierarchy.GetQuatMetadata
struct URigHierarchy_GetQuatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1353[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 DefaultValue;                                      // 0x20(0x20)(None)
	struct FQuat                                 ReturnValue;                                       // 0x40(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
struct URigHierarchy_GetQuatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_135D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuat>                         ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetPreviousParent
struct URigHierarchy_GetPreviousParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(None)
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.GetPreviousName
struct URigHierarchy_GetPreviousName_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	class FName                                  ReturnValue;                                       // 0xC(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// Function ControlRig.RigHierarchy.GetPose
struct URigHierarchy_GetPose_Params
{
public:
	bool                                         bInitial;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigPose                              ReturnValue;                                       // 0x8(0x70)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetParentWeightArray
struct URigHierarchy_GetParentWeightArray_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_136A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetParentWeight
struct URigHierarchy_GetParentWeight_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	bool                                         bInitial;                                          // 0x18(0x1)(None)
	uint8                                        Pad_136C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementWeight                     ReturnValue;                                       // 0x1C(0xC)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetParentTransformByIndex
struct URigHierarchy_GetParentTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_136E[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetParentTransform
struct URigHierarchy_GetParentTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_1371[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetParents
struct URigHierarchy_GetParents_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bRecursive;                                        // 0xC(0x1)(None)
	uint8                                        Pad_1378[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetNumberOfParents
struct URigHierarchy_GetNumberOfParents_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetNullKeys
struct URigHierarchy_GetNullKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(None)
	uint8                                        Pad_137F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchy.GetNameMetadata
struct URigHierarchy_GetNameMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	class FName                                  DefaultValue;                                      // 0x14(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x1C(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetNameArrayMetadata
struct URigHierarchy_GetNameArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1384[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetMetadataType
struct URigHierarchy_GetMetadataType_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	enum class ERigMetadataType                  ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_1389[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetMetadataNames
struct URigHierarchy_GetMetadataNames_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	uint8                                        Pad_138D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
struct URigHierarchy_GetLocalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_1392[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalTransform
struct URigHierarchy_GetLocalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_139C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
struct URigHierarchy_GetLocalIndex_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
struct URigHierarchy_GetLocalControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_13A3[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
struct URigHierarchy_GetLocalControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_13A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x34 (0x34 - 0x0)
// Function ControlRig.RigHierarchy.GetLinearColorMetadata
struct URigHierarchy_GetLinearColorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	struct FLinearColor                          DefaultValue;                                      // 0x14(0x10)(None)
	struct FLinearColor                          ReturnValue;                                       // 0x24(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
struct URigHierarchy_GetLinearColorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_13B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetKeys
struct URigHierarchy_GetKeys_Params
{
public:
	TArray<int32>                                InElementIndices;                                  // 0x0(0x10)(None)
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetKey
struct URigHierarchy_GetKey_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	struct FRigElementKey                        ReturnValue;                                       // 0x4(0xC)(None)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.GetIntFromControlValue
struct URigHierarchy_GetIntFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	int32                                        ReturnValue;                                       // 0x84(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.GetInt32Metadata
struct URigHierarchy_GetInt32Metadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	int32                                        DefaultValue;                                      // 0x14(0x4)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
struct URigHierarchy_GetInt32ArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_13B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
struct URigHierarchy_GetIndex_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
struct URigHierarchy_GetGlobalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_13BC[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalTransform
struct URigHierarchy_GetGlobalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_13C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
struct URigHierarchy_GetGlobalControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_13C2[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
struct URigHierarchy_GetGlobalControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_13C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
struct URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_13C6[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
struct URigHierarchy_GetGlobalControlOffsetTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_13CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.GetFloatMetadata
struct URigHierarchy_GetFloatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	float                                        DefaultValue;                                      // 0x14(0x4)(None)
	float                                        ReturnValue;                                       // 0x18(0x4)(None)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.GetFloatFromControlValue
struct URigHierarchy_GetFloatFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	float                                        ReturnValue;                                       // 0x84(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
struct URigHierarchy_GetFloatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_13D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetFirstParent
struct URigHierarchy_GetFirstParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
struct URigHierarchy_GetEulerTransformFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(None)
	uint8                                        Pad_13DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEulerTransform                       ReturnValue;                                       // 0x88(0x48)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetDefaultParent
struct URigHierarchy_GetDefaultParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveValueByIndex
struct URigHierarchy_GetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	float                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveValue
struct URigHierarchy_GetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	float                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveKeys
struct URigHierarchy_GetCurveKeys_Params
{
public:
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x8C (0x8C - 0x0)
// Function ControlRig.RigHierarchy.GetControlValueByIndex
struct URigHierarchy_GetControlValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	enum class ERigControlValueType              InValueType;                                       // 0x4(0x1)(None)
	uint8                                        Pad_13E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      ReturnValue;                                       // 0x8(0x84)(None)
};

// 0x94 (0x94 - 0x0)
// Function ControlRig.RigHierarchy.GetControlValue
struct URigHierarchy_GetControlValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	enum class ERigControlValueType              InValueType;                                       // 0xC(0x1)(None)
	uint8                                        Pad_13E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      ReturnValue;                                       // 0x10(0x84)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
struct URigHierarchy_GetControlPreferredRotatorByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(None)
	bool                                         bInitial;                                          // 0x4(0x1)(None)
	uint8                                        Pad_13E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredRotator
struct URigHierarchy_GetControlPreferredRotator_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bInitial;                                          // 0xC(0x1)(None)
	uint8                                        Pad_13E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetController
struct URigHierarchy_GetController_Params
{
public:
	bool                                         bCreateIfNeeded;                                   // 0x0(0x1)(None)
	uint8                                        Pad_13EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchyController*               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetControlKeys
struct URigHierarchy_GetControlKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(None)
	uint8                                        Pad_13F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetChildren
struct URigHierarchy_GetChildren_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bRecursive;                                        // 0xC(0x1)(None)
	uint8                                        Pad_13F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetBoolMetadata
struct URigHierarchy_GetBoolMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	bool                                         DefaultValue;                                      // 0x14(0x1)(None)
	bool                                         ReturnValue;                                       // 0x15(0x1)(None)
	uint8                                        Pad_13FB[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
struct URigHierarchy_GetBoolArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(None)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(None)
	uint8                                        Pad_1407[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetBoneKeys
struct URigHierarchy_GetBoneKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(None)
	uint8                                        Pad_140C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
struct URigHierarchy_GetAllKeys_ForBlueprint_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1414[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x400 (0x400 - 0x0)
// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
struct URigHierarchy_FindNull_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_141E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigNullElement                       ReturnValue;                                       // 0x10(0x3F0)(None)
};

// 0x970 (0x970 - 0x0)
// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
struct URigHierarchy_FindControl_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_1424[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlElement                    ReturnValue;                                       // 0x10(0x960)(None)
};

// 0x310 (0x310 - 0x0)
// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
struct URigHierarchy_FindBone_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_142E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigBoneElement                       ReturnValue;                                       // 0x10(0x300)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.CopyPose
struct URigHierarchy_CopyPose_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(None)
	bool                                         bCurrent;                                          // 0x8(0x1)(None)
	bool                                         bInitial;                                          // 0x9(0x1)(None)
	bool                                         bWeights;                                          // 0xA(0x1)(None)
	bool                                         bMatchPoseInGlobalIfNeeded;                        // 0xB(0x1)(None)
	uint8                                        Pad_1435[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.CopyHierarchy
struct URigHierarchy_CopyHierarchy_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.Contains_ForBlueprint
struct URigHierarchy_Contains_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_143F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.SetInteractionRigClass
struct UControlRig_SetInteractionRigClass_Params
{
public:
	class UClass*                                InInteractionRigClass;                             // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.SetInteractionRig
struct UControlRig_SetInteractionRig_Params
{
public:
	class UControlRig*                           InInteractionRig;                                  // 0x0(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRig.SelectControl
struct UControlRig_SelectControl_Params
{
public:
	class FName                                  InControlName;                                     // 0x0(0x8)(None)
	bool                                         bSelect;                                           // 0x8(0x1)(None)
	uint8                                        Pad_14CD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x980 (0x980 - 0x0)
// SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
struct UControlRig_OnControlSelectedBP__DelegateSignature_Params
{
public:
	class UControlRig*                           Rig;                                               // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_14CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlElement                    Control;                                           // 0x10(0x960)(None)
	bool                                         bSelected;                                         // 0x970(0x1)(None)
	uint8                                        Pad_14D0[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRig.IsControlSelected
struct UControlRig_IsControlSelected_Params
{
public:
	class FName                                  InControlName;                                     // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_14D3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetInteractionRigClass
struct UControlRig_GetInteractionRigClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetInteractionRig
struct UControlRig_GetInteractionRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetHostingActor
struct UControlRig_GetHostingActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetHierarchy
struct UControlRig_GetHierarchy_Params
{
public:
	class URigHierarchy*                         ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.ControlRig.FindControlRigs
struct UControlRig_FindControlRigs_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ZeroConstructor)
	class UClass*                                OptionalClass;                                     // 0x8(0x8)(ZeroConstructor)
	TArray<class UControlRig*>                   ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRig.CurrentControlSelection
struct UControlRig_CurrentControlSelection_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRig.CreateTransformableControlHandle
struct UControlRig_CreateTransformableControlHandle_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ZeroConstructor)
	class FName                                  ControlName;                                       // 0x8(0x8)(None)
	class UTransformableControlHandle*           ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRig.ClearControlSelection
struct UControlRig_ClearControlSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRigComponent.Update
struct UControlRigComponent_Update_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetObjectBinding
struct UControlRigComponent_SetObjectBinding_Params
{
public:
	class UObject*                               InObjectToBind;                                    // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.SetMappedElements
struct UControlRigComponent_SetMappedElements_Params
{
public:
	TArray<struct FControlRigComponentMappedElement> NewMappedElements;                                 // 0x0(0x10)(None)
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
struct UControlRigComponent_SetInitialSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(None)
	uint8                                        Pad_14EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(None)
	uint8                                        Pad_14EC[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
struct UControlRigComponent_SetInitialBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	uint8                                        Pad_14EE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(None)
	bool                                         bPropagateToChildren;                              // 0x71(0x1)(None)
	uint8                                        Pad_14EF[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlVector2D
struct UControlRigComponent_SetControlVector2D_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	struct FVector2D                             Value;                                             // 0x8(0x10)(None)
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlTransform
struct UControlRigComponent_SetControlTransform_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	uint8                                        Pad_14F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(None)
	uint8                                        Pad_14F1[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlScale
struct UControlRigComponent_SetControlScale_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	struct FVector                               Value;                                             // 0x8(0x18)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(None)
	uint8                                        Pad_14F2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlRotator
struct UControlRigComponent_SetControlRotator_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	struct FRotator                              Value;                                             // 0x8(0x18)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(None)
	uint8                                        Pad_14F3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlRigClass
struct UControlRigComponent_SetControlRigClass_Params
{
public:
	class UClass*                                InControlRigClass;                                 // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlPosition
struct UControlRigComponent_SetControlPosition_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	struct FVector                               Value;                                             // 0x8(0x18)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(None)
	uint8                                        Pad_14F5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlOffset
struct UControlRigComponent_SetControlOffset_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	uint8                                        Pad_14F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x10(0x60)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(None)
	uint8                                        Pad_14FA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlInt
struct UControlRigComponent_SetControlInt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	int32                                        Value;                                             // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlFloat
struct UControlRigComponent_SetControlFloat_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	float                                        Value;                                             // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlBool
struct UControlRigComponent_SetControlBool_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	bool                                         Value;                                             // 0x8(0x1)(None)
	uint8                                        Pad_1500[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetBoneTransform
struct UControlRigComponent_SetBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	uint8                                        Pad_1502[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(None)
	uint8                                        Pad_1503[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x74(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x78(0x1)(None)
	uint8                                        Pad_1504[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
struct UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params
{
public:
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
struct UControlRigComponent_OnPreForwardsSolve_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreConstruction
struct UControlRigComponent_OnPreConstruction_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
struct UControlRigComponent_OnPostForwardsSolve_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostConstruction
struct UControlRigComponent_OnPostConstruction_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetSpaceTransform
struct UControlRigComponent_GetSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_150D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
struct UControlRigComponent_GetInitialSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_1511[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
struct UControlRigComponent_GetInitialBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_1515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.GetElementNames
struct UControlRigComponent_GetElementNames_Params
{
public:
	enum class ERigElementType                   ElementType;                                       // 0x0(0x1)(None)
	uint8                                        Pad_151A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlVector2D
struct UControlRigComponent_GetControlVector2D_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlTransform
struct UControlRigComponent_GetControlTransform_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_1526[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlScale
struct UControlRigComponent_GetControlScale_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_152F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlRotator
struct UControlRigComponent_GetControlRotator_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_1537[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlRig
struct UControlRigComponent_GetControlRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlPosition
struct UControlRigComponent_GetControlPosition_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_153E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlOffset
struct UControlRigComponent_GetControlOffset_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_153F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlInt
struct UControlRigComponent_GetControlInt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlFloat
struct UControlRigComponent_GetControlFloat_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlBool
struct UControlRigComponent_GetControlBool_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1541[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetBoneTransform
struct UControlRigComponent_GetBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(None)
	uint8                                        Pad_1542[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRigComponent.GetAbsoluteTime
struct UControlRigComponent_GetAbsoluteTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.DoesElementExist
struct UControlRigComponent_DoesElementExist_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	enum class ERigElementType                   ElementType;                                       // 0x8(0x1)(None)
	bool                                         ReturnValue;                                       // 0x9(0x1)(None)
	uint8                                        Pad_1543[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigComponent.CanExecute
struct UControlRigComponent_CanExecute_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
struct UControlRigComponent_AddMappedSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(None)
	TArray<struct FControlRigComponentMappedBone> Bones;                                             // 0x8(0x10)(None)
	TArray<struct FControlRigComponentMappedCurve> Curves;                                            // 0x18(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedElements
struct UControlRigComponent_AddMappedElements_Params
{
public:
	TArray<struct FControlRigComponentMappedElement> NewMappedElements;                                 // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedComponents
struct UControlRigComponent_AddMappedComponents_Params
{
public:
	TArray<struct FControlRigComponentMappedComponent> Components;                                        // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
struct UControlRigComponent_AddMappedCompleteSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetSelected
struct AControlRigShapeActor_SetSelected_Params
{
public:
	bool                                         bInSelected;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetSelectable
struct AControlRigShapeActor_SetSelectable_Params
{
public:
	bool                                         bInSelectable;                                     // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetHovered
struct AControlRigShapeActor_SetHovered_Params
{
public:
	bool                                         bInHovered;                                        // 0x0(0x1)(None)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
struct AControlRigShapeActor_SetGlobalTransform_Params
{
public:
	struct FTransform                            InTransform;                                       // 0x0(0x60)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetEnabled
struct AControlRigShapeActor_SetEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(None)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnTransformChanged
struct AControlRigShapeActor_OnTransformChanged_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x60)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
struct AControlRigShapeActor_OnSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
struct AControlRigShapeActor_OnManipulatingChanged_Params
{
public:
	bool                                         bIsManipulating;                                   // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
struct AControlRigShapeActor_OnHoveredChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
struct AControlRigShapeActor_OnEnabledChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
struct AControlRigShapeActor_IsSelectedInEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsHovered
struct AControlRigShapeActor_IsHovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsEnabled
struct AControlRigShapeActor_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
struct AControlRigShapeActor_GetGlobalTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigTestData.SetupReplay
struct UControlRigTestData_SetupReplay_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(None)
	bool                                         bGroundTruth;                                      // 0x8(0x1)(None)
	bool                                         ReturnValue;                                       // 0x9(0x1)(None)
	uint8                                        Pad_1581[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTestData.Record
struct UControlRigTestData_Record_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(None)
	double                                       InRecordingDuration;                               // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_1589[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.IsReplaying
struct UControlRigTestData_IsReplaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.IsRecording
struct UControlRigTestData_IsRecording_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTestData.GetTimeRange
struct UControlRigTestData_GetTimeRange_Params
{
public:
	bool                                         bInput;                                            // 0x0(0x1)(None)
	uint8                                        Pad_1598[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.GetPlaybackMode
struct UControlRigTestData_GetPlaybackMode_Params
{
public:
	enum class EControlRigTestDataPlaybackMode   ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
struct UControlRigTestData_GetFrameIndexForTime_Params
{
public:
	double                                       InSeconds;                                         // 0x0(0x8)(None)
	bool                                         bInput;                                            // 0x8(0x1)(None)
	uint8                                        Pad_15A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigTestData.CreateNewAsset
struct UControlRigTestData_CreateNewAsset_Params
{
public:
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(None)
	class FString                                InBlueprintPathName;                               // 0x10(0x10)(None)
	class UControlRigTestData*                   ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchyController.SetSelection
struct URigHierarchyController_SetSelection_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(None)
	bool                                         bPrintPythonCommand;                               // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_15B8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.SetParent
struct URigHierarchyController_SetParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	bool                                         bMaintainGlobalTransform;                          // 0x18(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x19(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x1A(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1B(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchyController.SetHierarchy
struct URigHierarchyController_SetHierarchy_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.SetDisplayName
struct URigHierarchyController_SetDisplayName_Params
{
public:
	struct FRigElementKey                        InControl;                                         // 0x0(0xC)(None)
	class FName                                  InDisplayName;                                     // 0xC(0x8)(None)
	bool                                         bRenameElement;                                    // 0x14(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x15(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x16(0x1)(None)
	uint8                                        Pad_15C2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x1C8 (0x1C8 - 0x0)
// Function ControlRig.RigHierarchyController.SetControlSettings
struct URigHierarchyController_SetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_15C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x10(0x1B0)(None)
	bool                                         bSetupUndo;                                        // 0x1C0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1C1(0x1)(None)
	uint8                                        Pad_15C7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.SelectElement
struct URigHierarchyController_SelectElement_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         bSelect;                                           // 0xC(0x1)(None)
	bool                                         bClearSelection;                                   // 0xD(0x1)(None)
	bool                                         ReturnValue;                                       // 0xE(0x1)(None)
	uint8                                        Pad_15C9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchyController.ReorderElement
struct URigHierarchyController_ReorderElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(None)
	int32                                        InIndex;                                           // 0xC(0x4)(None)
	bool                                         bSetupUndo;                                        // 0x10(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x11(0x1)(None)
	bool                                         ReturnValue;                                       // 0x12(0x1)(None)
	uint8                                        Pad_15CB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchyController.RenameElement
struct URigHierarchyController_RenameElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(None)
	class FName                                  InName;                                            // 0xC(0x8)(None)
	bool                                         bSetupUndo;                                        // 0x14(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x15(0x1)(None)
	bool                                         bClearSelection;                                   // 0x16(0x1)(None)
	uint8                                        Pad_15CC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x18(0xC)(None)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.RemoveParent
struct URigHierarchyController_RemoveParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	bool                                         bMaintainGlobalTransform;                          // 0x18(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x19(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x1A(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1B(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.RemoveElement
struct URigHierarchyController_RemoveElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(None)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0xD(0x1)(None)
	bool                                         ReturnValue;                                       // 0xE(0x1)(None)
	uint8                                        Pad_15CD[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.RemoveAllParents
struct URigHierarchyController_RemoveAllParents_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	bool                                         bMaintainGlobalTransform;                          // 0xC(0x1)(None)
	bool                                         bSetupUndo;                                        // 0xD(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0xE(0x1)(None)
	bool                                         ReturnValue;                                       // 0xF(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// Function ControlRig.RigHierarchyController.MirrorElements
struct URigHierarchyController_MirrorElements_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(None)
	struct FRigVMMirrorSettings                  InSettings;                                        // 0x10(0x28)(None)
	bool                                         bSelectNewElements;                                // 0x38(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x39(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x3A(0x1)(None)
	uint8                                        Pad_15CE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x40(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportFromText
struct URigHierarchyController_ImportFromText_Params
{
public:
	class FString                                InContent;                                         // 0x0(0x10)(None)
	bool                                         bReplaceExistingElements;                          // 0x10(0x1)(None)
	bool                                         bSelectNewElements;                                // 0x11(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x12(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x13(0x1)(None)
	uint8                                        Pad_15CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportCurves
struct URigHierarchyController_ImportCurves_Params
{
public:
	class USkeleton*                             InSkeleton;                                        // 0x0(0x8)(None)
	class FName                                  InNameSpace;                                       // 0x8(0x8)(None)
	bool                                         bSelectCurves;                                     // 0x10(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x11(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x12(0x1)(None)
	uint8                                        Pad_15DA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportBones
struct URigHierarchyController_ImportBones_Params
{
public:
	class USkeleton*                             InSkeleton;                                        // 0x0(0x8)(None)
	class FName                                  InNameSpace;                                       // 0x8(0x8)(None)
	bool                                         bReplaceExistingBones;                             // 0x10(0x1)(None)
	bool                                         bRemoveObsoleteBones;                              // 0x11(0x1)(None)
	bool                                         bSelectBones;                                      // 0x12(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x13(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x14(0x1)(None)
	uint8                                        Pad_15E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchyController.GetHierarchy
struct URigHierarchyController_GetHierarchy_Params
{
public:
	class URigHierarchy*                         ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// Function ControlRig.RigHierarchyController.GetControlSettings
struct URigHierarchyController_GetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	uint8                                        Pad_15E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   ReturnValue;                                       // 0x10(0x1B0)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.ExportToText
struct URigHierarchyController_ExportToText_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(None)
	class FString                                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.ExportSelectionToText
struct URigHierarchyController_ExportSelectionToText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.DuplicateElements
struct URigHierarchyController_DuplicateElements_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(None)
	bool                                         bSelectNewElements;                                // 0x10(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x11(0x1)(None)
	bool                                         bPrintPythonCommands;                              // 0x12(0x1)(None)
	uint8                                        Pad_15E4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.DeselectElement
struct URigHierarchyController_DeselectElement_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_15E8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchyController.ClearSelection
struct URigHierarchyController_ClearSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddRigidBody
struct URigHierarchyController_AddRigidBody_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(None)
	struct FRigRigidBodySettings                 InSettings;                                        // 0x14(0x4)(None)
	uint8                                        Pad_15EA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InLocalTransform;                                  // 0x20(0x60)(None)
	bool                                         bSetupUndo;                                        // 0x80(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x81(0x1)(None)
	uint8                                        Pad_15EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(None)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.AddParent
struct URigHierarchyController_AddParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(None)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(None)
	float                                        InWeight;                                          // 0x18(0x4)(None)
	bool                                         bMaintainGlobalTransform;                          // 0x1C(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x1D(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1E(0x1)(None)
	uint8                                        Pad_15F0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddNull
struct URigHierarchyController_AddNull_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(None)
	uint8                                        Pad_15F2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x20(0x60)(None)
	bool                                         bTransformInGlobal;                                // 0x80(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x81(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x82(0x1)(None)
	uint8                                        Pad_15F3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(None)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.AddCurve
struct URigHierarchyController_AddCurve_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	float                                        InValue;                                           // 0x8(0x4)(None)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0xD(0x1)(None)
	uint8                                        Pad_15FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x10(0xC)(None)
};

// 0x260 (0x260 - 0x0)
// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
struct URigHierarchyController_AddControl_ForBlueprint_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(None)
	uint8                                        Pad_15FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x18(0x1B0)(None)
	struct FRigControlValue                      InValue;                                           // 0x1C8(0x84)(None)
	bool                                         bSetupUndo;                                        // 0x24C(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x24D(0x1)(None)
	uint8                                        Pad_15FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x250(0xC)(None)
	uint8                                        Pad_15FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddBone
struct URigHierarchyController_AddBone_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(None)
	uint8                                        Pad_1600[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x20(0x60)(None)
	bool                                         bTransformInGlobal;                                // 0x80(0x1)(None)
	enum class ERigBoneType                      InBoneType;                                        // 0x81(0x1)(None)
	bool                                         bSetupUndo;                                        // 0x82(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x83(0x1)(None)
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(None)
};

// 0x1D8 (0x1D8 - 0x0)
// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
struct URigHierarchyController_AddAnimationChannel_ForBlueprint_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(None)
	struct FRigElementKey                        InParentControl;                                   // 0x8(0xC)(None)
	uint8                                        Pad_1601[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x18(0x1B0)(None)
	bool                                         bSetupUndo;                                        // 0x1C8(0x1)(None)
	bool                                         bPrintPythonCommand;                               // 0x1C9(0x1)(None)
	uint8                                        Pad_1602[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x1CC(0xC)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.SelectControls
struct UControlRigPoseAsset_SelectControls_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(None)
	bool                                         bDoMirror;                                         // 0x8(0x1)(None)
	uint8                                        Pad_162D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.SavePose
struct UControlRigPoseAsset_SavePose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(None)
	bool                                         bUseAll;                                           // 0x8(0x1)(None)
	uint8                                        Pad_162F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
struct UControlRigPoseAsset_ReplaceControlName_Params
{
public:
	class FName                                  CurrentName;                                       // 0x0(0x8)(None)
	class FName                                  NewName;                                           // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.PastePose
struct UControlRigPoseAsset_PastePose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(None)
	bool                                         bDoKey;                                            // 0x8(0x1)(None)
	bool                                         bDoMirror;                                         // 0x9(0x1)(None)
	uint8                                        Pad_167B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
struct UControlRigPoseAsset_GetCurrentPose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(None)
	struct FControlRigControlPose                OutPose;                                           // 0x8(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.GetControlNames
struct UControlRigPoseAsset_GetControlNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
struct UControlRigPoseAsset_DoesMirrorMatch_Params
{
public:
	class UControlRig*                           ControlRig;                                        // 0x0(0x8)(None)
	class FName                                  ControlName;                                       // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_1683[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
struct UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
struct UControlRigTransformWorkflowOptions_ProvideWorkflows_Params
{
public:
	class UObject*                               InSubject;                                         // 0x0(0x8)(ZeroConstructor)
	TArray<struct FRigVMUserWorkflow>            ReturnValue;                                       // 0x8(0x10)(None)
};

}
}


