#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class AssetTags.AssetTagsSubsystem
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass();
	static class UAssetTagsSubsystem* GetDefaultObj();

	void K2_GetCollectionsContainingAsset(const struct FSoftObjectPath& AssetPath, const TArray<class FName>& ReturnValue);
	void GetCollectionsContainingAssetPtr(class UObject* AssetPtr, const TArray<class FName>& ReturnValue);
	void GetCollectionsContainingAssetData(const struct FAssetData& AssetData, const TArray<class FName>& ReturnValue);
	void GetCollectionsContainingAsset(class FName AssetPathName, const TArray<class FName>& ReturnValue);
	void GetCollections(const TArray<class FName>& ReturnValue);
	void GetAssetsInCollection(class FName Name, const TArray<struct FAssetData>& ReturnValue);
	void CollectionExists(class FName Name, bool ReturnValue);
};

}


