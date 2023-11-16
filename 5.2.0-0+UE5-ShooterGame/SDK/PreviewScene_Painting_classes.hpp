#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x620 - 0x600)
// BlueprintGeneratedClass PreviewScene_Painting.PreviewScene_Painting_C
class APreviewScene_Painting_C : public APreviewScene_Base_C
{
public:
	class USkyLightComponent*                    SkyLight;                                          // 0x600(0x8)(ZeroConstructor)
	class UDirectionalLightComponent*            DirectionalLight1;                                 // 0x608(0x8)(ZeroConstructor)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x610(0x8)(ZeroConstructor)
	class USceneComponent*                       DirectionalLightsParent;                           // 0x618(0x8)(Edit, ZeroConstructor)

	static class UClass* StaticClass();
	static class APreviewScene_Painting_C* GetDefaultObj();

};

}


