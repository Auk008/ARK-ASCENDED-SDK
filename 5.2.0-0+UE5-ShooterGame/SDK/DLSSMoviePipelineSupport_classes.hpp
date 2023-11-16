#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// Class DLSSMoviePipelineSupport.MoviePipelineDLSSSetting
class UMoviePipelineDLSSSetting : public UMoviePipelineViewFamilySetting
{
public:
	enum class EMoviePipelineDLSSQuality         DLSSQuality;                                       // 0x48(0x1)(None)
	uint8                                        Pad_9A1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoviePipelineDLSSSetting* GetDefaultObj();

};

}


