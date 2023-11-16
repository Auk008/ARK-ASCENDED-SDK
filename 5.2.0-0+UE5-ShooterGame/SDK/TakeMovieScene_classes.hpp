#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x620 (0x710 - 0xF0)
// Class TakeMovieScene.MovieSceneTakeSection
class UMovieSceneTakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel             HoursCurve;                                        // 0xF0(0x100)(None)
	struct FMovieSceneIntegerChannel             MinutesCurve;                                      // 0x1F0(0x100)(None)
	struct FMovieSceneIntegerChannel             SecondsCurve;                                      // 0x2F0(0x100)(None)
	struct FMovieSceneIntegerChannel             FramesCurve;                                       // 0x3F0(0x100)(None)
	struct FMovieSceneFloatChannel               SubFramesCurve;                                    // 0x4F0(0x110)(None)
	struct FMovieSceneStringChannel              Slate;                                             // 0x600(0x110)(None)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSection* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class TakeMovieScene.MovieSceneTakeSettings
class UMovieSceneTakeSettings : public UObject
{
public:
	class FString                                HoursName;                                         // 0x28(0x10)(None)
	class FString                                MinutesName;                                       // 0x38(0x10)(None)
	class FString                                SecondsName;                                       // 0x48(0x10)(None)
	class FString                                FramesName;                                        // 0x58(0x10)(None)
	class FString                                SubFramesName;                                     // 0x68(0x10)(None)
	class FString                                SlateName;                                         // 0x78(0x10)(None)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSettings* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class TakeMovieScene.MovieSceneTakeTrack
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneTakeTrack* GetDefaultObj();

};

}


