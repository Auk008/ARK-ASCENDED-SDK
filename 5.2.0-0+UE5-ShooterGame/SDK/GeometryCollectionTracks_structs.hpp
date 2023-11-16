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

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams
{
public:
	uint8                                        Pad_230A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GeometryCollectionCache;                           // 0x8(0x20)(None)
	struct FFrameNumber                          StartFrameOffset;                                  // 0x28(0x4)(None)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x2C(0x4)(None)
	float                                        PlayRate;                                          // 0x30(0x4)(None)
	uint8                                        Pad_230B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x40 - 0x38)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x38(0x4)(None)
	struct FFrameNumber                          SectionEndTime;                                    // 0x3C(0x4)(None)
};

// 0x40 (0x60 - 0x20)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                            // 0x20(0x40)(None)
};

}


