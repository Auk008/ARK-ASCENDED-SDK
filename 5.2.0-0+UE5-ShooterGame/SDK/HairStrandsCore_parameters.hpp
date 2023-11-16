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

// 0x40 (0x40 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params
{
public:
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(None)
	class UGroomAsset*                           InGroomAsset;                                      // 0x10(0x8)(ZeroConstructor)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x18(0x8)(ZeroConstructor)
	int32                                        InNumInterpolationPoints;                          // 0x20(0x4)(None)
	uint8                                        Pad_118B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x28(0x8)(ZeroConstructor)
	int32                                        InMatchingSection;                                 // 0x30(0x4)(None)
	uint8                                        Pad_118C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           InGroomAsset;                                      // 0x0(0x8)(ZeroConstructor)
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x8(0x8)(ZeroConstructor)
	int32                                        InNumInterpolationPoints;                          // 0x10(0x4)(None)
	uint8                                        Pad_118D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         InSourceSkeletalMeshForTransfer;                   // 0x18(0x8)(ZeroConstructor)
	int32                                        InMatchingSection;                                 // 0x20(0x4)(None)
	uint8                                        Pad_118E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params
{
public:
	class FString                                DesiredPackagePath;                                // 0x0(0x10)(None)
	class UGroomAsset*                           GroomAsset;                                        // 0x10(0x8)(ZeroConstructor)
	class UGeometryCache*                        GeometryCache;                                     // 0x18(0x8)(ZeroConstructor)
	int32                                        NumInterpolationPoints;                            // 0x20(0x4)(None)
	uint8                                        Pad_1190[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x28(0x8)(ZeroConstructor)
	int32                                        MatchingSection;                                   // 0x30(0x4)(None)
	uint8                                        Pad_1191[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params
{
public:
	class UGroomAsset*                           GroomAsset;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryCache*                        GeometryCache;                                     // 0x8(0x8)(ZeroConstructor)
	int32                                        NumInterpolationPoints;                            // 0x10(0x4)(None)
	uint8                                        Pad_1194[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCache*                        SourceGeometryCacheForTransfer;                    // 0x18(0x8)(ZeroConstructor)
	int32                                        MatchingSection;                                   // 0x20(0x4)(None)
	uint8                                        Pad_1196[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomBindingAsset*                    ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
struct UGroomComponent_SetPhysicsAsset_Params
{
public:
	class UPhysicsAsset*                         InPhysicsAsset;                                    // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetMeshDeformer
struct UGroomComponent_SetMeshDeformer_Params
{
public:
	class UMeshDeformer*                         InMeshDeformer;                                    // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
struct UGroomComponent_SetHairLengthScaleEnable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function HairStrandsCore.GroomComponent.SetHairLengthScale
struct UGroomComponent_SetHairLengthScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetGroomAsset
struct UGroomComponent_SetGroomAsset_Params
{
public:
	class UGroomAsset*                           Asset;                                             // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.SetEnableSimulation
struct UGroomComponent_SetEnableSimulation_Params
{
public:
	bool                                         bInEnableSimulation;                               // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.SetBindingAsset
struct UGroomComponent_SetBindingAsset_Params
{
public:
	class UGroomBindingAsset*                    InBinding;                                         // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
struct UGroomComponent_GetNiagaraComponent_Params
{
public:
	int32                                        GroupIndex;                                        // 0x0(0x4)(None)
	uint8                                        Pad_11A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
struct UGroomComponent_GetIsHairLengthScaleEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HairStrandsCore.GroomComponent.AddCollisionComponent
struct UGroomComponent_AddCollisionComponent_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(None)
};

}
}


