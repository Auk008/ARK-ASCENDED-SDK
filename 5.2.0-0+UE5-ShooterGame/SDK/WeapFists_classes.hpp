#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1050 - 0x1040)
// BlueprintGeneratedClass WeapFists.WeapFists_C
class AWeapFists_C : public AShooterWeapon_Melee
{
public:
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1;                // 0x1040(0x8)(Edit, ZeroConstructor)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base;                 // 0x1048(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AWeapFists_C* GetDefaultObj();

	void BPOverrideMeleeSwingSocket(class FName FromSocket, class FName ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName K2Node_Select_Default);
};

}


