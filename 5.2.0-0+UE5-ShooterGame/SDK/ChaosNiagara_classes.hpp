#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x310 (0x348 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	TSet<class AChaosSolverActor*>               ChaosSolverActorSet;                               // 0x38(0x50)(ZeroConstructor)
	enum class EDataSourceTypeEnum               DataSourceType;                                    // 0x88(0x1)(None)
	uint8                                        Pad_2427[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DataProcessFrequency;                              // 0x8C(0x4)(None)
	int32                                        MaxNumberOfDataEntriesToSpawn;                     // 0x90(0x4)(None)
	bool                                         DoSpawn;                                           // 0x94(0x1)(None)
	uint8                                        Pad_2428[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SpawnMultiplierMinMax;                             // 0x98(0x10)(None)
	float                                        SpawnChance;                                       // 0xA8(0x4)(None)
	uint8                                        Pad_2429[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ImpulseToSpawnMinMax;                              // 0xB0(0x10)(None)
	struct FVector2D                             SpeedToSpawnMinMax;                                // 0xC0(0x10)(None)
	struct FVector2D                             MassToSpawnMinMax;                                 // 0xD0(0x10)(None)
	struct FVector2D                             ExtentMinToSpawnMinMax;                            // 0xE0(0x10)(None)
	struct FVector2D                             ExtentMaxToSpawnMinMax;                            // 0xF0(0x10)(None)
	struct FVector2D                             VolumeToSpawnMinMax;                               // 0x100(0x10)(None)
	struct FVector2D                             SolverTimeToSpawnMinMax;                           // 0x110(0x10)(None)
	int32                                        SurfaceTypeToSpawn;                                // 0x120(0x4)(None)
	enum class ELocationFilteringModeEnum        LocationFilteringMode;                             // 0x124(0x1)(None)
	enum class ELocationXToSpawnEnum             LocationXToSpawn;                                  // 0x125(0x1)(None)
	uint8                                        Pad_242A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationXToSpawnMinMax;                            // 0x128(0x10)(None)
	enum class ELocationYToSpawnEnum             LocationYToSpawn;                                  // 0x138(0x1)(None)
	uint8                                        Pad_242B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationYToSpawnMinMax;                            // 0x140(0x10)(None)
	enum class ELocationZToSpawnEnum             LocationZToSpawn;                                  // 0x150(0x1)(None)
	uint8                                        Pad_242C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocationZToSpawnMinMax;                            // 0x158(0x10)(None)
	float                                        TrailMinSpeedToSpawn;                              // 0x168(0x4)(None)
	enum class EDataSortTypeEnum                 DataSortingType;                                   // 0x16C(0x1)(None)
	bool                                         bGetExternalCollisionData;                         // 0x16D(0x1)(None)
	bool                                         DoSpatialHash;                                     // 0x16E(0x1)(None)
	uint8                                        Pad_242E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpatialHashVolumeMin;                              // 0x170(0x18)(None)
	struct FVector                               SpatialHashVolumeMax;                              // 0x188(0x18)(None)
	struct FVector                               SpatialHashVolumeCellSize;                         // 0x1A0(0x18)(None)
	int32                                        MaxDataPerCell;                                    // 0x1B8(0x4)(None)
	bool                                         bApplyMaterialsFilter;                             // 0x1BC(0x1)(None)
	uint8                                        Pad_242F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPhysicalMaterial*>               ChaosBreakingMaterialSet;                          // 0x1C0(0x50)(None)
	bool                                         bGetExternalBreakingData;                          // 0x210(0x1)(None)
	bool                                         bGetExternalTrailingData;                          // 0x211(0x1)(None)
	uint8                                        Pad_2430[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RandomPositionMagnitudeMinMax;                     // 0x218(0x10)(None)
	float                                        InheritedVelocityMultiplier;                       // 0x228(0x4)(None)
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                      // 0x22C(0x1)(None)
	uint8                                        Pad_2431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RandomVelocityMagnitudeMinMax;                     // 0x230(0x10)(None)
	float                                        SpreadAngleMax;                                    // 0x240(0x4)(None)
	uint8                                        Pad_2432[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               VelocityOffsetMin;                                 // 0x248(0x18)(None)
	struct FVector                               VelocityOffsetMax;                                 // 0x260(0x18)(None)
	struct FVector2D                             FinalVelocityMagnitudeMinMax;                      // 0x278(0x10)(None)
	float                                        MaxLatency;                                        // 0x288(0x4)(None)
	enum class EDebugTypeEnum                    DebugType;                                         // 0x28C(0x1)(None)
	uint8                                        Pad_2433[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastSpawnedPointID;                                // 0x290(0x4)(None)
	float                                        LastSpawnTime;                                     // 0x294(0x4)(None)
	uint8                                        Pad_2434[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverTime;                                        // 0x2A8(0x4)(None)
	float                                        TimeStampOfLastProcessedData;                      // 0x2AC(0x4)(None)
	uint8                                        Pad_2435[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{
public:
	class AGeometryCollectionActor*              GeometryCollectionActor;                           // 0x38(0x8)(None)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGeometryCollection* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePhysicsField* GetDefaultObj();

};

}


