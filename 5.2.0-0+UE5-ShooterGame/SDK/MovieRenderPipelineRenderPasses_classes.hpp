#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x178 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
public:
	uint8                                        Pad_1E0[0x130];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImagePassBase* GetDefaultObj();

};

// 0xC0 (0x238 - 0x178)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
public:
	bool                                         bAccumulatorIncludesAlpha;                         // 0x178(0x1)(None)
	bool                                         bDisableMultisampleEffects;                        // 0x179(0x1)(None)
	bool                                         bUse32BitPostProcessMaterials;                     // 0x17A(0x1)(None)
	uint8                                        Pad_1E5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;                    // 0x180(0x10)(ZeroConstructor)
	bool                                         bRenderMainPass;                                   // 0x190(0x1)(None)
	bool                                         bAddDefaultLayer;                                  // 0x191(0x1)(None)
	uint8                                        Pad_1E6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActorLayer>                   ActorLayers;                                       // 0x198(0x10)(None)
	uint8                                        Pad_1E7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftObjectPath>               DataLayers;                                        // 0x1B8(0x10)(None)
	TArray<class UMaterialInterface*>            ActivePostProcessMaterials;                        // 0x1C8(0x10)(ZeroConstructor)
	class UMaterialInterface*                    StencilLayerMaterial;                              // 0x1D8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E9[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPassBase* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_Unlit* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_DetailLighting* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_LightingOnly* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_ReflectionsOnly* GetDefaultObj();

};

// 0x8 (0x240 - 0x238)
// Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
public:
	bool                                         bReferenceMotionBlur;                              // 0x238(0x1)(None)
	uint8                                        Pad_1F0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDeferredPass_PathTracer* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_1F1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutputBase* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
public:
	enum class EEXRCompressionFormat             Compression;                                       // 0x68(0x1)(None)
	bool                                         bMultilayer;                                       // 0x69(0x1)(None)
	uint8                                        Pad_1F3[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_EXR* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_BMP* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
public:
	bool                                         bWriteAlpha;                                       // 0x68(0x1)(None)
	uint8                                        Pad_1F4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_PNG* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineImageSequenceOutput_JPG* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(None)
	uint8                                        Pad_1F6[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineWaveOutput* GetDefaultObj();

};

}


