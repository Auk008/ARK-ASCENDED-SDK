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

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.SupportsEvent
struct URigVMHost_SupportsEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1236[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVMHost.SetVariableFromString
struct URigVMHost_SetVariableFromString_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class FString                                InValue;                                           // 0x8(0x10)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_123A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.SetFramesPerSecond
struct URigVMHost_SetFramesPerSecond_Params
{
public:
	float                                        InFramesPerSecond;                                 // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.SetDeltaTime
struct URigVMHost_SetDeltaTime_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function RigVM.RigVMHost.SetAbsoluteTime
struct URigVMHost_SetAbsoluteTime_Params
{
public:
	float                                        InAbsoluteTime;                                    // 0x0(0x4)(None)
	bool                                         InSetDeltaTimeZero;                                // 0x4(0x1)(None)
	uint8                                        Pad_123E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function RigVM.RigVMHost.SetAbsoluteAndDeltaTime
struct URigVMHost_SetAbsoluteAndDeltaTime_Params
{
public:
	float                                        InAbsoluteTime;                                    // 0x0(0x4)(None)
	float                                        InDeltaTime;                                       // 0x4(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.RequestRunOnceEvent
struct URigVMHost_RequestRunOnceEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(None)
	int32                                        InEventIndex;                                      // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.RemoveRunOnceEvent
struct URigVMHost_RemoveRunOnceEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_124A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function RigVM.RigVMHost.GetVM
struct URigVMHost_GetVM_Params
{
public:
	class URigVM*                                ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMHost.GetVariableType
struct URigVMHost_GetVariableType_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVMHost.GetVariableAsString
struct URigVMHost_GetVariableAsString_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMHost.GetSupportedEvents
struct URigVMHost_GetSupportedEvents_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMHost.GetScriptAccessibleVariables
struct URigVMHost_GetScriptAccessibleVariables_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.GetDeltaTime
struct URigVMHost_GetDeltaTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.GetCurrentFramesPerSecond
struct URigVMHost_GetCurrentFramesPerSecond_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function RigVM.RigVMHost.GetAbsoluteTime
struct URigVMHost_GetAbsoluteTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVMHost.FindRigVMHosts
struct URigVMHost_FindRigVMHosts_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ZeroConstructor)
	class UClass*                                OptionalClass;                                     // 0x8(0x8)(ZeroConstructor)
	TArray<class URigVMHost*>                    ReturnValue;                                       // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.ExecuteEvent
struct URigVMHost_ExecuteEvent_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1269[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVMHost.Execute
struct URigVMHost_Execute_Params
{
public:
	class FName                                  InEventName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_126C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function RigVM.RigVMHost.CanExecute
struct URigVMHost_CanExecute_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.RequiresDialog
struct URigVMUserWorkflowOptions_RequiresDialog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.ReportWarning
struct URigVMUserWorkflowOptions_ReportWarning_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.ReportInfo
struct URigVMUserWorkflowOptions_ReportInfo_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.ReportError
struct URigVMUserWorkflowOptions_ReportError_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function RigVM.RigVMUserWorkflowOptions.IsValid
struct URigVMUserWorkflowOptions_IsValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.SetParameterValueVector2D
struct URigVM_SetParameterValueVector2D_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FVector2D                             InValue;                                           // 0x8(0x10)(None)
	int32                                        InArrayIndex;                                      // 0x18(0x4)(None)
	uint8                                        Pad_1295[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function RigVM.RigVM.SetParameterValueVector
struct URigVM_SetParameterValueVector_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	struct FVector                               InValue;                                           // 0x8(0x18)(None)
	int32                                        InArrayIndex;                                      // 0x20(0x4)(None)
	uint8                                        Pad_1297[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function RigVM.RigVM.SetParameterValueTransform
struct URigVM_SetParameterValueTransform_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	uint8                                        Pad_1299[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InValue;                                           // 0x10(0x60)(None)
	int32                                        InArrayIndex;                                      // 0x70(0x4)(None)
	uint8                                        Pad_129A[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.SetParameterValueString
struct URigVM_SetParameterValueString_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	class FString                                InValue;                                           // 0x8(0x10)(None)
	int32                                        InArrayIndex;                                      // 0x18(0x4)(None)
	uint8                                        Pad_129E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function RigVM.RigVM.SetParameterValueQuat
struct URigVM_SetParameterValueQuat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	uint8                                        Pad_12A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 InValue;                                           // 0x10(0x20)(None)
	int32                                        InArrayIndex;                                      // 0x30(0x4)(None)
	uint8                                        Pad_12A2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function RigVM.RigVM.SetParameterValueName
struct URigVM_SetParameterValueName_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	class FName                                  InValue;                                           // 0x8(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x10(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.SetParameterValueInt
struct URigVM_SetParameterValueInt_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InValue;                                           // 0x8(0x4)(None)
	int32                                        InArrayIndex;                                      // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.SetParameterValueFloat
struct URigVM_SetParameterValueFloat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	float                                        InValue;                                           // 0x8(0x4)(None)
	int32                                        InArrayIndex;                                      // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.SetParameterValueDouble
struct URigVM_SetParameterValueDouble_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	double                                       InValue;                                           // 0x8(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x10(0x4)(None)
	uint8                                        Pad_12DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.SetParameterValueBool
struct URigVM_SetParameterValueBool_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	bool                                         InValue;                                           // 0x8(0x1)(None)
	uint8                                        Pad_12E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InArrayIndex;                                      // 0xC(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function RigVM.RigVM.GetStatistics
struct URigVM_GetStatistics_Params
{
public:
	struct FRigVMStatistics                      ReturnValue;                                       // 0x0(0x38)(None)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.GetRigVMFunctionName
struct URigVM_GetRigVMFunctionName_Params
{
public:
	int32                                        InFunctionIndex;                                   // 0x0(0x4)(None)
	uint8                                        Pad_12E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.GetParameterValueVector2D
struct URigVM_GetParameterValueVector2D_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_12EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function RigVM.RigVM.GetParameterValueVector
struct URigVM_GetParameterValueVector_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_12ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// Function RigVM.RigVM.GetParameterValueTransform
struct URigVM_GetParameterValueTransform_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_12EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(None)
};

// 0x20 (0x20 - 0x0)
// Function RigVM.RigVM.GetParameterValueString
struct URigVM_GetParameterValueString_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_12EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function RigVM.RigVM.GetParameterValueQuat
struct URigVM_GetParameterValueQuat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_12F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x14 (0x14 - 0x0)
// Function RigVM.RigVM.GetParameterValueName
struct URigVM_GetParameterValueName_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	class FName                                  ReturnValue;                                       // 0xC(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.GetParameterValueInt
struct URigVM_GetParameterValueInt_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.GetParameterValueFloat
struct URigVM_GetParameterValueFloat_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	float                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.GetParameterValueDouble
struct URigVM_GetParameterValueDouble_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_12F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function RigVM.RigVM.GetParameterValueBool
struct URigVM_GetParameterValueBool_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(None)
	int32                                        InArrayIndex;                                      // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_12FA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function RigVM.RigVM.Execute
struct URigVM_Execute_Params
{
public:
	class FName                                  InEntryName;                                       // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_12FC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function RigVM.RigVM.AddRigVMFunction
struct URigVM_AddRigVMFunction_Params
{
public:
	class UScriptStruct*                         InRigVMStruct;                                     // 0x0(0x8)(None)
	class FName                                  InMethodName;                                      // 0x8(0x8)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_12FE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


