#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryAttachment
class USentryAttachment : public UObject
{
public:
	uint8                                        Pad_1FD5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	void InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
	void InitializeWithData(const TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
	void GetPath(const class FString& ReturnValue);
	void GetFilename(const class FString& ReturnValue);
	void GetData(const TArray<uint8>& ReturnValue);
	void GetContentType(const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryBreadcrumb
class USentryBreadcrumb : public UObject
{
public:
	uint8                                        Pad_2021[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	void SetType(const class FString& Type);
	void SetMessage(const class FString& Message);
	void SetLevel(enum class ESentryLevel Level);
	void SetData(TMap<class FString, class FString> Data);
	void SetCategory(const class FString& Category);
	void GetType(const class FString& ReturnValue);
	void GetMessage(const class FString& ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
	void GetData(TMap<class FString, class FString> ReturnValue);
	void GetCategory(const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryEvent
class USentryEvent : public UObject
{
public:
	uint8                                        Pad_2022[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	void SetMessage(const class FString& Message);
	void SetLevel(enum class ESentryLevel Level);
	void GetMessage(const class FString& ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryId
class USentryId : public UObject
{
public:
	uint8                                        Pad_2024[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryId* GetDefaultObj();

	void ToString(const class FString& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryLibrary
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryLibrary* GetDefaultObj();

	void StringToBytesArray(const class FString& InString, const TArray<uint8>& ReturnValue);
	void SaveStringToFile(const class FString& InString, const class FString& Filename, const class FString& ReturnValue);
	void CreateSentryUserFeedback(class USentryId* EventId, const class FString& Name, const class FString& Email, const class FString& Comments, class USentryUserFeedback* ReturnValue);
	void CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& Username, const class FString& IpAddress, TMap<class FString, class FString> Data, class USentryUser* ReturnValue);
	void CreateSentryEvent(const class FString& Message, enum class ESentryLevel Level, class USentryEvent* ReturnValue);
	void CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, class FString> Data, enum class ESentryLevel Level, class USentryBreadcrumb* ReturnValue);
	void CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType, class USentryAttachment* ReturnValue);
	void CreateSentryAttachmentWithData(const TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType, class USentryAttachment* ReturnValue);
	void ByteArrayToString(const TArray<uint8>& Array, const class FString& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_202F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	void SetTagValue(const class FString& Key, const class FString& Value);
	void SetTags(TMap<class FString, class FString> Tags);
	void SetLevel(enum class ESentryLevel Level);
	void SetFingerprint(const TArray<class FString>& Fingerprint);
	void SetExtraValue(const class FString& Key, const class FString& Value);
	void SetExtras(TMap<class FString, class FString> Extras);
	void SetEnvironment(const class FString& Environment);
	void SetDist(const class FString& Dist);
	void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	void GetTagValue(const class FString& Key, const class FString& ReturnValue);
	void GetTags(TMap<class FString, class FString> ReturnValue);
	void GetLevel(enum class ESentryLevel ReturnValue);
	void GetFingerprint(const TArray<class FString>& ReturnValue);
	void GetExtraValue(const class FString& Key, const class FString& ReturnValue);
	void GetExtras(TMap<class FString, class FString> ReturnValue);
	void GetEnvironment(const class FString& ReturnValue);
	void GetDist(const class FString& ReturnValue);
	void ClearBreadcrumbs();
	void ClearAttachments();
	void Clear();
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
	void AddAttachment(class USentryAttachment* Attachment);
};

// 0x88 (0xB0 - 0x28)
// Class Sentry.SentrySettings
class USentrySettings : public UObject
{
public:
	class FString                                DsnUrl;                                            // 0x28(0x10)(None)
	class FString                                Release;                                           // 0x38(0x10)(None)
	class FString                                Environment;                                       // 0x48(0x10)(None)
	bool                                         InitAutomatically;                                 // 0x58(0x1)(None)
	bool                                         EnableVerboseLogging;                              // 0x59(0x1)(None)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x5A(0x5)(None)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x5F(0x6)(None)
	bool                                         EnableAutoCrashCapturing;                          // 0x65(0x1)(None)
	bool                                         UploadSymbolsAutomatically;                        // 0x66(0x1)(None)
	uint8                                        Pad_203C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProjectName;                                       // 0x68(0x10)(None)
	class FString                                OrgName;                                           // 0x78(0x10)(None)
	class FString                                AuthToken;                                         // 0x88(0x10)(None)
	bool                                         IncludeSources;                                    // 0x98(0x1)(None)
	uint8                                        Pad_203D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CrashReporterUrl;                                  // 0xA0(0x10)(None)

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_2069[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	void SetUser(class USentryUser* User);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetLevel(enum class ESentryLevel Level);
	void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
	void RemoveUser();
	void RemoveTag(const class FString& Key);
	void InitializeWithSettings(FDelegateProperty_ OnConfigureSettings);
	void Initialize();
	void ConfigureScope(FDelegateProperty_ OnConfigureScope);
	void Close();
	void ClearBreadcrumbs();
	void CaptureUserFeedbackWithParams(class USentryId* EventId, const class FString& Email, const class FString& Comments, const class FString& Name);
	void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
	void CaptureMessageWithScope(const class FString& Message, FDelegateProperty_ OnConfigureScope, enum class ESentryLevel Level, class USentryId* ReturnValue);
	void CaptureMessage(const class FString& Message, enum class ESentryLevel Level, class USentryId* ReturnValue);
	void CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_ OnConfigureScope, class USentryId* ReturnValue);
	void CaptureEvent(class USentryEvent* Event, class USentryId* ReturnValue);
	void AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, class FString> Data, enum class ESentryLevel Level);
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_206B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	void SetUsername(const class FString& Username);
	void SetIpAddress(const class FString& IpAddress);
	void SetId(const class FString& ID);
	void SetEmail(const class FString& Email);
	void SetData(TMap<class FString, class FString> Data);
	void GetUsername(const class FString& ReturnValue);
	void GetIpAddress(const class FString& ReturnValue);
	void GetId(const class FString& ReturnValue);
	void GetEmail(const class FString& ReturnValue);
	void GetData(TMap<class FString, class FString> ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class Sentry.SentryUserFeedback
class USentryUserFeedback : public UObject
{
public:
	uint8                                        Pad_206C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(const class FString& Name);
	void SetEmail(const class FString& Email);
	void SetComment(const class FString& Comments);
	void Initialize(class USentryId* EventId);
	void GetName(const class FString& ReturnValue);
	void GetEmail(const class FString& ReturnValue);
	void GetComment(const class FString& ReturnValue);
};

}


