#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SP_Interpolators.SPInterpolatorsBPLibrary
class USPInterpolatorsBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USPInterpolatorsBPLibrary* GetDefaultObj();

	void ResetIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator);
	void ResetIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator);
	void ResetIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator);
	void ResetDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator);
	void ResetDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator);
	void ResetDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator);
	void ResetCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator);
	void ResetCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator);
	void ResetAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator);
	void ResetAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator);
	void ResetAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator);
	void EvalIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue);
	void EvalIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue);
	void EvalIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator, float NewGoal, float DeltaTime, float ReturnValue);
	void EvalDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue);
	void EvalDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue);
	void EvalDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator, float NewGoal, float DeltaTime, float ReturnValue);
	void EvalCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue);
	void EvalCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue);
	void EvalAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue);
	void EvalAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue);
	void EvalAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator, float NewGoal, float DeltaTime, float ReturnValue);
};

}


