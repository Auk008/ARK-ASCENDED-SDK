#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EProcMeshSliceCapOption : uint8
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EProcMeshSliceCapOption_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
struct FProcMeshTangent
{
public:
	struct FVector                               TangentX;                                          // 0x0(0x18)(None)
	bool                                         bFlipTangentY;                                     // 0x18(0x1)(None)
	uint8                                        Pad_23A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct FProcMeshVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(None)
	struct FVector                               Normal;                                            // 0x18(0x18)(None)
	struct FProcMeshTangent                      Tangent;                                           // 0x30(0x20)(None)
	struct FColor                                Color;                                             // 0x50(0x4)(None)
	uint8                                        Pad_23AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UV0;                                               // 0x58(0x10)(None)
	struct FVector2D                             UV1;                                               // 0x68(0x10)(None)
	struct FVector2D                             UV2;                                               // 0x78(0x10)(None)
	struct FVector2D                             UV3;                                               // 0x88(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct FProcMeshSection
{
public:
	TArray<struct FProcMeshVertex>               ProcVertexBuffer;                                  // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(None)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(None)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(None)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(None)
	uint8                                        Pad_23AC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


