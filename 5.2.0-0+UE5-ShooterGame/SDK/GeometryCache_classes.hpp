#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class GeometryCache.GeometryCache
class UGeometryCache : public UObject
{
public:
	uint8                                        Pad_ADE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(ZeroConstructor)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(None)
	uint8                                        Pad_ADF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartFrame;                                        // 0x60(0x4)(None)
	int32                                        EndFrame;                                          // 0x64(0x4)(None)
	uint64                                       Hash;                                              // 0x68(0x8)(None)

	static class UClass* StaticClass();
	static class UGeometryCache* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x4B8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AGeometryCacheActor* GetDefaultObj();

	void GetGeometryCacheComponent(class UGeometryCacheComponent* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UGeometryCacheCodecBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(None)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheCodecRaw* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_AF5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheCodecV1* GetDefaultObj();

};

// 0x90 (0x750 - 0x6C0)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x6C0(0x8)(ZeroConstructor)
	bool                                         bRunning;                                          // 0x6C8(0x1)(None)
	bool                                         bLooping;                                          // 0x6C9(0x1)(None)
	bool                                         bExtrapolateFrames;                                // 0x6CA(0x1)(None)
	uint8                                        Pad_B2B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTimeOffset;                                   // 0x6CC(0x4)(None)
	float                                        PlaybackSpeed;                                     // 0x6D0(0x4)(None)
	float                                        MotionVectorScale;                                 // 0x6D4(0x4)(None)
	int32                                        NumTracks;                                         // 0x6D8(0x4)(None)
	float                                        ElapsedTime;                                       // 0x6DC(0x4)(None)
	uint8                                        Pad_B2D[0x4C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x72C(0x4)(None)
	bool                                         bManualTick;                                       // 0x730(0x1)(None)
	bool                                         bOverrideWireframeColor;                           // 0x731(0x1)(None)
	uint8                                        Pad_B2E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          WireframeOverrideColor;                            // 0x734(0x10)(None)
	uint8                                        Pad_B31[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheComponent* GetDefaultObj();

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetWireframeOverrideColor(const struct FLinearColor& Color);
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetOverrideWireframeColor(bool bOverride);
	void SetMotionVectorScale(float NewMotionVectorScale);
	void SetLooping(bool bNewLooping);
	void SetGeometryCache(class UGeometryCache* NewGeomCache, bool ReturnValue);
	void SetExtrapolateFrames(bool bNewExtrapolating);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	void IsPlayingReversed(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsExtrapolatingFrames(bool ReturnValue);
	void GetWireframeOverrideColor(const struct FLinearColor& ReturnValue);
	void GetStartTimeOffset(float ReturnValue);
	void GetPlaybackSpeed(float ReturnValue);
	void GetPlaybackDirection(float ReturnValue);
	void GetOverrideWireframeColor(bool ReturnValue);
	void GetNumberOfFrames(int32 ReturnValue);
	void GetMotionVectorScale(float ReturnValue);
	void GetDuration(float ReturnValue);
	void GetAnimationTime(float ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public UObject
{
public:
	float                                        Duration;                                          // 0x28(0x4)(None)
	uint8                                        Pad_B3D[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(None)
	uint8                                        Pad_B41[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj();

	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// 0x80 (0xD8 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(None)
	uint8                                        Pad_B42[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartSampleTime;                                   // 0xC8(0x4)(None)
	uint8                                        Pad_B43[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrackStreamable* GetDefaultObj();

};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_B49[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj();

	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_B4C[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj();

	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// 0x288 (0x368 - 0xE0)
// Class GeometryCache.NiagaraGeometryCacheRendererProperties
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0xE0(0x10)(None)
	bool                                         bIsLooping;                                        // 0xF0(0x1)(None)
	uint8                                        Pad_B4E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ComponentCountLimit;                               // 0xF4(0x4)(None)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xF8(0x58)(None)
	struct FNiagaraVariableAttributeBinding      RotationBinding;                                   // 0x150(0x58)(None)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x1A8(0x58)(None)
	struct FNiagaraVariableAttributeBinding      ElapsedTimeBinding;                                // 0x200(0x58)(None)
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x258(0x58)(None)
	struct FNiagaraVariableAttributeBinding      ArrayIndexBinding;                                 // 0x2B0(0x58)(None)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x308(0x58)(None)
	int32                                        RendererVisibility;                                // 0x360(0x4)(None)
	bool                                         bAssignComponentsOnParticleID;                     // 0x364(0x1)(None)
	uint8                                        Pad_B4F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraGeometryCacheRendererProperties* GetDefaultObj();

};

}


