#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x180 - 0x28)
// Class RigVM.RigVMHost
class URigVMHost : public UObject
{
public:
	uint8                                        Pad_1270[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x30(0x18)(None)
	uint8                                        Pad_1271[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                VM;                                                // 0x58(0x8)(ZeroConstructor)
	struct FRigVMDrawContainer                   DrawContainer;                                     // 0x60(0x18)(None)
	uint8                                        Pad_1272[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EventQueue;                                        // 0x90(0x10)(None)
	uint8                                        Pad_1273[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x130(0x10)(None)
	uint8                                        Pad_1274[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVMHost* GetDefaultObj();

	void SupportsEvent(class FName InEventName, bool ReturnValue);
	void SetVariableFromString(class FName InVariableName, const class FString& InValue, bool ReturnValue);
	void SetFramesPerSecond(float InFramesPerSecond);
	void SetDeltaTime(float InDeltaTime);
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
	void RequestRunOnceEvent(class FName InEventName, int32 InEventIndex);
	void RequestInit();
	void RemoveRunOnceEvent(class FName InEventName, bool ReturnValue);
	void GetVM(class URigVM* ReturnValue);
	void GetVariableType(class FName InVariableName, class FName ReturnValue);
	void GetVariableAsString(class FName InVariableName, const class FString& ReturnValue);
	void GetSupportedEvents(const TArray<class FName>& ReturnValue);
	void GetScriptAccessibleVariables(const TArray<class FName>& ReturnValue);
	void GetDeltaTime(float ReturnValue);
	void GetCurrentFramesPerSecond(float ReturnValue);
	void GetAbsoluteTime(float ReturnValue);
	void FindRigVMHosts(class UObject* Outer, class UClass* OptionalClass, const TArray<class URigVMHost*>& ReturnValue);
	void ExecuteEvent(class FName InEventName, bool ReturnValue);
	void Execute(class FName InEventName, bool ReturnValue);
	void CanExecute(bool ReturnValue);
};

// 0x30 (0x3A0 - 0x370)
// Class RigVM.RigVMBlueprintGeneratedClass
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                        Pad_1280[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMGraphFunctionStore              GraphFunctionStore;                                // 0x378(0x20)(ZeroConstructor)
	uint8                                        Pad_1281[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(ZeroConstructor)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(None)
	uint8                                        Pad_128F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVMUserWorkflowOptions* GetDefaultObj();

	void RequiresDialog(bool ReturnValue);
	void ReportWarning(const class FString& InMessage);
	void ReportInfo(const class FString& InMessage);
	void ReportError(const class FString& InMessage);
	void IsValid(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMGraphFunctionHost
class IRigVMGraphFunctionHost : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRigVMGraphFunctionHost* GetDefaultObj();

};

// 0x3A0 (0x3C8 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(ZeroConstructor)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(ZeroConstructor)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(ZeroConstructor)
	uint8                                        Pad_1301[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x90)(None)
	uint8                                        Pad_1302[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMInstructionArray                Instructions;                                      // 0xF8(0x10)(None)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0x108(0x108)(None)
	uint32                                       NumExecutions;                                     // 0x210(0x4)(None)
	uint8                                        Pad_1303[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(None)
	uint8                                        Pad_1304[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x260(0x10)(ZeroConstructor)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x270(0x50)(None)
	uint8                                        Pad_1306[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                DeferredVMToCopy;                                  // 0x3A8(0x8)(None)
	uint8                                        Pad_1307[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	void SetParameterValueVector2D(class FName InParameterName, const struct FVector2D& InValue, int32 InArrayIndex);
	void SetParameterValueVector(class FName InParameterName, const struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(class FName InParameterName, const struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueString(class FName InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(class FName InParameterName, const struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueName(class FName InParameterName, class FName InValue, int32 InArrayIndex);
	void SetParameterValueInt(class FName InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueFloat(class FName InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueDouble(class FName InParameterName, double InValue, int32 InArrayIndex);
	void SetParameterValueBool(class FName InParameterName, bool InValue, int32 InArrayIndex);
	void GetStatistics(const struct FRigVMStatistics& ReturnValue);
	void GetRigVMFunctionName(int32 InFunctionIndex, const class FString& ReturnValue);
	void GetParameterValueVector2D(class FName InParameterName, int32 InArrayIndex, const struct FVector2D& ReturnValue);
	void GetParameterValueVector(class FName InParameterName, int32 InArrayIndex, const struct FVector& ReturnValue);
	void GetParameterValueTransform(class FName InParameterName, int32 InArrayIndex, const struct FTransform& ReturnValue);
	void GetParameterValueString(class FName InParameterName, int32 InArrayIndex, const class FString& ReturnValue);
	void GetParameterValueQuat(class FName InParameterName, int32 InArrayIndex, const struct FQuat& ReturnValue);
	void GetParameterValueName(class FName InParameterName, int32 InArrayIndex, class FName ReturnValue);
	void GetParameterValueInt(class FName InParameterName, int32 InArrayIndex, int32 ReturnValue);
	void GetParameterValueFloat(class FName InParameterName, int32 InArrayIndex, float ReturnValue);
	void GetParameterValueDouble(class FName InParameterName, int32 InArrayIndex, double ReturnValue);
	void GetParameterValueBool(class FName InParameterName, int32 InArrayIndex, bool ReturnValue);
	void Execute(class FName InEntryName, bool ReturnValue);
	void AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName InMethodName, int32 ReturnValue);
};

// 0x40 (0x260 - 0x220)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_1310[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMMemoryStorage
class URigVMMemoryStorage : public UObject
{
public:

	static class UClass* StaticClass();
	static class URigVMMemoryStorage* GetDefaultObj();

};

// 0x28 (0x3F0 - 0x3C8)
// Class RigVM.RigVMNativized
class URigVMNativized : public URigVM
{
public:
	uint8                                        Pad_1315[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigVMNativized* GetDefaultObj();

};

}


