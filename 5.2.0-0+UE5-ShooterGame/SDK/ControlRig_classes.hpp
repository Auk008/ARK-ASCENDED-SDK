#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x328 (0x350 - 0x28)
// Class ControlRig.RigHierarchy
class URigHierarchy : public UObject
{
public:
	uint8                                        Pad_1444[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(None)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(None)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(None)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(None)
	uint8                                        Pad_1446[0x99];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TransformStackIndex;                               // 0x128(0x4)(None)
	uint8                                        Pad_1447[0x74];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchyController*               HierarchyController;                               // 0x1A0(0x8)(ZeroConstructor)
	uint8                                        Pad_1448[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x200(0x50)(None)
	uint8                                        Pad_144A[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2D0(0x8)(None)
	uint8                                        Pad_144C[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigHierarchy* GetDefaultObj();

	void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
	void UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo);
	void SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren, bool ReturnValue);
	void SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren, bool ReturnValue);
	void SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren, bool ReturnValue);
	void SortKeys(const TArray<struct FRigElementKey>& InKeys, const TArray<struct FRigElementKey>& ReturnValue);
	void SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& InValue, bool ReturnValue);
	void SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& InValue, bool ReturnValue);
	void SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& InValue, bool ReturnValue);
	void SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& InValue, bool ReturnValue);
	void SetTag(const struct FRigElementKey& InItem, class FName InTag, bool ReturnValue);
	void SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& InValue, bool ReturnValue);
	void SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& InValue, bool ReturnValue);
	void SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& InValue, bool ReturnValue);
	void SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& InValue, bool ReturnValue);
	void SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& InValue, bool ReturnValue);
	void SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& InValue, bool ReturnValue);
	void SetPose_ForBlueprint(const struct FRigPose& InPose);
	void SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren, bool ReturnValue);
	void SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren, bool ReturnValue);
	void SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName InValue, bool ReturnValue);
	void SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue, bool ReturnValue);
	void SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& InValue, bool ReturnValue);
	void SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& InValue, bool ReturnValue);
	void SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 InValue, bool ReturnValue);
	void SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue, bool ReturnValue);
	void SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
	void SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float InValue, bool ReturnValue);
	void SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue, bool ReturnValue);
	void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
	void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);
	void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
	void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);
	void SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlShapeTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
	void SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
	void SetControlPreferredRotatorByIndex(int32 InElementIndex, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips);
	void SetControlPreferredRotator(const struct FRigElementKey& InKey, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips);
	void SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
	void SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool InValue, bool ReturnValue);
	void SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue, bool ReturnValue);
	void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
	void ResetToDefault();
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter);
	void ResetCurveValues();
	void Reset();
	void RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool ReturnValue);
	void RemoveAllMetadata(const struct FRigElementKey& InItem, bool ReturnValue);
	void Num(int32 ReturnValue);
	void MakeControlValueFromVector2D(const struct FVector2D& InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromVector(const struct FVector& InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromTransform(const struct FTransform& InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromRotator(const struct FRotator& InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromInt(int32 InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromFloat(float InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue, const struct FRigControlValue& ReturnValue);
	void MakeControlValueFromBool(bool InValue, const struct FRigControlValue& ReturnValue);
	void IsValidIndex(int32 InElementIndex, bool ReturnValue);
	void IsSelectedByIndex(int32 InIndex, bool ReturnValue);
	void IsSelected(const struct FRigElementKey& InKey, bool ReturnValue);
	void IsProcedural(const struct FRigElementKey& InKey, bool ReturnValue);
	void IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool ReturnValue);
	void IsCurveValueSetByIndex(int32 InElementIndex, bool ReturnValue);
	void IsCurveValueSet(const struct FRigElementKey& InKey, bool ReturnValue);
	void IsControllerAvailable(bool ReturnValue);
	void HasTag(const struct FRigElementKey& InItem, class FName InTag, bool ReturnValue);
	void GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& DefaultValue, const struct FVector& ReturnValue);
	void GetVectorFromControlValue(const struct FRigControlValue& InValue, const struct FVector& ReturnValue);
	void GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& ReturnValue);
	void GetVector2DFromControlValue(const struct FRigControlValue& InValue, const struct FVector2D& ReturnValue);
	void GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue, const struct FTransformNoScale& ReturnValue);
	void GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& DefaultValue, const struct FTransform& ReturnValue);
	void GetTransformFromControlValue(const struct FRigControlValue& InValue, const struct FTransform& ReturnValue);
	void GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& ReturnValue);
	void GetTags(const struct FRigElementKey& InItem, const TArray<class FName>& ReturnValue);
	void GetSelectedKeys(enum class ERigElementType InTypeFilter, const TArray<struct FRigElementKey>& ReturnValue);
	void GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& DefaultValue, const struct FRotator& ReturnValue);
	void GetRotatorFromControlValue(const struct FRigControlValue& InValue, const struct FRotator& ReturnValue);
	void GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& ReturnValue);
	void GetRootElementKeys(const TArray<struct FRigElementKey>& ReturnValue);
	void GetRigidBodyKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& DefaultValue, const struct FRigElementKey& ReturnValue);
	void GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& ReturnValue);
	void GetReferenceKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& DefaultValue, const struct FQuat& ReturnValue);
	void GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& ReturnValue);
	void GetPreviousParent(const struct FRigElementKey& InKey, const struct FRigElementKey& ReturnValue);
	void GetPreviousName(const struct FRigElementKey& InKey, class FName ReturnValue);
	void GetPose(bool bInitial, const struct FRigPose& ReturnValue);
	void GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial, const TArray<struct FRigElementWeight>& ReturnValue);
	void GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, const struct FRigElementWeight& ReturnValue);
	void GetParentTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue);
	void GetParentTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue);
	void GetParents(const struct FRigElementKey& InKey, bool bRecursive, const TArray<struct FRigElementKey>& ReturnValue);
	void GetNumberOfParents(const struct FRigElementKey& InKey, int32 ReturnValue);
	void GetNullKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName DefaultValue, class FName ReturnValue);
	void GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& ReturnValue);
	void GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName, enum class ERigMetadataType ReturnValue);
	void GetMetadataNames(const struct FRigElementKey& InItem, const TArray<class FName>& ReturnValue);
	void GetLocalTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue);
	void GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue);
	void GetLocalIndex_ForBlueprint(const struct FRigElementKey& InKey, int32 ReturnValue);
	void GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue);
	void GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue);
	void GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& DefaultValue, const struct FLinearColor& ReturnValue);
	void GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& ReturnValue);
	void GetKeys(const TArray<int32>& InElementIndices, const TArray<struct FRigElementKey>& ReturnValue);
	void GetKey(int32 InElementIndex, const struct FRigElementKey& ReturnValue);
	void GetIntFromControlValue(const struct FRigControlValue& InValue, int32 ReturnValue);
	void GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 DefaultValue, int32 ReturnValue);
	void GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& ReturnValue);
	void GetIndex_ForBlueprint(const struct FRigElementKey& InKey, int32 ReturnValue);
	void GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue);
	void GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue);
	void GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue);
	void GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue);
	void GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue);
	void GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue);
	void GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float DefaultValue, float ReturnValue);
	void GetFloatFromControlValue(const struct FRigControlValue& InValue, float ReturnValue);
	void GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& ReturnValue);
	void GetFirstParent(const struct FRigElementKey& InKey, const struct FRigElementKey& ReturnValue);
	void GetEulerTransformFromControlValue(const struct FRigControlValue& InValue, const struct FEulerTransform& ReturnValue);
	void GetDefaultParent(const struct FRigElementKey& InKey, const struct FRigElementKey& ReturnValue);
	void GetCurveValueByIndex(int32 InElementIndex, float ReturnValue);
	void GetCurveValue(const struct FRigElementKey& InKey, float ReturnValue);
	void GetCurveKeys(const TArray<struct FRigElementKey>& ReturnValue);
	void GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType, const struct FRigControlValue& ReturnValue);
	void GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType, const struct FRigControlValue& ReturnValue);
	void GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial, const struct FRotator& ReturnValue);
	void GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial, const struct FRotator& ReturnValue);
	void GetController(bool bCreateIfNeeded, class URigHierarchyController* ReturnValue);
	void GetControlKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetChildren(const struct FRigElementKey& InKey, bool bRecursive, const TArray<struct FRigElementKey>& ReturnValue);
	void GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool DefaultValue, bool ReturnValue);
	void GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& ReturnValue);
	void GetBoneKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void GetAllKeys_ForBlueprint(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue);
	void FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey, const struct FRigNullElement& ReturnValue);
	void FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey, const struct FRigControlElement& ReturnValue);
	void FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey, const struct FRigBoneElement& ReturnValue);
	void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy* InHierarchy);
	void Contains_ForBlueprint(const struct FRigElementKey& InKey, bool ReturnValue);
};

// 0x38 (0x90 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x30)(None)
	class FName                                  ControlName;                                       // 0x88(0x8)(None)

	static class UClass* StaticClass();
	static class UTransformableControlHandle* GetDefaultObj();

};

// 0x278 (0x3F8 - 0x180)
// Class ControlRig.ControlRig
class UControlRig : public URigVMHost
{
public:
	uint8                                        Pad_14D9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x188(0x1)(None)
	uint8                                        Pad_14DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x18C(0x4)(None)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x190(0x50)(None)
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x1E0(0x8)(ZeroConstructor)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x1E8(0x10)(ZeroConstructor)
	uint8                                        Pad_14DC[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x210(0x8)(ZeroConstructor)
	uint8                                        Pad_14DD[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x2A8(0x60)(None)
	class UControlRig*                           InteractionRig;                                    // 0x308(0x8)(ZeroConstructor)
	class UClass*                                InteractionRigClass;                               // 0x310(0x8)(ZeroConstructor)
	uint8                                        Pad_14DF[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x3D8(0x1)(ZeroConstructor)
	uint8                                        Pad_14E0[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRig* GetDefaultObj();

	void SetInteractionRigClass(class UClass* InInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInteractionRig);
	void SelectControl(class FName InControlName, bool bSelect);
	void RequestConstruction();
	void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, const struct FRigControlElement& Control, bool bSelected);
	void IsControlSelected(class FName InControlName, bool ReturnValue);
	void GetInteractionRigClass(class UClass* ReturnValue);
	void GetInteractionRig(class UControlRig* ReturnValue);
	void GetHostingActor(class AActor* ReturnValue);
	void GetHierarchy(class URigHierarchy* ReturnValue);
	void FindControlRigs(class UObject* Outer, class UClass* OptionalClass, const TArray<class UControlRig*>& ReturnValue);
	void CurrentControlSelection(const TArray<class FName>& ReturnValue);
	void CreateTransformableControlHandle(class UObject* Outer, class FName ControlName, class UTransformableControlHandle* ReturnValue);
	void ClearControlSelection(bool ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:
	uint8                                        Pad_14E5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigAnimInstance* GetDefaultObj();

};

// 0x0 (0x3A0 - 0x3A0)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UControlRigBlueprintGeneratedClass* GetDefaultObj();

};

// 0x160 (0x7E0 - 0x680)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	class UClass*                                ControlRigClass;                                   // 0x680(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x688(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x698(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x6A8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x6B8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x6C8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x6D8(0x10)(ZeroConstructor)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x6E8(0x10)(ZeroConstructor)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x6F8(0x10)(ZeroConstructor)
	bool                                         bEnableLazyEvaluation;                             // 0x708(0x1)(None)
	uint8                                        Pad_154C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LazyEvaluationPositionThreshold;                   // 0x70C(0x4)(None)
	float                                        LazyEvaluationRotationThreshold;                   // 0x710(0x4)(None)
	float                                        LazyEvaluationScaleThreshold;                      // 0x714(0x4)(None)
	bool                                         bResetTransformBeforeTick;                         // 0x718(0x1)(None)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x719(0x1)(None)
	bool                                         bUpdateRigOnTick;                                  // 0x71A(0x1)(None)
	bool                                         bUpdateInEditor;                                   // 0x71B(0x1)(None)
	bool                                         bDrawBones;                                        // 0x71C(0x1)(None)
	bool                                         bShowDebugDrawing;                                 // 0x71D(0x1)(None)
	uint8                                        Pad_154D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0x720(0x8)(ZeroConstructor)
	uint8                                        Pad_154E[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigComponent* GetDefaultObj();

	void Update(float DeltaTime);
	void SetObjectBinding(class UObject* InObjectToBind);
	void SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space);
	void SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren);
	void SetControlVector2D(class FName ControlName, const struct FVector2D& Value);
	void SetControlTransform(class FName ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space);
	void SetControlScale(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlRotator(class FName ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space);
	void SetControlRigClass(class UClass* InControlRigClass);
	void SetControlPosition(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space);
	void SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space);
	void SetControlInt(class FName ControlName, int32 Value);
	void SetControlFloat(class FName ControlName, float Value);
	void SetControlBool(class FName ControlName, bool Value);
	void SetBoneTransform(class FName BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void OnPreInitialize(class UControlRigComponent* Component);
	void OnPreForwardsSolve(class UControlRigComponent* Component);
	void OnPreConstruction(class UControlRigComponent* Component);
	void OnPostInitialize(class UControlRigComponent* Component);
	void OnPostForwardsSolve(class UControlRigComponent* Component);
	void OnPostConstruction(class UControlRigComponent* Component);
	void Initialize();
	void GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetElementNames(enum class ERigElementType ElementType, const TArray<class FName>& ReturnValue);
	void GetControlVector2D(class FName ControlName, const struct FVector2D& ReturnValue);
	void GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue);
	void GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FRotator& ReturnValue);
	void GetControlRig(class UControlRig* ReturnValue);
	void GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue);
	void GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetControlInt(class FName ControlName, int32 ReturnValue);
	void GetControlFloat(class FName ControlName, float ReturnValue);
	void GetControlBool(class FName ControlName, bool ReturnValue);
	void GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue);
	void GetAbsoluteTime(float ReturnValue);
	void DoesElementExist(class FName Name, enum class ERigElementType ElementType, bool ReturnValue);
	void ClearMappedElements();
	void CanExecute(bool ReturnValue);
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves);
	void AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0xB8 (0x570 - 0x4B8)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x4B8(0x8)(ZeroConstructor)
	class UClass*                                ControlRigClass;                                   // 0x4C0(0x8)(ZeroConstructor)
	bool                                         bRefreshOnTick;                                    // 0x4C8(0x1)(None)
	bool                                         bIsSelectable;                                     // 0x4C9(0x1)(None)
	uint8                                        Pad_155F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialOverride;                                  // 0x4D0(0x8)(ZeroConstructor)
	class FString                                ColorParameter;                                    // 0x4D8(0x10)(None)
	bool                                         bCastShadows;                                      // 0x4E8(0x1)(None)
	uint8                                        Pad_1560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ActorRootComponent;                                // 0x4F0(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x4F8(0x30)(ZeroConstructor)
	TArray<class FName>                          ControlNames;                                      // 0x528(0x10)(None)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x538(0x10)(None)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x548(0x10)(ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x558(0x10)(ZeroConstructor)
	class FName                                  ColorParameterName;                                // 0x568(0x8)(None)

	static class UClass* StaticClass();
	static class AControlRigControlActor* GetDefaultObj();

	void ResetControlActor();
	void Refresh();
	void Clear();
};

// 0x48 (0x500 - 0x4B8)
// Class ControlRig.ControlRigShapeActor
class AControlRigShapeActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x4B8(0x8)(ZeroConstructor)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x4C0(0x8)(ZeroConstructor)
	uint32                                       ControlRigIndex;                                   // 0x4C8(0x4)(None)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x4CC(0x8)(ZeroConstructor)
	class FName                                  ControlName;                                       // 0x4D4(0x8)(None)
	class FName                                  ShapeName;                                         // 0x4DC(0x8)(None)
	class FName                                  ColorParameterName;                                // 0x4E4(0x8)(None)
	uint8                                        Pad_1570[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x4FC(0x1)(None)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x4FC(0x1)(None)
	uint8                                        Pad_1571[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AControlRigShapeActor* GetDefaultObj();

	void SetSelected(bool bInSelected);
	void SetSelectable(bool bInSelectable);
	void SetHovered(bool bInHovered);
	void SetGlobalTransform(const struct FTransform& InTransform);
	void SetEnabled(bool bInEnabled);
	void OnTransformChanged(const struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
	void IsSelectedInEditor(bool ReturnValue);
	void IsHovered(bool ReturnValue);
	void IsEnabled(bool ReturnValue);
	void GetGlobalTransform(const struct FTransform& ReturnValue);
};

// 0x148 (0x170 - 0x28)
// Class ControlRig.ControlRigShapeLibrary
class UControlRigShapeLibrary : public UObject
{
public:
	uint8                                        Pad_1579[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xB0)(ZeroConstructor)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xE0(0x30)(ZeroConstructor)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0x110(0x30)(ZeroConstructor)
	class FName                                  MaterialColorParameter;                            // 0x140(0x8)(None)
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x148(0x10)(None)
	uint8                                        Pad_157B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigShapeLibrary* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRigTestData
class UControlRigTestData : public UObject
{
public:
	struct FSoftObjectPath                       ControlRigObjectPath;                              // 0x28(0x20)(None)
	struct FControlRigTestDataFrame              Initial;                                           // 0x48(0x90)(None)
	TArray<struct FControlRigTestDataFrame>      InputFrames;                                       // 0xD8(0x10)(None)
	TArray<struct FControlRigTestDataFrame>      OutputFrames;                                      // 0xE8(0x10)(None)
	TArray<int32>                                FramesToSkip;                                      // 0xF8(0x10)(None)
	double                                       Tolerance;                                         // 0x108(0x8)(None)
	uint8                                        Pad_15A5[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigTestData* GetDefaultObj();

	void SetupReplay(class UControlRig* InControlRig, bool bGroundTruth, bool ReturnValue);
	void ReleaseReplay();
	void Record(class UControlRig* InControlRig, double InRecordingDuration, bool ReturnValue);
	void IsReplaying(bool ReturnValue);
	void IsRecording(bool ReturnValue);
	void GetTimeRange(bool bInput, const struct FVector2D& ReturnValue);
	void GetPlaybackMode(enum class EControlRigTestDataPlaybackMode ReturnValue);
	void GetFrameIndexForTime(double InSeconds, bool bInput, int32 ReturnValue);
	void CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName, class UControlRigTestData* ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(None)
	uint8                                        Pad_15A7[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigValidator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UControlRigValidationPass* GetDefaultObj();

};

// 0x10 (0x408 - 0x3F8)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_15AB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAdditiveControlRig* GetDefaultObj();

};

// 0x40 (0x438 - 0x3F8)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x3F8(0x10)(None)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x408(0x1)(None)
	uint8                                        Pad_15AE[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFKControlRig* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(None)
	uint8                                        Pad_1603[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(None)
	uint8                                        Pad_1604[0x6C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigHierarchyController* GetDefaultObj();

	void SetSelection(const TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand, bool ReturnValue);
	void SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	void SetHierarchy(class URigHierarchy* InHierarchy);
	void SetDisplayName(const struct FRigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand, class FName ReturnValue);
	void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool ReturnValue);
	void SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection, bool ReturnValue);
	void ReorderElement(const struct FRigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	void RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection, const struct FRigElementKey& ReturnValue);
	void RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	void RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	void RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue);
	void MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue);
	void ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue);
	void ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand, const TArray<struct FRigElementKey>& ReturnValue);
	void ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand, const TArray<struct FRigElementKey>& ReturnValue);
	void GetHierarchy(class URigHierarchy* ReturnValue);
	void GetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& ReturnValue);
	void ExportToText(const TArray<struct FRigElementKey>& InKeys, const class FString& ReturnValue);
	void ExportSelectionToText(const class FString& ReturnValue);
	void DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue);
	void DeselectElement(const struct FRigElementKey& InKey, bool ReturnValue);
	void ClearSelection(bool ReturnValue);
	void AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	void AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo, bool ReturnValue);
	void AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	void AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	void AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	void AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
	void AddAnimationChannel_ForBlueprint(class FName InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_1617[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigLayerInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UControlRigObjectHolder* GetDefaultObj();

};

// 0x68 (0x288 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x30)(ZeroConstructor)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x250(0x30)(ZeroConstructor)
	float                                        LastExportedFrameRate;                             // 0x280(0x4)(None)
	uint8                                        Pad_161E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSequence* GetDefaultObj();

};

// 0x278 (0x3D0 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_1621[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0x1A0(0x8)(ZeroConstructor)
	class UClass*                                ControlRigClass;                                   // 0x1A8(0x8)(ZeroConstructor)
	TArray<bool>                                 ControlsMask;                                      // 0x1B0(0x10)(None)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1C0(0x4)(None)
	uint8                                        Pad_1623[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C8(0x110)(None)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D8(0x50)(None)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x328(0x10)(ZeroConstructor)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x338(0x10)(None)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x348(0x10)(None)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x358(0x10)(ZeroConstructor)
	uint8                                        Pad_1624[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterSection* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_1625[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(ZeroConstructor)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(ZeroConstructor)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(ZeroConstructor)
	class FName                                  TrackName;                                         // 0xF8(0x8)(None)

	static class UClass* StaticClass();
	static class UMovieSceneControlRigParameterTrack* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigEditorSettings
class UControlRigEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UControlRigEditorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ControlRig.ControlRigPoseAsset
class UControlRigPoseAsset : public UObject
{
public:
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(None)

	static class UClass* StaticClass();
	static class UControlRigPoseAsset* GetDefaultObj();

	void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
	void SavePose(class UControlRig* InControlRig, bool bUseAll);
	void ReplaceControlName(class FName CurrentName, class FName NewName);
	void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
	void GetCurrentPose(class UControlRig* InControlRig, const struct FControlRigControlPose& OutPose);
	void GetControlNames(const TArray<class FName>& ReturnValue);
	void DoesMirrorMatch(class UControlRig* ControlRig, class FName ControlName, bool ReturnValue);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(None)
	class FString                                LeftSide;                                          // 0x38(0x10)(None)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(None)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(None)
	uint8                                        Pad_1687[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigPoseMirrorSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UControlRigPoseProjectSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(None)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(None)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(None)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(None)
	uint8                                        Pad_168D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigSnapSettings* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(ZeroConstructor)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(None)

	static class UClass* StaticClass();
	static class UControlRigWorkflowOptions* GetDefaultObj();

	void EnsureAtLeastOneRigElementSelected(bool ReturnValue);
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(None)
	uint8                                        Pad_169D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UControlRigTransformWorkflowOptions* GetDefaultObj();

	void ProvideWorkflows(class UObject* InSubject, const TArray<struct FRigVMUserWorkflow>& ReturnValue);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(None)
	bool                                         bCheckBones;                                       // 0x29(0x1)(None)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(None)
	uint8                                        Pad_16A1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TranslationPrecision;                              // 0x2C(0x4)(None)
	float                                        RotationPrecision;                                 // 0x30(0x4)(None)
	float                                        ScalePrecision;                                    // 0x34(0x4)(None)
	float                                        CurvePrecision;                                    // 0x38(0x4)(None)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(None)
	class FName                                  EventNameB;                                        // 0x44(0x8)(None)
	uint8                                        Pad_16A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigPose                              Pose;                                              // 0x50(0x70)(None)

	static class UClass* StaticClass();
	static class UControlRigNumericalValidationPass* GetDefaultObj();

};

}


