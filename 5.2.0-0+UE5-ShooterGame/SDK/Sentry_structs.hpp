#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESentryLevel : uint8
{
	Debug                          = 0,
	Info                           = 1,
	Warning                        = 2,
	Error                          = 3,
	Fatal                          = 4,
	ESentryLevel_MAX               = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x5 - 0x0)
// ScriptStruct Sentry.AutomaticBreadcrumbs
struct FAutomaticBreadcrumbs
{
public:
	bool                                         bOnMapLoadingStarted;                              // 0x0(0x1)(None)
	bool                                         bOnMapLoaded;                                      // 0x1(0x1)(None)
	bool                                         bOnGameStateClassChanged;                          // 0x2(0x1)(None)
	bool                                         bOnGameSessionIDChanged;                           // 0x3(0x1)(None)
	bool                                         bOnUserActivityStringChanged;                      // 0x4(0x1)(None)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Sentry.TagsPromotion
struct FTagsPromotion
{
public:
	bool                                         bPromoteBuildConfiguration;                        // 0x0(0x1)(None)
	bool                                         bPromoteTargetType;                                // 0x1(0x1)(None)
	bool                                         bPromoteEngineMode;                                // 0x2(0x1)(None)
	bool                                         bPromoteIsGame;                                    // 0x3(0x1)(None)
	bool                                         bPromoteIsStandalone;                              // 0x4(0x1)(None)
	bool                                         bPromoteIsUnattended;                              // 0x5(0x1)(None)
};

}


