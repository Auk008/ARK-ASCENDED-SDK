#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
class UHeightfieldMinMaxTexture : public UObject
{
public:
	class UTexture2D*                            Texture;                                           // 0x28(0x8)(ZeroConstructor)
	class UTexture2D*                            LodBiasTexture;                                    // 0x30(0x8)(ZeroConstructor)
	class UTexture2D*                            LodBiasMinMaxTexture;                              // 0x38(0x8)(None)
	int32                                        MaxCPULevels;                                      // 0x40(0x4)(None)
	uint8                                        Pad_B97[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     TextureData;                                       // 0x48(0x10)(None)
	struct FIntPoint                             TextureDataSize;                                   // 0x58(0x8)(None)
	TArray<int32>                                TextureDataMips;                                   // 0x60(0x10)(None)

	static class UClass* StaticClass();
	static class UHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0xB0(0x8)(ZeroConstructor)
	enum class EMaterialSamplerType              SamplerType;                                       // 0xB8(0x1)(None)
	uint8                                        Pad_B9C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
class AVirtualHeightfieldMesh : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*      VirtualHeightfieldMeshComponent;                   // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AVirtualHeightfieldMesh* GetDefaultObj();

};

// 0x80 (0x700 - 0x680)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
public:
	TSoftObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture;                                    // 0x680(0x30)(ZeroConstructor)
	class ARuntimeVirtualTextureVolume*          VirtualTextureRef;                                 // 0x6B0(0x8)(ZeroConstructor)
	class UObject*                               VirtualTextureThumbnail;                           // 0x6B8(0x8)(ZeroConstructor)
	bool                                         bCopyBoundsButton;                                 // 0x6C0(0x1)(None)
	uint8                                        Pad_BAE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0x6C8(0x8)(ZeroConstructor)
	int32                                        NumMinMaxTextureBuildLevels;                       // 0x6D0(0x4)(None)
	bool                                         bBuildMinMaxTextureButton;                         // 0x6D4(0x1)(None)
	uint8                                        Pad_BB0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x6D8(0x8)(ZeroConstructor)
	float                                        Lod0ScreenSize;                                    // 0x6E0(0x4)(None)
	float                                        Lod0Distribution;                                  // 0x6E4(0x4)(None)
	float                                        LodDistribution;                                   // 0x6E8(0x4)(None)
	float                                        LodBiasScale;                                      // 0x6EC(0x4)(None)
	int32                                        NumForceLoadLods;                                  // 0x6F0(0x4)(None)
	int32                                        NumOcclusionLods;                                  // 0x6F4(0x4)(None)
	bool                                         bHiddenInEditor;                                   // 0x6F8(0x1)(None)
	bool                                         bWorldPositionOffsetVelocity;                      // 0x6F9(0x1)(None)
	uint8                                        Pad_BB1[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVirtualHeightfieldMeshComponent* GetDefaultObj();

	void GatherHideFlags(bool InOutHidePrimitivesInEditor, bool InOutHidePrimitivesInGame);
};

}


