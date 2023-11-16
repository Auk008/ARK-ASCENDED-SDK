#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class SequencerScripting.MovieSceneScriptingKey
class UMovieSceneScriptingKey : public UObject
{
public:
	uint8                                        Pad_6C5[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6D3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceKey* GetDefaultObj();

	void SetValue(const struct FMovieSceneObjectBindingID& InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(const struct FMovieSceneObjectBindingID& ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(None)

	static class UClass* StaticClass();
	static class UMovieSceneScriptingChannel* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6D8[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceChannel* GetDefaultObj();

	void SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(const struct FMovieSceneObjectBindingID& ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingActorReferenceKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6E0[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolKey* GetDefaultObj();

	void SetValue(bool InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(bool ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_70A[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolChannel* GetDefaultObj();

	void SetDefault(bool InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetNumKeys(int32 ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(bool ReturnValue);
	void EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate, const TArray<bool>& ReturnValue);
	void ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingBoolKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_738[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteKey* GetDefaultObj();

	void SetValue(uint8 InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(uint8 ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_749[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteChannel* GetDefaultObj();

	void SetDefault(uint8 InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(uint8 ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, uint8 NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingByteKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_760[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleKey* GetDefaultObj();

	void SetValue(double InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue);
	void SetLeaveTangentWeight(float InNewValue);
	void SetLeaveTangent(float InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue);
	void SetArriveTangentWeight(float InNewValue);
	void SetArriveTangent(float InNewValue);
	void GetValue(double ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
	void GetTangentWeightMode(enum class ERichCurveTangentWeightMode ReturnValue);
	void GetTangentMode(enum class ERichCurveTangentMode ReturnValue);
	void GetLeaveTangentWeight(float ReturnValue);
	void GetLeaveTangent(float ReturnValue);
	void GetInterpolationMode(enum class ERichCurveInterpMode ReturnValue);
	void GetArriveTangentWeight(float ReturnValue);
	void GetArriveTangent(float ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingDoubleChannel
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_765[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetDefault(double InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetNumKeys(int32 ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(double ReturnValue);
	void EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate, const TArray<double>& ReturnValue);
	void ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingDoubleKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_76D[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventKey* GetDefaultObj();

	void SetValue(const struct FMovieSceneEvent& InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(const struct FMovieSceneEvent& ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_772[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventChannel* GetDefaultObj();

	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingEventKey* ReturnValue);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatKey* GetDefaultObj();

	void SetValue(float InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue);
	void SetLeaveTangentWeight(float InNewValue);
	void SetLeaveTangent(float InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue);
	void SetArriveTangentWeight(float InNewValue);
	void SetArriveTangent(float InNewValue);
	void GetValue(float ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
	void GetTangentWeightMode(enum class ERichCurveTangentWeightMode ReturnValue);
	void GetTangentMode(enum class ERichCurveTangentMode ReturnValue);
	void GetLeaveTangentWeight(float ReturnValue);
	void GetLeaveTangent(float ReturnValue);
	void GetInterpolationMode(enum class ERichCurveInterpMode ReturnValue);
	void GetArriveTangentWeight(float ReturnValue);
	void GetArriveTangent(float ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActualFloatKey
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_78B[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActualFloatKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_78E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleAsFloatKey* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_7C0[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetDefault(float InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetNumKeys(int32 ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(float ReturnValue);
	void EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate, const TArray<float>& ReturnValue);
	void ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingFloatKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_7D6[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerKey* GetDefaultObj();

	void SetValue(int32 InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(int32 ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_7E5[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerChannel* GetDefaultObj();

	void SetDefault(int32 InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(int32 ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, int32 NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingIntegerKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_7F3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathKey* GetDefaultObj();

	void SetValue(class UObject* InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(class UObject* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_801[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathChannel* GetDefaultObj();

	void SetDefault(class UObject* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(class UObject* ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingObjectPathKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_816[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringKey* GetDefaultObj();

	void SetValue(const class FString& InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(const class FString& ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_824[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringChannel* GetDefaultObj();

	void SetDefault(const class FString& InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(const class FString& ReturnValue);
	void AddKey(const struct FFrameNumber& InTime, const class FString& NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingStringKey* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneBindingExtensions
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBindingExtensions* GetDefaultObj();

	void SetSpawnableBindingID(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneObjectBindingID& SpawnableBindingID);
	void SetSortingOrder(const struct FMovieSceneBindingProxy& InBinding, int32 SortingOrder);
	void SetParent(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneBindingProxy& InParentBinding);
	void SetName(const struct FMovieSceneBindingProxy& InBinding, const class FString& InName);
	void SetDisplayName(const struct FMovieSceneBindingProxy& InBinding, class FText InDisplayName);
	void RemoveTrack(const struct FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);
	void Remove(const struct FMovieSceneBindingProxy& InBinding);
	void MoveBindingContents(const struct FMovieSceneBindingProxy& SourceBindingId, const struct FMovieSceneBindingProxy& DestinationBindingId);
	void IsValid(const struct FMovieSceneBindingProxy& InBinding, bool ReturnValue);
	void GetTracks(const struct FMovieSceneBindingProxy& InBinding, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetSortingOrder(const struct FMovieSceneBindingProxy& InBinding, int32 ReturnValue);
	void GetPossessedObjectClass(const struct FMovieSceneBindingProxy& InBinding, class UClass* ReturnValue);
	void GetParent(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneBindingProxy& ReturnValue);
	void GetObjectTemplate(const struct FMovieSceneBindingProxy& InBinding, class UObject* ReturnValue);
	void GetName(const struct FMovieSceneBindingProxy& InBinding, const class FString& ReturnValue);
	void GetId(const struct FMovieSceneBindingProxy& InBinding, const struct FGuid& ReturnValue);
	void GetDisplayName(const struct FMovieSceneBindingProxy& InBinding, class FText ReturnValue);
	void GetChildPossessables(const struct FMovieSceneBindingProxy& InBinding, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	void FindTracksByType(const struct FMovieSceneBindingProxy& InBinding, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void FindTracksByExactType(const struct FMovieSceneBindingProxy& InBinding, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void AddTrack(const struct FMovieSceneBindingProxy& InBinding, class UClass* TrackType, class UMovieSceneTrack* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventTrackExtensions* GetDefaultObj();

	void GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey, class UClass* ReturnValue);
	void AddEventTriggerSection(class UMovieSceneEventTrack* InTrack, class UMovieSceneEventTriggerSection* ReturnValue);
	void AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack, class UMovieSceneEventRepeaterSection* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFolderExtensions
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFolderExtensions* GetDefaultObj();

	void SetFolderName(class UMovieSceneFolder* Folder, class FName InFolderName, bool ReturnValue);
	void SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor, bool ReturnValue);
	void RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack, bool ReturnValue);
	void RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FMovieSceneBindingProxy& InObjectBinding, bool ReturnValue);
	void RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack, bool ReturnValue);
	void RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove, bool ReturnValue);
	void GetFolderName(class UMovieSceneFolder* Folder, class FName ReturnValue);
	void GetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& ReturnValue);
	void GetChildTracks(class UMovieSceneFolder* Folder, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetChildObjectBindings(class UMovieSceneFolder* Folder, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	void GetChildMasterTracks(class UMovieSceneFolder* Folder, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetChildFolders(class UMovieSceneFolder* Folder, const TArray<class UMovieSceneFolder*>& ReturnValue);
	void AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack, bool ReturnValue);
	void AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FMovieSceneBindingProxy& InObjectBinding, bool ReturnValue);
	void AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack, bool ReturnValue);
	void AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrackExtensions* GetDefaultObj();

	void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32 MaterialIndex);
	void GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrackExtensions* GetDefaultObj();

	void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32 MaterialIndex);
	void GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrackExtensions* GetDefaultObj();

	void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, class FName InPropertyName, const class FString& InPropertyPath);
	void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);
	void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);
	void GetUniqueTrackName(class UMovieScenePropertyTrack* Track, class FName ReturnValue);
	void GetPropertyPath(class UMovieScenePropertyTrack* Track, const class FString& ReturnValue);
	void GetPropertyName(class UMovieScenePropertyTrack* Track, class FName ReturnValue);
	void GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* ReturnValue);
	void GetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSectionExtensions
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSectionExtensions* GetDefaultObj();

	void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);
	void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
	void SetStartFrame(class UMovieSceneSection* Section, int32 StartFrame);
	void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);
	void SetRange(class UMovieSceneSection* Section, int32 StartFrame, int32 EndFrame);
	void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);
	void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
	void SetEndFrame(class UMovieSceneSection* Section, int32 EndFrame);
	void HasStartFrame(class UMovieSceneSection* Section, bool ReturnValue);
	void HasEndFrame(class UMovieSceneSection* Section, bool ReturnValue);
	void GetStartFrameSeconds(class UMovieSceneSection* Section, float ReturnValue);
	void GetStartFrame(class UMovieSceneSection* Section, int32 ReturnValue);
	void GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32 InFrame, class UMovieSceneSequence* ParentSequence, int32 ReturnValue);
	void GetEndFrameSeconds(class UMovieSceneSection* Section, float ReturnValue);
	void GetEndFrame(class UMovieSceneSection* Section, int32 ReturnValue);
	void GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType, const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
	void GetChannels(class UMovieSceneSection* Section, const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
	void GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section, float ReturnValue);
	void GetAutoSizeStartFrame(class UMovieSceneSection* Section, int32 ReturnValue);
	void GetAutoSizeHasStartFrame(class UMovieSceneSection* Section, bool ReturnValue);
	void GetAutoSizeHasEndFrame(class UMovieSceneSection* Section, bool ReturnValue);
	void GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section, float ReturnValue);
	void GetAutoSizeEndFrame(class UMovieSceneSection* Section, int32 ReturnValue);
	void GetAllChannels(class UMovieSceneSection* Section, const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
	void FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType, const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSequenceExtensions
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSequenceExtensions* GetDefaultObj();

	void SortMarkedFrames(class UMovieSceneSequence* Sequence);
	void SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
	void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
	void SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
	void SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
	void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
	void SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
	void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);
	void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);
	void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32 StartFrame);
	void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);
	void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32 EndFrame);
	void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32 InMarkIndex, const struct FFrameNumber& InFrameNumber);
	void SetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType);
	void SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate);
	void SetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource);
	void ResolveBindingID(class UMovieSceneSequence* RootSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID, const struct FMovieSceneBindingProxy& ReturnValue);
	void RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track, bool ReturnValue);
	void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);
	void RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track, bool ReturnValue);
	void MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration, const struct FSequencerScriptingRange& ReturnValue);
	void MakeRange(class UMovieSceneSequence* Sequence, int32 StartFrame, int32 Duration, const struct FSequencerScriptingRange& ReturnValue);
	void MakeBindingID(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space, const struct FMovieSceneObjectBindingID& ReturnValue);
	void LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& InBinding, class UObject* Context, const TArray<class UObject*>& ReturnValue);
	void IsReadOnly(class UMovieSceneSequence* Sequence, bool ReturnValue);
	void GetWorkRangeStart(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetWorkRangeEnd(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetViewRangeStart(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetViewRangeEnd(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetTracks(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetTimecodeSource(class UMovieSceneSequence* Sequence, const struct FTimecode& ReturnValue);
	void GetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& ReturnValue);
	void GetSpawnables(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	void GetRootFoldersInSequence(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneFolder*>& ReturnValue);
	void GetPossessables(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	void GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneObjectBindingID& ReturnValue);
	void GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float ReturnValue);
	void GetPlaybackStart(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	void GetPlaybackRange(class UMovieSceneSequence* Sequence, const struct FSequencerScriptingRange& ReturnValue);
	void GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float ReturnValue);
	void GetPlaybackEnd(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	void GetMovieScene(class UMovieSceneSequence* Sequence, class UMovieScene* ReturnValue);
	void GetMasterTracks(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetMarkedFrames(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneMarkedFrame>& ReturnValue);
	void GetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType ReturnValue);
	void GetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& ReturnValue);
	void GetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource ReturnValue);
	void GetBindings(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	void GetBindingID(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneObjectBindingID& ReturnValue);
	void FindTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void FindTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward, int32 ReturnValue);
	void FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel, int32 ReturnValue);
	void FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, int32 ReturnValue);
	void FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name, const struct FMovieSceneBindingProxy& ReturnValue);
	void FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingId, const struct FMovieSceneBindingProxy& ReturnValue);
	void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
	void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32 DeleteIndex);
	void AddTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType, class UMovieSceneTrack* ReturnValue);
	void AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn, const struct FMovieSceneBindingProxy& ReturnValue);
	void AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn, const struct FMovieSceneBindingProxy& ReturnValue);
	void AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName, class UMovieSceneFolder* ReturnValue);
	void AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess, const struct FMovieSceneBindingProxy& ReturnValue);
	void AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType, class UMovieSceneTrack* ReturnValue);
	void AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTrackExtensions* GetDefaultObj();

	void SetTrackRowDisplayName(class UMovieSceneTrack* Track, class FText InName, int32 RowIndex);
	void SetSortingOrder(class UMovieSceneTrack* Track, int32 SortingOrder);
	void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
	void SetDisplayName(class UMovieSceneTrack* Track, class FText InName);
	void SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint);
	void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
	void GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32 RowIndex, class FText ReturnValue);
	void GetSortingOrder(class UMovieSceneTrack* Track, int32 ReturnValue);
	void GetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* ReturnValue);
	void GetSections(class UMovieSceneTrack* Track, const TArray<class UMovieSceneSection*>& ReturnValue);
	void GetDisplayName(class UMovieSceneTrack* Track, class FText ReturnValue);
	void GetColorTint(class UMovieSceneTrack* Track, const struct FColor& ReturnValue);
	void AddSection(class UMovieSceneTrack* Track, class UMovieSceneSection* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32 InNumChannelsUsed);
	void GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32 InNumChannelsUsed);
	void GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.SequencerScriptingRangeExtensions
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencerScriptingRangeExtensions* GetDefaultObj();

	void SetStartSeconds(const struct FSequencerScriptingRange& Range, float Start);
	void SetStartFrame(const struct FSequencerScriptingRange& Range, int32 Start);
	void SetEndSeconds(const struct FSequencerScriptingRange& Range, float End);
	void SetEndFrame(const struct FSequencerScriptingRange& Range, int32 End);
	void RemoveStart(const struct FSequencerScriptingRange& Range);
	void RemoveEnd(const struct FSequencerScriptingRange& Range);
	void HasStart(const struct FSequencerScriptingRange& Range, bool ReturnValue);
	void HasEnd(const struct FSequencerScriptingRange& Range, bool ReturnValue);
	void GetStartSeconds(const struct FSequencerScriptingRange& Range, float ReturnValue);
	void GetStartFrame(const struct FSequencerScriptingRange& Range, int32 ReturnValue);
	void GetEndSeconds(const struct FSequencerScriptingRange& Range, float ReturnValue);
	void GetEndFrame(const struct FSequencerScriptingRange& Range, int32 ReturnValue);
};

}


