#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x6D0 - 0x6C0)
// Class CustomMeshComponent.CustomMeshComponent
class UCustomMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_472[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomMeshComponent* GetDefaultObj();

	void SetCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles, bool ReturnValue);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles);
};

}


