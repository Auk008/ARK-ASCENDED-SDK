#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryFramework.BaseDynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UBaseDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDynamicMeshComponent");

	return Clss;
}


// BaseDynamicMeshComponent GeometryFramework.Default__BaseDynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseDynamicMeshComponent* UBaseDynamicMeshComponent::GetDefaultObj()
{
	static class UBaseDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDynamicMeshComponent*>(UBaseDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)

void UBaseDynamicMeshComponent::SetViewModeOverridesEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetViewModeOverridesEnabled");

	Params::UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)

void UBaseDynamicMeshComponent::SetShadowsEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetShadowsEnabled");

	Params::UBaseDynamicMeshComponent_SetShadowsEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (None)

void UBaseDynamicMeshComponent::SetSecondaryRenderMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetSecondaryRenderMaterial");

	Params::UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetVisible                                                      (None)

void UBaseDynamicMeshComponent::SetSecondaryBuffersVisibility(bool bSetVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetSecondaryBuffersVisibility");

	Params::UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Params Parms{};

	Parms.bSetVisible = bSetVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (None)

void UBaseDynamicMeshComponent::SetOverrideRenderMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetOverrideRenderMaterial");

	Params::UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (None)

void UBaseDynamicMeshComponent::SetEnableWireframeRenderPass(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableWireframeRenderPass");

	Params::UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetEnabled                                                      (None)

void UBaseDynamicMeshComponent::SetEnableRaytracing(bool bSetEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableRaytracing");

	Params::UBaseDynamicMeshComponent_SetEnableRaytracing_Params Parms{};

	Parms.bSetEnabled = bSetEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (None)

void UBaseDynamicMeshComponent::SetEnableFlatShading(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableFlatShading");

	Params::UBaseDynamicMeshComponent_SetEnableFlatShading_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      NewColor                                                         (None)

void UBaseDynamicMeshComponent::SetConstantOverrideColor(const struct FColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetConstantOverrideColor");

	Params::UBaseDynamicMeshComponent_SetConstantOverrideColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EDynamicMeshComponentColorOverrideModeNewMode                                                          (None)

void UBaseDynamicMeshComponent::SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetColorOverrideMode");

	Params::UBaseDynamicMeshComponent_SetColorOverrideMode_Params Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              K                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::HasOverrideRenderMaterial(int32 K, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "HasOverrideRenderMaterial");

	Params::UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Params Parms{};

	Parms.K = K;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetViewModeOverridesEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetViewModeOverridesEnabled");

	Params::UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetShadowsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetShadowsEnabled");

	Params::UBaseDynamicMeshComponent_GetShadowsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetSecondaryRenderMaterial(class UMaterialInterface* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetSecondaryRenderMaterial");

	Params::UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetSecondaryBuffersVisibility(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetSecondaryBuffersVisibility");

	Params::UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              MaterialIndex                                                    (None)
// class UMaterialInterface*          ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetOverrideRenderMaterial(int32 MaterialIndex, class UMaterialInterface* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetOverrideRenderMaterial");

	Params::UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Params Parms{};

	Parms.MaterialIndex = MaterialIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetFlatShadingEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetFlatShadingEnabled");

	Params::UBaseDynamicMeshComponent_GetFlatShadingEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetEnableWireframeRenderPass(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetEnableWireframeRenderPass");

	Params::UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetEnableRaytracing(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetEnableRaytracing");

	Params::UBaseDynamicMeshComponent_GetEnableRaytracing_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetDynamicMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetDynamicMesh");

	Params::UBaseDynamicMeshComponent_GetDynamicMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      ReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetConstantOverrideColor(const struct FColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetConstantOverrideColor");

	Params::UBaseDynamicMeshComponent_GetConstantOverrideColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDynamicMeshComponentColorOverrideModeReturnValue                                                      (None)

void UBaseDynamicMeshComponent::GetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetColorOverrideMode");

	Params::UBaseDynamicMeshComponent_GetColorOverrideMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:

void UBaseDynamicMeshComponent::ClearSecondaryRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "ClearSecondaryRenderMaterial");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:

void UBaseDynamicMeshComponent::ClearOverrideRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "ClearOverrideRenderMaterial");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GeometryFramework.MeshCommandChangeTarget
// (None)

class UClass* IMeshCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCommandChangeTarget");

	return Clss;
}


// MeshCommandChangeTarget GeometryFramework.Default__MeshCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshCommandChangeTarget* IMeshCommandChangeTarget::GetDefaultObj()
{
	static class IMeshCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshCommandChangeTarget*>(IMeshCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.MeshReplacementCommandChangeTarget
// (None)

class UClass* IMeshReplacementCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReplacementCommandChangeTarget");

	return Clss;
}


// MeshReplacementCommandChangeTarget GeometryFramework.Default__MeshReplacementCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshReplacementCommandChangeTarget* IMeshReplacementCommandChangeTarget::GetDefaultObj()
{
	static class IMeshReplacementCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshReplacementCommandChangeTarget*>(IMeshReplacementCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.MeshVertexCommandChangeTarget
// (None)

class UClass* IMeshVertexCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexCommandChangeTarget");

	return Clss;
}


// MeshVertexCommandChangeTarget GeometryFramework.Default__MeshVertexCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshVertexCommandChangeTarget* IMeshVertexCommandChangeTarget::GetDefaultObj()
{
	static class IMeshVertexCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshVertexCommandChangeTarget*>(IMeshVertexCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.DynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshComponent");

	return Clss;
}


// DynamicMeshComponent GeometryFramework.Default__DynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshComponent* UDynamicMeshComponent::GetDefaultObj()
{
	static class UDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshComponent*>(UDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCreateIfMissing                                                 (None)
// bool                               bDeleteExtraSlots                                                (None)
// bool                               ReturnValue                                                      (None)

void UDynamicMeshComponent::ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "ValidateMaterialSlots");

	Params::UDynamicMeshComponent_ValidateMaterialSlots_Params Parms{};

	Parms.bCreateIfMissing = bCreateIfMissing;
	Parms.bDeleteExtraSlots = bDeleteExtraSlots;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.UpdateCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bOnlyIfPending                                                   (None)

void UDynamicMeshComponent::UpdateCollision(bool bOnlyIfPending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "UpdateCollision");

	Params::UDynamicMeshComponent_UpdateCollision_Params Parms{};

	Parms.bOnlyIfPending = bOnlyIfPending;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.SetTangentsType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDynamicMeshComponentTangentsModeNewTangentsType                                                  (None)

void UDynamicMeshComponent::SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetTangentsType");

	Params::UDynamicMeshComponent_SetTangentsType_Params Parms{};

	Parms.NewTangentsType = NewTangentsType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                NewMesh                                                          (None)

void UDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetDynamicMesh");

	Params::UDynamicMeshComponent_SetDynamicMesh_Params Parms{};

	Parms.NewMesh = NewMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)
// bool                               bImmediateUpdate                                                 (None)

void UDynamicMeshComponent::SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetDeferredCollisionUpdatesEnabled");

	Params::UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bImmediateUpdate = bImmediateUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (None)
// bool                               bImmediateUpdate                                                 (None)

void UDynamicMeshComponent::SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetComplexAsSimpleCollisionEnabled");

	Params::UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.bImmediateUpdate = bImmediateUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.GetTangentsType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDynamicMeshComponentTangentsModeReturnValue                                                      (None)

void UDynamicMeshComponent::GetTangentsType(enum class EDynamicMeshComponentTangentsMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "GetTangentsType");

	Params::UDynamicMeshComponent_GetTangentsType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDynamicMeshComponent::EnableComplexAsSimpleCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "EnableComplexAsSimpleCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UMaterialInterface*>  NewMaterialSet                                                   (None)

void UDynamicMeshComponent::ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "ConfigureMaterialSet");

	Params::UDynamicMeshComponent_ConfigureMaterialSet_Params Parms{};

	Parms.NewMaterialSet = NewMaterialSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryFramework.DynamicMeshActor
// (Actor)

class UClass* ADynamicMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshActor");

	return Clss;
}


// DynamicMeshActor GeometryFramework.Default__DynamicMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADynamicMeshActor* ADynamicMeshActor::GetDefaultObj()
{
	static class ADynamicMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADynamicMeshActor*>(ADynamicMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                Mesh                                                             (None)
// bool                               ReturnValue                                                      (None)

void ADynamicMeshActor::ReleaseComputeMesh(class UDynamicMesh* Mesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "ReleaseComputeMesh");

	Params::ADynamicMeshActor_ReleaseComputeMesh_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADynamicMeshActor::ReleaseAllComputeMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "ReleaseAllComputeMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDynamicMeshComponent*       ReturnValue                                                      (None)

void ADynamicMeshActor::GetDynamicMeshComponent(class UDynamicMeshComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "GetDynamicMeshComponent");

	Params::ADynamicMeshActor_GetDynamicMeshComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (None)

void ADynamicMeshActor::GetComputeMeshPool(class UDynamicMeshPool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "GetComputeMeshPool");

	Params::ADynamicMeshActor_GetComputeMeshPool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADynamicMeshActor::FreeAllComputeMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "FreeAllComputeMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (None)

void ADynamicMeshActor::AllocateComputeMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "AllocateComputeMesh");

	Params::ADynamicMeshActor_AllocateComputeMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryFramework.DynamicMeshGenerator
// (None)

class UClass* UDynamicMeshGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshGenerator");

	return Clss;
}


// DynamicMeshGenerator GeometryFramework.Default__DynamicMeshGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshGenerator* UDynamicMeshGenerator::GetDefaultObj()
{
	static class UDynamicMeshGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshGenerator*>(UDynamicMeshGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.DynamicMesh
// (None)

class UClass* UDynamicMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMesh");

	return Clss;
}


// DynamicMesh GeometryFramework.Default__DynamicMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMesh* UDynamicMesh::GetDefaultObj()
{
	static class UDynamicMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMesh*>(UDynamicMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMesh.ResetToCube
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (None)

void UDynamicMesh::ResetToCube(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "ResetToCube");

	Params::UDynamicMesh_ResetToCube_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMesh.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (None)

void UDynamicMesh::Reset(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "Reset");

	Params::UDynamicMesh_Reset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMesh.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UDynamicMesh::IsEmpty(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "IsEmpty");

	Params::UDynamicMesh_IsEmpty_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMesh.GetTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UDynamicMesh::GetTriangleCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "GetTriangleCount");

	Params::UDynamicMesh_GetTriangleCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryFramework.DynamicMeshPool
// (None)

class UClass* UDynamicMeshPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshPool");

	return Clss;
}


// DynamicMeshPool GeometryFramework.Default__DynamicMeshPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshPool* UDynamicMeshPool::GetDefaultObj()
{
	static class UDynamicMeshPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshPool*>(UDynamicMeshPool::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMeshPool.ReturnMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                Mesh                                                             (None)

void UDynamicMeshPool::ReturnMesh(class UDynamicMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "ReturnMesh");

	Params::UDynamicMeshPool_ReturnMesh_Params Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDynamicMeshPool::ReturnAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "ReturnAllMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshPool.RequestMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (None)

void UDynamicMeshPool::RequestMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "RequestMesh");

	Params::UDynamicMeshPool_RequestMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshPool.FreeAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDynamicMeshPool::FreeAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "FreeAllMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


