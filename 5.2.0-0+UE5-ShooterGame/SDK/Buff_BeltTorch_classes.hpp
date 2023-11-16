#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xBF8 - 0xB50)
// BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C
class ABuff_BeltTorch_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(AutoWeak, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB58(0x8)(Edit, ZeroConstructor)
	class UAudioComponent*                       Audio;                                             // 0xB60(0x8)(Edit, ZeroConstructor)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB68(0x8)(Edit, ZeroConstructor)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB70(0x8)(Edit, ZeroConstructor)
	class USceneComponent*                       Transform;                                         // 0xB78(0x8)(Edit, ZeroConstructor)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB80(0x8)(Edit, ZeroConstructor)
	int32                                        AssociatedTorchItemID1;                            // 0xB88(0x4)(None)
	int32                                        AssociatedTorchItemID2;                            // 0xB8C(0x4)(None)
	bool                                         bAreTorchIDsInitialized;                           // 0xB90(0x1)(None)
	bool                                         bIsTorchMeshInitialized;                           // 0xB91(0x1)(None)
	uint8                                        Pad_4263[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xB98(0x8)(ZeroConstructor)
	double                                       LastTimeConsumedDurability;                        // 0xBA0(0x8)(None)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBA8(0x8)(None)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBB0(0x10)(None)
	bool                                         bAreTorchColorsInitialized;                        // 0xBC0(0x1)(None)
	uint8                                        Pad_4264[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AssociatedWeaponClass;                             // 0xBC8(0x8)(ZeroConstructor)
	bool                                         bIsFlameColorInitialized;                          // 0xBD0(0x1)(None)
	uint8                                        Pad_4265[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FlameColorIndex;                                   // 0xBD4(0x4)(None)
	bool                                         bUseCascade;                                       // 0xBD8(0x1)(None)
	bool                                         bIsInitializedFromSave;                            // 0xBD9(0x1)(None)
	bool                                         bUseFPV;                                           // 0xBDA(0x1)(None)
	uint8                                        Pad_4266[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FPVLightOffset;                                    // 0xBE0(0x18)(None)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	void ActivateVFX(class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UpdateTorchType(bool FPV, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex, bool ReturnValue);
	void BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries, const TArray<struct FMultiUseEntry>& ReturnValue);
	void InitializeTorchFromItem(class UPrimalItem* TheItem, class UClass* WeaponClassOverride, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, int32 CallFunc_GetFlameColorIndex_Index, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void SetFlameColorIndex(int32 TheIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void UpdateTorchFlameColor(class UMaterialInstanceDynamic* TheMIC, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetTorchFlameColor(const struct FLinearColor& TheColor, class UMaterialInstanceDynamic* TheMIC, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
	void InitializeAssociatedWeaponClass(class UClass* WeaponClass, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Update_All_Torch_Colors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateTorchColorsArray(class UPrimalItem* ForPrimalItem, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetTorchColorByIndex(const struct FLinearColor& TheColor, int32 TheColorIndex, class UMaterialInstanceDynamic* TheMIC, bool CallFunc_InRange_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess_1);
	void ApplyMeshColorization(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShouldDeactivateBuff(bool bShouldDeactivate, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsSubmerged_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void InitializeDefaultTorchWeapon(bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool K2Node_DynamicCast_bSuccess);
	void InitializeTorchMesh(bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
	void DeactivateBeltTorch(bool bEquipTorchOnDeactivation, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AreValidTorchIDs(int32 TorchID1, int32 TorchID2, bool bAreValid, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalItem* CallFunc_BPFindItemWithID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InitializeTorchItem(bool bInitialized, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalItem* CallFunc_BPFindItemWithID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InitializeTorchIDs(class UPrimalItem* TorchItem, int32 CallFunc_BPGetItemID_ItemID1, int32 CallFunc_BPGetItemID_ItemID2, bool CallFunc_AreValidTorchIDs_bAreValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue);
	void Server_DeactivateBeltTorch();
	void BuffTickServer(float DeltaTime);
	void SetTorchColorByIndex_Multicast(const struct FLinearColor& TheColor, int32 TheIndex);
	void BPOnInputEvent(enum class EPrimalCharacterInputType InputType);
	void SetTorchFlameColor_Multicast(const struct FLinearColor& TheColor);
	void BuffTickClient(float DeltaTime);
	void BPDeactivated(class AActor* ForInstigator);
	void ExecuteUbergraph_Buff_BeltTorch(int32 EntryPoint, float K2Node_Event_DeltaTime_1, bool CallFunc_AreValidTorchIDs_bAreValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_InitializeTorchItem_bInitialized, bool CallFunc_ShouldDeactivateBuff_bShouldDeactivate, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ObjectIsChildOf_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, int32 K2Node_CustomEvent_TheIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EPrimalCharacterInputType K2Node_Event_inputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* K2Node_Event_ForInstigator, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


