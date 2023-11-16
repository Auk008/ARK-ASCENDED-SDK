#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x6B0 - 0x680)
// Class Renderer.SparseVolumeTextureViewerComponent
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                  SparseVolumeTexturePreview;                        // 0x680(0x8)(ZeroConstructor)
	uint8                                        bAnimate : 1;                                      // Mask: 0x1, PropSize: 0x10x688(0x1)(None)
	uint8                                        BitPad_3C : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_424[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationFrame;                                    // 0x68C(0x4)(None)
	float                                        FrameRate;                                         // 0x690(0x4)(None)
	float                                        AnimationTime;                                     // 0x694(0x4)(None)
	int32                                        ComponentToVisualize;                              // 0x698(0x4)(None)
	uint8                                        Pad_425[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USparseVolumeTextureViewerComponent* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class Renderer.SparseVolumeTextureViewer
class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*   SparseVolumeTextureViewerComponent;                // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ASparseVolumeTextureViewer* GetDefaultObj();

};

}


