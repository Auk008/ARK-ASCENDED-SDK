#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
struct FLiveLinkPingMessage
{
public:
	struct FGuid                                 PollRequest;                                       // 0x0(0x10)(None)
	int32                                        LiveLinkVersion;                                   // 0x10(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
struct FLiveLinkPongMessage
{
public:
	class FString                                ProviderName;                                      // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MachineName;                                       // 0x10(0x10)(None)
	struct FGuid                                 PollRequest;                                       // 0x20(0x10)(None)
	int32                                        LiveLinkVersion;                                   // 0x30(0x4)(None)
	uint8                                        Pad_320B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CreationPlatformTime;                              // 0x38(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
struct FLiveLinkConnectMessage
{
public:
	int32                                        LiveLinkVersion;                                   // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
struct FLiveLinkHeartbeatMessage
{
public:
	uint8                                        Pad_320C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
struct FLiveLinkClearSubject
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
struct FLiveLinkSubjectDataMessage
{
public:
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x0(0x20)(None)
	class FName                                  SubjectName;                                       // 0x20(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
struct FLiveLinkSubjectFrameMessage
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(None)
	TArray<struct FTransform>                    Transforms;                                        // 0x8(0x10)(AutoWeak, ContainsInstancedReference, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkCurveElement>         Curves;                                            // 0x18(0x10)(BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x28(0x60)(None)
	double                                       Time;                                              // 0x88(0x8)(None)
};

}


