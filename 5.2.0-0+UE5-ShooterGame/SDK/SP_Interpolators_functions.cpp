#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SP_Interpolators.SPInterpolatorsBPLibrary
// (None)

class UClass* USPInterpolatorsBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SPInterpolatorsBPLibrary");

	return Clss;
}


// SPInterpolatorsBPLibrary SP_Interpolators.Default__SPInterpolatorsBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USPInterpolatorsBPLibrary* USPInterpolatorsBPLibrary::GetDefaultObj()
{
	static class USPInterpolatorsBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USPInterpolatorsBPLibrary*>(USPInterpolatorsBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorVector      Interpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (None)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorVector      Interpolator                                                     (None)
// struct FVector                     NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FVector                     ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (None)
// struct FRotator                    NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FRotator                    ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (None)
// float                              NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// float                              ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator, float NewGoal, float DeltaTime, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (None)
// struct FVector                     NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FVector                     ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (None)
// struct FRotator                    NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FRotator                    ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (None)
// float                              NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// float                              ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator, float NewGoal, float DeltaTime, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (None)
// struct FVector                     NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FVector                     ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (None)
// struct FRotator                    NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FRotator                    ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (None)
// struct FVector                     NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FVector                     ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator, const struct FVector& NewGoal, float DeltaTime, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (None)
// struct FRotator                    NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FRotator                    ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, float DeltaTime, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (None)
// float                              NewGoal                                                          (None)
// float                              DeltaTime                                                        (None)
// float                              ReturnValue                                                      (None)

void USPInterpolatorsBPLibrary::EvalAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator, float NewGoal, float DeltaTime, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


