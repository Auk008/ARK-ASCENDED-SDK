#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class MetasoundFrontend.MetasoundParameterPack
class UMetasoundParameterPack : public UObject
{
public:
	uint8                                        Pad_25E2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetasoundParameterPack* GetDefaultObj();

	void SetTrigger(class FName ParameterName, bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	void SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	void SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	void SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	void SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	void MakeMetasoundParameterPack(class UMetasoundParameterPack* ReturnValue);
	void HasTrigger(class FName ParameterName, bool ReturnValue);
	void HasString(class FName ParameterName, bool ReturnValue);
	void HasInt(class FName ParameterName, bool ReturnValue);
	void HasFloat(class FName ParameterName, bool ReturnValue);
	void HasBool(class FName ParameterName, bool ReturnValue);
	void GetTrigger(class FName ParameterName, enum class ESetParamResult Result, bool ReturnValue);
	void GetString(class FName ParameterName, enum class ESetParamResult Result, const class FString& ReturnValue);
	void GetInt(class FName ParameterName, enum class ESetParamResult Result, int32 ReturnValue);
	void GetFloat(class FName ParameterName, enum class ESetParamResult Result, float ReturnValue);
	void GetBool(class FName ParameterName, enum class ESetParamResult Result, bool ReturnValue);
};

}


