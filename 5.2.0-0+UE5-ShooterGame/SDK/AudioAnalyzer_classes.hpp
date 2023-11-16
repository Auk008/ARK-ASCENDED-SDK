#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerAssetBase
class UAudioAnalyzerAssetBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerAssetBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerSettings
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRTSettings
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRTSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRT
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
public:
	class USoundWave*                            Sound;                                             // 0x28(0x8)(None)
	float                                        DurationInSeconds;                                 // 0x30(0x4)(None)
	uint8                                        Pad_264A[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRT* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class AudioAnalyzer.AudioAnalyzer
class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x28(0x8)(ZeroConstructor)
	uint8                                        Pad_264B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioAnalyzerSubsystem*               AudioAnalyzerSubsystem;                            // 0x38(0x8)(None)
	uint8                                        Pad_264C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioAnalyzer* GetDefaultObj();

	void StopAnalyzing(class UObject* WorldContextObject);
	void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
};

// 0x20 (0x50 - 0x30)
// Class AudioAnalyzer.AudioAnalyzerSubsystem
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                AudioAnalyzers;                                    // 0x30(0x10)(None)
	uint8                                        Pad_264D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioAnalyzerSubsystem* GetDefaultObj();

};

}


