#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraMipMapGenerationType : uint8
{
	Unfiltered                     = 0,
	Linear                         = 1,
	Blur1                          = 2,
	Blur2                          = 3,
	Blur3                          = 4,
	Blur4                          = 5,
	ENiagaraMipMapGenerationType_MAX = 6,
};

enum class ENiagaraGpuDispatchType : uint8
{
	OneD                           = 0,
	TwoD                           = 1,
	ThreeD                         = 2,
	Custom                         = 3,
	ENiagaraGpuDispatchType_MAX    = 4,
};

enum class ENiagaraDirectDispatchElementType : uint8
{
	NumThreads                     = 0,
	NumThreadsNoClipping           = 1,
	NumGroups                      = 2,
	ENiagaraDirectDispatchElementType_MAX = 3,
};

enum class ENiagaraSimStageExecuteBehavior : uint8
{
	Always                         = 0,
	OnSimulationReset              = 1,
	NotOnSimulationReset           = 2,
	ENiagaraSimStageExecuteBehavior_MAX = 3,
};

enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                            = 0,
	Display                        = 1,
	Warning                        = 2,
	Error                          = 3,
	FNiagaraCompileEventSeverity_MAX = 4,
};

enum class EFNiagaraCompileEventSource : uint8
{
	Unset                          = 0,
	ScriptDependency               = 1,
	FNiagaraCompileEventSource_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData
{
public:
	class FName                                  SimulationStageName;                               // 0x0(0x8)(None)
	class FName                                  EnabledBinding;                                    // 0x8(0x8)(None)
	class FName                                  ElementCountXBinding;                              // 0x10(0x8)(None)
	class FName                                  ElementCountYBinding;                              // 0x18(0x8)(None)
	class FName                                  ElementCountZBinding;                              // 0x20(0x8)(None)
	enum class ENiagaraIterationSource           IterationSourceType;                               // 0x28(0x1)(None)
	uint8                                        Pad_AD[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  IterationDataInterface;                            // 0x2C(0x8)(None)
	class FName                                  IterationDirectBinding;                            // 0x34(0x8)(None)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0x3C(0x1)(None)
	uint8                                        Pad_AE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bWritesParticles : 1;                              // Mask: 0x1, PropSize: 0x10x40(0x1)(None)
	uint8                                        bPartialParticleUpdate : 1;                        // Mask: 0x2, PropSize: 0x10x40(0x1)(None)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x4, PropSize: 0x10x40(0x1)(None)
	uint8                                        bGpuIndirectDispatch : 1;                          // Mask: 0x8, PropSize: 0x10x40(0x1)(None)
	uint8                                        BitPad_0 : 4;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParticleIterationStateBinding;                     // 0x44(0x8)(None)
	uint8                                        Pad_B0[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             ParticleIterationStateRange;                       // 0x50(0x8)(None)
	TArray<class FName>                          OutputDestinations;                                // 0x58(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FName>                          InputDataInterfaces;                               // 0x68(0x10)(None)
	int32                                        NumIterations;                                     // 0x78(0x4)(None)
	class FName                                  NumIterationsBinding;                              // 0x7C(0x8)(None)
	enum class ENiagaraGpuDispatchType           GpuDispatchType;                                   // 0x84(0x1)(None)
	enum class ENiagaraDirectDispatchElementType GpuDirectDispatchElementType;                      // 0x85(0x1)(None)
	uint8                                        Pad_B1[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            GpuDispatchNumThreads;                             // 0x88(0xC)(None)
	uint8                                        Pad_B2[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction
{
public:
	uint8                                        Pad_B3[0x28];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraVariableCommonReference> VariadicInputs;                                    // 0x28(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariableCommonReference> VariadicOutputs;                                   // 0x38(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
	class FString                                DataInterfaceHLSLSymbol;                           // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                DIClassName;                                       // 0x10(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	uint32                                       ShaderParametersOffset;                            // 0x20(0x4)(None)
	uint8                                        Pad_B7[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x28(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
struct FNiagaraShaderScriptExternalConstant
{
public:
	class FName                                  Type;                                              // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
struct FNiagaraShaderScriptParametersMetadata
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                            // 0x0(0x10)(BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        LooseMetadataNames;                                // 0x10(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         bExternalConstantsInterpolated;                    // 0x20(0x1)(None)
	uint8                                        Pad_BB[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;                                 // 0x28(0x10)(None)
	uint8                                        Pad_BC[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent
{
public:
	enum class EFNiagaraCompileEventSeverity     Severity;                                          // 0x0(0x1)(None)
	uint8                                        Pad_BD[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                ShortDescription;                                  // 0x18(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         bDismissable;                                      // 0x28(0x1)(None)
	uint8                                        Pad_BE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 NodeGuid;                                          // 0x2C(0x10)(None)
	struct FGuid                                 PinGuid;                                           // 0x3C(0x10)(None)
	uint8                                        Pad_BF[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         StackGuids;                                        // 0x50(0x10)(None)
	enum class EFNiagaraCompileEventSource       Source;                                            // 0x60(0x1)(None)
	uint8                                        Pad_C0[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}


