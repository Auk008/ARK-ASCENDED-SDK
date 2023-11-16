#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DLSSBlueprint.DLSSLibrary
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDLSSLibrary* GetDefaultObj();

	void SetDLSSSharpness(float Sharpness);
	void SetDLSSMode(class UObject* WorldContextObject, enum class EUDLSSMode DLSSMode);
	void QueryDLSSSupport(enum class EUDLSSSupport ReturnValue);
	void QueryDLSSRRSupport(enum class EUDLSSSupport ReturnValue);
	void IsDLSSSupported(bool ReturnValue);
	void IsDLSSRRSupported(bool ReturnValue);
	void IsDLSSRREnabled(bool ReturnValue);
	void IsDLSSModeSupported(enum class EUDLSSMode DLSSMode, bool ReturnValue);
	void IsDLSSEnabled(bool ReturnValue);
	void IsDLAAEnabled(bool ReturnValue);
	void GetSupportedDLSSModes(const TArray<enum class EUDLSSMode>& ReturnValue);
	void GetDLSSSharpness(float ReturnValue);
	void GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage);
	void GetDLSSRRMinimumDriverVersion(int32 MinDriverVersionMajor, int32 MinDriverVersionMinor);
	void GetDLSSModeInformation(enum class EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness);
	void GetDLSSMode(enum class EUDLSSMode ReturnValue);
	void GetDLSSMinimumDriverVersion(int32 MinDriverVersionMajor, int32 MinDriverVersionMinor);
	void GetDefaultDLSSMode(enum class EUDLSSMode ReturnValue);
	void EnableDLSSRR(bool bEnabled);
	void EnableDLSS(bool bEnabled);
	void EnableDLAA(bool bEnabled);
};

}


