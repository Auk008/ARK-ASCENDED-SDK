#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x7B8 - 0x788)
// BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C
class AProjTekDinoHelmet_C : public AShooterProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(None)
	class UChildActorComponent*                  ChildActor1;                                       // 0x790(0x8)(ZeroConstructor)
	struct FVector                               StartLocation;                                     // 0x798(0x18)(None)
	double                                       MaxStructureImpactDistance;                        // 0x7B0(0x8)(None)

	static class UClass* StaticClass();
	static class AProjTekDinoHelmet_C* GetDefaultObj();

	void BPIgnoreRadialDamageVictim(class AActor* Victim, bool ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_BPIsA_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ReceiveBeginPlay();
	void OnExplode(const struct FHitResult& Result);
	void ExecuteUbergraph_ProjTekDinoHelmet(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& K2Node_Event_Result, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_VSize_ReturnValue, class APrimalStructure* K2Node_DynamicCast_AsPrimal_Structure, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


