#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
struct UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FOpenColorIOColorConversionSettings   ConversionSettings;                                // 0x8(0x98)(ZeroConstructor)
	class UTexture*                              InputTexture;                                      // 0xA0(0x8)(ZeroConstructor)
	class UTextureRenderTarget2D*                OutputRenderTarget;                                // 0xA8(0x8)(None)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(None)
	uint8                                        Pad_79F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
{
public:
	TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;                                 // 0x0(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
{
public:
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0x0(0x50)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      ReturnValue;                                       // 0x0(0xA0)(None)
};

// 0x100 (0x100 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(ZeroConstructor)
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0xA0(0x50)(None)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xF0(0x8)(None)
	uint8                                        Pad_7BD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(ZeroConstructor)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xA0(0x8)(None)
};

}
}


