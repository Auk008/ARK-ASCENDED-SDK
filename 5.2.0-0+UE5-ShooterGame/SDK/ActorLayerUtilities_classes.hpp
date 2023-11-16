#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ActorLayerUtilities.LayersBlueprintLibrary
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayersBlueprintLibrary* GetDefaultObj();

	void RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);
	void GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer, const TArray<class AActor*>& ReturnValue);
	void AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
};

}


