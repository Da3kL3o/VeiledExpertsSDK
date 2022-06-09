// Class MirrorAnimationSystem.ExtCharacter
// Size : 0x4C0 (Inherited : 0x4C0)
struct AExtCharacter : ACharacter {

	void SetRootMotionMirrorAndFlipAxis(enum class EAxis MirrorAxis, enum class EAxis FlipAxis); // Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis // (Native|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF653161BB0
	void SetMirrorRootMotion(bool Mirror); // Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF653161B20
	void GetRootMotionMirrorAndFlipAxis(enum class EAxis MirrorAxis, enum class EAxis FlipAxis); // Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x2, 0x7FF653161A40
	bool GetMirrorRootMotion(); // Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion // (Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF653161A10
};

// Class MirrorAnimationSystem.ExtCharacterMovementComponent
// Size : 0x620 (Inherited : 0x610)
struct UExtCharacterMovementComponent : UCharacterMovementComponent {
	bool MirrorRootMotion; // 0x610(0x1)
	enum class EAxis MirrorAxis; // 0x611(0x1)
	enum class EAxis FlipAxis; // 0x612(0x1)
	unsigned char UnknownData_613[0x000D]; // 0x613(0xD)
};

// Class MirrorAnimationSystem.MirrorTable
// Size : 0x40 (Inherited : 0x30)
struct UMirrorTable : UDataAsset {
	struct TArray<struct FMirrorBone> MirrorBones; // 0x30(0x10)
};

