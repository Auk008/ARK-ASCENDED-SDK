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

// 0x10 (0x10 - 0x0)
// ScriptStruct DeveloperSettings.PerPlatformSettings
struct FPerPlatformSettings
{
public:
	TArray<class UPlatformSettings*>             Settings;                                          // 0x0(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct DeveloperSettings.PlatformSettingsInstances
struct FPlatformSettingsInstances
{
public:
	class UPlatformSettings*                     PlatformInstance;                                  // 0x0(0x8)(ZeroConstructor)
	TMap<class FName, class UPlatformSettings*>  OtherPlatforms;                                    // 0x8(0x50)(None)
};

}


