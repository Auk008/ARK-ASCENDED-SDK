#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x578 - 0x4B8)
// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
class AGameplayDebuggerCategoryReplicator : public AActor
{
public:
	class APlayerController*                     OwnerPC;                                           // 0x4B8(0x8)(ZeroConstructor)
	bool                                         bIsEnabled;                                        // 0x4C0(0x1)(None)
	uint8                                        Pad_2FB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayDebuggerNetPack              ReplicatedData;                                    // 0x4C8(0x18)(ZeroConstructor)
	struct FGameplayDebuggerDebugActor           DebugActor;                                        // 0x4E0(0x14)(ZeroConstructor)
	uint8                                        Pad_2FBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayDebuggerVisLogSync           VisLogSync;                                        // 0x4F8(0x10)(None)
	class UGameplayDebuggerRenderingComponent*   RenderingComp;                                     // 0x508(0x8)(ZeroConstructor)
	uint8                                        Pad_2FBB[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayDebuggerCategoryReplicator* GetDefaultObj();

	void ServerSetViewPoint(const struct FVector& InViewLocation, const struct FVector& InViewDirection);
	void ServerSetEnabled(bool bEnable);
	void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);
	void ServerSetCategoryEnabled(int32 CategoryId, bool bEnable);
	void ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId);
	void ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId);
	void ServerResetViewPoint();
	void OnRep_ReplicatedData();
	void ClientDataPackPacket(const struct FGameplayDebuggerDataPackRPCParams& Params);
};

// 0x230 (0x258 - 0x28)
// Class GameplayDebugger.GameplayDebuggerConfig
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                  ActivationKey;                                     // 0x28(0x18)(None)
	struct FKey                                  CategoryRowNextKey;                                // 0x40(0x18)(None)
	struct FKey                                  CategoryRowPrevKey;                                // 0x58(0x18)(None)
	struct FKey                                  CategorySlot0;                                     // 0x70(0x18)(None)
	struct FKey                                  CategorySlot1;                                     // 0x88(0x18)(None)
	struct FKey                                  CategorySlot2;                                     // 0xA0(0x18)(None)
	struct FKey                                  CategorySlot3;                                     // 0xB8(0x18)(None)
	struct FKey                                  CategorySlot4;                                     // 0xD0(0x18)(None)
	struct FKey                                  CategorySlot5;                                     // 0xE8(0x18)(None)
	struct FKey                                  CategorySlot6;                                     // 0x100(0x18)(None)
	struct FKey                                  CategorySlot7;                                     // 0x118(0x18)(None)
	struct FKey                                  CategorySlot8;                                     // 0x130(0x18)(None)
	struct FKey                                  CategorySlot9;                                     // 0x148(0x18)(None)
	float                                        DebugCanvasPaddingLeft;                            // 0x160(0x4)(None)
	float                                        DebugCanvasPaddingRight;                           // 0x164(0x4)(None)
	float                                        DebugCanvasPaddingTop;                             // 0x168(0x4)(None)
	float                                        DebugCanvasPaddingBottom;                          // 0x16C(0x4)(None)
	bool                                         bDebugCanvasEnableTextShadow;                      // 0x170(0x1)(None)
	uint8                                        Pad_2FBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;                                        // 0x178(0x10)(None)
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;                                        // 0x188(0x10)(None)
	uint8                                        Pad_2FBE[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayDebuggerConfig* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GameplayDebugger.GameplayDebuggerUserSettings
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
public:
	uint8                                        bEnableGameplayDebuggerInEditor : 1;               // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        BitPad_25B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2FC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxViewDistance;                                   // 0x3C(0x4)(None)
	float                                        MaxViewAngle;                                      // 0x40(0x4)(None)
	int32                                        FontSize;                                          // 0x44(0x4)(None)

	static class UClass* StaticClass();
	static class UGameplayDebuggerUserSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayDebugger.GameplayDebuggerLocalController
class UGameplayDebuggerLocalController : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*   CachedReplicator;                                  // 0x28(0x8)(ZeroConstructor)
	class AGameplayDebuggerPlayerManager*        CachedPlayerManager;                               // 0x30(0x8)(ZeroConstructor)
	class AActor*                                DebugActorCandidate;                               // 0x38(0x8)(ZeroConstructor)
	class UFont*                                 HUDFont;                                           // 0x40(0x8)(None)
	uint8                                        Pad_2FC7[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayDebuggerLocalController* GetDefaultObj();

};

// 0x30 (0x4E8 - 0x4B8)
// Class GameplayDebugger.GameplayDebuggerPlayerManager
class AGameplayDebuggerPlayerManager : public AActor
{
public:
	uint8                                        Pad_2FC9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayDebuggerPlayerData>   PlayerData;                                        // 0x4C0(0x10)(ZeroConstructor)
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                              // 0x4D0(0x10)(ZeroConstructor)
	uint8                                        Pad_2FCA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayDebuggerPlayerManager* GetDefaultObj();

};

// 0x60 (0x730 - 0x6D0)
// Class GameplayDebugger.GameplayDebuggerRenderingComponent
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_2FCC[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayDebuggerRenderingComponent* GetDefaultObj();

};

}


