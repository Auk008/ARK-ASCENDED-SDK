#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// Class OpenColorIO.OpenColorIOSettings
class UOpenColorIOSettings : public UDeveloperSettings
{
public:
	uint8                                        bUseLegacyProcessor : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        bUse32fLUT : 1;                                    // Mask: 0x2, PropSize: 0x10x38(0x1)(None)
	uint8                                        bSupportInverseViewTransforms : 1;                 // Mask: 0x4, PropSize: 0x10x38(0x1)(None)
	uint8                                        Pad_791[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIOSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OpenColorIO.OpenColorIOBlueprintLibrary
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenColorIOBlueprintLibrary* GetDefaultObj();

	void ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget, bool ReturnValue);
};

// 0x140 (0x168 - 0x28)
// Class OpenColorIO.OpenColorIOColorTransform
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*             ConfigurationOwner;                                // 0x28(0x8)(ZeroConstructor)
	bool                                         bIsDisplayViewType;                                // 0x30(0x1)(None)
	uint8                                        Pad_7A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceColorSpace;                                  // 0x38(0x10)(None)
	class FString                                DestinationColorSpace;                             // 0x48(0x10)(None)
	class FString                                Display;                                           // 0x58(0x10)(None)
	class FString                                View;                                              // 0x68(0x10)(None)
	enum class EOpenColorIOViewTransformDirection DisplayViewDirection;                              // 0x78(0x1)(None)
	uint8                                        Pad_7A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UTexture*>                 Textures;                                          // 0x80(0x50)(None)
	uint8                                        Pad_7A7[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIOColorTransform* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class OpenColorIO.OpenColorIOConfiguration
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                             ConfigurationFile;                                 // 0x28(0x10)(None)
	TArray<struct FOpenColorIOColorSpace>        DesiredColorSpaces;                                // 0x38(0x10)(None)
	TArray<struct FOpenColorIODisplayView>       DesiredDisplayViews;                               // 0x48(0x10)(None)
	TArray<class UOpenColorIOColorTransform*>    ColorTransforms;                                   // 0x58(0x10)(None)
	uint8                                        Pad_7AE[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIOConfiguration* GetDefaultObj();

	void ReloadExistingColorspaces();
};

// 0x10 (0x38 - 0x28)
// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
class UOpenColorIODisplayExtensionWrapper : public UObject
{
public:
	uint8                                        Pad_7C3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIODisplayExtensionWrapper* GetDefaultObj();

	void SetSceneExtensionIsActiveFunctions(const TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
	void SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
	void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
	void RemoveSceneExtension();
	void GetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& ReturnValue);
	void CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction, class UOpenColorIODisplayExtensionWrapper* ReturnValue);
	void CreateInGameOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, class UOpenColorIODisplayExtensionWrapper* ReturnValue);
};

}


