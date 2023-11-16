#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class EngineSettings.ConsoleSettings
class UConsoleSettings : public UObject
{
public:
	int32                                        MaxScrollbackSize;                                 // 0x28(0x4)(None)
	uint8                                        Pad_2A9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAutoCompleteCommand>          ManualAutoCompleteList;                            // 0x30(0x10)(None)
	TArray<class FString>                        AutoCompleteMapPaths;                              // 0x40(0x10)(None)
	float                                        BackgroundOpacityPercentage;                       // 0x50(0x4)(None)
	bool                                         bOrderTopToBottom;                                 // 0x54(0x1)(None)
	bool                                         bDisplayHelpInAutoComplete;                        // 0x55(0x1)(None)
	uint8                                        Pad_2A9D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                InputColor;                                        // 0x58(0x4)(None)
	struct FColor                                HistoryColor;                                      // 0x5C(0x4)(None)
	struct FColor                                AutoCompleteCommandColor;                          // 0x60(0x4)(None)
	struct FColor                                AutoCompleteCVarColor;                             // 0x64(0x4)(None)
	struct FColor                                AutoCompleteFadedColor;                            // 0x68(0x4)(None)
	uint8                                        Pad_2A9E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConsoleSettings* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class EngineSettings.GameMapsSettings
class UGameMapsSettings : public UObject
{
public:
	class FString                                LocalMapOptions;                                   // 0x28(0x10)(None)
	struct FSoftObjectPath                       TransitionMap;                                     // 0x38(0x20)(None)
	bool                                         bUseSplitscreen;                                   // 0x58(0x1)(None)
	enum class ETwoPlayerSplitScreenType         TwoPlayerSplitscreenLayout;                        // 0x59(0x1)(None)
	enum class EThreePlayerSplitScreenType       ThreePlayerSplitscreenLayout;                      // 0x5A(0x1)(None)
	enum class EFourPlayerSplitScreenType        FourPlayerSplitscreenLayout;                       // 0x5B(0x1)(None)
	bool                                         bOffsetPlayerGamepadIds;                           // 0x5C(0x1)(None)
	uint8                                        Pad_2AA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        GameInstanceClass;                                 // 0x60(0x20)(None)
	struct FSoftObjectPath                       GameDefaultMap;                                    // 0x80(0x20)(None)
	struct FSoftObjectPath                       ServerDefaultMap;                                  // 0xA0(0x20)(None)
	struct FSoftClassPath                        GlobalDefaultGameMode;                             // 0xC0(0x20)(None)
	struct FSoftClassPath                        GlobalDefaultServerGameMode;                       // 0xE0(0x20)(None)
	TArray<struct FGameModeName>                 GameModeMapPrefixes;                               // 0x100(0x10)(None)
	TArray<struct FGameModeName>                 GameModeClassAliases;                              // 0x110(0x10)(None)

	static class UClass* StaticClass();
	static class UGameMapsSettings* GetDefaultObj();

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
	void GetSkipAssigningGamepadToPlayer1(bool ReturnValue);
	void GetGameMapsSettings(class UGameMapsSettings* ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class EngineSettings.GameNetworkManagerSettings
class UGameNetworkManagerSettings : public UObject
{
public:
	int32                                        MinDynamicBandwidth;                               // 0x28(0x4)(None)
	int32                                        MaxDynamicBandwidth;                               // 0x2C(0x4)(None)
	int32                                        TotalNetBandwidth;                                 // 0x30(0x4)(None)
	int32                                        BadPingThreshold;                                  // 0x34(0x4)(None)
	uint8                                        bIsStandbyCheckingEnabled : 1;                     // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        BitPad_20F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StandbyRxCheatTime;                                // 0x3C(0x4)(None)
	float                                        StandbyTxCheatTime;                                // 0x40(0x4)(None)
	float                                        PercentMissingForRxStandby;                        // 0x44(0x4)(None)
	float                                        PercentMissingForTxStandby;                        // 0x48(0x4)(None)
	float                                        PercentForBadPing;                                 // 0x4C(0x4)(None)
	float                                        JoinInProgressStandbyWaitTime;                     // 0x50(0x4)(None)
	uint8                                        Pad_2AA3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameNetworkManagerSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EngineSettings.GameSessionSettings
class UGameSessionSettings : public UObject
{
public:
	int32                                        MaxSpectators;                                     // 0x28(0x4)(None)
	int32                                        MaxPlayers;                                        // 0x2C(0x4)(None)
	uint8                                        bRequiresPushToTalk : 1;                           // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        Pad_2AA4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSessionSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EngineSettings.GeneralEngineSettings
class UGeneralEngineSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGeneralEngineSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class EngineSettings.GeneralProjectSettings
class UGeneralProjectSettings : public UObject
{
public:
	class FString                                CompanyName;                                       // 0x28(0x10)(None)
	class FString                                CompanyDistinguishedName;                          // 0x38(0x10)(None)
	class FString                                CopyrightNotice;                                   // 0x48(0x10)(None)
	class FString                                Description;                                       // 0x58(0x10)(None)
	class FString                                Homepage;                                          // 0x68(0x10)(None)
	class FString                                LicensingTerms;                                    // 0x78(0x10)(None)
	class FString                                PrivacyPolicy;                                     // 0x88(0x10)(None)
	struct FGuid                                 ProjectID;                                         // 0x98(0x10)(None)
	class FString                                ProjectName;                                       // 0xA8(0x10)(None)
	class FString                                ProjectVersion;                                    // 0xB8(0x10)(None)
	class FString                                SupportContact;                                    // 0xC8(0x10)(None)
	class FText                                  ProjectDisplayedTitle;                             // 0xD8(0x18)(None)
	class FText                                  ProjectDebugTitleInfo;                             // 0xF0(0x18)(None)
	bool                                         bShouldWindowPreserveAspectRatio;                  // 0x108(0x1)(None)
	bool                                         bUseBorderlessWindow;                              // 0x109(0x1)(None)
	bool                                         bStartInVR;                                        // 0x10A(0x1)(None)
	bool                                         bAllowWindowResize;                                // 0x10B(0x1)(None)
	bool                                         bAllowClose;                                       // 0x10C(0x1)(None)
	bool                                         bAllowMaximize;                                    // 0x10D(0x1)(None)
	bool                                         bAllowMinimize;                                    // 0x10E(0x1)(None)
	uint8                                        Pad_2AA5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EyeOffsetForFakeStereoRenderingDevice;             // 0x110(0x4)(None)
	float                                        FOVForFakeStereoRenderingDevice;                   // 0x114(0x4)(None)

	static class UClass* StaticClass();
	static class UGeneralProjectSettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EngineSettings.HudSettings
class UHudSettings : public UObject
{
public:
	uint8                                        bShowHUD : 1;                                      // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        BitPad_210 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2AA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DebugDisplay;                                      // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UHudSettings* GetDefaultObj();

};

}


