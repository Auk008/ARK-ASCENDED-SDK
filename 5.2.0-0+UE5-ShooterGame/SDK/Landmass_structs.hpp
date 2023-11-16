#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBrushFalloffMode : uint8
{
	Angle                          = 0,
	Width                          = 1,
	EBrushFalloffMode_MAX          = 2,
};

enum class EBrushBlendType : uint8
{
	AlphaBlend                     = 0,
	Min                            = 1,
	Max                            = 2,
	Additive                       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Landmass.BrushEffectBlurring
struct FBrushEffectBlurring
{
public:
	bool                                         bBlurShape;                                        // 0x0(0x1)(None)
	uint8                                        Pad_2FF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Radius;                                            // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landmass.BrushEffectCurlNoise
struct FBrushEffectCurlNoise
{
public:
	float                                        Curl1Amount;                                       // 0x0(0x4)(None)
	float                                        Curl2Amount;                                       // 0x4(0x4)(None)
	float                                        Curl1Tiling;                                       // 0x8(0x4)(None)
	float                                        Curl2Tiling;                                       // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Landmass.BrushEffectCurves
struct FBrushEffectCurves
{
public:
	bool                                         bUseCurveChannel;                                  // 0x0(0x1)(None)
	uint8                                        Pad_2FF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ElevationCurveAsset;                               // 0x8(0x8)(None)
	float                                        ChannelEdgeOffset;                                 // 0x10(0x4)(None)
	float                                        ChannelDepth;                                      // 0x14(0x4)(None)
	float                                        CurveRampWidth;                                    // 0x18(0x4)(None)
	uint8                                        Pad_2FF2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Landmass.BrushEffectDisplacement
struct FBrushEffectDisplacement
{
public:
	float                                        DisplacementHeight;                                // 0x0(0x4)(None)
	float                                        DisplacementTiling;                                // 0x4(0x4)(None)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(None)
	float                                        Midpoint;                                          // 0x10(0x4)(None)
	struct FLinearColor                          Channel;                                           // 0x14(0x10)(None)
	float                                        WeightmapInfluence;                                // 0x24(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landmass.BrushEffectSmoothBlending
struct FBrushEffectSmoothBlending
{
public:
	float                                        InnerSmoothDistance;                               // 0x0(0x4)(None)
	float                                        OuterSmoothDistance;                               // 0x4(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Landmass.BrushEffectTerracing
struct FBrushEffectTerracing
{
public:
	float                                        TerraceAlpha;                                      // 0x0(0x4)(None)
	float                                        TerraceSpacing;                                    // 0x4(0x4)(None)
	float                                        TerraceSmoothness;                                 // 0x8(0x4)(None)
	float                                        MaskLength;                                        // 0xC(0x4)(None)
	float                                        MaskStartOffset;                                   // 0x10(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Landmass.LandmassBrushEffectsList
struct FLandmassBrushEffectsList
{
public:
	struct FBrushEffectBlurring                  Blurring;                                          // 0x0(0x8)(None)
	struct FBrushEffectCurlNoise                 CurlNoise;                                         // 0x8(0x10)(None)
	struct FBrushEffectDisplacement              Displacement;                                      // 0x18(0x28)(None)
	struct FBrushEffectSmoothBlending            SmoothBlending;                                    // 0x40(0x8)(None)
	struct FBrushEffectTerracing                 Terracing;                                         // 0x48(0x14)(None)
	uint8                                        Pad_2FFE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Landmass.LandmassFalloffSettings
struct FLandmassFalloffSettings
{
public:
	enum class EBrushFalloffMode                 FalloffMode;                                       // 0x0(0x1)(None)
	uint8                                        Pad_3000[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FalloffAngle;                                      // 0x4(0x4)(None)
	float                                        FalloffWidth;                                      // 0x8(0x4)(None)
	float                                        EdgeOffset;                                        // 0xC(0x4)(None)
	float                                        ZOffset;                                           // 0x10(0x4)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Landmass.LandmassTerrainCarvingSettings
struct FLandmassTerrainCarvingSettings
{
public:
	enum class EBrushBlendType                   BlendMode;                                         // 0x0(0x1)(None)
	bool                                         bInvertShape;                                      // 0x1(0x1)(None)
	uint8                                        Pad_3001[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLandmassFalloffSettings              FalloffSettings;                                   // 0x4(0x14)(None)
	struct FLandmassBrushEffectsList             Effects;                                           // 0x18(0x60)(None)
	int32                                        Priority;                                          // 0x78(0x4)(None)
	uint8                                        Pad_3002[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


