#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class MetasoundEngine.MetasoundGeneratorHandle
class UMetasoundGeneratorHandle : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(ZeroConstructor)
	uint8                                        Pad_2603[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMetaSoundSource*                      CachedMetasoundSource;                             // 0x38(0x8)(None)
	uint8                                        Pad_2604[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetasoundGeneratorHandle* GetDefaultObj();

	void CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent, class UMetasoundGeneratorHandle* ReturnValue);
	void ApplyParameterPack(class UMetasoundParameterPack* Pack, bool ReturnValue);
};

// 0x48 (0x80 - 0x38)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x38(0x1)(None)
	uint8                                        Pad_2605[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetasoundFrontendClassName>   AutoUpdateDenylist;                                // 0x40(0x10)(None)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x50(0x10)(None)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x60(0x1)(None)
	uint8                                        Pad_2616[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDirectoryPath>                DirectoriesToRegister;                             // 0x68(0x10)(None)
	int32                                        DenyListCacheChangeID;                             // 0x78(0x4)(None)
	uint8                                        Pad_2617[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetaSoundSettings* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetasoundEditorGraphBase
class UMetasoundEditorGraphBase : public UEdGraph
{
public:

	static class UClass* StaticClass();
	static class UMetasoundEditorGraphBase* GetDefaultObj();

};

// 0x330 (0x358 - 0x28)
// Class MetasoundEngine.MetaSoundPatch
class UMetaSoundPatch : public UObject
{
public:
	uint8                                        Pad_261E[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x90(0x1C8)(ZeroConstructor)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x258(0x50)(None)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2A8(0x50)(None)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x2F8(0x50)(None)
	struct FGuid                                 AssetClassID;                                      // 0x348(0x10)(None)

	static class UClass* StaticClass();
	static class UMetaSoundPatch* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_2623[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(None)
	uint8                                        Pad_2624[0x198];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetaSoundAssetSubsystem* GetDefaultObj();

	void UnregisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories);
	void RegisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories);
};

// 0x3A0 (0x860 - 0x4C0)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_2626[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendDocument            RootMetaSoundDocument;                             // 0x528(0x1C8)(ZeroConstructor)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6F0(0x50)(None)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x740(0x50)(ZeroConstructor)
	TSet<struct FSoftObjectPath>                 ReferenceAssetClassCache;                          // 0x790(0x50)(None)
	enum class EMetasoundSourceAudioFormat       OutputFormat;                                      // 0x7E0(0x1)(None)
	uint8                                        Pad_2628[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AssetClassID;                                      // 0x7E4(0x10)(None)
	uint8                                        Pad_2629[0x6C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetaSoundSource* GetDefaultObj();

};

}


