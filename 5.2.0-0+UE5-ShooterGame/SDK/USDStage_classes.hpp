#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB0 - 0x28)
// Class USDStage.UsdPrimTwin
class UUsdPrimTwin : public UObject
{
public:
	uint8                                        Pad_F0D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PrimPath;                                          // 0x40(0x10)(None)
	TWeakObjectPtr<class USceneComponent>        SceneComponent;                                    // 0x50(0x8)(ZeroConstructor)
	TMap<class FString, class UUsdPrimTwin*>     Children;                                          // 0x58(0x50)(ZeroConstructor)
	TWeakObjectPtr<class UUsdPrimTwin>           Parent;                                            // 0xA8(0x8)(None)

	static class UClass* StaticClass();
	static class UUsdPrimTwin* GetDefaultObj();

};

// 0x290 (0x748 - 0x4B8)
// Class USDStage.UsdStageActor
class AUsdStageActor : public AActor
{
public:
	struct FFilePath                             RootLayer;                                         // 0x4B8(0x10)(None)
	class UUsdAssetCache2*                       UsdAssetCache;                                     // 0x4C8(0x8)(ZeroConstructor)
	enum class EUsdInitialLoadSet                InitialLoadSet;                                    // 0x4D0(0x1)(None)
	enum class EUsdInterpolationType             InterpolationType;                                 // 0x4D1(0x1)(None)
	uint8                                        Pad_F28[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KindsToCollapse;                                   // 0x4D4(0x4)(None)
	bool                                         bMergeIdenticalMaterialSlots;                      // 0x4D8(0x1)(None)
	bool                                         bCollapseTopLevelPointInstancers;                  // 0x4D9(0x1)(None)
	uint8                                        Pad_F29[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PurposesToLoad;                                    // 0x4DC(0x4)(None)
	int32                                        NaniteTriangleThreshold;                           // 0x4E0(0x4)(None)
	class FName                                  RenderContext;                                     // 0x4E4(0x8)(None)
	class FName                                  MaterialPurpose;                                   // 0x4EC(0x8)(None)
	enum class EUsdRootMotionHandling            RootMotionHandling;                                // 0x4F4(0x4)(None)
	uint8                                        Pad_F2A[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x570(0x8)(ZeroConstructor)
	float                                        Time;                                              // 0x578(0x4)(None)
	uint8                                        Pad_F2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        LevelSequence;                                     // 0x580(0x8)(ZeroConstructor)
	class UUsdPrimTwin*                          RootUsdTwin;                                       // 0x588(0x8)(ZeroConstructor)
	TSet<class FString>                          PrimsToAnimate;                                    // 0x590(0x50)(None)
	TMap<class UObject*, class FString>          ObjectsToWatch;                                    // 0x5E0(0x50)(ZeroConstructor)
	class UUsdAssetCache*                        AssetCache;                                        // 0x630(0x8)(ZeroConstructor)
	class UUsdTransactor*                        Transactor;                                        // 0x638(0x8)(ZeroConstructor)
	uint8                                        Pad_F2D[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AUsdStageActor* GetDefaultObj();

	void SetTime(float InTime);
	void SetRootMotionHandling(enum class EUsdRootMotionHandling NewHandlingStrategy);
	void SetRootLayer(const class FString& RootFilePath);
	void SetRenderContext(class FName NewRenderContext);
	void SetPurposesToLoad(int32 NewPurposesToLoad);
	void SetNaniteTriangleThreshold(int32 NewNaniteTriangleThreshold);
	void SetMergeIdenticalMaterialSlots(bool bMerge);
	void SetMaterialPurpose(class FName NewMaterialPurpose);
	void SetKindsToCollapse(int32 NewKindsToCollapse);
	void SetIsolatedRootLayer(const class FString& IsolatedStageRootLayer);
	void SetInterpolationType(enum class EUsdInterpolationType NewType);
	void SetInitialLoadSet(enum class EUsdInitialLoadSet NewLoadSet);
	void SetCollapseTopLevelPointInstancers(bool bCollapse);
	void SetAssetCache(class UUsdAssetCache2* NewCache);
	void NewStage();
	void GetTime(float ReturnValue);
	void GetSourcePrimPath(class UObject* Object, const class FString& ReturnValue);
	void GetLevelSequence(class ULevelSequence* ReturnValue);
	void GetIsolatedRootLayer(const class FString& ReturnValue);
	void GetGeneratedComponent(const class FString& PrimPath, class USceneComponent* ReturnValue);
	void GetGeneratedAssets(const class FString& PrimPath, const TArray<class UObject*>& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class USDStage.UsdTransactor
class UUsdTransactor : public UObject
{
public:
	uint8                                        Pad_F35[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUsdTransactor* GetDefaultObj();

};

}


