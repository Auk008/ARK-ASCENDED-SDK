#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// Class VariantManagerContent.LevelVariantSets
class ULevelVariantSets : public UObject
{
public:
	class UClass*                                DirectorClass;                                     // 0x28(0x8)(ZeroConstructor)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(None)
	uint8                                        Pad_6DC[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelVariantSets* GetDefaultObj();

	void GetVariantSetByName(const class FString& VariantSetName, class UVariantSet* ReturnValue);
	void GetVariantSet(int32 VariantSetIndex, class UVariantSet* ReturnValue);
	void GetNumVariantSets(int32 ReturnValue);
};

// 0x70 (0x528 - 0x4B8)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x4B8(0x20)(None)
	TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                 // 0x4D8(0x50)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ALevelVariantSetsActor* GetDefaultObj();

	void SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName, bool ReturnValue);
	void SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex, bool ReturnValue);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	void GetLevelVariantSets(bool bLoad, class ULevelVariantSets* ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_6E3[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelVariantSetsFunctionDirector* GetDefaultObj();

};

// 0x198 (0x1C0 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_6EB[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(ZeroConstructor)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(None)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(None)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(None)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(None)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(None)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(None)
	uint8                                        Pad_6EC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                LeafPropertyClass;                                 // 0x128(0x8)(None)
	uint8                                        Pad_6ED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(None)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(None)
	uint8                                        Pad_6EE[0x77];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPropertyValue* GetDefaultObj();

	void HasRecordedData(bool ReturnValue);
	void GetPropertyTooltip(class FText ReturnValue);
	void GetFullDisplayString(const class FString& ReturnValue);
};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueTransform
class UPropertyValueTransform : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueTransform* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueVisibility
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueVisibility* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueColor
class UPropertyValueColor : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueColor* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueMaterial
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueMaterial* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueOption
class UPropertyValueOption : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueOption* GetDefaultObj();

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueSoftObject
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static class UClass* StaticClass();
	static class UPropertyValueSoftObject* GetDefaultObj();

};

// 0x28 (0x4E0 - 0x4B8)
// Class VariantManagerContent.SwitchActor
class ASwitchActor : public AActor
{
public:
	uint8                                        Pad_6F3[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x4D0(0x8)(ZeroConstructor)
	int32                                        LastSelectedOption;                                // 0x4D8(0x4)(None)
	uint8                                        Pad_6F4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASwitchActor* GetDefaultObj();

	void SelectOption(int32 OptionIndex);
	void GetSelectedOption(int32 ReturnValue);
	void GetOptions(const TArray<class AActor*>& ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class VariantManagerContent.Variant
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>            Dependencies;                                      // 0x28(0x10)(ZeroConstructor)
	class FText                                  DisplayText;                                       // 0x38(0x18)(None)
	uint8                                        Pad_713[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x68(0x10)(ZeroConstructor)
	class UTexture2D*                            Thumbnail;                                         // 0x78(0x8)(None)

	static class UClass* StaticClass();
	static class UVariant* GetDefaultObj();

	void SwitchOn();
	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
	void SetDisplayText(class FText NewDisplayText);
	void SetDependency(int32 Index, const struct FVariantDependency& Dependency);
	void IsActive(bool ReturnValue);
	void GetThumbnail(class UTexture2D* ReturnValue);
	void GetParent(class UVariantSet* ReturnValue);
	void GetNumDependencies(int32 ReturnValue);
	void GetNumActors(int32 ReturnValue);
	void GetDisplayText(class FText ReturnValue);
	void GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies, const TArray<class UVariant*>& ReturnValue);
	void GetDependency(int32 Index, const struct FVariantDependency& ReturnValue);
	void GetActor(int32 ActorIndex, class AActor* ReturnValue);
	void DeleteDependency(int32 Index);
	void AddDependency(const struct FVariantDependency& Dependency, int32 ReturnValue);
};

// 0x70 (0x98 - 0x28)
// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public UObject
{
public:
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(None)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x20)(None)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x58(0x1C)(ZeroConstructor)
	uint8                                        Pad_716[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x78(0x10)(None)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x88(0x10)(None)

	static class UClass* StaticClass();
	static class UVariantObjectBinding* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(None)
	uint8                                        Pad_721[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExpanded;                                         // 0x58(0x1)(None)
	uint8                                        Pad_722[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(ZeroConstructor)
	class UTexture2D*                            Thumbnail;                                         // 0x70(0x8)(None)

	static class UClass* StaticClass();
	static class UVariantSet* GetDefaultObj();

	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
	void SetDisplayText(class FText NewDisplayText);
	void GetVariantByName(const class FString& VariantName, class UVariant* ReturnValue);
	void GetVariant(int32 VariantIndex, class UVariant* ReturnValue);
	void GetThumbnail(class UTexture2D* ReturnValue);
	void GetParent(class ULevelVariantSets* ReturnValue);
	void GetNumVariants(int32 ReturnValue);
	void GetDisplayText(class FText ReturnValue);
};

}


