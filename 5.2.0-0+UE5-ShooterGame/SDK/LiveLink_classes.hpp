#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                         bInterpolatePropertyValues;                        // 0x28(0x1)(None)
	uint8                                        Pad_BBD[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                        Pad_BC0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj();

};

// 0x8 (0x168 - 0x160)
// Class LiveLink.LiveLinkAnimationVirtualSubject
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_BC3[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAppendSubjectNameToBones;                         // 0x161(0x1)(None)
	uint8                                        Pad_BC4[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkAnimationVirtualSubject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkBlueprintLibrary
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkBlueprintLibrary* GetDefaultObj();

	void TransformNames(const struct FSubjectFrameHandle& SubjectFrameHandle, const TArray<class FName>& TransformNames);
	void TransformName(const struct FLiveLinkTransform& LiveLinkTransform, class FName Name);
	void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	void RemoveSource(const struct FLiveLinkSourceHandle& SourceHandle, bool ReturnValue);
	void ParentBoneSpaceTransform(const struct FLiveLinkTransform& LiveLinkTransform, const struct FTransform& Transform);
	void NumberOfTransforms(const struct FSubjectFrameHandle& SubjectFrameHandle, int32 ReturnValue);
	void IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame, bool ReturnValue);
	void IsSourceStillValid(const struct FLiveLinkSourceHandle& SourceHandle, bool ReturnValue);
	void IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName, bool ReturnValue);
	void HasParent(const struct FLiveLinkTransform& LiveLinkTransform, bool ReturnValue);
	void GetTransformByName(const struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName, const struct FLiveLinkTransform& LiveLinkTransform);
	void GetTransformByIndex(const struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, const struct FLiveLinkTransform& LiveLinkTransform);
	void GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey, class UClass* ReturnValue);
	void GetSourceTypeFromGuid(const struct FGuid& SourceGuid, class FText ReturnValue);
	void GetSourceType(const struct FLiveLinkSourceHandle& SourceHandle, class FText ReturnValue);
	void GetSourceStatus(const struct FLiveLinkSourceHandle& SourceHandle, class FText ReturnValue);
	void GetSourceMachineName(const struct FLiveLinkSourceHandle& SourceHandle, class FText ReturnValue);
	void GetRootTransform(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkTransform& LiveLinkTransform);
	void GetPropertyValue(const struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float Value, bool ReturnValue);
	void GetParent(const struct FLiveLinkTransform& LiveLinkTransform, const struct FLiveLinkTransform& Parent);
	void GetMetadata(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FSubjectMetadata& MetaData);
	void GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject, const TArray<struct FLiveLinkSubjectKey>& ReturnValue);
	void GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* ReturnValue);
	void GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject, const TArray<struct FLiveLinkSubjectName>& ReturnValue);
	void GetCurves(const struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float> Curves);
	void GetChildren(const struct FLiveLinkTransform& LiveLinkTransform, const TArray<struct FLiveLinkTransform>& Children);
	void GetBasicData(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkBasicBlueprintData& BasicBlueprintData);
	void GetAnimationStaticData(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkSkeletonStaticData& AnimationStaticData, bool ReturnValue);
	void GetAnimationFrameData(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkAnimationFrameData& AnimationFrameData, bool ReturnValue);
	void EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue);
	void EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue);
	void EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue);
	void EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue);
	void ComponentSpaceTransform(const struct FLiveLinkTransform& LiveLinkTransform, const struct FTransform& Transform);
	void ChildCount(const struct FLiveLinkTransform& LiveLinkTransform, int32 ReturnValue);
};

// 0x20 (0xD8 - 0xB8)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xB8(0x10)(ZeroConstructor)
	uint8                                        Pad_CC7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkComponent* GetDefaultObj();

	void GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime, bool bSuccess, const struct FSubjectFrameHandle& SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(class FName SubjectName, const struct FTimecode& SceneTime, bool bSuccess, const struct FSubjectFrameHandle& SubjectFrameHandle);
	void GetSubjectData(class FName SubjectName, bool bSuccess, const struct FSubjectFrameHandle& SubjectFrameHandle);
	void GetAvailableSubjectNames(const TArray<class FName>& SubjectNames);
};

// 0x18 (0xD0 - 0xB8)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xB8(0x8)(None)
	class FName                                  ActorTransformBone;                                // 0xC0(0x8)(None)
	bool                                         bModifyActorTransform;                             // 0xC8(0x1)(None)
	bool                                         bSetRelativeLocation;                              // 0xC9(0x1)(None)
	uint8                                        Pad_CC8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkDrivenComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_CDA[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusFinder* GetDefaultObj();

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, const TArray<struct FProviderPollResult>& AvailableProviders);
	void ConstructMessageBusFinder(class ULiveLinkMessageBusFinder* ReturnValue);
	void ConnectToProvider(const struct FProviderPollResult& Provider, const struct FLiveLinkSourceHandle& SourceHandle);
};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkMessageBusSourceFactory
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusSourceFactory* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class LiveLink.LiveLinkMessageBusSourceSettings
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkMessageBusSourceSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class LiveLink.LiveLinkPreset
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>         Sources;                                           // 0x28(0x10)(ZeroConstructor)
	TArray<struct FLiveLinkSubjectPreset>        Subjects;                                          // 0x38(0x10)(None)
	uint8                                        Pad_CF4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkPreset* GetDefaultObj();

	void BuildFromClient();
	void ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void ApplyToClient(bool ReturnValue);
	void AddToClient(bool bRecreatePresets, bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LiveLink.LiveLinkUserSettings
class ULiveLinkUserSettings : public UObject
{
public:
	struct FDirectoryPath                        PresetSaveDir;                                     // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class ULiveLinkUserSettings* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLink.LiveLinkSettings
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>   DefaultRoleSettings;                               // 0x28(0x10)(ZeroConstructor)
	class UClass*                                FrameInterpolationProcessor;                       // 0x38(0x8)(ZeroConstructor)
	TSoftObjectPtr<class ULiveLinkPreset>        DefaultLiveLinkPreset;                             // 0x40(0x30)(None)
	float                                        ClockOffsetCorrectionStep;                         // 0x70(0x4)(None)
	enum class ELiveLinkSourceMode               DefaultMessageBusSourceMode;                       // 0x74(0x1)(None)
	uint8                                        Pad_CFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MessageBusPingRequestFrequency;                    // 0x78(0x8)(None)
	double                                       MessageBusHeartbeatFrequency;                      // 0x80(0x8)(None)
	double                                       MessageBusHeartbeatTimeout;                        // 0x88(0x8)(None)
	double                                       MessageBusTimeBeforeRemovingInactiveSource;        // 0x90(0x8)(None)
	double                                       TimeWithoutFrameToBeConsiderAsInvalid;             // 0x98(0x8)(None)
	struct FLinearColor                          ValidColor;                                        // 0xA0(0x10)(None)
	struct FLinearColor                          InvalidColor;                                      // 0xB0(0x10)(None)
	uint8                                        TextSizeSource;                                    // 0xC0(0x1)(None)
	uint8                                        TextSizeSubject;                                   // 0xC1(0x1)(None)
	uint8                                        Pad_D01[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkSettings* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class LiveLink.LiveLinkTimecodeProvider
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x30(0x18)(None)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation;                                        // 0x48(0x4)(None)
	bool                                         bOverrideFrameRate;                                // 0x4C(0x1)(None)
	uint8                                        Pad_D05[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            OverrideFrameRate;                                 // 0x50(0x8)(None)
	int32                                        BufferSize;                                        // 0x58(0x4)(None)
	uint8                                        Pad_D06[0x64];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkTimecodeProvider* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x30(0x8)(None)
	uint8                                        Pad_D20[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkTimeSynchronizationSource* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	class FName                                  SourceName;                                        // 0xA8(0x8)(None)

	static class UClass* StaticClass();
	static class ULiveLinkVirtualSubjectSourceSettings* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	enum class ELiveLinkAxis                     FrontAxis;                                         // 0x28(0x1)(None)
	enum class ELiveLinkAxis                     RightAxis;                                         // 0x29(0x1)(None)
	enum class ELiveLinkAxis                     UpAxis;                                            // 0x2A(0x1)(None)
	bool                                         bUseOffsetPosition;                                // 0x2B(0x1)(None)
	bool                                         bUseOffsetOrientation;                             // 0x2C(0x1)(None)
	uint8                                        Pad_D35[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetPosition;                                    // 0x30(0x18)(None)
	struct FRotator                              OffsetOrientation;                                 // 0x48(0x18)(None)
	uint8                                        Pad_D36[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkTransformAxisSwitchPreProcessor* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkAnimationAxisSwitchPreProcessor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class LiveLink.LiveLinkAnimationRoleToTransform
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	class FName                                  BoneName;                                          // 0x28(0x8)(None)
	uint8                                        Pad_D38[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj();

};

// 0x28 (0x188 - 0x160)
// Class LiveLink.LiveLinkBlueprintVirtualSubject
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_D4A[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkBlueprintVirtualSubject* GetDefaultObj();

	void UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct, bool ReturnValue);
	void UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime, bool ReturnValue);
	void OnUpdate();
	void OnInitialize();
};

}


