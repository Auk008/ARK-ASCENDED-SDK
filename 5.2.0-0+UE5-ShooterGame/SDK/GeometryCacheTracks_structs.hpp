#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheParams
{
public:
	class UGeometryCache*                        GeometryCacheAsset;                                // 0x0(0x8)(None)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(None)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(None)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(None)
	float                                        PlayRate;                                          // 0x14(0x4)(None)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_B5 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EDD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartOffset;                                       // 0x1C(0x4)(None)
	float                                        EndOffset;                                         // 0x20(0x4)(None)
	uint8                                        Pad_EDE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GeometryCache;                                     // 0x28(0x20)(None)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(None)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(None)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x20(0x50)(ZeroConstructor)
};

}


