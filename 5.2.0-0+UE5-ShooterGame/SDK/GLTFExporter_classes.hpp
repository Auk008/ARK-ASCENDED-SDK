#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA0 - 0x28)
// Class GLTFExporter.GLTFExportOptions
class UGLTFExportOptions : public UObject
{
public:
	float                                        ExportUniformScale;                                // 0x28(0x4)(None)
	bool                                         bExportPreviewMesh;                                // 0x2C(0x1)(None)
	bool                                         bSkipNearDefaultValues;                            // 0x2D(0x1)(None)
	bool                                         bExportProxyMaterials;                             // 0x2E(0x1)(None)
	bool                                         bExportUnlitMaterials;                             // 0x2F(0x1)(None)
	bool                                         bExportClearCoatMaterials;                         // 0x30(0x1)(None)
	enum class EGLTFMaterialBakeMode             BakeMaterialInputs;                                // 0x31(0x1)(None)
	enum class EGLTFMaterialBakeSizePOT          DefaultMaterialBakeSize;                           // 0x32(0x1)(None)
	enum class ETextureFilter                    DefaultMaterialBakeFilter;                         // 0x33(0x1)(None)
	enum class ETextureAddress                   DefaultMaterialBakeTiling;                         // 0x34(0x1)(None)
	uint8                                        Pad_2280[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x38(0x50)(None)
	int32                                        DefaultLevelOfDetail;                              // 0x88(0x4)(None)
	bool                                         bExportVertexColors;                               // 0x8C(0x1)(None)
	bool                                         bExportVertexSkinWeights;                          // 0x8D(0x1)(None)
	bool                                         bUseMeshQuantization;                              // 0x8E(0x1)(None)
	bool                                         bExportLevelSequences;                             // 0x8F(0x1)(None)
	bool                                         bExportAnimationSequences;                         // 0x90(0x1)(None)
	enum class EGLTFTextureImageFormat           TextureImageFormat;                                // 0x91(0x1)(None)
	uint8                                        Pad_2282[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextureImageQuality;                               // 0x94(0x4)(None)
	bool                                         bExportTextureTransforms;                          // 0x98(0x1)(None)
	bool                                         bAdjustNormalmaps;                                 // 0x99(0x1)(None)
	bool                                         bExportHiddenInGame;                               // 0x9A(0x1)(None)
	bool                                         bExportLights;                                     // 0x9B(0x1)(None)
	bool                                         bExportCameras;                                    // 0x9C(0x1)(None)
	enum class EGLTFMaterialVariantMode          ExportMaterialVariants;                            // 0x9D(0x1)(None)
	uint8                                        Pad_2284[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGLTFExportOptions* GetDefaultObj();

	void ResetToDefault();
};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFExporter
class UGLTFExporter : public UExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFExporter* GetDefaultObj();

	void ExportToGLTF(class UObject* Object, const class FString& FilePath, class UGLTFExportOptions* Options, TSet<class AActor*> SelectedActors, const struct FGLTFExportMessages& OutMessages, bool ReturnValue);
};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFAnimSequenceExporter
class UGLTFAnimSequenceExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFAnimSequenceExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFLevelExporter
class UGLTFLevelExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFLevelExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFLevelSequenceExporter
class UGLTFLevelSequenceExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFLevelSequenceExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFLevelVariantSetsExporter
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFLevelVariantSetsExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFMaterialExporter
class UGLTFMaterialExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFMaterialExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFSkeletalMeshExporter
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFSkeletalMeshExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFStaticMeshExporter
class UGLTFStaticMeshExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFStaticMeshExporter* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GLTFExporter.GLTFProxyOptions
class UGLTFProxyOptions : public UObject
{
public:
	bool                                         bBakeMaterialInputs;                               // 0x28(0x1)(None)
	enum class EGLTFMaterialBakeSizePOT          DefaultMaterialBakeSize;                           // 0x29(0x1)(None)
	enum class ETextureFilter                    DefaultMaterialBakeFilter;                         // 0x2A(0x1)(None)
	enum class ETextureAddress                   DefaultMaterialBakeTiling;                         // 0x2B(0x1)(None)
	uint8                                        Pad_22A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x30(0x50)(None)

	static class UClass* StaticClass();
	static class UGLTFProxyOptions* GetDefaultObj();

	void ResetToDefault();
};

// 0x60 (0x88 - 0x28)
// Class GLTFExporter.GLTFMaterialExportOptions
class UGLTFMaterialExportOptions : public UAssetUserData
{
public:
	class UMaterialInterface*                    Proxy;                                             // 0x28(0x8)(None)
	struct FGLTFOverrideMaterialBakeSettings     Default;                                           // 0x30(0x6)(None)
	uint8                                        Pad_22A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs;                                            // 0x38(0x50)(None)

	static class UClass* StaticClass();
	static class UGLTFMaterialExportOptions* GetDefaultObj();

};

}


