#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x50 - 0x40)
// BlueprintGeneratedClass AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C
class UAnimNotify_PlayPlayerFoley_C : public UAnimNotify
{
public:
	enum class Enum_FoleyCollection              FoleySoundToPlay;                                  // 0x40(0x1)(None)
	uint8                                        Pad_4361[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Volume_Multiplier;                                 // 0x48(0x8)(None)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerFoley_C* GetDefaultObj();

	void SelectSound(class UPDA_FoleyCollection_C* FolleyColletion, class USoundBase* FoleySoundReferance, enum class Enum_FoleyCollection Temp_byte_Variable, class USoundBase* K2Node_Select_Default);
	void GetNotifyName(const class FString& ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, class USoundBase* FoleySound, class UPDA_FoleyCollection_C* Default_Collection, class AActor* CallFunc_GetOwner_ReturnValue, class USoundBase* CallFunc_SelectSound_FoleySoundReferance, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess, class UPrimalInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, class UPrimalItemArmorGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Generic, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USoundBase* CallFunc_SelectSound_FoleySoundReferance_1, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast);
};

}


