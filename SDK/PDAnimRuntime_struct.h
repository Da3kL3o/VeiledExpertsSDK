// ScriptStruct PDAnimRuntime.IKAnimInstanceProxy
// Size : 0xAB0 (Inherited : 0x6E0)
struct FIKAnimInstanceProxy : FAnimInstanceProxy {
	struct FIKTargetBoneArray IKTargetBones; // 0x6E0(0x10)
	unsigned char UnknownData_6F0[0x03C0]; // 0x6F0(0x3C0)
};

// ScriptStruct PDAnimRuntime.IKTargetBoneArray
// Size : 0x10 (Inherited : 0x0)
struct FIKTargetBoneArray {
	struct TArray<struct FBoneReference> Array; // 0x0(0x10)
};

// ScriptStruct PDAnimRuntime.PDHandIKData
// Size : 0xA0 (Inherited : 0x0)
struct FPDHandIKData {
	unsigned char bEnableHandIK : 1; // 0x0(0x1)
	unsigned char bUseRightShoulder : 1; // 0x0(0x1)
	unsigned char bEnableTriggerHandOverride : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName HandleAttachedBone; // 0x4(0x8)
	struct FName MuzzleBone; // 0xC(0x8)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct UMeshComponent* WeaponMeshComponent; // 0x18(0x8)
	struct FTransform TriggerHandOffset; // 0x20(0x30)
	struct FTransform TriggerHandOverride; // 0x50(0x30)
	struct FVector AimingTarget; // 0x80(0xC)
	float HandleHandAlpha; // 0x8C(0x4)
	float TriggerHandAlpha; // 0x90(0x4)
	float StockAlpha; // 0x94(0x4)
	float MuzzleAlpha; // 0x98(0x4)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDAssetPlayerBase
// Size : 0x48 (Inherited : 0x30)
struct FAnimNode_PDAssetPlayerBase : FAnimNode_AssetPlayerBase {
	float BlendTime; // 0x30(0x4)
	bool bResetOnActivated; // 0x34(0x1)
	bool bPrintDebug; // 0x35(0x1)
	unsigned char UnknownData_36[0x0012]; // 0x36(0x12)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDBlendSpacePlayer
// Size : 0x2B8 (Inherited : 0x48)
struct FAnimNode_PDBlendSpacePlayer : FAnimNode_PDAssetPlayerBase {
	float X; // 0x48(0x4)
	float Y; // 0x4C(0x4)
	float Z; // 0x50(0x4)
	float PlayRate; // 0x54(0x4)
	bool bLoop; // 0x58(0x1)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x59(0x1)
	unsigned char UnknownData_5A[0x0002]; // 0x5A(0x2)
	float StartPosition; // 0x5C(0x4)
	struct UBlendSpaceBase* BlendSpace; // 0x60(0x8)
	unsigned char UnknownData_68[0x0078]; // 0x68(0x78)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xE0(0x8)
	unsigned char UnknownData_E8[0x01D0]; // 0xE8(0x1D0)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDIK
// Size : 0x3B0 (Inherited : 0xC8)
struct FAnimNode_PDIK : FAnimNode_SkeletalControlBase {
	struct TArray<struct FName> PreHandleSlots; // 0xC8(0x10)
	unsigned char UnknownData_D8[0x0028]; // 0xD8(0x28)
	struct FPDHandIKData HandIKData; // 0x100(0xA0)
	float MaxArmStretchOffset; // 0x1A0(0x4)
	unsigned char UnknownData_1A4[0x0004]; // 0x1A4(0x4)
	struct FPoseLink StancePose; // 0x1A8(0x10)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x1B8(0x10)
	unsigned char UnknownData_1C8[0x0004]; // 0x1C8(0x4)
	struct FGuid SkeletonGuid; // 0x1CC(0x10)
	struct FGuid VirtualBoneGuid; // 0x1DC(0x10)
	unsigned char UnknownData_1EC[0x0054]; // 0x1EC(0x54)
	struct FName IK_Handle_Off; // 0x240(0x8)
	struct FName IK_Handle_MustOff; // 0x248(0x8)
	struct FName IK_Weapon; // 0x250(0x8)
	bool bAimingIdleState; // 0x258(0x1)
	unsigned char UnknownData_259[0x0003]; // 0x259(0x3)
	struct FName IKProfileName; // 0x25C(0x8)
	unsigned char UnknownData_264[0x0004]; // 0x264(0x4)
	struct TMap<struct FName, struct FPDIKProfileData> IKProfiles; // 0x268(0x50)
	struct FBoneReference Hip; // 0x2B8(0x10)
	unsigned char UnknownData_2C8[0x00E8]; // 0x2C8(0xE8)
};

// ScriptStruct PDAnimRuntime.PDIKProfileData
// Size : 0x80 (Inherited : 0x0)
struct FPDIKProfileData {
	struct FBoneReference TriggerHand; // 0x0(0x10)
	struct FBoneReference HandleHand; // 0x10(0x10)
	struct FBoneReference RightShoulder; // 0x20(0x10)
	struct FBoneReference LeftShoulder; // 0x30(0x10)
	struct FBoneReference RightWeaponAttached; // 0x40(0x10)
	struct FBoneReference LeftWeaponAttached; // 0x50(0x10)
	struct FBoneReference HandleHandPalm; // 0x60(0x10)
	struct FBoneReference TriggerHandPalm; // 0x70(0x10)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequenceEvaluator
// Size : 0x190 (Inherited : 0x48)
struct FAnimNode_PDSequenceEvaluator : FAnimNode_PDAssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x48(0x8)
	float ExplicitTime; // 0x50(0x4)
	bool bShouldLoop; // 0x54(0x1)
	bool bTeleportToExplicitTime; // 0x55(0x1)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x56(0x1)
	unsigned char UnknownData_57[0x0001]; // 0x57(0x1)
	float StartPosition; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0134]; // 0x5C(0x134)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequencePlayer
// Size : 0x1C8 (Inherited : 0x48)
struct FAnimNode_PDSequencePlayer : FAnimNode_PDAssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x48(0x8)
	float PlayRateBasis; // 0x50(0x4)
	float PlayRate; // 0x54(0x4)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x58(0x30)
	float StartPosition; // 0x88(0x4)
	bool bLoopAnimation; // 0x8C(0x1)
	unsigned char UnknownData_8D[0x0133]; // 0x8D(0x133)
	struct UAnimSequenceBase* PreviousSequence; // 0x1C0(0x8)
};

// ScriptStruct PDAnimRuntime.PDIKTargetData
// Size : 0xB0 (Inherited : 0x0)
struct FPDIKTargetData {
	struct UIKTargetGetter* IKTargetGetter; // 0x0(0x8)
	unsigned char bEnableTranslation : 1; // 0x8(0x1)
	unsigned char bEnableOrientation : 1; // 0x8(0x1)
	unsigned char bUseWorldOrientation : 1; // 0x8(0x1)
	unsigned char bCaptureTarget : 1; // 0x8(0x1)
	unsigned char UnknownData_8_4 : 4; // 0x8(0x1)
	enum class EPDCaptureSpace CaptureSpace; // 0x9(0x1)
	unsigned char UnknownData_A[0x0056]; // 0xA(0x56)
	struct FName CapturedSocketName; // 0x60(0x8)
	unsigned char UnknownData_68[0x0008]; // 0x68(0x8)
	struct FTransform TargetOffset; // 0x70(0x30)
	enum class EPDCaptureSpace OffsetSpace; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0003]; // 0xA1(0x3)
	struct FName OffsetSocketName; // 0xA4(0x8)
	float BlendTime; // 0xAC(0x4)
};

