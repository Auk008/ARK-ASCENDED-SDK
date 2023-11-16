#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(None)
	float                                        Radius;                                            // 0x4(0x4)(None)
	struct FVector                               LocalPosition;                                     // 0x8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection
{
public:
	int32                                        SphereIndices[0x2];                                // 0x0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct FClothCollisionPrim_ConvexFace
{
public:
	struct FPlane                                Plane;                                             // 0x0(0x20)(None)
	TArray<int32>                                Indices;                                           // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex
{
public:
	TArray<struct FClothCollisionPrim_ConvexFace> Faces;                                             // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FVector>                       SurfacePoints;                                     // 0x10(0x10)(None)
	int32                                        BoneIndex;                                         // 0x20(0x4)(None)
	uint8                                        Pad_38E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box
{
public:
	struct FVector                               LocalPosition;                                     // 0x0(0x18)(None)
	uint8                                        Pad_38F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 LocalRotation;                                     // 0x20(0x20)(None)
	struct FVector                               HalfExtents;                                       // 0x40(0x18)(None)
	int32                                        BoneIndex;                                         // 0x58(0x4)(None)
	uint8                                        Pad_390[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData
{
public:
	int32                                        NumInfluences;                                     // 0x0(0x4)(None)
	uint16                                       BoneIndices[0xC];                                  // 0x4(0x18)(None)
	float                                        BoneWeights[0xC];                                  // 0x1C(0x30)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData
{
public:
	TArray<struct FClothCollisionPrim_Sphere>    Spheres;                                           // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x10(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FClothCollisionPrim_Convex>    Convexes;                                          // 0x20(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FClothCollisionPrim_Box>       Boxes;                                             // 0x30(0x10)(None)
};

}


