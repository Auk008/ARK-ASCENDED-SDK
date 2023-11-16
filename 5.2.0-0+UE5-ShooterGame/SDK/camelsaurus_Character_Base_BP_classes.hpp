#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x32F8 - 0x32E8)
// BlueprintGeneratedClass camelsaurus_Character_Base_BP.camelsaurus_Character_Base_BP_C
class ACamelsaurus_Character_Base_BP_C : public ADino_Character_BP_C
{
public:
	double                                       WaterAmount;                                       // 0x32E8(0x8)(None)
	double                                       MaxWaterAmount;                                    // 0x32F0(0x8)(None)

	static class UClass* StaticClass();
	static class ACamelsaurus_Character_Base_BP_C* GetDefaultObj();

	void AddWater(double Amount, double NewWaterAmount, double OldWaterAmount, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
};

}


