#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class EyeTracker.EyeTrackerFunctionLibrary
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEyeTrackerFunctionLibrary* GetDefaultObj();

	void SetEyeTrackedPlayer(class APlayerController* PlayerController);
	void IsStereoGazeDataAvailable(bool ReturnValue);
	void IsEyeTrackerConnected(bool ReturnValue);
	void GetStereoGazeData(const struct FEyeTrackerStereoGazeData& OutGazeData, bool ReturnValue);
	void GetGazeData(const struct FEyeTrackerGazeData& OutGazeData, bool ReturnValue);
};

}


