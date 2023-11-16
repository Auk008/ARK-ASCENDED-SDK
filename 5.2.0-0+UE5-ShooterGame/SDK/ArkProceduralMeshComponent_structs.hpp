#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EArkProcMeshSliceCapOption : uint8
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EArkProcMeshSliceCapOption_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ArkProceduralMeshComponent.ArkProcMeshTangent
struct FArkProcMeshTangent
{
public:
	struct FVector3f                             TangentX;                                          // 0x0(0xC)(None)
	bool                                         bFlipTangentY;                                     // 0xC(0x1)(None)
	uint8                                        Pad_60E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ArkProceduralMeshComponent.ArkProcMeshSection
struct FArkProcMeshSection
{
public:
	uint8                                        Pad_60F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(None)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(None)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(None)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(None)
	uint8                                        Pad_611[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


