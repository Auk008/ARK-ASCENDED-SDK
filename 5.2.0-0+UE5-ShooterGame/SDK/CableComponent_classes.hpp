#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4C0 - 0x4B8)
// Class CableComponent.CableActor
class ACableActor : public AActor
{
public:
	class UCableComponent*                       CableComponent;                                    // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ACableActor* GetDefaultObj();

};

// 0xB0 (0x770 - 0x6C0)
// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent
{
public:
	bool                                         bAttachStart;                                      // 0x6C0(0x1)(None)
	bool                                         bAttachEnd;                                        // 0x6C1(0x1)(None)
	uint8                                        Pad_11E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComponentReference                   AttachEndTo;                                       // 0x6C8(0x28)(ZeroConstructor)
	class FName                                  AttachEndToSocketName;                             // 0x6F0(0x8)(None)
	struct FVector                               EndLocation;                                       // 0x6F8(0x18)(None)
	float                                        CableLength;                                       // 0x710(0x4)(None)
	int32                                        NumSegments;                                       // 0x714(0x4)(None)
	float                                        SubstepTime;                                       // 0x718(0x4)(None)
	int32                                        SolverIterations;                                  // 0x71C(0x4)(None)
	bool                                         bEnableStiffness;                                  // 0x720(0x1)(None)
	bool                                         bUseSubstepping;                                   // 0x721(0x1)(None)
	bool                                         bSkipCableUpdateWhenNotVisible;                    // 0x722(0x1)(None)
	bool                                         bSkipCableUpdateWhenNotOwnerRecentlyRendered;      // 0x723(0x1)(None)
	bool                                         bEnableCollision;                                  // 0x724(0x1)(None)
	uint8                                        Pad_11E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionFriction;                                 // 0x728(0x4)(None)
	uint8                                        Pad_11E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CableForce;                                        // 0x730(0x18)(None)
	float                                        CableGravityScale;                                 // 0x748(0x4)(None)
	float                                        CableWidth;                                        // 0x74C(0x4)(None)
	int32                                        NumSides;                                          // 0x750(0x4)(None)
	float                                        TileMaterial;                                      // 0x754(0x4)(None)
	uint8                                        Pad_11E7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCableComponent* GetDefaultObj();

	void SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName);
	void SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName);
	void GetCableParticleLocations(const TArray<struct FVector>& Locations);
	void GetAttachedComponent(class USceneComponent* ReturnValue);
	void GetAttachedActor(class AActor* ReturnValue);
};

}


