#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector4
struct UNiagaraDataChannelReader_ReadVector4_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_24E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector2D
struct UNiagaraDataChannelReader_ReadVector2D_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_24F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadVector
struct UNiagaraDataChannelReader_ReadVector_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_250[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadQuat
struct UNiagaraDataChannelReader_ReadQuat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_251[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadLinearColor
struct UNiagaraDataChannelReader_ReadLinearColor_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	struct FLinearColor                          ReturnValue;                                       // 0xC(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadInt
struct UNiagaraDataChannelReader_ReadInt_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadFloat
struct UNiagaraDataChannelReader_ReadFloat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_252[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.ReadBool
struct UNiagaraDataChannelReader_ReadBool_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_253[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraDataChannelReader.Num
struct UNiagaraDataChannelReader_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelReader.InitAccess
struct UNiagaraDataChannelReader_InitAccess_Params
{
public:
	class UActorComponent*                       OwningComponent;                                   // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_254[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector4
struct UNiagaraDataChannelWriter_WriteVector4_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_256[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              InData;                                            // 0x10(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector2D
struct UNiagaraDataChannelWriter_WriteVector2D_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_257[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             InData;                                            // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteVector
struct UNiagaraDataChannelWriter_WriteVector_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_258[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InData;                                            // 0x10(0x18)(None)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
struct UNiagaraDataChannelWriter_WriteSpawnInfo_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	struct FNiagaraSpawnInfo                     InData;                                            // 0xC(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteQuat
struct UNiagaraDataChannelWriter_WriteQuat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_259[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 InData;                                            // 0x10(0x20)(None)
};

// 0x1C (0x1C - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteLinearColor
struct UNiagaraDataChannelWriter_WriteLinearColor_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	struct FLinearColor                          InData;                                            // 0xC(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteInt
struct UNiagaraDataChannelWriter_WriteInt_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	int32                                        InData;                                            // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteFloat
struct UNiagaraDataChannelWriter_WriteFloat_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_25F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InData;                                            // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.WriteBool
struct UNiagaraDataChannelWriter_WriteBool_Params
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	bool                                         InData;                                            // 0xC(0x1)(None)
	uint8                                        Pad_260[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.Num
struct UNiagaraDataChannelWriter_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataChannelWriter.InitWrite
struct UNiagaraDataChannelWriter_InitWrite_Params
{
public:
	class UActorComponent*                       OwningComponent;                                   // 0x0(0x8)(None)
	int32                                        Count;                                             // 0x8(0x4)(None)
	bool                                         bVisibleToGame;                                    // 0xC(0x1)(None)
	bool                                         bVisibleToCPU;                                     // 0xD(0x1)(None)
	bool                                         bVisibleToGPU;                                     // 0xE(0x1)(None)
	bool                                         ReturnValue;                                       // 0xF(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
struct UNiagaraDataChannelHandler_GetDataChannelWriter_Params
{
public:
	class UNiagaraDataChannelWriter*             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraDataChannelHandler.GetDataChannelReader
struct UNiagaraDataChannelHandler_GetDataChannelReader_Params
{
public:
	class UNiagaraDataChannelReader*             ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
struct UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Params
{
public:
	class AActor*                                InSource;                                          // 0x0(0x8)(None)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(None)
	uint8                                        Pad_28D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
struct UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x0(0x8)(None)
	class FName                                  UserParameterName;                                 // 0x8(0x8)(None)
	class FName                                  GraphName;                                         // 0x10(0x8)(None)
	class FName                                  RemapName;                                         // 0x18(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
struct ANiagaraActor_SetDestroyOnSystemFinish_Params
{
public:
	bool                                         bShouldDestroyOnSystemFinish;                      // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
struct ANiagaraActor_OnNiagaraSystemFinished_Params
{
public:
	class UNiagaraComponent*                     FinishedComponent;                                 // 0x0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec4
struct UNiagaraComponent_SetVariableVec4_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_2B5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              InValue;                                           // 0x10(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec3
struct UNiagaraComponent_SetVariableVec3_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	struct FVector                               InValue;                                           // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableVec2
struct UNiagaraComponent_SetVariableVec2_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	struct FVector2D                             InValue;                                           // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
struct UNiagaraComponent_SetVariableTextureRenderTarget_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class UTextureRenderTarget*                  TextureRenderTarget;                               // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableTexture
struct UNiagaraComponent_SetVariableTexture_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class UTexture*                              Texture;                                           // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableStaticMesh
struct UNiagaraComponent_SetVariableStaticMesh_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class UStaticMesh*                           InValue;                                           // 0x8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableQuat
struct UNiagaraComponent_SetVariableQuat_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_2C8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 InValue;                                           // 0x10(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetVariablePosition
struct UNiagaraComponent_SetVariablePosition_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	struct FVector                               InValue;                                           // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableObject
struct UNiagaraComponent_SetVariableObject_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class UObject*                               Object;                                            // 0x8(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableMatrix
struct UNiagaraComponent_SetVariableMatrix_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	uint8                                        Pad_2CB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               InValue;                                           // 0x10(0x80)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableMaterial
struct UNiagaraComponent_SetVariableMaterial_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class UMaterialInterface*                    Object;                                            // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableLinearColor
struct UNiagaraComponent_SetVariableLinearColor_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	struct FLinearColor                          InValue;                                           // 0x8(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableInt
struct UNiagaraComponent_SetVariableInt_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	int32                                        InValue;                                           // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableFloat
struct UNiagaraComponent_SetVariableFloat_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	float                                        InValue;                                           // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetVariableBool
struct UNiagaraComponent_SetVariableBool_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	bool                                         InValue;                                           // 0x8(0x1)(None)
	uint8                                        Pad_2D2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetVariableActor
struct UNiagaraComponent_SetVariableActor_Params
{
public:
	class FName                                  InVariableName;                                    // 0x0(0x8)(None)
	class AActor*                                Actor;                                             // 0x8(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetTickBehavior
struct UNiagaraComponent_SetTickBehavior_Params
{
public:
	enum class ENiagaraTickBehavior              NewTickBehavior;                                   // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraComponent.SetSystemFixedBounds
struct UNiagaraComponent_SetSystemFixedBounds_Params
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetSimCache
struct UNiagaraComponent_SetSimCache_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(None)
	bool                                         bResetSystem;                                      // 0x8(0x1)(None)
	uint8                                        Pad_2D3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetSeekDelta
struct UNiagaraComponent_SetSeekDelta_Params
{
public:
	float                                        InSeekDelta;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
public:
	bool                                         bInRenderingEnabled;                               // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetRandomSeedOffset
struct UNiagaraComponent_SetRandomSeedOffset_Params
{
public:
	int32                                        NewRandomSeedOffset;                               // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct UNiagaraComponent_SetPreviewLODDistance_Params
{
public:
	bool                                         bEnablePreviewLODDistance;                         // 0x0(0x1)(None)
	uint8                                        Pad_2D5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreviewLODDistance;                                // 0x4(0x4)(None)
	float                                        PreviewMaxDistance;                                // 0x8(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetPaused
struct UNiagaraComponent_SetPaused_Params
{
public:
	bool                                         bInPaused;                                         // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector4                              InValue;                                           // 0x10(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector                               InValue;                                           // 0x10(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector2D                             InValue;                                           // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct UNiagaraComponent_SetNiagaraVariableQuat_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FQuat                                 InValue;                                           // 0x10(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
struct UNiagaraComponent_SetNiagaraVariablePosition_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector                               InValue;                                           // 0x10(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct UNiagaraComponent_SetNiagaraVariableObject_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	class UObject*                               Object;                                            // 0x10(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
struct UNiagaraComponent_SetNiagaraVariableMatrix_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FMatrix                               InValue;                                           // 0x10(0x80)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FLinearColor                          InValue;                                           // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct UNiagaraComponent_SetNiagaraVariableInt_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	int32                                        InValue;                                           // 0x10(0x4)(None)
	uint8                                        Pad_2E6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	float                                        InValue;                                           // 0x10(0x4)(None)
	uint8                                        Pad_2E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	bool                                         InValue;                                           // 0x10(0x1)(None)
	uint8                                        Pad_2EC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct UNiagaraComponent_SetNiagaraVariableActor_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	class AActor*                                Actor;                                             // 0x10(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetMaxSimTime
struct UNiagaraComponent_SetMaxSimTime_Params
{
public:
	float                                        InMaxTime;                                         // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetGpuComputeDebug
struct UNiagaraComponent_SetGpuComputeDebug_Params
{
public:
	bool                                         bEnableDebug;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetForceSolo
struct UNiagaraComponent_SetForceSolo_Params
{
public:
	bool                                         bInForceSolo;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
struct UNiagaraComponent_SetForceLocalPlayerEffect_Params
{
public:
	bool                                         bIsPlayerEffect;                                   // 0x0(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
struct UNiagaraComponent_SetEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(None)
	struct FBox                                  LocalBounds;                                       // 0x8(0x38)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetDesiredAge
struct UNiagaraComponent_SetDesiredAge_Params
{
public:
	float                                        InDesiredAge;                                      // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SetCustomTimeDilation
struct UNiagaraComponent_SetCustomTimeDilation_Params
{
public:
	float                                        Dilation;                                          // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
{
public:
	bool                                         bInCanRenderWhileSeeking;                          // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAutoDestroy
struct UNiagaraComponent_SetAutoDestroy_Params
{
public:
	bool                                         bInAutoDestroy;                                    // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraComponent.SetAsset
struct UNiagaraComponent_SetAsset_Params
{
public:
	class UNiagaraSystem*                        InAsset;                                           // 0x0(0x8)(None)
	bool                                         bResetExistingOverrideParameters;                  // 0x8(0x1)(None)
	uint8                                        Pad_2F7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAllowScalability
struct UNiagaraComponent_SetAllowScalability_Params
{
public:
	bool                                         bAllow;                                            // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct UNiagaraComponent_SetAgeUpdateMode_Params
{
public:
	enum class ENiagaraAgeUpdateMode             InAgeUpdateMode;                                   // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.SeekToDesiredAge
struct UNiagaraComponent_SeekToDesiredAge_Params
{
public:
	float                                        InDesiredAge;                                      // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.IsPaused
struct UNiagaraComponent_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetTickBehavior
struct UNiagaraComponent_GetTickBehavior_Params
{
public:
	enum class ENiagaraTickBehavior              ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraComponent.GetSystemFixedBounds
struct UNiagaraComponent_GetSystemFixedBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.GetSimCache
struct UNiagaraComponent_GetSimCache_Params
{
public:
	class UNiagaraSimCache*                      ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetSeekDelta
struct UNiagaraComponent_GetSeekDelta_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetRandomSeedOffset
struct UNiagaraComponent_GetRandomSeedOffset_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetPreviewLODDistance
struct UNiagaraComponent_GetPreviewLODDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(None)
	class FString                                InValueName;                                       // 0x10(0x10)(None)
	TArray<struct FVector>                       ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(None)
	class FString                                InValueName;                                       // 0x10(0x10)(None)
	TArray<float>                                ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
public:
	class FString                                InEmitterName;                                     // 0x0(0x10)(None)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetMaxSimTime
struct UNiagaraComponent_GetMaxSimTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
struct UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetForceSolo
struct UNiagaraComponent_GetForceSolo_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
struct UNiagaraComponent_GetForceLocalPlayerEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
struct UNiagaraComponent_GetEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(None)
	struct FBox                                  ReturnValue;                                       // 0x8(0x38)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetDesiredAge
struct UNiagaraComponent_GetDesiredAge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraComponent.GetDataInterface
struct UNiagaraComponent_GetDataInterface_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	class UNiagaraDataInterface*                 ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraComponent.GetCustomTimeDilation
struct UNiagaraComponent_GetCustomTimeDilation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.GetAsset
struct UNiagaraComponent_GetAsset_Params
{
public:
	class UNiagaraSystem*                        ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetAllowScalability
struct UNiagaraComponent_GetAllowScalability_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct UNiagaraComponent_GetAgeUpdateMode_Params
{
public:
	enum class ENiagaraAgeUpdateMode             ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraComponent.ClearSimCache
struct UNiagaraComponent_ClearSimCache_Params
{
public:
	bool                                         bResetSystem;                                      // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
struct UNiagaraComponent_ClearEmitterFixedBounds_Params
{
public:
	class FName                                  EmitterName;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct UNiagaraComponent_AdvanceSimulationByTime_Params
{
public:
	float                                        SimulateTime;                                      // 0x0(0x4)(None)
	float                                        TickDeltaSeconds;                                  // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraComponent.AdvanceSimulation
struct UNiagaraComponent_AdvanceSimulation_Params
{
public:
	int32                                        TickCount;                                         // 0x0(0x4)(None)
	float                                        TickDeltaSeconds;                                  // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
struct UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class FName                                  Channel;                                           // 0x8(0x8)(None)
	class UNiagaraDataChannelHandler*            ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_377[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x18(0x18)(None)
	bool                                         bSizeToFit;                                        // 0x30(0x1)(None)
	uint8                                        Pad_379[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_37B[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Value;                                             // 0x20(0x20)(None)
	bool                                         bSizeToFit;                                        // 0x40(0x1)(None)
	uint8                                        Pad_37C[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector4>                      ArrayData;                                         // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_381[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Value;                                             // 0x18(0x10)(None)
	bool                                         bSizeToFit;                                        // 0x28(0x1)(None)
	uint8                                        Pad_382[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector2D>                     ArrayData;                                         // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector>                       ArrayData;                                         // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	int32                                        Value;                                             // 0x14(0x4)(None)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(None)
	uint8                                        Pad_387[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<int32>                                ArrayData;                                         // 0x10(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_392[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x20(0x20)(None)
	bool                                         bSizeToFit;                                        // 0x40(0x1)(None)
	uint8                                        Pad_393[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FQuat>                         ArrayData;                                         // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_39D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x18(0x18)(None)
	bool                                         bSizeToFit;                                        // 0x30(0x1)(None)
	uint8                                        Pad_39E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector>                       ArrayData;                                         // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	int32                                        Value;                                             // 0x14(0x4)(None)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(None)
	uint8                                        Pad_3A1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<int32>                                ArrayData;                                         // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	float                                        Value;                                             // 0x14(0x4)(None)
	bool                                         bSizeToFit;                                        // 0x18(0x1)(None)
	uint8                                        Pad_3A3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<float>                                ArrayData;                                         // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	struct FLinearColor                          Value;                                             // 0x14(0x10)(None)
	bool                                         bSizeToFit;                                        // 0x24(0x1)(None)
	uint8                                        Pad_3A8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FLinearColor>                  ArrayData;                                         // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         Value;                                             // 0x14(0x1)(None)
	bool                                         bSizeToFit;                                        // 0x15(0x1)(None)
	uint8                                        Pad_3AC[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<bool>                                 ArrayData;                                         // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3B2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3B5[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ReturnValue;                                       // 0x20(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector4>                      ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3B8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector2D>                     ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	int32                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3C5[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 ReturnValue;                                       // 0x20(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FQuat>                         ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_3C9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FVector>                       ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	int32                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<int32>                                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	float                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	struct FLinearColor                          ReturnValue;                                       // 0x14(0x10)(None)
	uint8                                        Pad_3CF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_3D2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<bool>                                 ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct INiagaraParticleCallbackHandler_ReceiveParticleData_Params
{
public:
	TArray<struct FBasicParticleData>            Data;                                              // 0x0(0x10)(None)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x10(0x8)(None)
	struct FVector                               SimulationPositionOffset;                          // 0x18(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(None)
	int32                                        SizeX;                                             // 0x8(0x4)(None)
	int32                                        SizeY;                                             // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(None)
	int32                                        SizeX;                                             // 0x8(0x4)(None)
	int32                                        SizeY;                                             // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ZeroConstructor)
	class UTextureRenderTarget2D*                Dest;                                              // 0x8(0x8)(None)
	int32                                        AttributeIndex;                                    // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_40A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ZeroConstructor)
	class UTextureRenderTarget2D*                Dest;                                              // 0x8(0x8)(None)
	int32                                        TilesX;                                            // 0x10(0x4)(None)
	int32                                        TilesY;                                            // 0x14(0x4)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_40B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(None)
	int32                                        SizeX;                                             // 0x8(0x4)(None)
	int32                                        SizeY;                                             // 0xC(0x4)(None)
	int32                                        SizeZ;                                             // 0x10(0x4)(None)
	uint8                                        Pad_411[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(None)
	int32                                        SizeX;                                             // 0x8(0x4)(None)
	int32                                        SizeY;                                             // 0xC(0x4)(None)
	int32                                        SizeZ;                                             // 0x10(0x4)(None)
	uint8                                        Pad_412[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ZeroConstructor)
	class UVolumeTexture*                        Dest;                                              // 0x8(0x8)(None)
	int32                                        AttributeIndex;                                    // 0x10(0x4)(None)
	bool                                         ReturnValue;                                       // 0x14(0x1)(None)
	uint8                                        Pad_413[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
struct UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ZeroConstructor)
	class UVolumeTexture*                        Dest;                                              // 0x8(0x8)(None)
	int32                                        TilesX;                                            // 0x10(0x4)(None)
	int32                                        TilesY;                                            // 0x14(0x4)(None)
	int32                                        TileZ;                                             // 0x18(0x4)(None)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(None)
	uint8                                        Pad_414[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
struct UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FName                                  OverrideName;                                      // 0x8(0x8)(None)
	TArray<class AActor*>                        SourceActors;                                      // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
struct UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Params
{
public:
	class AActor*                                InSource;                                          // 0x0(0x8)(None)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(None)
	uint8                                        Pad_426[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params
{
public:
	struct FFXSystemSpawnParameters              SpawnParams;                                       // 0x0(0x78)(None)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x78(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
{
public:
	class UNiagaraSystem*                        SystemTemplate;                                    // 0x0(0x8)(ZeroConstructor)
	class USceneComponent*                       AttachToComponent;                                 // 0x8(0x8)(ZeroConstructor)
	class FName                                  AttachPointName;                                   // 0x10(0x8)(None)
	struct FVector                               Location;                                          // 0x18(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(None)
	enum class EAttachLocation                   LocationType;                                      // 0x48(0x1)(None)
	bool                                         bAutoDestroy;                                      // 0x49(0x1)(None)
	bool                                         bAutoActivate;                                     // 0x4A(0x1)(None)
	enum class ENCPoolMethod                     PoolingMethod;                                     // 0x4B(0x1)(None)
	bool                                         bPreCullCheck;                                     // 0x4C(0x1)(None)
	bool                                         bDontSpawnOutOfView;                               // 0x4D(0x1)(None)
	bool                                         bAllowSpawnLoopingFX;                              // 0x4E(0x1)(None)
	uint8                                        Pad_449[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
struct UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params
{
public:
	struct FFXSystemSpawnParameters              SpawnParams;                                       // 0x0(0x78)(None)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x78(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UNiagaraSystem*                        SystemTemplate;                                    // 0x8(0x8)(ZeroConstructor)
	struct FVector                               Location;                                          // 0x10(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(None)
	struct FVector                               Scale;                                             // 0x40(0x18)(None)
	bool                                         bAutoDestroy;                                      // 0x58(0x1)(None)
	bool                                         bAutoActivate;                                     // 0x59(0x1)(None)
	enum class ENCPoolMethod                     PoolingMethod;                                     // 0x5A(0x1)(None)
	bool                                         bPreCullCheck;                                     // 0x5B(0x1)(None)
	bool                                         bDontSpawnOutOfView;                               // 0x5C(0x1)(None)
	uint8                                        Pad_454[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DontSpawnOutOfViewCheckRadius;                     // 0x60(0x4)(None)
	bool                                         bAllowSpawnLoopingFX;                              // 0x64(0x1)(None)
	uint8                                        Pad_455[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     ReturnValue;                                       // 0x68(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	class UVolumeTexture*                        Texture;                                           // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
struct UNiagaraFunctionLibrary_SetTextureObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	class UTexture*                              Texture;                                           // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
struct UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	class UTexture2DArray*                       Texture;                                           // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	TArray<class FName>                          SamplingRegions;                                   // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	TArray<class FName>                          FilteredSockets;                                   // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(None)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	TArray<class FName>                          FilteredBones;                                     // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   Primitive;                                         // 0x8(0x8)(None)
	int32                                        CollisionGroup;                                    // 0x10(0x4)(None)
	uint8                                        Pad_484[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class AActor*                                Actor;                                             // 0x8(0x8)(None)
	int32                                        CollisionGroup;                                    // 0x10(0x4)(None)
	uint8                                        Pad_489[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	int32                                        CollisionGroup;                                    // 0x8(0x4)(None)
	uint8                                        Pad_48C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	class UStaticMesh*                           StaticMesh;                                        // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
public:
	class UNiagaraComponent*                     NiagaraSystem;                                     // 0x0(0x8)(ZeroConstructor)
	class FString                                OverrideName;                                      // 0x8(0x10)(None)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UNiagaraParameterCollection*           Collection;                                        // 0x8(0x8)(ZeroConstructor)
	class UNiagaraParameterCollectionInstance*   ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
struct UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_4A0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector                               InValue;                                           // 0x10(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector4                              InValue;                                           // 0x10(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector2D                             InValue;                                           // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FQuat                                 InValue;                                           // 0x10(0x20)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	int32                                        InValue;                                           // 0x10(0x4)(None)
	uint8                                        Pad_4C3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	float                                        InValue;                                           // 0x10(0x4)(None)
	uint8                                        Pad_4C4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FLinearColor                          InValue;                                           // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	bool                                         InValue;                                           // 0x10(0x1)(None)
	uint8                                        Pad_4C6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector4                              ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FQuat                                 ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_4C7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_4C8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	struct FLinearColor                          ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
{
public:
	class FString                                InVariableName;                                    // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_4C9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraBaselineController.OnTickTest
struct UNiagaraBaselineController_OnTickTest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraBaselineController.OnOwnerTick
struct UNiagaraBaselineController_OnOwnerTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraBaselineController.OnEndTest
struct UNiagaraBaselineController_OnEndTest_Params
{
public:
	struct FNiagaraPerfBaselineStats             Stats;                                             // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraBaselineController.GetSystem
struct UNiagaraBaselineController_GetSystem_Params
{
public:
	class UNiagaraSystem*                        ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function Niagara.NiagaraPreviewBase.SetSystem
struct ANiagaraPreviewBase_SetSystem_Params
{
public:
	class UNiagaraSystem*                        InSystem;                                          // 0x0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function Niagara.NiagaraPreviewBase.SetLabelText
struct ANiagaraPreviewBase_SetLabelText_Params
{
public:
	class FText                                  InXAxisText;                                       // 0x0(0x18)(None)
	class FText                                  InYAxisText;                                       // 0x18(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraPreviewAxis.Num
struct UNiagaraPreviewAxis_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct UNiagaraPreviewAxis_ApplyToPreview_Params
{
public:
	class UNiagaraComponent*                     PreviewComponent;                                  // 0x0(0x8)(None)
	int32                                        PreviewIndex;                                      // 0x8(0x4)(None)
	bool                                         bIsXAxis;                                          // 0xC(0x1)(None)
	uint8                                        Pad_4D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutLabelText;                                      // 0x10(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraPreviewGrid.SetPaused
struct ANiagaraPreviewGrid_SetPaused_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraPreviewGrid.GetPreviews
struct ANiagaraPreviewGrid_GetPreviews_Params
{
public:
	TArray<class UNiagaraComponent*>             OutPreviews;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct ANiagaraPreviewGrid_ActivatePreviews_Params
{
public:
	bool                                         bReset;                                            // 0x0(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVectorAttribute
struct UNiagaraSimCache_ReadVectorAttribute_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	int32                                        FrameIndex;                                        // 0x20(0x4)(None)
	uint8                                        Pad_4FA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVector4Attribute
struct UNiagaraSimCache_ReadVector4Attribute_Params
{
public:
	TArray<struct FVector4>                      OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	int32                                        FrameIndex;                                        // 0x20(0x4)(None)
	uint8                                        Pad_4FC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadVector2Attribute
struct UNiagaraSimCache_ReadVector2Attribute_Params
{
public:
	TArray<struct FVector2D>                     OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	int32                                        FrameIndex;                                        // 0x20(0x4)(None)
	uint8                                        Pad_4FD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
struct UNiagaraSimCache_ReadQuatAttributeWithRebase_Params
{
public:
	TArray<struct FQuat>                         OutValues;                                         // 0x0(0x10)(None)
	struct FQuat                                 Quat;                                              // 0x10(0x20)(None)
	class FName                                  AttributeName;                                     // 0x30(0x8)(None)
	class FName                                  EmitterName;                                       // 0x38(0x8)(None)
	int32                                        FrameIndex;                                        // 0x40(0x4)(None)
	uint8                                        Pad_4FF[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadQuatAttribute
struct UNiagaraSimCache_ReadQuatAttribute_Params
{
public:
	TArray<struct FQuat>                         OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	bool                                         bLocalSpaceToWorld;                                // 0x20(0x1)(None)
	uint8                                        Pad_501[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameIndex;                                        // 0x24(0x4)(None)
};

// 0x90 (0x90 - 0x0)
// Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
struct UNiagaraSimCache_ReadPositionAttributeWithRebase_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(None)
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	class FName                                  AttributeName;                                     // 0x70(0x8)(None)
	class FName                                  EmitterName;                                       // 0x78(0x8)(None)
	int32                                        FrameIndex;                                        // 0x80(0x4)(None)
	uint8                                        Pad_503[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadPositionAttribute
struct UNiagaraSimCache_ReadPositionAttribute_Params
{
public:
	TArray<struct FVector>                       OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	bool                                         bLocalSpaceToWorld;                                // 0x20(0x1)(None)
	uint8                                        Pad_505[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameIndex;                                        // 0x24(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadIntAttribute
struct UNiagaraSimCache_ReadIntAttribute_Params
{
public:
	TArray<int32>                                OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	int32                                        FrameIndex;                                        // 0x20(0x4)(None)
	uint8                                        Pad_507[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadFloatAttribute
struct UNiagaraSimCache_ReadFloatAttribute_Params
{
public:
	TArray<float>                                OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	int32                                        FrameIndex;                                        // 0x20(0x4)(None)
	uint8                                        Pad_509[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Niagara.NiagaraSimCache.ReadColorAttribute
struct UNiagaraSimCache_ReadColorAttribute_Params
{
public:
	TArray<struct FLinearColor>                  OutValues;                                         // 0x0(0x10)(None)
	class FName                                  AttributeName;                                     // 0x10(0x8)(None)
	class FName                                  EmitterName;                                       // 0x18(0x8)(None)
	int32                                        FrameIndex;                                        // 0x20(0x4)(None)
	uint8                                        Pad_50C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.IsEmpty
struct UNiagaraSimCache_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.IsCacheValid
struct UNiagaraSimCache_IsCacheValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetStartSeconds
struct UNiagaraSimCache_GetStartSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetNumFrames
struct UNiagaraSimCache_GetNumFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function Niagara.NiagaraSimCache.GetNumEmitters
struct UNiagaraSimCache_GetNumEmitters_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraSimCache.GetEmitterNames
struct UNiagaraSimCache_GetEmitterNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function Niagara.NiagaraSimCache.GetEmitterName
struct UNiagaraSimCache_GetEmitterName_Params
{
public:
	int32                                        EmitterIndex;                                      // 0x0(0x4)(None)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
struct UNiagaraSimCache_GetAttributeCaptureMode_Params
{
public:
	enum class ENiagaraSimCacheAttributeCaptureMode ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
struct UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(None)
};

// 0x88 (0x88 - 0x0)
// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(ZeroConstructor)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(None)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(ZeroConstructor)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(ZeroConstructor)
	int32                                        CaptureRate;                                       // 0x70(0x4)(None)
	bool                                         bAdvanceSimulation;                                // 0x74(0x1)(None)
	uint8                                        Pad_515[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdvanceDeltaTime;                                  // 0x78(0x4)(None)
	uint8                                        Pad_516[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncNiagaraCaptureSimCache*          ReturnValue;                                       // 0x80(0x8)(None)
};

// 0x88 (0x88 - 0x0)
// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(ZeroConstructor)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(None)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(ZeroConstructor)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(ZeroConstructor)
	int32                                        NumFrames;                                         // 0x70(0x4)(None)
	int32                                        CaptureRate;                                       // 0x74(0x4)(None)
	bool                                         bAdvanceSimulation;                                // 0x78(0x1)(None)
	uint8                                        Pad_51C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdvanceDeltaTime;                                  // 0x7C(0x4)(None)
	class UAsyncNiagaraCaptureSimCache*          ReturnValue;                                       // 0x80(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
struct UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UNiagaraSimCache*                      ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
struct UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Params
{
public:
	class UNiagaraSimCache*                      SimCache;                                          // 0x0(0x8)(ZeroConstructor)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x8(0x58)(None)
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x60(0x8)(ZeroConstructor)
	class UNiagaraSimCache*                      OutSimCache;                                       // 0x68(0x8)(None)
	bool                                         bAdvanceSimulation;                                // 0x70(0x1)(None)
	uint8                                        Pad_528[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdvanceDeltaTime;                                  // 0x74(0x4)(None)
	bool                                         ReturnValue;                                       // 0x78(0x1)(None)
	uint8                                        Pad_529[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


