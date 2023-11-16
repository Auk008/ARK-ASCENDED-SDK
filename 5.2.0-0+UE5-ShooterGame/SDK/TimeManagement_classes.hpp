#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(None)
	uint8                                        Pad_8D2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameOffset;                                       // 0x2C(0x4)(None)

	static class UClass* StaticClass();
	static class UTimeSynchronizationSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:

	static class UClass* StaticClass();
	static class UFixedFrameRateCustomTimeStep* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TimeManagement.GenlockedCustomTimeStep
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(None)
	uint8                                        Pad_8D6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGenlockedCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x30(0x8)(None)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(None)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(None)
	uint8                                        Pad_8D8[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(None)
	uint8                                        Pad_8DB[0x27];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGenlockedTimecodeProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeManagementBlueprintLibrary
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTimeManagementBlueprintLibrary* GetDefaultObj();

	void TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate, const struct FFrameTime& ReturnValue);
	void Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue);
	void Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B, const struct FFrameNumber& ReturnValue);
	void SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate, const struct FFrameTime& ReturnValue);
	void Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate, const struct FFrameTime& ReturnValue);
	void Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue);
	void IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate, bool ReturnValue);
	void IsValid_Framerate(const struct FFrameRate& InFrameRate, bool ReturnValue);
	void GetTimecodeFrameRate(const struct FFrameRate& ReturnValue);
	void GetTimecode(const struct FTimecode& ReturnValue);
	void Divide_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue);
	void Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay, const class FString& ReturnValue);
	void Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime, float ReturnValue);
	void Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate, float ReturnValue);
	void Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber, int32 ReturnValue);
	void Add_FrameNumberInteger(const struct FFrameNumber& A, int32 B, const struct FFrameNumber& ReturnValue);
	void Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B, const struct FFrameNumber& ReturnValue);
};

}


