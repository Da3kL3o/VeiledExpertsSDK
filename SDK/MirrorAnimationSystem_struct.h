// ScriptStruct MirrorAnimationSystem.AnimNode_Mirror
// Size : 0x28 (Inherited : 0x10)
struct FAnimNode_Mirror : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct UMirrorTable* MirrorTable; // 0x20(0x8)
};

// ScriptStruct MirrorAnimationSystem.AnimNode_MirrorCS
// Size : 0x128 (Inherited : 0xC8)
struct FAnimNode_MirrorCS : FAnimNode_SkeletalControlBase {
	enum class EAxis MirrorAxis; // 0xC8(0x1)
	bool CompletlySymmetrical; // 0xC9(0x1)
	unsigned char UnknownData_CA[0x0006]; // 0xCA(0x6)
	struct FString Substring_A; // 0xD0(0x10)
	struct FString Substring_B; // 0xE0(0x10)
	unsigned char UnknownData_F0[0x0038]; // 0xF0(0x38)
};

// ScriptStruct MirrorAnimationSystem.MirrorBone
// Size : 0x28 (Inherited : 0x0)
struct FMirrorBone {
	struct FName BoneName; // 0x0(0x8)
	enum class EAxis MirrorAxis; // 0x8(0x1)
	enum class EAxis FlipAxis; // 0x9(0x1)
	bool IsTwinBone; // 0xA(0x1)
	unsigned char UnknownData_B[0x0001]; // 0xB(0x1)
	struct FName TwinBoneName; // 0xC(0x8)
	bool MirrorTranslation; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	struct FRotator RotationOffset; // 0x18(0xC)
	bool InvertTwinRotationX; // 0x24(0x1)
	bool InvertTwinRotationY; // 0x25(0x1)
	bool InvertTwinRotationZ; // 0x26(0x1)
	unsigned char UnknownData_27[0x0001]; // 0x27(0x1)
};

