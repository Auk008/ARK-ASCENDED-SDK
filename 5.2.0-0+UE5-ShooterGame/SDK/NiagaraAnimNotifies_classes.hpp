#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x78 - 0x30)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x30(0x8)(None)
	class FName                                  SocketName;                                        // 0x38(0x8)(None)
	struct FVector                               LocationOffset;                                    // 0x40(0x18)(None)
	struct FRotator                              RotationOffset;                                    // 0x58(0x18)(None)
	bool                                         bDestroyAtEnd;                                     // 0x70(0x1)(None)
	uint8                                        Pad_2B8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffect* GetDefaultObj();

	void GetSpawnedEffect(class UMeshComponent* MeshComp, class UFXSystemComponent* ReturnValue);
};

// 0x70 (0xE8 - 0x78)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	bool                                         bEnableNormalizedNotifyProgress;                   // 0x78(0x1)(None)
	uint8                                        Pad_2BE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NotifyProgressUserParameter;                       // 0x7C(0x8)(None)
	uint8                                        Pad_2BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCurveParameterPair>           AnimCurves;                                        // 0x88(0x10)(None)
	uint8                                        Pad_2C0[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffectAdvanced* GetDefaultObj();

	void GetNotifyProgress(class UMeshComponent* MeshComp, float ReturnValue);
};

// 0x90 (0xD0 - 0x40)
// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x40(0x8)(None)
	struct FVector                               LocationOffset;                                    // 0x48(0x18)(None)
	struct FRotator                              RotationOffset;                                    // 0x60(0x18)(None)
	struct FVector                               Scale;                                             // 0x78(0x18)(None)
	bool                                         bAbsoluteScale;                                    // 0x90(0x1)(None)
	uint8                                        Pad_2C3[0x2F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        Attached : 1;                                      // Mask: 0x1, PropSize: 0x10xC0(0x1)(None)
	uint8                                        BitPad_28 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0xC4(0x8)(None)
	uint8                                        Pad_2C5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_PlayNiagaraEffect* GetDefaultObj();

	void GetSpawnedEffect(class UFXSystemComponent* ReturnValue);
};

}


