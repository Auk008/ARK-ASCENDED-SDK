#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x340 - 0x2C8)
// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2C8(0x10)(ZeroConstructor)
	bool                                         ScanWorld;                                         // 0x2D8(0x1)(None)
	bool                                         RequestNormals;                                    // 0x2D9(0x1)(None)
	bool                                         RequestVertexConfidence;                           // 0x2DA(0x1)(None)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2DB(0x1)(None)
	uint8                                        Pad_2AD1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2E0(0x10)(None)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2F0(0x10)(None)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x300(0x10)(None)
	float                                        UpdateInterval;                                    // 0x310(0x4)(None)
	uint8                                        Pad_2AD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMRMeshComponent*                      MRMesh;                                            // 0x318(0x8)(ZeroConstructor)
	uint8                                        Pad_2AD3[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMockDataMeshTrackerComponent* GetDefaultObj();

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<float>& Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// 0x1B0 (0x1D8 - 0x28)
// Class MRMesh.MRMeshBodyHolder
class UMRMeshBodyHolder : public UObject
{
public:
	uint8                                        Pad_2AD5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(ZeroConstructor)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x138)(None)
	uint8                                        Pad_2AD6[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMRMeshBodyHolder* GetDefaultObj();

};

// 0x80 (0x700 - 0x680)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2AD7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x688(0x8)(ZeroConstructor)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x690(0x8)(ZeroConstructor)
	bool                                         bCreateMeshProxySections;                          // 0x698(0x1)(None)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x699(0x1)(None)
	uint8                                        Pad_2AD8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bNeverCreateCollisionMesh;                         // 0x69B(0x1)(None)
	uint8                                        Pad_2AD9[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x6E0(0x10)(ZeroConstructor)
	uint8                                        Pad_2ADA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMRMeshComponent* GetDefaultObj();

	void SetWireframeMaterial(class UMaterialInterface* InMaterial);
	void SetWireframeColor(const struct FLinearColor& InColor);
	void SetUseWireframe(bool bUseWireframe);
	void SetEnableMeshOcclusion(bool bEnable);
	void RequestNavMeshUpdate();
	void IsConnected(bool ReturnValue);
	void GetWireframeColor(const struct FLinearColor& ReturnValue);
	void GetUseWireframe(bool ReturnValue);
	void GetEnableMeshOcclusion(bool ReturnValue);
	void ForceNavMeshUpdate();
	void Clear();
};

// 0x0 (0x28 - 0x28)
// Class MRMesh.MeshReconstructorBase
class UMeshReconstructorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshReconstructorBase* GetDefaultObj();

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	void IsReconstructionStarted(bool ReturnValue);
	void IsReconstructionPaused(bool ReturnValue);
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

}


