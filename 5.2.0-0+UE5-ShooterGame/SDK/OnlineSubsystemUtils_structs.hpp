#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineProxyStoreOfferDiscountType : uint8
{
	NotOnSale                      = 0,
	Percentage                     = 1,
	DiscountAmount                 = 2,
	PayAmount                      = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class EInAppPurchaseStatus : uint8
{
	Invalid                        = 0,
	Failed                         = 1,
	Deferred                       = 2,
	Canceled                       = 3,
	Purchased                      = 4,
	Restored                       = 5,
	EInAppPurchaseStatus_MAX       = 6,
};

enum class EBeaconConnectionState : uint8
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4,
};

enum class EClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ReservationRemoveMembers       = 6,
	AddOrUpdateReservation         = 7,
	EClientRequestType_MAX         = 8,
};

enum class EPartyReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX    = 16,
};

enum class ESpectatorClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ESpectatorClientRequestType_MAX = 6,
};

enum class ESpectatorReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	SpectatorLimitReached          = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x120 - 0x0)
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct FBlueprintSessionResult
{
public:
	uint8                                        Pad_23C[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  Title;                                             // 0x10(0x18)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  Description;                                       // 0x28(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  LongDescription;                                   // 0x40(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  RegularPriceText;                                  // 0x58(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        RegularPrice;                                      // 0x70(0x4)(None)
	uint8                                        Pad_23F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PriceText;                                         // 0x78(0x18)(BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        NumericPrice;                                      // 0x90(0x4)(None)
	uint8                                        Pad_241[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyCode;                                      // 0x98(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ReleaseDate;                                       // 0xA8(0x8)(None)
	struct FDateTime                             ExpirationDate;                                    // 0xB0(0x8)(None)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType;                                      // 0xB8(0x1)(None)
	uint8                                        Pad_242[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           DynamicFields;                                     // 0xC0(0x50)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                ItemID;                                            // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                ItemID;                                            // 0x10(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation
{
public:
	struct FUniqueNetIdRepl                      UniqueID;                                          // 0x0(0x30)(SimpleDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ValidationStr;                                     // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Platform;                                          // 0x40(0x10)(None)
	bool                                         bAllowCrossplay;                                   // 0x50(0x1)(None)
	uint8                                        Pad_24A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTime;                                       // 0x54(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2
{
public:
	class FString                                ProductIdentifier;                                 // 0x0(0x10)(None)
	bool                                         bIsConsumable;                                     // 0x10(0x1)(None)
	uint8                                        Pad_24B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                TransactionIdentifier;                             // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DisplayName;                                       // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DisplayDescription;                                // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DisplayPrice;                                      // 0x40(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        RawPrice;                                          // 0x50(0x4)(None)
	uint8                                        Pad_24C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyCode;                                      // 0x58(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CurrencySymbol;                                    // 0x68(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DecimalSeparator;                                  // 0x78(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                GroupingSeparator;                                 // 0x88(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                ReceiptData;                                       // 0x98(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TMap<class FString, class FString>           DynamicFields;                                     // 0xA8(0x50)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal
{
public:
	class FString                                ID;                                                // 0x0(0x10)(AssetRegistrySearchable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Token;                                             // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Type;                                              // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<uint8>                                TokenBytes;                                        // 0x30(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(None)
	uint8                                        Pad_24D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x8(0x30)(AutoWeak, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPlayerReservation>            PartyMembers;                                      // 0x38(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FPlayerReservation>            RemovedPartyMembers;                               // 0x48(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct FPartyBeaconCrossplayPlatformMapping
{
public:
	class FString                                PlatformName;                                      // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                PlatformType;                                      // 0x10(0x10)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation
{
public:
	struct FUniqueNetIdRepl                      SpectatorId;                                       // 0x0(0x30)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPlayerReservation                    Spectator;                                         // 0x30(0x58)(None)
};

}


