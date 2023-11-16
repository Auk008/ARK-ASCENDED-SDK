#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x1B0 - 0x148)
// Class PCGGeometryScriptInterop.PCGMeshSamplerSettings
class UPCGMeshSamplerSettings : public UPCGSettings
{
public:
	enum class EPCGMeshSamplingMethod            SamplingMethod;                                    // 0x148(0x4)(None)
	uint8                                        Pad_1969[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       StaticMeshPath;                                    // 0x150(0x20)(None)
	bool                                         bUseRedAsDensity;                                  // 0x170(0x1)(None)
	bool                                         bVoxelize;                                         // 0x171(0x1)(None)
	uint8                                        Pad_196A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VoxelSize;                                         // 0x174(0x4)(None)
	bool                                         bRemoveHiddenTriangles;                            // 0x178(0x1)(None)
	enum class EGeometryScriptLODType            RequestedLODType;                                  // 0x179(0x1)(None)
	uint8                                        Pad_196D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequestedLODIndex;                                 // 0x17C(0x4)(None)
	struct FGeometryScriptMeshPointSamplingOptions SamplingOptions;                                   // 0x180(0x18)(None)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformSamplingOptions;                         // 0x198(0x18)(None)

	static class UClass* StaticClass();
	static class UPCGMeshSamplerSettings* GetDefaultObj();

};

}


