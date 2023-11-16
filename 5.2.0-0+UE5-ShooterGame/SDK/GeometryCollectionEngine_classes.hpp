#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// Class GeometryCollectionEngine.PrimalDestructibleActor
class APrimalDestructibleActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeoCollectionComponent;                            // 0x4B8(0x8)(ZeroConstructor)
	bool                                         bForceDisableClustering;                           // 0x4C0(0x1)(None)
	bool                                         bUseBPStartDestruction;                            // 0x4C1(0x1)(None)
	bool                                         bInfiniteLifespan;                                 // 0x4C2(0x1)(None)
	uint8                                        Pad_21F5[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APrimalDestructibleActor* GetDefaultObj();

	void StaticBPPreDestructionHandleAttachedComponentClass(class UClass* AttachedComponentClass, class UInstancedStaticMeshComponent* ForMeshComp, const struct FVector& InstancePosition, const struct FRotator& InstanceRotation, int32 InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth);
	void SetGeoCollection(class UGeometryCollection* GeoCollection);
	void BPStartDestruction(class UGeometryCollection* DestructionAsset, const struct FVector& HitDirection, float Damage, float TotalHealth);
};

// 0x2A8 (0x570 - 0x2C8)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2C8(0x1)(None)
	uint8                                        BitPad_186 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2212[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChaosCollisionEventRequestSettings   CollisionEventRequestSettings;                     // 0x2CC(0x18)(None)
	struct FChaosBreakingEventRequestSettings    BreakingEventRequestSettings;                      // 0x2E4(0x18)(None)
	struct FChaosTrailingEventRequestSettings    TrailingEventRequestSettings;                      // 0x2FC(0x18)(None)
	struct FChaosRemovalEventRequestSettings     RemovalEventRequestSettings;                       // 0x314(0x10)(None)
	uint8                                        Pad_2213[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x328(0x50)(ZeroConstructor)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x378(0x50)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3C8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3D8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3E8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3F8(0x10)(ZeroConstructor)
	uint8                                        Pad_2216[0x168];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	void SortTrailingEvents(const TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod);
	void SortRemovalEvents(const TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod);
	void SortCollisionEvents(const TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(const TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings);
	void SetRemovalEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	void IsEventListening(bool ReturnValue);
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// 0x10 (0x4C8 - 0x4B8)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x4B8(0x8)(ZeroConstructor)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x4C0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	void RaycastSingle(const struct FVector& Start, const struct FVector& End, const struct FHitResult& OutHit, bool ReturnValue);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack               RecordedData;                                      // 0x28(0x10)(None)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(None)
	struct FGuid                                 CompatibleCollectionState;                         // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x560 (0xC20 - 0x6C0)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_2277[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x6C8(0x8)(ZeroConstructor)
	uint8                                        Pad_2278[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryCollection*                   RestCollection;                                    // 0x7B0(0x8)(ZeroConstructor)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x7B8(0x10)(ZeroConstructor)
	bool                                         Simulating;                                        // 0x7C8(0x1)(None)
	uint8                                        Pad_2279[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x7CA(0x1)(None)
	bool                                         bForceMotionBlur;                                  // 0x7CB(0x1)(None)
	bool                                         EnableClustering;                                  // 0x7CC(0x1)(None)
	uint8                                        Pad_227A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterGroupIndex;                                 // 0x7D0(0x4)(None)
	int32                                        MaxClusterLevel;                                   // 0x7D4(0x4)(None)
	TArray<float>                                DamageThreshold;                                   // 0x7D8(0x10)(None)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x7E8(0x1)(None)
	uint8                                        Pad_227B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x7EC(0xC)(None)
	bool                                         bEnableDamageFromCollision;                        // 0x7F8(0x1)(None)
	bool                                         bAllowRemovalOnSleep;                              // 0x7F9(0x1)(None)
	bool                                         bAllowRemovalOnBreak;                              // 0x7FA(0x1)(None)
	bool                                         bPrimalForceStartSleepRemoval;                     // 0x7FB(0x1)(None)
	bool                                         bPreventGameplayVelocitiesAndForces;               // 0x7FC(0x1)(None)
	uint8                                        Pad_227C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                PrimalForceSleepIndices;                           // 0x800(0x10)(None)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x810(0x1)(None)
	uint8                                        Pad_227D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CollisionGroup;                                    // 0x814(0x4)(None)
	float                                        CollisionSampleFraction;                           // 0x818(0x4)(None)
	float                                        LinearEtherDrag;                                   // 0x81C(0x4)(None)
	float                                        AngularEtherDrag;                                  // 0x820(0x4)(None)
	uint8                                        Pad_227E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x828(0x8)(ZeroConstructor)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x830(0x1)(None)
	uint8                                        Pad_227F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialLinearVelocity;                             // 0x838(0x18)(None)
	struct FVector                               InitialAngularVelocity;                            // 0x850(0x18)(None)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x868(0x8)(ZeroConstructor)
	struct FGeomComponentCacheParameters         CacheParameters;                                   // 0x870(0x50)(ZeroConstructor)
	TArray<struct FTransform>                    RestTransforms;                                    // 0x8C0(0x10)(None)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x8D0(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8E0(0x10)(ZeroConstructor)
	uint8                                        Pad_2281[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x908(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x918(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x928(0x10)(ZeroConstructor)
	float                                        DesiredCacheTime;                                  // 0x938(0x4)(None)
	bool                                         CachePlayback;                                     // 0x93C(0x1)(None)
	uint8                                        Pad_2285[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x940(0x10)(ZeroConstructor)
	bool                                         bNotifyBreaks;                                     // 0x950(0x1)(None)
	bool                                         bNotifyCollisions;                                 // 0x951(0x1)(None)
	bool                                         bNotifyTrailing;                                   // 0x952(0x1)(None)
	bool                                         bNotifyRemovals;                                   // 0x953(0x1)(None)
	bool                                         bNotifyCrumblings;                                 // 0x954(0x1)(None)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x955(0x1)(None)
	bool                                         bStoreVelocities;                                  // 0x956(0x1)(None)
	bool                                         bShowBoneColors;                                   // 0x957(0x1)(None)
	bool                                         bUseRootProxyForNavigation;                        // 0x958(0x1)(None)
	bool                                         bUpdateNavigationInTick;                           // 0x959(0x1)(None)
	uint8                                        Pad_2287[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x960(0x8)(ZeroConstructor)
	uint8                                        Pad_2288[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnableReplication;                                // 0x970(0x1)(None)
	bool                                         bEnableAbandonAfterLevel;                          // 0x971(0x1)(None)
	uint8                                        Pad_2289[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReplicationAbandonClusterLevel;                    // 0x974(0x4)(None)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x978(0x4)(None)
	uint8                                        Pad_228A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionRepData            RepData;                                           // 0x980(0x28)(None)
	uint8                                        Pad_228B[0x238];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            DummyBodySetup;                                    // 0xBE0(0x8)(ZeroConstructor)
	uint8                                        Pad_228C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xBF0(0x10)(ZeroConstructor)
	uint8                                        Pad_228D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	void SetRestCollection(class UGeometryCollection* RestCollectionIn);
	void SetNotifyRemovals(bool bNewNotifyRemovals);
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void SetEnableDamageFromCollision(bool bValue);
	void SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32 MaxLevel);
	void SetAnchoredByIndex(int32 Index, bool bAnchored);
	void SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32 MaxLevel);
	void RemoveAllAnchors();
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void GetRootIndex(int32 ReturnValue);
	void GetMassAndExtents(int32 ItemIndex, float OutMass, const struct FBox& OutExtents);
	void GetLocalBounds(const struct FBox& ReturnValue);
	void GetInitialLevel(int32 ItemIndex, int32 ReturnValue);
	void GetDebugInfo(const class FString& ReturnValue);
	void CrumbleCluster(int32 ItemIndex);
	void CrumbleActiveClusters();
	void BPGetMaxIndex(int32 ReturnValue);
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearVelocity(int32 ItemIndex, const struct FVector& LinearVelocity);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
	void ApplyInternalStrain(int32 ItemIndex, const struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyExternalStrain(int32 ItemIndex, const struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyBreakingLinearVelocity(int32 ItemIndex, const struct FVector& LinearVelocity);
	void ApplyBreakingAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity);
	void ApplyAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity);
};

// 0xC0 (0x578 - 0x4B8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x4B8(0x1)(None)
	uint8                                        Pad_2295[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x4C0(0x18)(ZeroConstructor)
	bool                                         bDebugDrawWholeCollection;                         // 0x4D8(0x1)(None)
	bool                                         bDebugDrawHierarchy;                               // 0x4D9(0x1)(None)
	bool                                         bDebugDrawClustering;                              // 0x4DA(0x1)(None)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x4DB(0x1)(None)
	bool                                         bShowRigidBodyId;                                  // 0x4DC(0x1)(None)
	bool                                         bShowRigidBodyCollision;                           // 0x4DD(0x1)(None)
	bool                                         bCollisionAtOrigin;                                // 0x4DE(0x1)(None)
	bool                                         bShowRigidBodyTransform;                           // 0x4DF(0x1)(None)
	bool                                         bShowRigidBodyInertia;                             // 0x4E0(0x1)(None)
	bool                                         bShowRigidBodyVelocity;                            // 0x4E1(0x1)(None)
	bool                                         bShowRigidBodyForce;                               // 0x4E2(0x1)(None)
	bool                                         bShowRigidBodyInfos;                               // 0x4E3(0x1)(None)
	bool                                         bShowTransformIndex;                               // 0x4E4(0x1)(None)
	bool                                         bShowTransform;                                    // 0x4E5(0x1)(None)
	bool                                         bShowParent;                                       // 0x4E6(0x1)(None)
	bool                                         bShowLevel;                                        // 0x4E7(0x1)(None)
	bool                                         bShowConnectivityEdges;                            // 0x4E8(0x1)(None)
	bool                                         bShowGeometryIndex;                                // 0x4E9(0x1)(None)
	bool                                         bShowGeometryTransform;                            // 0x4EA(0x1)(None)
	bool                                         bShowBoundingBox;                                  // 0x4EB(0x1)(None)
	bool                                         bShowFaces;                                        // 0x4EC(0x1)(None)
	bool                                         bShowFaceIndices;                                  // 0x4ED(0x1)(None)
	bool                                         bShowFaceNormals;                                  // 0x4EE(0x1)(None)
	bool                                         bShowSingleFace;                                   // 0x4EF(0x1)(None)
	int32                                        SingleFaceIndex;                                   // 0x4F0(0x4)(None)
	bool                                         bShowVertices;                                     // 0x4F4(0x1)(None)
	bool                                         bShowVertexIndices;                                // 0x4F5(0x1)(None)
	bool                                         bShowVertexNormals;                                // 0x4F6(0x1)(None)
	bool                                         bUseActiveVisualization;                           // 0x4F7(0x1)(None)
	float                                        PointThickness;                                    // 0x4F8(0x4)(None)
	float                                        LineThickness;                                     // 0x4FC(0x4)(None)
	bool                                         bTextShadow;                                       // 0x500(0x1)(None)
	uint8                                        Pad_229D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TextScale;                                         // 0x504(0x4)(None)
	float                                        NormalScale;                                       // 0x508(0x4)(None)
	float                                        AxisScale;                                         // 0x50C(0x4)(None)
	float                                        ArrowScale;                                        // 0x510(0x4)(None)
	struct FColor                                RigidBodyIdColor;                                  // 0x514(0x4)(None)
	float                                        RigidBodyTransformScale;                           // 0x518(0x4)(None)
	struct FColor                                RigidBodyCollisionColor;                           // 0x51C(0x4)(None)
	struct FColor                                RigidBodyInertiaColor;                             // 0x520(0x4)(None)
	struct FColor                                RigidBodyVelocityColor;                            // 0x524(0x4)(None)
	struct FColor                                RigidBodyForceColor;                               // 0x528(0x4)(None)
	struct FColor                                RigidBodyInfoColor;                                // 0x52C(0x4)(None)
	struct FColor                                TransformIndexColor;                               // 0x530(0x4)(None)
	float                                        TransformScale;                                    // 0x534(0x4)(None)
	struct FColor                                LevelColor;                                        // 0x538(0x4)(None)
	struct FColor                                ParentColor;                                       // 0x53C(0x4)(None)
	float                                        ConnectivityEdgeThickness;                         // 0x540(0x4)(None)
	struct FColor                                GeometryIndexColor;                                // 0x544(0x4)(None)
	float                                        GeometryTransformScale;                            // 0x548(0x4)(None)
	struct FColor                                BoundingBoxColor;                                  // 0x54C(0x4)(None)
	struct FColor                                FaceColor;                                         // 0x550(0x4)(None)
	struct FColor                                FaceIndexColor;                                    // 0x554(0x4)(None)
	struct FColor                                FaceNormalColor;                                   // 0x558(0x4)(None)
	struct FColor                                SingleFaceColor;                                   // 0x55C(0x4)(None)
	struct FColor                                VertexColor;                                       // 0x560(0x4)(None)
	struct FColor                                VertexIndexColor;                                  // 0x564(0x4)(None)
	struct FColor                                VertexNormalColor;                                 // 0x568(0x4)(None)
	uint8                                        Pad_22A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBillboardComponent*                   SpriteComponent;                                   // 0x570(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xB8(0x8)(ZeroConstructor)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xC0(0x8)(ZeroConstructor)
	uint8                                        Pad_22A6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AGeometryCollectionISMPoolActor* GetDefaultObj();

};

// 0xB8 (0x380 - 0x2C8)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_22B1[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_22B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableClustering;                                  // 0x30(0x1)(None)
	uint8                                        Pad_22B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterGroupIndex;                                 // 0x34(0x4)(None)
	int32                                        MaxClusterLevel;                                   // 0x38(0x4)(None)
	uint8                                        Pad_22B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DamageThreshold;                                   // 0x40(0x10)(None)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x50(0x1)(None)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x51(0x1)(None)
	uint8                                        Pad_22B7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x54(0xC)(None)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x60(0x1)(None)
	uint8                                        Pad_22B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x64(0x4)(None)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x68(0x10)(ZeroConstructor)
	TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x78(0x10)(None)
	bool                                         bUseFullPrecisionUVs;                              // 0x88(0x1)(None)
	uint8                                        Pad_22B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0x90(0x10)(ZeroConstructor)
	struct FSoftObjectPath                       RootProxy;                                         // 0xA0(0x20)(None)
	bool                                         bStripOnCook;                                      // 0xC0(0x1)(None)
	bool                                         EnableNanite;                                      // 0xC1(0x1)(None)
	bool                                         bMassAsDensity;                                    // 0xC2(0x1)(None)
	uint8                                        Pad_22BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0xC4(0x4)(None)
	float                                        MinimumMassClamp;                                  // 0xC8(0x4)(None)
	bool                                         bImportCollisionFromSource;                        // 0xCC(0x1)(None)
	bool                                         bRemoveOnMaxSleep;                                 // 0xCD(0x1)(None)
	uint8                                        Pad_22BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MaximumSleepTime;                                  // 0xD0(0x10)(None)
	struct FVector2D                             RemovalDuration;                                   // 0xE0(0x10)(None)
	bool                                         bSlowMovingAsSleeping;                             // 0xF0(0x1)(None)
	uint8                                        Pad_22BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlowMovingVelocityThreshold;                       // 0xF4(0x4)(None)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0xF8(0x10)(None)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x108(0x1)(None)
	uint8                                        Pad_22BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x110(0x10)(ZeroConstructor)
	class UDataflow*                             DataflowAsset;                                     // 0x120(0x8)(None)
	class FString                                DataflowTerminal;                                  // 0x128(0x10)(None)
	struct FGuid                                 PersistentGuid;                                    // 0x138(0x10)(None)
	struct FGuid                                 StateGuid;                                         // 0x148(0x10)(None)
	int32                                        BoneSelectedMaterialIndex;                         // 0x158(0x4)(None)
	uint8                                        Pad_22BF[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

};

// 0xF8 (0x5B0 - 0x4B8)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x4B8(0x8)(ZeroConstructor)
	class UMaterial*                             RayMarchMaterial;                                  // 0x4C0(0x8)(ZeroConstructor)
	float                                        SurfaceTolerance;                                  // 0x4C8(0x4)(None)
	float                                        Isovalue;                                          // 0x4CC(0x4)(None)
	bool                                         Enabled;                                           // 0x4D0(0x1)(None)
	bool                                         RenderVolumeBoundingBox;                           // 0x4D1(0x1)(None)
	uint8                                        Pad_22C3[0xDE];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

}


