#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECFCoreFileRelationType : uint8
{
	None                           = 0,
	EmbeddedLibrary                = 1,
	OptionalDependency             = 2,
	RequiredDependency             = 3,
	Tool                           = 4,
	Incompatible                   = 5,
	Include                        = 6,
	ECFCoreFileRelationType_MAX    = 7,
};

enum class ECFCoreHashAlgo : uint8
{
	None                           = 0,
	Sha1                           = 1,
	Md5                            = 2,
	ECFCoreHashAlgo_MAX            = 3,
};

enum class ECFCoreFileStatus : uint8
{
	None                           = 0,
	Processing                     = 1,
	ChangesRequired                = 2,
	UnderReview                    = 3,
	Approved                       = 4,
	Rejected                       = 5,
	MalwareDetected                = 6,
	Deleted                        = 7,
	Archived                       = 8,
	Testing                        = 9,
	Released                       = 10,
	ReadyForReview                 = 11,
	Deprecated                     = 12,
	Baking                         = 13,
	AwaitingPublishing             = 14,
	FailedPublishing               = 15,
	ECFCoreFileStatus_MAX          = 16,
};

enum class ECFCoreFileReleaseType : uint8
{
	None                           = 0,
	Release                        = 1,
	Beta                           = 2,
	Alpha                          = 3,
	ECFCoreFileReleaseType_MAX     = 4,
};

enum class ECFCoreApiStatus : uint8
{
	None                           = 0,
	Private                        = 1,
	Public                         = 2,
	ECFCoreApiStatus_MAX           = 3,
};

enum class ECFCoreStatus : uint8
{
	None                           = 0,
	Draft                          = 1,
	Test                           = 2,
	PendingReview                  = 3,
	Rejected                       = 4,
	Approved                       = 5,
	Live                           = 6,
	ECFCoreStatus_MAX              = 7,
};

enum class ECFCoreModLoaderType : uint8
{
	Any                            = 0,
	Forge                          = 1,
	Cauldron                       = 2,
	LiteLoader                     = 3,
	Fabric                         = 4,
	ECFCoreModLoaderType_MAX       = 5,
};

enum class ECFCoreModStatus : uint8
{
	None                           = 0,
	New                            = 1,
	ChangesRequired                = 2,
	UnderSoftReview                = 3,
	Approved                       = 4,
	Rejected                       = 5,
	ChangesMade                    = 6,
	Inactive                       = 7,
	Abandoned                      = 8,
	Deleted                        = 9,
	UnderReview                    = 10,
	ECFCoreModStatus_MAX           = 11,
};

enum class ECFCoreErrorCodes : uint8
{
	None                           = 0,
	ApiError                       = 1,
	FileSystemError                = 2,
	FailedToInitialize             = 3,
	AlreadyInitialized             = 4,
	NotImplemented                 = 5,
	InvalidModParams               = 6,
	InstalledModNotFound           = 7,
	InstallCancelled               = 8,
	DownloadCancelled              = 9,
	UploadCancelled                = 10,
	MissingModsDirectory           = 11,
	MissingModsDirectoryMode       = 12,
	MissingUserDataDirectory       = 13,
	FailedToLoadModsStateFromDisk  = 14,
	FailedToSaveModsStateToDisk    = 15,
	MissingLatestFileInformation   = 16,
	MissingFileInformation         = 17,
	FileNotBelongingToMod          = 18,
	NoPlatformFilesMatched         = 19,
	MissingInstalledMods           = 20,
	DetectedUnavailableMod         = 21,
	ModAlreadyBeingInstalled       = 22,
	FailedToDownloadFile           = 23,
	DownloadedFileHasInvalidHash   = 24,
	FailedDeletingOutputDirectory  = 25,
	FailedDeletingOutputFile       = 26,
	FailedToUnzip                  = 27,
	FailedToMoveModDirectory       = 28,
	FailedSettingAuthToken         = 29,
	UserNotAuthenticated           = 30,
	FailedToCancelAction           = 31,
	MissingParameter               = 32,
	ECFCoreErrorCodes_MAX          = 33,
};

enum class EInstalledModStatus : uint8
{
	Pending                        = 0,
	OutOfDate                      = 1,
	Normal                         = 2,
	Invalid                        = 3,
	WorkingCopy                    = 4,
	Uploading                      = 5,
	Modified                       = 6,
	Uninstalled                    = 7,
	EInstalledModStatus_MAX        = 8,
};

enum class ELibraryProgressState : uint8
{
	Pending                        = 0,
	Downloading                    = 1,
	Uploading                      = 2,
	Validating                     = 3,
	PendingUnzipping               = 4,
	Unzipping                      = 5,
	PendingZipping                 = 6,
	Zipping                        = 7,
	Copying                        = 8,
	CleaningUp                     = 9,
	Cancelling                     = 10,
	SuccessfullyCompleted          = 11,
	FailedToComplete               = 12,
	ELibraryProgressState_MAX      = 13,
};

enum class EModsUpdateProgressState : uint8
{
	Validating                     = 0,
	Installing                     = 1,
	SuccessfullyCompleted          = 2,
	FailedToComplete               = 3,
	EModsUpdateProgressState_MAX   = 4,
};

enum class ECFCoreAutoCookingType : uint8
{
	All                            = 0,
	PCOnly                         = 1,
	Manual                         = 2,
	ECFCoreAutoCookingType_MAX     = 3,
};

enum class ECFCoreChangelogMarkupType : uint8
{
	PlaceHolderDoNotUse            = 0,
	Text                           = 1,
	HTML                           = 2,
	Markdown                       = 3,
	ECFCoreChangelogMarkupType_MAX = 4,
};

enum class ECFCoreChildFileType : uint8
{
	None                           = 0,
	ServerPack                     = 1,
	Source                         = 2,
	ECFCoreChildFileType_MAX       = 3,
};

enum class ECompressionError : uint8
{
	None                           = 0,
	FailedToReadZip                = 1,
	FailedToExtractFile            = 2,
	FailedToWriteFile              = 3,
	ECompressionError_MAX          = 4,
};

enum class ECFCoreExternalAuthProvider : uint8
{
	None                           = 0,
	Steam                          = 1,
	PSN                            = 2,
	XBL                            = 3,
	ECFCoreExternalAuthProvider_MAX = 4,
};

enum class EFileSystemError : uint8
{
	None                           = 0,
	FailedToReadFromDisk           = 1,
	FailedToCreateDirectory        = 2,
	FailedToSaveToDisk             = 3,
	FailedToOpenFileForWrite       = 4,
	FailedFileToLarge              = 5,
	FailedGettingDiskSpaceInfo     = 6,
	FailedReadOutOfBounds          = 7,
	EFileSystemError_MAX           = 8,
};

enum class ECFCoreInstallationCommands : uint8
{
	Download                       = 0,
	VerifyHash                     = 1,
	Unzip                          = 2,
	Cleanup                        = 30,
	ECFCoreInstallationCommands_MAX = 31,
};

enum class ECFCoreMakrupType : uint8
{
	PlaceHolderDoNotUse            = 0,
	WysiwygHtml                    = 1,
	PlainText                      = 2,
	BBCode                         = 3,
	Creole                         = 4,
	Markdown                       = 5,
	RawHtml                        = 6,
	StandardBBCode                 = 8,
	RawCSS                         = 9,
	ECFCoreMakrupType_MAX          = 10,
};

enum class EModsDirectoryMode : uint8
{
	None                           = 0,
	CFCore                         = 1,
	Flat                           = 2,
	EModsDirectoryMode_MAX         = 3,
};

enum class ECFCoreModsSearchSortField : uint8
{
	None                           = 0,
	Featured                       = 1,
	Popularity                     = 2,
	LastUpdated                    = 3,
	Name                           = 4,
	Author                         = 5,
	TotalDownloads                 = 6,
	Category                       = 7,
	GameVersion                    = 8,
	EarlyAccess                    = 9,
	FeaturedReleased               = 10,
	ReleasedDate                   = 11,
	ECFCoreModsSearchSortField_MAX = 12,
};

enum class ECFCorePlatform : uint8
{
	None                           = 0,
	Windows                        = 1,
	XboxOne                        = 2,
	XboxXS                         = 3,
	Linux                          = 4,
	PS4                            = 5,
	PS5                            = 6,
	Mac                            = 7,
	IOS                            = 8,
	TVOS                           = 9,
	Android                        = 10,
	Switch                         = 11,
	WindowsServer                  = 12,
	LinuxServer                    = 13,
	ECFCorePlatform_MAX            = 14,
};

enum class ECFCoreSortOrder : uint8
{
	None                           = 0,
	Asc                            = 1,
	Desc                           = 2,
	ECFCoreSortOrder_MAX           = 3,
};

enum class ECFCoreThumbsUpDirection : uint8
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	ECFCoreThumbsUpDirection_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.BlockedDetails
struct FBlockedDetails
{
public:
	TArray<class FString>                        ServerIds;                                         // 0x0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int64>                                ModIds;                                            // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int64>                                blockedUIModIds;                                   // 0x20(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int64>                                blockedUIAuthorIds;                                // 0x30(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct cfcore.Category
struct FCategory
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	int64                                        GameId;                                            // 0x8(0x8)(None)
	class FString                                Name;                                              // 0x10(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Slug;                                              // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                URL;                                               // 0x30(0x10)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                IconUrl;                                           // 0x40(0x10)(None)
	struct FDateTime                             DateModified;                                      // 0x50(0x8)(None)
	bool                                         IsClass;                                           // 0x58(0x1)(None)
	uint8                                        Pad_43B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        ClassId;                                           // 0x60(0x8)(None)
	int64                                        ParentCategoryId;                                  // 0x68(0x8)(None)
	int32                                        DisplayIndex;                                      // 0x70(0x4)(None)
	uint8                                        Pad_43D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.FileHash
struct FFileHash
{
public:
	class FString                                Value;                                             // 0x0(0x10)(None)
	enum class ECFCoreHashAlgo                   Algo;                                              // 0x10(0x1)(None)
	uint8                                        Pad_440[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.SortableGameVersion
struct FSortableGameVersion
{
public:
	class FString                                GameVersionName;                                   // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                GameVersionPadded;                                 // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                GameVersion;                                       // 0x20(0x10)(None)
	struct FDateTime                             GameVersionReleaseDate;                            // 0x30(0x8)(None)
	int32                                        GameVersionTypeId;                                 // 0x38(0x4)(None)
	uint8                                        Pad_441[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.FileDependency
struct FFileDependency
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	int64                                        FileId;                                            // 0x8(0x8)(None)
	enum class ECFCoreFileRelationType           RelationType;                                      // 0x10(0x1)(None)
	uint8                                        Pad_442[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.FileModule
struct FFileModule
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	int64                                        Fingerprint;                                       // 0x10(0x8)(None)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct cfcore.File
struct FFile
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	int64                                        GameId;                                            // 0x8(0x8)(None)
	int64                                        ModId;                                             // 0x10(0x8)(None)
	bool                                         IsAvailable;                                       // 0x18(0x1)(None)
	uint8                                        Pad_444[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisplayName;                                       // 0x20(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Filename;                                          // 0x30(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ECFCoreFileReleaseType            ReleaseType;                                       // 0x40(0x1)(None)
	enum class ECFCoreFileStatus                 FileStatus;                                        // 0x41(0x1)(None)
	uint8                                        Pad_445[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFileHash>                     Hashes;                                            // 0x48(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FDateTime                             FileDate;                                          // 0x58(0x8)(None)
	int64                                        FileLength;                                        // 0x60(0x8)(None)
	int64                                        FileSizeOnDisk;                                    // 0x68(0x8)(None)
	int64                                        DownloadCount;                                     // 0x70(0x8)(None)
	class FString                                DownloadUrl;                                       // 0x78(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        GameVersions;                                      // 0x88(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FSortableGameVersion>          SortableGameVersions;                              // 0x98(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFileDependency>               Dependencies;                                      // 0xA8(0x10)(AutoWeak, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         ExposeAsAlternative;                               // 0xB8(0x1)(None)
	uint8                                        Pad_446[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        ParentProjectFileId;                               // 0xC0(0x8)(None)
	int64                                        AlternateFileId;                                   // 0xC8(0x8)(None)
	bool                                         IsServerPack;                                      // 0xD0(0x1)(None)
	uint8                                        Pad_447[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        ServerPackFileId;                                  // 0xD8(0x8)(None)
	int64                                        FileFingerprint;                                   // 0xE0(0x8)(None)
	TArray<struct FFileModule>                   Modules;                                           // 0xE8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct cfcore.GameAssets
struct FGameAssets
{
public:
	class FString                                IconUrl;                                           // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                TileUrl;                                           // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CoverUrl;                                          // 0x20(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct cfcore.Game
struct FGame
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Slug;                                              // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FDateTime                             DateModified;                                      // 0x28(0x8)(None)
	struct FGameAssets                           Assets;                                            // 0x30(0x30)(None)
	enum class ECFCoreStatus                     Status;                                            // 0x60(0x1)(None)
	enum class ECFCoreApiStatus                  ApiStatus;                                         // 0x61(0x1)(None)
	uint8                                        Pad_44B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.Me
struct FMe
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	class FString                                Email;                                             // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Username;                                          // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                AvatarUrl;                                         // 0x28(0x10)(None)
	bool                                         HasConnectedAccount;                               // 0x38(0x1)(None)
	uint8                                        Pad_44C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct cfcore.ModLinks
struct FModLinks
{
public:
	class FString                                WebsiteUrl;                                        // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                WikiUrl;                                           // 0x10(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                IssuesUrl;                                         // 0x20(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                SourceUrl;                                         // 0x30(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                ModManagementUrl;                                  // 0x40(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.ModAuthor
struct FModAuthor
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                URL;                                               // 0x18(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct cfcore.ModAsset
struct FModAsset
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	int64                                        ModId;                                             // 0x8(0x8)(None)
	class FString                                Title;                                             // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Description;                                       // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                ThumbnailUrl;                                      // 0x30(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                URL;                                               // 0x40(0x10)(None)
	int32                                        Session;                                           // 0x50(0x4)(None)
	uint8                                        Pad_44E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct cfcore.FileIndex
struct FFileIndex
{
public:
	class FString                                GameVersion;                                       // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int64                                        FileId;                                            // 0x10(0x8)(None)
	class FString                                Filename;                                          // 0x18(0x10)(None)
	enum class ECFCoreFileReleaseType            ReleaseType;                                       // 0x28(0x1)(None)
	uint8                                        Pad_44F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GameVersionTypeId;                                 // 0x2C(0x4)(None)
	enum class ECFCoreModLoaderType              ModLoader;                                         // 0x30(0x1)(None)
	uint8                                        Pad_450[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// ScriptStruct cfcore.CFCoreMod
struct FCFCoreMod
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	int64                                        GameId;                                            // 0x8(0x8)(None)
	int32                                        GamePopularityRank;                                // 0x10(0x4)(None)
	uint8                                        Pad_453[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Slug;                                              // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FModLinks                             Links;                                             // 0x38(0x50)(BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Summary;                                           // 0x88(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	enum class ECFCoreModStatus                  Status;                                            // 0x98(0x1)(None)
	uint8                                        Pad_456[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        DownloadCount;                                     // 0xA0(0x8)(None)
	bool                                         IsFeatured;                                        // 0xA8(0x1)(None)
	uint8                                        Pad_459[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClassId;                                           // 0xAC(0x4)(None)
	int32                                        PrimaryCategoryId;                                 // 0xB0(0x4)(None)
	uint8                                        Pad_45A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCategory>                     Categories;                                        // 0xB8(0x10)(BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FModAuthor>                    Authors;                                           // 0xC8(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FModAsset                             Logo;                                              // 0xD8(0x58)(ContainsInstancedReference, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FModAsset>                     Screenshots;                                       // 0x130(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int64                                        MainFileId;                                        // 0x140(0x8)(None)
	TArray<struct FFile>                         LatestFiles;                                       // 0x148(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FFileIndex>                    LatestFilesIndexes;                                // 0x158(0x10)(None)
	struct FDateTime                             DateCreated;                                       // 0x168(0x8)(None)
	struct FDateTime                             DateModified;                                      // 0x170(0x8)(None)
	struct FDateTime                             DateReleased;                                      // 0x178(0x8)(None)
	bool                                         AllowModDistribution;                              // 0x180(0x1)(None)
	bool                                         IsAvailable;                                       // 0x181(0x1)(None)
	uint8                                        Pad_45C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        ThumbsUpCount;                                     // 0x188(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct cfcore.ReportingReason
struct FReportingReason
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	class FString                                Slug;                                              // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Name;                                              // 0x18(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Description;                                       // 0x28(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.GameVersionsByType
struct FGameVersionsByType
{
public:
	int64                                        Type;                                              // 0x0(0x8)(None)
	TArray<class FString>                        Versions;                                          // 0x8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct cfcore.GameVersionType
struct FGameVersionType
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	int64                                        GameId;                                            // 0x8(0x8)(None)
	class FString                                Name;                                              // 0x10(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Slug;                                              // 0x20(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.CFCoreApiResponsePagination
struct FCFCoreApiResponsePagination
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	int32                                        PageSize;                                          // 0x4(0x4)(None)
	int32                                        ResultCount;                                       // 0x8(0x4)(None)
	int32                                        TotalCount;                                        // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.CFCoreApiResponseError
struct FCFCoreApiResponseError
{
public:
	bool                                         Cancelled;                                         // 0x0(0x1)(None)
	bool                                         badRequest;                                        // 0x1(0x1)(None)
	bool                                         EntityNotFound;                                    // 0x2(0x1)(None)
	bool                                         ServerUnreachable;                                 // 0x3(0x1)(None)
	bool                                         MissingPriviliges;                                 // 0x4(0x1)(None)
	bool                                         TokenExpired;                                      // 0x5(0x1)(None)
	bool                                         ResourceExpired;                                   // 0x6(0x1)(None)
	bool                                         FailedToParseServerResponse;                       // 0x7(0x1)(None)
	int32                                        ErrorCode;                                         // 0x8(0x4)(None)
	uint8                                        Pad_465[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct cfcore.CFCoreError
struct FCFCoreError
{
public:
	bool                                         IsError;                                           // 0x0(0x1)(None)
	enum class ECFCoreErrorCodes                 Code;                                              // 0x1(0x1)(None)
	uint8                                        Pad_47C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreApiResponseError               ApiError;                                          // 0x8(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Description;                                       // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.TermsButton
struct FTermsButton
{
public:
	class FString                                Text;                                              // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.TermsButtons
struct FTermsButtons
{
public:
	struct FTermsButton                          Agree;                                             // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FTermsButton                          Disagree;                                          // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.TermsLink
struct FTermsLink
{
public:
	bool                                         Required;                                          // 0x0(0x1)(None)
	uint8                                        Pad_48A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                URL;                                               // 0x18(0x10)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct cfcore.TermsLinks
struct FTermsLinks
{
public:
	struct FTermsLink                            Website;                                           // 0x0(0x28)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FTermsLink                            Terms;                                             // 0x28(0x28)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FTermsLink                            Privacy;                                           // 0x50(0x28)(None)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct cfcore.TermsContent
struct FTermsContent
{
public:
	class FString                                Language;                                          // 0x0(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                PlainText;                                         // 0x10(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Html;                                              // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FTermsButtons                         buttons;                                           // 0x30(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FTermsLinks                           Links;                                             // 0x50(0x78)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct cfcore.Terms
struct FTerms
{
public:
	struct FDateTime                             UpdateDate;                                        // 0x0(0x8)(None)
	struct FTermsContent                         Content;                                           // 0x8(0xC8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.ModsDirInfo
struct FModsDirInfo
{
public:
	class FString                                PathOnDisk;                                        // 0x0(0x10)(None)
	int64                                        TotalDiskSizeInBytes;                              // 0x10(0x8)(None)
	int64                                        FreeDiskSizeInBytes;                               // 0x18(0x8)(None)
};

// 0x3B0 (0x3B0 - 0x0)
// ScriptStruct cfcore.InstalledMod
struct FInstalledMod
{
public:
	struct FDateTime                             DateInstalled;                                     // 0x0(0x8)(None)
	struct FDateTime                             DateUpdated;                                       // 0x8(0x8)(None)
	enum class EInstalledModStatus               Status;                                            // 0x10(0x1)(None)
	uint8                                        Pad_48F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PathOnDisk;                                        // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         Enabled;                                           // 0x28(0x1)(None)
	uint8                                        Pad_490[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreMod                            Details;                                           // 0x30(0x190)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FFile                                 InstalledFile;                                     // 0x1C0(0xF8)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FFile                                 LatestUpdatedFile;                                 // 0x2B8(0xF8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.LibraryProgressDataTransfer
struct FLibraryProgressDataTransfer
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(None)
	uint8                                        Pad_496[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        TransferredBytes;                                  // 0x8(0x8)(None)
	int64                                        TransferRateBytesPerSecond;                        // 0x10(0x8)(None)
	class FString                                Filename;                                          // 0x18(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.LibraryProgress
struct FLibraryProgress
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	int64                                        FileId;                                            // 0x8(0x8)(None)
	enum class ELibraryProgressState             State;                                             // 0x10(0x1)(None)
	uint8                                        Pad_497[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLibraryProgressDataTransfer          DataTransfer;                                      // 0x18(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct cfcore.ModsUpdateProgress
struct FModsUpdateProgress
{
public:
	enum class EModsUpdateProgressState          State;                                             // 0x0(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.UploadedModFile
struct FUploadedModFile
{
public:
	int64                                        FileId;                                            // 0x0(0x8)(None)
	class FString                                Directory;                                         // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Filename;                                          // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.FileTransferProgress
struct FFileTransferProgress
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(None)
	uint8                                        Pad_499[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        TransferredBytes;                                  // 0x8(0x8)(None)
	int64                                        bytesPerSecond;                                    // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.ApiResponseErrorInternal
struct FApiResponseErrorInternal
{
public:
	int32                                        StatusCode;                                        // 0x0(0x4)(None)
	int32                                        ErrorCode;                                         // 0x4(0x4)(None)
	class FString                                Message;                                           // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.AssureServerModsUpdatedParams
struct FAssureServerModsUpdatedParams
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                DevModIds;                                         // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.AuthToken
struct FAuthToken
{
public:
	class FString                                Token;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.AuthTokenResponse
struct FAuthTokenResponse
{
public:
	struct FAuthToken                            Data;                                              // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.CategoryArrayResponse
struct FCategoryArrayResponse
{
public:
	TArray<struct FCategory>                     Data;                                              // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct cfcore.CFCoreApiRequestPagination
struct FCFCoreApiRequestPagination
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	int32                                        PageSize;                                          // 0x4(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct cfcore.CFCoreFileSize
struct FCFCoreFileSize
{
public:
	int32                                        Kb;                                                // 0x0(0x4)(None)
	int32                                        Mb;                                                // 0x4(0x4)(None)
	int32                                        Gb;                                                // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct cfcore.CFCoreSettingsThrottling
struct FCFCoreSettingsThrottling
{
public:
	int64                                        DiskWriteBytesPerSec;                              // 0x0(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct cfcore.CFCoreSettings
struct FCFCoreSettings
{
public:
	class FString                                DefaultLanguage;                                   // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int64                                        GameId;                                            // 0x10(0x8)(None)
	class FString                                ApiKey;                                            // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        MaxConcurrentInstallations;                        // 0x28(0x4)(None)
	uint8                                        Pad_49A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModsDirectory;                                     // 0x30(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x40(0x1)(None)
	uint8                                        Pad_49B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserDataDirectory;                                 // 0x48(0x10)(None)
	bool                                         IsServer;                                          // 0x58(0x1)(None)
	bool                                         IsServerPcOnly;                                    // 0x59(0x1)(None)
	uint8                                        Pad_49C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x60(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct cfcore.CreateCookedModFileRequest
struct FCreateCookedModFileRequest
{
public:
	enum class ECFCorePlatform                   Platform;                                          // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct cfcore.ModFileChunkedInfo
struct FModFileChunkedInfo
{
public:
	int64                                        FileId;                                            // 0x0(0x8)(None)
	class FString                                Directory;                                         // 0x8(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                Filename;                                          // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class FString                                UploadId;                                          // 0x28(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct cfcore.CreateModFileChunkedResponse
struct FCreateModFileChunkedResponse
{
public:
	struct FModFileChunkedInfo                   Data;                                              // 0x0(0x38)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct cfcore.ModFileCookingOptions
struct FModFileCookingOptions
{
public:
	bool                                         IsSourceFile;                                      // 0x0(0x1)(None)
	enum class ECFCoreAutoCookingType            AutoCookingType;                                   // 0x1(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct cfcore.CreateModFileRequest
struct FCreateModFileRequest
{
public:
	enum class ECFCoreChangelogMarkupType        ChangelogType;                                     // 0x0(0x1)(None)
	uint8                                        Pad_49E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Changelog;                                         // 0x8(0x10)(BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Filename;                                          // 0x18(0x10)(ContainsInstancedReference, BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DisplayName;                                       // 0x28(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                GameVersionIds;                                    // 0x38(0x10)(None)
	enum class ECFCoreFileReleaseType            ReleaseType;                                       // 0x48(0x1)(None)
	struct FModFileCookingOptions                CookingOptions;                                    // 0x49(0x2)(None)
	uint8                                        Pad_49F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        FileLength;                                        // 0x50(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.CreateModFileResponse
struct FCreateModFileResponse
{
public:
	struct FUploadedModFile                      Data;                                              // 0x0(0x28)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct cfcore.CreateModRequest
struct FCreateModRequest
{
public:
	int64                                        ClassId;                                           // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Summary;                                           // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ECFCoreMakrupType                 DescriptionType;                                   // 0x28(0x1)(None)
	uint8                                        Pad_4A1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int64                                        PrimaryCategoryId;                                 // 0x40(0x8)(None)
	TArray<int64>                                GameCategoryIds;                                   // 0x48(0x10)(None)
	bool                                         IsExperimental;                                    // 0x58(0x1)(None)
	uint8                                        Pad_4A3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.ExternalAuthAdditionalInfo
struct FExternalAuthAdditionalInfo
{
public:
	struct FDateTime                             EulaAcceptTime;                                    // 0x0(0x8)(None)
	class FString                                Environment;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.ExternalAuthAdditionalInfoRequestDto
struct FExternalAuthAdditionalInfoRequestDto
{
public:
	class FString                                EulaAcceptTime;                                    // 0x0(0x10)(AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Environment;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.FileArrayResponse
struct FFileArrayResponse
{
public:
	TArray<struct FFile>                         Data;                                              // 0x0(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x10(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct cfcore.GameResponse
struct FGameResponse
{
public:
	struct FGame                                 Data;                                              // 0x0(0x68)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.GameVersionDetailed
struct FGameVersionDetailed
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Slug;                                              // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.GameVersionsDetailedByType
struct FGameVersionsDetailedByType
{
public:
	int64                                        Type;                                              // 0x0(0x8)(None)
	TArray<struct FGameVersionDetailed>          Versions;                                          // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.GameVersionsDetailedByTypeArrayResponse
struct FGameVersionsDetailedByTypeArrayResponse
{
public:
	TArray<struct FGameVersionsDetailedByType>   Data;                                              // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.GameVersionByTypeArrayResponse
struct FGameVersionByTypeArrayResponse
{
public:
	TArray<struct FGameVersionsByType>           Data;                                              // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.GameVersionTypeArrayResponse
struct FGameVersionTypeArrayResponse
{
public:
	TArray<struct FGameVersionType>              Data;                                              // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.GenerateTempTokenResponse
struct FGenerateTempTokenResponse
{
public:
	class FString                                Data;                                              // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.GetAuthTokenByExternalProviderRequestDto
struct FGetAuthTokenByExternalProviderRequestDto
{
public:
	class FString                                Provider;                                          // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Token;                                             // 0x10(0x10)(SimpleDisplay, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FExternalAuthAdditionalInfoRequestDto AdditionalInfo;                                    // 0x20(0x20)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.GetAuthTokenRequestDto
struct FGetAuthTokenRequestDto
{
public:
	class FString                                Email;                                             // 0x0(0x10)(None)
	int32                                        Otp;                                               // 0x10(0x4)(None)
	uint8                                        Pad_4A6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.GetBlockedDetailsResponse
struct FGetBlockedDetailsResponse
{
public:
	struct FBlockedDetails                       Data;                                              // 0x0(0x40)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct cfcore.CFCoreGetCategoriesFilter
struct FCFCoreGetCategoriesFilter
{
public:
	int32                                        ClassId;                                           // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.GetFilesByIdsRequestDto
struct FGetFilesByIdsRequestDto
{
public:
	TArray<int64>                                FileIds;                                           // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.CFCoreGetFilesFilter
struct FCFCoreGetFilesFilter
{
public:
	TArray<int64>                                FileIds;                                           // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.GetModsByIdsRequestDto
struct FGetModsByIdsRequestDto
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                DevModIds;                                         // 0x10(0x10)(None)
	bool                                         FilterPcOnly;                                      // 0x20(0x1)(None)
	uint8                                        Pad_4AB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.CFCoreGetModsFilter
struct FCFCoreGetModsFilter
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                DevModIds;                                         // 0x10(0x10)(None)
	bool                                         FilterPcOnly;                                      // 0x20(0x1)(None)
	uint8                                        Pad_4AC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.InstalledModArray
struct FInstalledModArray
{
public:
	TArray<struct FInstalledMod>                 InstalledMods;                                     // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.MatchPlatformFilesFilter
struct FMatchPlatformFilesFilter
{
public:
	TArray<int64>                                FileIds;                                           // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.MeResponse
struct FMeResponse
{
public:
	struct FMe                                   Data;                                              // 0x0(0x40)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore.ModArrayResponse
struct FModArrayResponse
{
public:
	TArray<struct FCFCoreMod>                    Data;                                              // 0x0(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.ModFileChunkMetadata
struct FModFileChunkMetadata
{
public:
	class FString                                ChunkedUploadId;                                   // 0x0(0x10)(None)
	int32                                        TotalChunks;                                       // 0x10(0x4)(None)
	int32                                        ChunkIndex;                                        // 0x14(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.ModIdArrayResponse
struct FModIdArrayResponse
{
public:
	TArray<int64>                                Data;                                              // 0x0(0x10)(None)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct cfcore.ModResponse
struct FModResponse
{
public:
	struct FCFCoreMod                            Data;                                              // 0x0(0x190)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.ReportingReasonsResponse
struct FReportingReasonsResponse
{
public:
	TArray<struct FReportingReason>              Data;                                              // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct cfcore.ReportModRequestDto
struct FReportModRequestDto
{
public:
	int64                                        ReportReasonId;                                    // 0x0(0x8)(None)
	class FString                                ReportText;                                        // 0x8(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct cfcore.SDKVersion
struct FSDKVersion
{
public:
	int32                                        Build;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct cfcore.SDKVersionResponse
struct FSDKVersionResponse
{
public:
	struct FSDKVersion                           Data;                                              // 0x0(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct cfcore.CFCoreSearchModsFilter
struct FCFCoreSearchModsFilter
{
public:
	int32                                        ClassId;                                           // 0x0(0x4)(None)
	int32                                        CategoryId;                                        // 0x4(0x4)(None)
	class FString                                GameVersion;                                       // 0x8(0x10)(SimpleDisplay, BlueprintCallable, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                SearchFilter;                                      // 0x18(0x10)(None)
	enum class ECFCoreModsSearchSortField        SortField;                                         // 0x28(0x1)(None)
	enum class ECFCoreSortOrder                  SortOrder;                                         // 0x29(0x1)(None)
	enum class ECFCoreModLoaderType              ModLoaderType;                                     // 0x2A(0x1)(None)
	uint8                                        Pad_4B6[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GameVersionTypeId;                                 // 0x2C(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.SendSecurityCodeRequestDto
struct FSendSecurityCodeRequestDto
{
public:
	class FString                                Email;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.StringResponse
struct FStringResponse
{
public:
	class FString                                Data;                                              // 0x0(0x10)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct cfcore.TermsResponse
struct FTermsResponse
{
public:
	struct FTerms                                Data;                                              // 0x0(0xD0)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct cfcore.UnblockModsRequest
struct FUnblockModsRequest
{
public:
	TArray<int64>                                blockedAuthors;                                    // 0x0(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                blockedMods;                                       // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                blockedServerMods;                                 // 0x20(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        blockedServers;                                    // 0x30(0x10)(None)
};

// 0x0 (0x60 - 0x60)
// ScriptStruct cfcore.UpdateModRequest
struct FUpdateModRequest : public FCreateModRequest
{
public:
};

// 0x4 (0x4 - 0x0)
// ScriptStruct cfcore.UpdateVoteRequestDto
struct FUpdateVoteRequestDto
{
public:
	int32                                        Direction;                                         // 0x0(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct cfcore.UploadedModFileResponse
struct FUploadedModFileResponse
{
public:
	struct FUploadedModFile                      Data;                                              // 0x0(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct cfcore.UploadModFileChunkResponse
struct FUploadModFileChunkResponse
{
public:
	bool                                         Data;                                              // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore.UserContextInfo
struct FUserContextInfo
{
public:
	class FString                                AuthToken;                                         // 0x0(0x10)(None)
};

}


