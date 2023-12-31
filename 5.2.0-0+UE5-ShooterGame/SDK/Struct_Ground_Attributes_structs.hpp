#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x66 (0x66 - 0x0)
// UserDefinedStruct Struct_Ground_Attributes.Struct_Ground_Attributes
struct FStruct_Ground_Attributes
{
public:
	struct FColor                                Color_24_4CD7CE00440677A7D40662B6041E0089;         // 0x0(0x4)(None)
	uint8                                        Pad_34DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SandAmount_7_0763F84A4CB9FE5C89AAEAA3F4FA6FB5;     // 0x8(0x8)(None)
	double                                       DustAmount_9_6103880148DC946C309F43BFBFC679B7;     // 0x10(0x8)(None)
	double                                       LeavesDebrisAmount_15_62F0085A47CEB0989A53958D93A8F398; // 0x18(0x8)(None)
	double                                       GrassDebrisAmount_16_6CD2F8844B7C0788CC6FB8BC2F6FEC9F; // 0x20(0x8)(None)
	double                                       ThatchDebrisAmount_17_CF2CCD984EEA9C6A86124BAB436CE062; // 0x28(0x8)(None)
	double                                       PebblesDebrisAmount_19_4FDE7AA849DB2BB03194F78E0154B559; // 0x30(0x8)(None)
	double                                       Friction_21_B5A125B94C07A7FB70538590D8609864;      // 0x38(0x8)(None)
	double                                       Bounce_23_D56CB78F4A82424D1B033A91D98FF65F;        // 0x40(0x8)(None)
	struct FAudio_Ground_Collection              StepSounds_27_D9E4C2AC49AF6C136E89EA818E59DC8D;    // 0x48(0x18)(None)
	int32                                        RenderIndex_30_490EDD3749C2BDE70F6192BA02E10E88;   // 0x60(0x4)(None)
	bool                                         ShowFootprints_34_D3871B734E2F65D166D1EEB436C00A19; // 0x64(0x1)(None)
	bool                                         ShowImpacts_36_8A9776F143EDF0F323D6E5A101D53959;   // 0x65(0x1)(None)
};

}


