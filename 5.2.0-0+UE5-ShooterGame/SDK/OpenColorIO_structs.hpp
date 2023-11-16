#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOpenColorIOViewTransformDirection : uint8
{
	Forward                        = 0,
	Inverse                        = 1,
	EOpenColorIOViewTransformDirection_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorSpace
struct FOpenColorIOColorSpace
{
public:
	class FString                                ColorSpaceName;                                    // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        ColorSpaceIndex;                                   // 0x10(0x4)(None)
	uint8                                        Pad_7C7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FamilyName;                                        // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayView
struct FOpenColorIODisplayView
{
public:
	class FString                                Display;                                           // 0x0(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                View;                                              // 0x10(0x10)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
struct FOpenColorIOColorConversionSettings
{
public:
	class UOpenColorIOConfiguration*             ConfigurationSource;                               // 0x0(0x8)(None)
	struct FOpenColorIOColorSpace                SourceColorSpace;                                  // 0x8(0x28)(Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FOpenColorIOColorSpace                DestinationColorSpace;                             // 0x30(0x28)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FOpenColorIODisplayView               DestinationDisplayView;                            // 0x58(0x20)(None)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(None)
	uint8                                        Pad_7C8[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
struct FOpenColorIODisplayConfiguration
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(None)
	uint8                                        Pad_7CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOpenColorIOColorConversionSettings   ColorConfiguration;                                // 0x8(0x98)(None)
};

}


