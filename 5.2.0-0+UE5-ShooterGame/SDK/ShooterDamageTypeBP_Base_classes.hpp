#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x179 - 0x168)
// BlueprintGeneratedClass ShooterDamageTypeBP_Base.ShooterDamageTypeBP_Base_C
class UShooterDamageTypeBP_Base_C : public UShooterDamageType
{
public:
	bool                                         bCauseRaidTorpor;                                  // 0x168(0x1)(None)
	uint8                                        Pad_351D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RaidTorporDamageMultiplier;                        // 0x170(0x8)(None)
	bool                                         bKnockRaft;                                        // 0x178(0x1)(None)

	static class UClass* StaticClass();
	static class UShooterDamageTypeBP_Base_C* GetDefaultObj();

};

}


