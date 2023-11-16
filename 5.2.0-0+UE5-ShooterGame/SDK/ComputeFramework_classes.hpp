#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ComputeFramework.ComputeDataInterface
class UComputeDataInterface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UComputeDataInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ComputeFramework.ComputeDataProvider
class UComputeDataProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UComputeDataProvider* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class ComputeFramework.ComputeKernelSource
class UComputeKernelSource : public UObject
{
public:
	class FString                                EntryPoint;                                        // 0x28(0x10)(None)
	struct FIntVector                            GroupSize;                                         // 0x38(0xC)(None)
	uint8                                        Pad_189[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComputeKernelPermutationSet          PermutationSet;                                    // 0x48(0x10)(None)
	struct FComputeKernelDefinitionSet           DefinitionsSet;                                    // 0x58(0x10)(None)
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x68(0x10)(None)
	TArray<struct FShaderFunctionDefinition>     ExternalInputs;                                    // 0x78(0x10)(None)
	TArray<struct FShaderFunctionDefinition>     ExternalOutputs;                                   // 0x88(0x10)(None)

	static class UClass* StaticClass();
	static class UComputeKernelSource* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ComputeFramework.ComputeSource
class UComputeSource : public UObject
{
public:
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UComputeSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ComputeFramework.ComputeGraph
class UComputeGraph : public UObject
{
public:
	TArray<class UComputeKernel*>                KernelInvocations;                                 // 0x28(0x10)(ZeroConstructor)
	TArray<class UComputeDataInterface*>         DataInterfaces;                                    // 0x38(0x10)(ZeroConstructor)
	TArray<struct FComputeGraphEdge>             GraphEdges;                                        // 0x48(0x10)(None)
	TArray<class UClass*>                        Bindings;                                          // 0x58(0x10)(None)
	TArray<int32>                                DataInterfaceToBinding;                            // 0x68(0x10)(None)
	uint8                                        Pad_18D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComputeGraph* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class ComputeFramework.ComputeGraphComponent
class UComputeGraphComponent : public UActorComponent
{
public:
	class UComputeGraph*                         ComputeGraph;                                      // 0xB8(0x8)(ZeroConstructor)
	struct FComputeGraphInstance                 ComputeGraphInstance;                              // 0xC0(0x18)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UComputeGraphComponent* GetDefaultObj();

	void QueueExecute();
	void DestroyDataProviders();
	void CreateDataProviders(int32 InBindingIndex, class UObject* InBindingObject);
};

// 0x10 (0x38 - 0x28)
// Class ComputeFramework.ComputeKernel
class UComputeKernel : public UObject
{
public:
	class UComputeKernelSource*                  KernelSource;                                      // 0x28(0x8)(None)
	int32                                        KernelFlags;                                       // 0x30(0x4)(None)
	uint8                                        Pad_193[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UComputeKernel* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class ComputeFramework.ComputeKernelFromText
class UComputeKernelFromText : public UComputeKernelSource
{
public:
	struct FFilePath                             SourceFile;                                        // 0x98(0x10)(None)

	static class UClass* StaticClass();
	static class UComputeKernelFromText* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class ComputeFramework.ComputeSourceFromText
class UComputeSourceFromText : public UComputeSource
{
public:
	struct FFilePath                             SourceFile;                                        // 0x38(0x10)(None)

	static class UClass* StaticClass();
	static class UComputeSourceFromText* GetDefaultObj();

};

}


