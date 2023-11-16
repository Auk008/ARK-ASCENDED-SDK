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

// 0x58 (0x58 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
struct FLiveLinkPropertyData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(None)
	TArray<struct FMovieSceneFloatChannel>       FloatChannel;                                      // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneStringChannel>      StringChannel;                                     // 0x18(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneIntegerChannel>     IntegerChannel;                                    // 0x28(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBoolChannel>        BoolChannel;                                       // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneByteChannel>        ByteChannel;                                       // 0x48(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
struct FLiveLinkSubSectionData
{
public:
	TArray<struct FLiveLinkPropertyData>         Properties;                                        // 0x0(0x10)(None)
};

// 0x80 (0xB8 - 0x38)
// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0x38(0x38)(ZeroConstructor)
	TArray<bool>                                 ChannelMask;                                       // 0x70(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FLiveLinkSubSectionData>       SubSectionsData;                                   // 0x80(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_52A[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


