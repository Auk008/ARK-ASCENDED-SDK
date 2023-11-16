#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// Class ModelingOperators.RecomputeUVsToolProperties
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnablePolygroupSupport;                           // 0xA8(0x1)(None)
	uint8                                        Pad_178[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERecomputeUVsPropertiesIslandMode IslandGeneration;                                  // 0xAC(0x4)(None)
	enum class ERecomputeUVsPropertiesUnwrapType UnwrapType;                                        // 0xB0(0x4)(None)
	enum class ERecomputeUVsToolOrientationMode  AutoRotation;                                      // 0xB4(0x4)(None)
	bool                                         bPreserveIrregularity;                             // 0xB8(0x1)(None)
	uint8                                        Pad_179[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SmoothingSteps;                                    // 0xBC(0x4)(None)
	float                                        SmoothingAlpha;                                    // 0xC0(0x4)(None)
	float                                        MergingDistortionThreshold;                        // 0xC4(0x4)(None)
	float                                        MergingAngleThreshold;                             // 0xC8(0x4)(None)
	enum class ERecomputeUVsPropertiesLayoutType LayoutType;                                        // 0xCC(0x4)(None)
	int32                                        TextureResolution;                                 // 0xD0(0x4)(None)
	float                                        NormalizeScale;                                    // 0xD4(0x4)(None)
	bool                                         bEnableUDIMLayout;                                 // 0xD8(0x1)(None)
	bool                                         bUDIMCVAREnabled;                                  // 0xD9(0x1)(None)
	uint8                                        Pad_17A[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecomputeUVsToolProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingOperators.UVLayoutProperties
class UUVLayoutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVLayoutType                     LayoutType;                                        // 0xA8(0x4)(None)
	int32                                        TextureResolution;                                 // 0xAC(0x4)(None)
	float                                        Scale;                                             // 0xB0(0x4)(None)
	uint8                                        Pad_17B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Translation;                                       // 0xB8(0x10)(None)
	bool                                         bAllowFlips;                                       // 0xC8(0x1)(None)
	bool                                         bEnableUDIMLayout;                                 // 0xC9(0x1)(None)
	bool                                         bUDIMCVAREnabled;                                  // 0xCA(0x1)(None)
	uint8                                        Pad_17C[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVLayoutProperties* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.RecomputeUVsOpFactory
class URecomputeUVsOpFactory : public UObject
{
public:
	uint8                                        Pad_17D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URecomputeUVsToolProperties*           Settings;                                          // 0x30(0x8)(None)
	uint8                                        Pad_17E[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecomputeUVsOpFactory* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.UVLayoutOperatorFactory
class UUVLayoutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_17F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVLayoutProperties*                   Settings;                                          // 0x30(0x8)(None)
	uint8                                        Pad_180[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVLayoutOperatorFactory* GetDefaultObj();

};

}


