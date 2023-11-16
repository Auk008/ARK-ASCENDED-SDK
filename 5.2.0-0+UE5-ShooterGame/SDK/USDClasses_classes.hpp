#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x1E8 - 0x28)
// Class USDClasses.UsdAssetCache
class UUsdAssetCache : public UObject
{
public:
	TMap<class FString, class UObject*>          TransientStorage;                                  // 0x28(0x50)(ZeroConstructor)
	TMap<class FString, class UObject*>          PersistentStorage;                                 // 0x78(0x50)(ZeroConstructor)
	bool                                         bAllowPersistentStorage;                           // 0xC8(0x1)(None)
	uint8                                        Pad_F65[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TWeakObjectPtr<class UObject>>          OwnedAssets;                                       // 0xD0(0x50)(ZeroConstructor)
	TMap<class FString, TWeakObjectPtr<class UObject>> PrimPathToAssets;                                  // 0x120(0x50)(None)
	uint8                                        Pad_F67[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUsdAssetCache* GetDefaultObj();

};

// 0x178 (0x1A0 - 0x28)
// Class USDClasses.UsdAssetCache2
class UUsdAssetCache2 : public UObject
{
public:
	double                                       UnreferencedAssetStorageSizeMB;                    // 0x28(0x8)(None)
	double                                       PersistentAssetStorageSizeMB;                      // 0x30(0x8)(None)
	TMap<class FString, class UObject*>          AssetStorage;                                      // 0x38(0x50)(None)
	uint8                                        Pad_F7A[0x118];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUsdAssetCache2* GetDefaultObj();

	void Reset();
	void RemoveAssetReference(class UObject* Asset, class UObject* Referencer, bool ReturnValue);
	void RemoveAsset(const class FString& Hash, class UObject* ReturnValue);
	void RemoveAllAssetReferences(class UObject* Referencer, bool ReturnValue);
	void RefreshStorage();
	void IsAssetOwnedByCache(const class FString& AssetPath, bool ReturnValue);
	void GetNumAssets(int32 ReturnValue);
	void GetHashForAsset(class UObject* Asset, const class FString& ReturnValue);
	void GetCachedAsset(const class FString& Hash, class UObject* ReturnValue);
	void GetAllLoadedAssets(const TArray<class UObject*>& ReturnValue);
	void GetAllCachedAssetPaths(const TArray<class FString>& ReturnValue);
	void GetAllAssetHashes(const TArray<class FString>& ReturnValue);
	void CanRemoveAsset(const class FString& Hash, bool ReturnValue);
	void CacheAsset(const class FString& Hash, class UObject* Asset, class UObject* Referencer);
	void AddAssetReference(class UObject* Asset, class UObject* Referencer, bool ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class USDClasses.UsdAssetImportData
class UUsdAssetImportData : public UAssetImportData
{
public:
	class FString                                PrimPath;                                          // 0x28(0x10)(None)
	class UObject*                               ImportOptions;                                     // 0x38(0x8)(None)

	static class UClass* StaticClass();
	static class UUsdAssetImportData* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class USDClasses.UsdAnimSequenceAssetImportData
class UUsdAnimSequenceAssetImportData : public UUsdAssetImportData
{
public:
	float                                        LayerStartOffsetSeconds;                           // 0x40(0x4)(None)
	uint8                                        Pad_F7B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUsdAnimSequenceAssetImportData* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class USDClasses.UsdMeshAssetImportData
class UUsdMeshAssetImportData : public UUsdAssetImportData
{
public:
	TMap<int32, struct FUsdPrimPathList>         MaterialSlotToPrimPaths;                           // 0x40(0x50)(None)

	static class UClass* StaticClass();
	static class UUsdMeshAssetImportData* GetDefaultObj();

};

// 0x1C8 (0x200 - 0x38)
// Class USDClasses.UsdProjectSettings
class UUsdProjectSettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                AdditionalPluginDirectories;                       // 0x38(0x10)(None)
	TArray<class FName>                          AdditionalMaterialPurposes;                        // 0x48(0x10)(None)
	struct FSoftObjectPath                       DefaultAssetCache;                                 // 0x58(0x20)(None)
	bool                                         bShowCreateDefaultAssetCacheDialog;                // 0x78(0x1)(None)
	bool                                         bShowConfirmationWhenClearingLayers;               // 0x79(0x1)(None)
	bool                                         bShowConfirmationWhenMutingDirtyLayers;            // 0x7A(0x1)(None)
	bool                                         bShowOverriddenOpinionsWarning;                    // 0x7B(0x1)(None)
	bool                                         bShowWarningOnIncompleteDuplication;               // 0x7C(0x1)(None)
	bool                                         bShowTransformTrackOnCameraComponentWarning;       // 0x7D(0x1)(None)
	enum class EUsdSaveDialogBehavior            ShowSaveLayersDialogWhenSaving;                    // 0x7E(0x1)(None)
	enum class EUsdSaveDialogBehavior            ShowSaveLayersDialogWhenClosing;                   // 0x7F(0x1)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceMaterial;                   // 0x80(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentMaterial;        // 0xA0(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTwoSidedMaterial;           // 0xC0(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentTwoSidedMaterial; // 0xE0(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceVTMaterial;                 // 0x100(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentVTMaterial;      // 0x120(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTwoSidedVTMaterial;         // 0x140(0x20)(None)
	struct FSoftObjectPath                       ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial; // 0x160(0x20)(None)
	struct FSoftObjectPath                       ReferenceDisplayColorMaterial;                     // 0x180(0x20)(None)
	struct FSoftObjectPath                       ReferenceDisplayColorAndOpacityMaterial;           // 0x1A0(0x20)(None)
	struct FSoftObjectPath                       ReferenceDisplayColorTwoSidedMaterial;             // 0x1C0(0x20)(None)
	struct FSoftObjectPath                       ReferenceDisplayColorAndOpacityTwoSidedMaterial;   // 0x1E0(0x20)(None)

	static class UClass* StaticClass();
	static class UUsdProjectSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class USDClasses.UsdReferenceOptions
class UUsdReferenceOptions : public UObject
{
public:
	bool                                         bInternalReference;                                // 0x28(0x1)(None)
	uint8                                        Pad_F87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilePath                             TargetFile;                                        // 0x30(0x10)(None)
	bool                                         bUseDefaultPrim;                                   // 0x40(0x1)(None)
	uint8                                        Pad_F88[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetPrimPath;                                    // 0x48(0x10)(None)
	float                                        TimeCodeOffset;                                    // 0x58(0x4)(None)
	float                                        TimeCodeScale;                                     // 0x5C(0x4)(None)

	static class UClass* StaticClass();
	static class UUsdReferenceOptions* GetDefaultObj();

};

}


