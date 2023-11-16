#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioParameterType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	Object                         = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	ObjectArray                    = 11,
	Trigger                        = 12,
	COUNT                          = 13,
	EAudioParameterType_MAX        = 14,
};

enum class EPcmBitDepthConversion : uint8
{
	SameAsSource                   = 0,
	Int16                          = 1,
	Float32                        = 2,
	EPcmBitDepthConversion_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AudioExtensions.AudioParameter
struct FAudioParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(None)
	float                                        FloatParam;                                        // 0x8(0x4)(None)
	bool                                         BoolParam;                                         // 0xC(0x1)(None)
	uint8                                        Pad_26CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntParam;                                          // 0x10(0x4)(None)
	uint8                                        Pad_26CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ObjectParam;                                       // 0x18(0x8)(ZeroConstructor)
	class FString                                StringParam;                                       // 0x20(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<float>                                ArrayFloatParam;                                   // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<bool>                                 ArrayBoolParam;                                    // 0x40(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<int32>                                ArrayIntParam;                                     // 0x50(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<class UObject*>                       ArrayObjectParam;                                  // 0x60(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<class FString>                        ArrayStringParam;                                  // 0x70(0x10)(None)
	enum class EAudioParameterType               ParamType;                                         // 0x80(0x1)(None)
	uint8                                        Pad_26CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TypeName;                                          // 0x84(0x8)(None)
	uint8                                        Pad_26D0[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


