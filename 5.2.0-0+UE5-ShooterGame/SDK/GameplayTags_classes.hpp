#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameplayTags.BlueprintGameplayTagLibrary
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintGameplayTagLibrary* GetDefaultObj();

	void RemoveGameplayTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool ReturnValue);
	void NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B, bool ReturnValue);
	void NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B, bool ReturnValue);
	void NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B, bool ReturnValue);
	void NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B, bool ReturnValue);
	void MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch, bool ReturnValue);
	void MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch, bool ReturnValue);
	void MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value, const struct FGameplayTagContainer& ReturnValue);
	void MakeLiteralGameplayTag(const struct FGameplayTag& Value, const struct FGameplayTag& ReturnValue);
	void MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery, const struct FGameplayTagQuery& ReturnValue);
	void MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag, const struct FGameplayTagContainer& ReturnValue);
	void MakeGameplayTagContainerFromArray(const TArray<struct FGameplayTag>& GameplayTags, const struct FGameplayTagContainer& ReturnValue);
	void IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery, bool ReturnValue);
	void IsGameplayTagValid(const struct FGameplayTag& GameplayTag, bool ReturnValue);
	void HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch, bool ReturnValue);
	void HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch, bool ReturnValue);
	void HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch, bool ReturnValue);
	void HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer, bool ReturnValue);
	void GetTagName(const struct FGameplayTag& GameplayTag, class FName ReturnValue);
	void GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer, int32 ReturnValue);
	void GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer, const class FString& ReturnValue);
	void GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag, const class FString& ReturnValue);
	void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, const TArray<class AActor*>& OutActors);
	void EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B, bool ReturnValue);
	void EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B, bool ReturnValue);
	void DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTag& Tag, bool ReturnValue);
	void DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery, bool ReturnValue);
	void BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, const TArray<struct FGameplayTag>& GameplayTags);
	void AppendGameplayTagContainers(const struct FGameplayTagContainer& InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	void AddGameplayTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.GameplayTagAssetInterface
class IGameplayTagAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTagAssetInterface* GetDefaultObj();

	void HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck, bool ReturnValue);
	void HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool ReturnValue);
	void HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool ReturnValue);
	void GetOwnedGameplayTags(const struct FGameplayTagContainer& TagContainer);
};

// 0x70 (0x98 - 0x28)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x28(0x10)(None)
	uint8                                        Pad_26E7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x48(0x8)(None)
	struct FGameplayTagQuery                     TagQueryExportText_Helper;                         // 0x50(0x48)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x28(0x20)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_26EE[0x138];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FGameplayTagSource> TagSources;                                        // 0x160(0x50)(ZeroConstructor)
	uint8                                        Pad_26EF[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x238(0x10)(None)

	static class UClass* StaticClass();
	static class UGameplayTagsManager* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(None)
	TArray<struct FGameplayTagTableRow>          GameplayTagList;                                   // 0x38(0x10)(None)

	static class UClass* StaticClass();
	static class UGameplayTagsList* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(None)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x38(0x10)(None)

	static class UClass* StaticClass();
	static class URestrictedGameplayTagsList* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x48(0x1)(None)
	bool                                         WarnOnInvalidTags;                                 // 0x49(0x1)(None)
	bool                                         ClearInvalidTags;                                  // 0x4A(0x1)(None)
	bool                                         AllowEditorTagUnloading;                           // 0x4B(0x1)(None)
	bool                                         AllowGameTagUnloading;                             // 0x4C(0x1)(None)
	bool                                         FastReplication;                                   // 0x4D(0x1)(None)
	uint8                                        Pad_26F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InvalidTagCharacters;                              // 0x50(0x10)(None)
	TArray<struct FGameplayTagCategoryRemap>     CategoryRemapping;                                 // 0x60(0x10)(None)
	TArray<struct FSoftObjectPath>               GameplayTagTableList;                              // 0x70(0x10)(None)
	TArray<struct FGameplayTagRedirect>          GameplayTagRedirects;                              // 0x80(0x10)(None)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x90(0x10)(None)
	int32                                        NumBitsForContainerSize;                           // 0xA0(0x4)(None)
	int32                                        NetIndexFirstBitSegment;                           // 0xA4(0x4)(None)
	TArray<struct FRestrictedConfigInfo>         RestrictedConfigFiles;                             // 0xA8(0x10)(None)

	static class UClass* StaticClass();
	static class UGameplayTagsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x38(0x10)(None)
	class FName                                  FavoriteTagSource;                                 // 0x48(0x8)(None)

	static class UClass* StaticClass();
	static class UGameplayTagsDeveloperSettings* GetDefaultObj();

};

}


