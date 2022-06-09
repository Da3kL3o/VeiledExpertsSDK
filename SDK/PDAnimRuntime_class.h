// Class PDAnimRuntime.IKTargetGetter
// Size : 0x30 (Inherited : 0x28)
struct UIKTargetGetter : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)

	bool K2_GetTarget(struct USkeletalMeshComponent* SkeletalMesh, struct FTransform TargetTransform, struct USceneComponent* TargetComponent); // Function PDAnimRuntime.IKTargetGetter.K2_GetTarget // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // Param Size : 0x49, 0x7FF653FAFDF0
	struct FString GetName(); // Function PDAnimRuntime.IKTargetGetter.GetName // (Native|Event|Public|BlueprintEvent|Const) // Param Size : 0x10, 0x7FF653CAA500
};

// Class PDAnimRuntime.AnimNotify_SetIKTarget
// Size : 0xF0 (Inherited : 0x38)
struct UAnimNotify_SetIKTarget : UAnimNotify {
	enum class EPDIKTargetType IKTargetType; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
	struct FPDIKTargetData IKTargetData; // 0x40(0xB0)
};

// Class PDAnimRuntime.IKAnimInterface
// Size : 0x28 (Inherited : 0x28)
struct UIKAnimInterface : UInterface {
};

// Class PDAnimRuntime.PDIKAnimLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPDIKAnimLibrary : UBlueprintFunctionLibrary {
};

