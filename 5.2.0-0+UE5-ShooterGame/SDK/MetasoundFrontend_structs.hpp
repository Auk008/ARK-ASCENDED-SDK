#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESetParamResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	ESetParamResult_MAX            = 2,
};

enum class EMetasoundFrontendVertexAccessType : int32
{
	Reference                      = 0,
	Value                          = 1,
	Unset                          = 2,
	EMetasoundFrontendVertexAccessType_MAX = 3,
};

enum class EMetasoundFrontendClassType : uint8
{
	External                       = 0,
	Graph                          = 1,
	Input                          = 2,
	Output                         = 3,
	Literal                        = 4,
	Variable                       = 5,
	VariableDeferredAccessor       = 6,
	VariableAccessor               = 7,
	VariableMutator                = 8,
	Template                       = 9,
	Invalid                        = 10,
	EMetasoundFrontendClassType_MAX = 11,
};

enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2,
};

enum class EMetasoundFrontendLiteralType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	UObject                        = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	UObjectArray                   = 11,
	Invalid                        = 12,
	EMetasoundFrontendLiteralType_MAX = 13,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
struct FMetasoundFrontendVersionNumber
{
public:
	int32                                        Major;                                             // 0x0(0x4)(None)
	int32                                        Minor;                                             // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
struct FMetasoundFrontendVersion
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	struct FMetasoundFrontendVersionNumber       Number;                                            // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
struct FMetasoundFrontendVertex
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  TypeName;                                          // 0x8(0x8)(None)
	struct FGuid                                 VertexID;                                          // 0x10(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
struct FMetasoundFrontendLiteral
{
public:
	enum class EMetasoundFrontendLiteralType     Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_25E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AsNumDefault;                                      // 0x4(0x4)(None)
	TArray<bool>                                 AsBoolean;                                         // 0x8(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                AsInteger;                                         // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                AsFloat;                                           // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        AsString;                                          // 0x38(0x10)(AutoWeak, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       AsUObject;                                         // 0x48(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
struct FMetasoundFrontendVertexLiteral
{
public:
	struct FGuid                                 VertexID;                                          // 0x0(0x10)(None)
	struct FMetasoundFrontendLiteral             Value;                                             // 0x10(0x58)(None)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
struct FMetasoundFrontendVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  TypeName;                                          // 0x8(0x8)(None)
	struct FMetasoundFrontendLiteral             Literal;                                           // 0x10(0x58)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGuid                                 ID;                                                // 0x68(0x10)(None)
	struct FGuid                                 VariableNodeID;                                    // 0x78(0x10)(None)
	struct FGuid                                 MutatorNodeID;                                     // 0x88(0x10)(None)
	TArray<struct FGuid>                         AccessorNodeIDs;                                   // 0x98(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         DeferredAccessorNodeIDs;                           // 0xA8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
struct FMetasoundFrontendNodeInterface
{
public:
	TArray<struct FMetasoundFrontendVertex>      Inputs;                                            // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendVertex>      Outputs;                                           // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendVertex>      Environment;                                       // 0x20(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
struct FMetasoundFrontendNodeStyleDisplay
{
public:
	uint8                                        Pad_25EA[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
struct FMetasoundFrontendNodeStyle
{
public:
	uint8                                        Pad_25EB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
struct FMetasoundFrontendNode
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(None)
	struct FGuid                                 ClassId;                                           // 0x10(0x10)(None)
	class FName                                  Name;                                              // 0x20(0x8)(None)
	struct FMetasoundFrontendNodeInterface       Interface;                                         // 0x28(0x30)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals;                                     // 0x58(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
struct FMetasoundFrontendEdge
{
public:
	struct FGuid                                 FromNodeID;                                        // 0x0(0x10)(None)
	struct FGuid                                 FromVertexID;                                      // 0x10(0x10)(None)
	struct FGuid                                 ToNodeID;                                          // 0x20(0x10)(None)
	struct FGuid                                 ToVertexID;                                        // 0x30(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
public:
	struct FMetasoundFrontendLiteral             Value;                                             // 0x0(0x58)(None)
	struct FLinearColor                          Color;                                             // 0x58(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyle
struct FMetasoundFrontendEdgeStyle
{
public:
	struct FGuid                                 NodeID;                                            // 0x0(0x10)(None)
	class FName                                  OutputName;                                        // 0x10(0x8)(None)
	TArray<struct FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                 // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
struct FMetasoundFrontendGraphStyle
{
public:
	bool                                         bIsGraphEditable;                                  // 0x0(0x1)(None)
	uint8                                        Pad_25ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetasoundFrontendEdgeStyle>   EdgeStyles;                                        // 0x8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
struct FMetasoundFrontendGraph
{
public:
	TArray<struct FMetasoundFrontendNode>        Nodes;                                             // 0x0(0x10)(ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendEdge>        Edges;                                             // 0x10(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendVariable>    Variables;                                         // 0x20(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
struct FMetasoundFrontendVertexMetadata
{
public:
	uint8                                        Pad_25EE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x34 - 0x20)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
public:
	struct FGuid                                 NodeID;                                            // 0x20(0x10)(None)
	enum class EMetasoundFrontendVertexAccessType AccessType;                                        // 0x30(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
struct FMetasoundFrontendClassStyleDisplay
{
public:
	uint8                                        Pad_25F0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5C (0x90 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_25F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendLiteral             DefaultLiteral;                                    // 0x38(0x58)(None)
};

// 0x5C (0x90 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_25F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendLiteral             DefaultLiteral;                                    // 0x38(0x58)(None)
};

// 0x0 (0x34 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
struct FMetasoundFrontendClassEnvironmentVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  TypeName;                                          // 0x8(0x8)(None)
	bool                                         bIsRequired;                                       // 0x10(0x1)(None)
	uint8                                        Pad_25F4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
struct FMetasoundFrontendInterfaceStyle
{
public:
	uint8                                        Pad_25F5[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
struct FMetasoundFrontendClassInterface
{
public:
	TArray<struct FMetasoundFrontendClassInput>  Inputs;                                            // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendClassOutput> Outputs;                                           // 0x10(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment;                                       // 0x20(0x10)(None)
	struct FGuid                                 ChangeID;                                          // 0x30(0x10)(None)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{
public:
	struct FMetasoundFrontendVersion             Version;                                           // 0x40(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
struct FMetasoundFrontendClassName
{
public:
	class FName                                  Namespace;                                         // 0x0(0x8)(None)
	class FName                                  Name;                                              // 0x8(0x8)(None)
	class FName                                  Variant;                                           // 0x10(0x8)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
struct FMetasoundFrontendClassMetadata
{
public:
	struct FMetasoundFrontendClassName           ClassName;                                         // 0x0(0x18)(None)
	struct FMetasoundFrontendVersionNumber       Version;                                           // 0x18(0x8)(None)
	enum class EMetasoundFrontendClassType       Type;                                              // 0x20(0x1)(None)
	bool                                         bIsDeprecated;                                     // 0x21(0x1)(None)
	bool                                         bAutoUpdateManagesInterface;                       // 0x22(0x1)(None)
	uint8                                        Pad_25F8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ChangeID;                                          // 0x24(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
struct FMetasoundFrontendClassStyle
{
public:
	uint8                                        Pad_25F9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
struct FMetasoundFrontendClass
{
public:
	uint8                                        Pad_25FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ID;                                                // 0x8(0x10)(None)
	struct FMetasoundFrontendClassMetadata       MetaData;                                          // 0x18(0x34)(None)
	uint8                                        Pad_25FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendClassInterface      Interface;                                         // 0x50(0x40)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
struct FMetasoundFrontendGraphClassPresetOptions
{
public:
	bool                                         bIsPreset;                                         // 0x0(0x1)(None)
	uint8                                        Pad_25FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            InputsInheritingDefault;                           // 0x8(0x50)(None)
};

// 0x88 (0x118 - 0x90)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{
public:
	struct FMetasoundFrontendGraph               Graph;                                             // 0x90(0x30)(ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions;                                     // 0xC0(0x58)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
struct FMetasoundFrontendDocumentMetadata
{
public:
	struct FMetasoundFrontendVersion             Version;                                           // 0x0(0x10)(None)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
struct FMetasoundFrontendDocument
{
public:
	uint8                                        Pad_25FD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendDocumentMetadata    MetaData;                                          // 0x10(0x10)(None)
	TSet<struct FMetasoundFrontendVersion>       Interfaces;                                        // 0x20(0x50)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMetasoundFrontendGraphClass          RootGraph;                                         // 0x70(0x118)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendGraphClass>  Subgraphs;                                         // 0x188(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMetasoundFrontendClass>       Dependencies;                                      // 0x198(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMetasoundFrontendVersion             ArchetypeVersion;                                  // 0x1A8(0x10)(None)
	TArray<struct FMetasoundFrontendVersion>     InterfaceVersions;                                 // 0x1B8(0x10)(None)
};

}


