#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x730 - 0x6C0)
// Class GeometryFramework.BaseDynamicMeshComponent
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_BA3[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExplicitShowWireframe;                            // 0x6E0(0x1)(None)
	uint8                                        Pad_BA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          WireframeColor;                                    // 0x6E4(0x10)(None)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x6F4(0x1)(None)
	uint8                                        Pad_BA6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                ConstantColor;                                     // 0x6F8(0x4)(None)
	bool                                         bEnableFlatShading;                                // 0x6FC(0x1)(None)
	bool                                         bEnableViewModeOverrides;                          // 0x6FD(0x1)(None)
	uint8                                        Pad_BA8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x700(0x8)(ZeroConstructor)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x708(0x8)(ZeroConstructor)
	uint8                                        Pad_BA9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnableRayTracing;                                 // 0x711(0x1)(None)
	uint8                                        Pad_BAB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x718(0x10)(ZeroConstructor)
	uint8                                        Pad_BAC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	void SetViewModeOverridesEnabled(bool bEnabled);
	void SetShadowsEnabled(bool bEnabled);
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	void SetEnableWireframeRenderPass(bool bEnable);
	void SetEnableRaytracing(bool bSetEnabled);
	void SetEnableFlatShading(bool bEnable);
	void SetConstantOverrideColor(const struct FColor& NewColor);
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode);
	void HasOverrideRenderMaterial(int32 K, bool ReturnValue);
	void GetViewModeOverridesEnabled(bool ReturnValue);
	void GetShadowsEnabled(bool ReturnValue);
	void GetSecondaryRenderMaterial(class UMaterialInterface* ReturnValue);
	void GetSecondaryBuffersVisibility(bool ReturnValue);
	void GetOverrideRenderMaterial(int32 MaterialIndex, class UMaterialInterface* ReturnValue);
	void GetFlatShadingEnabled(bool ReturnValue);
	void GetEnableWireframeRenderPass(bool ReturnValue);
	void GetEnableRaytracing(bool ReturnValue);
	void GetDynamicMesh(class UDynamicMesh* ReturnValue);
	void GetConstantOverrideColor(const struct FColor& ReturnValue);
	void GetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode ReturnValue);
	void ClearSecondaryRenderMaterial();
	void ClearOverrideRenderMaterial();
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshCommandChangeTarget
class IMeshCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshReplacementCommandChangeTarget
class IMeshReplacementCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshReplacementCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshVertexCommandChangeTarget
class IMeshVertexCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshVertexCommandChangeTarget* GetDefaultObj();

};

// 0x210 (0x940 - 0x730)
// Class GeometryFramework.DynamicMeshComponent
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	class UDynamicMesh*                          MeshObject;                                        // 0x730(0x8)(ZeroConstructor)
	uint8                                        Pad_BCA[0xF8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x830(0x1)(None)
	uint8                                        Pad_BCB[0x3F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x870(0x1)(None)
	bool                                         bUseAsyncCooking;                                  // 0x871(0x1)(None)
	bool                                         bEnableComplexCollision;                           // 0x872(0x1)(None)
	bool                                         bDeferCollisionUpdates;                            // 0x873(0x1)(None)
	uint8                                        Pad_BCC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            MeshBodySetup;                                     // 0x878(0x8)(ZeroConstructor)
	uint8                                        Pad_BDB[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKAggregateGeom                       AggGeom;                                           // 0x8B8(0x68)(None)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x920(0x10)(ZeroConstructor)
	uint8                                        Pad_BDC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	void ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots, bool ReturnValue);
	void UpdateCollision(bool bOnlyIfPending);
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType);
	void SetDynamicMesh(class UDynamicMesh* NewMesh);
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
	void GetTangentsType(enum class EDynamicMeshComponentTangentsMode ReturnValue);
	void EnableComplexAsSimpleCollision();
	void ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet);
};

// 0x18 (0x4D0 - 0x4B8)
// Class GeometryFramework.DynamicMeshActor
class ADynamicMeshActor : public AActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x4B8(0x8)(ZeroConstructor)
	bool                                         bEnableComputeMeshPool;                            // 0x4C0(0x1)(None)
	uint8                                        Pad_BF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x4C8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ADynamicMeshActor* GetDefaultObj();

	void ReleaseComputeMesh(class UDynamicMesh* Mesh, bool ReturnValue);
	void ReleaseAllComputeMeshes();
	void GetDynamicMeshComponent(class UDynamicMeshComponent* ReturnValue);
	void GetComputeMeshPool(class UDynamicMeshPool* ReturnValue);
	void FreeAllComputeMeshes();
	void AllocateComputeMesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.DynamicMeshGenerator
class UDynamicMeshGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicMeshGenerator* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GeometryFramework.DynamicMesh
class UDynamicMesh : public UObject
{
public:
	uint8                                        Pad_C05[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(ZeroConstructor)
	uint8                                        Pad_C06[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(None)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(None)
	uint8                                        Pad_C07[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMesh* GetDefaultObj();

	void ResetToCube(class UDynamicMesh* ReturnValue);
	void Reset(class UDynamicMesh* ReturnValue);
	void IsEmpty(bool ReturnValue);
	void GetTriangleCount(int32 ReturnValue);
};

// 0x20 (0x48 - 0x28)
// Class GeometryFramework.DynamicMeshPool
class UDynamicMeshPool : public UObject
{
public:
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(ZeroConstructor)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(None)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	void ReturnMesh(class UDynamicMesh* Mesh);
	void ReturnAllMeshes();
	void RequestMesh(class UDynamicMesh* ReturnValue);
	void FreeAllMeshes();
};

}


