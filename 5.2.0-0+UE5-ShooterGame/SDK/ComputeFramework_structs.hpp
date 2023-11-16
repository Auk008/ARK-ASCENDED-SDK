#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EComputeKernelFlags : uint8
{
	IsDefaultKernel                = 1,
	IsolatedMemoryWrites           = 2,
	EComputeKernelFlags_MAX        = 3,
};

enum class EShaderFundamentalType : uint8
{
	Bool                           = 0,
	Int                            = 1,
	Uint                           = 2,
	Float                          = 3,
	Struct                         = 4,
	None                           = 255,
	EShaderFundamentalType_MAX     = 256,
};

enum class EShaderFundamentalDimensionType : uint8
{
	Scalar                         = 0,
	Vector                         = 1,
	Matrix                         = 2,
	EShaderFundamentalDimensionType_MAX = 3,
};

enum class EShaderParamBindingType : uint8
{
	None                           = 0,
	ConstantParameter              = 1,
	ReadOnlyResource               = 2,
	ReadWriteResource              = 3,
	EShaderParamBindingType_MAX    = 4,
};

enum class EShaderResourceType : uint8
{
	None                           = 0,
	Texture1D                      = 1,
	Texture2D                      = 2,
	Texture3D                      = 3,
	TextureCube                    = 4,
	Buffer                         = 5,
	StructuredBuffer               = 6,
	ByteAddressBuffer              = 7,
	EShaderResourceType_MAX        = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct ComputeFramework.ComputeGraphEdge
struct FComputeGraphEdge
{
public:
	int32                                        KernelIndex;                                       // 0x0(0x4)(None)
	int32                                        KernelBindingIndex;                                // 0x4(0x4)(None)
	int32                                        DataInterfaceIndex;                                // 0x8(0x4)(None)
	int32                                        DataInterfaceBindingIndex;                         // 0xC(0x4)(None)
	bool                                         bKernelInput;                                      // 0x10(0x1)(None)
	uint8                                        Pad_196[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BindingFunctionNameOverride;                       // 0x18(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                BindingFunctionNamespace;                          // 0x28(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ComputeFramework.ComputeGraphInstance
struct FComputeGraphInstance
{
public:
	TArray<class UComputeDataProvider*>          DataProviders;                                     // 0x0(0x10)(None)
	uint8                                        Pad_197[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationBool
struct FComputeKernelPermutationBool
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	bool                                         Value;                                             // 0x10(0x1)(None)
	uint8                                        Pad_198[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationSet
struct FComputeKernelPermutationSet
{
public:
	TArray<struct FComputeKernelPermutationBool> BooleanOptions;                                    // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelDefinition
struct FComputeKernelDefinition
{
public:
	class FString                                Symbol;                                            // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                Define;                                            // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelDefinitionSet
struct FComputeKernelDefinitionSet
{
public:
	TArray<struct FComputeKernelDefinition>      Defines;                                           // 0x0(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ComputeFramework.ComputeKernelPermutationVector
struct FComputeKernelPermutationVector
{
public:
	TMap<class FString, uint32>                  Permutations;                                      // 0x0(0x50)(None)
	uint32                                       BitCount;                                          // 0x50(0x4)(None)
	uint8                                        Pad_19A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ComputeFramework.ShaderValueTypeHandle
struct FShaderValueTypeHandle
{
public:
	uint8                                        Pad_19B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ComputeFramework.ShaderValueType
struct FShaderValueType
{
public:
	enum class EShaderFundamentalType            Type;                                              // 0x0(0x1)(None)
	enum class EShaderFundamentalDimensionType   DimensionType;                                     // 0x1(0x1)(None)
	uint8                                        Pad_19D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(None)
	bool                                         bIsDynamicArray;                                   // 0xC(0x1)(None)
	uint8                                        Pad_19E[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ComputeFramework.ShaderParamTypeDefinition
struct FShaderParamTypeDefinition
{
public:
	class FString                                TypeDeclaration;                                   // 0x0(0x10)(BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x10(0x10)(None)
	struct FShaderValueTypeHandle                ValueType;                                         // 0x20(0x8)(None)
	uint16                                       ArrayElementCount;                                 // 0x28(0x2)(None)
	enum class EShaderParamBindingType           BindingType;                                       // 0x2A(0x1)(None)
	enum class EShaderResourceType               ResourceType;                                      // 0x2B(0x1)(None)
	uint8                                        Pad_1A0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ComputeFramework.ShaderFunctionDefinition
struct FShaderFunctionDefinition
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FShaderParamTypeDefinition>    ParamTypes;                                        // 0x10(0x10)(None)
	bool                                         bHasReturnType;                                    // 0x20(0x1)(None)
	uint8                                        Pad_1A1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


