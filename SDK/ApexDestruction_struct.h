// ScriptStruct ApexDestruction.DestructibleChunkParameters
// Size : 0x4 (Inherited : 0x0)
struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0(0x1)
	bool bDoNotFracture; // 0x1(0x1)
	bool bDoNotDamage; // 0x2(0x1)
	bool bDoNotCrumble; // 0x3(0x1)
};

// ScriptStruct ApexDestruction.FractureMaterial
// Size : 0x24 (Inherited : 0x0)
struct FFractureMaterial {
	struct FVector2D UVScale; // 0x0(0x8)
	struct FVector2D UVOffset; // 0x8(0x8)
	struct FVector Tangent; // 0x10(0xC)
	float UAngle; // 0x1C(0x4)
	int32_t InteriorElementIndex; // 0x20(0x4)
};

// ScriptStruct ApexDestruction.DestructibleParameters
// Size : 0x88 (Inherited : 0x0)
struct FDestructibleParameters {
	struct FDestructibleDamageParameters DamageParameters; // 0x0(0x1C)
	struct FDestructibleDebrisParameters DebrisParameters; // 0x1C(0x2C)
	struct FDestructibleAdvancedParameters AdvancedParameters; // 0x48(0x10)
	struct FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58(0x14)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x4)
	unsigned char UnknownData_84[0x0004]; // 0x84(0x4)
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// Size : 0x4 (Inherited : 0x0)
struct FDestructibleParametersFlag {
	unsigned char bAccumulateDamage : 1; // 0x0(0x1)
	unsigned char bAssetDefinedSupport : 1; // 0x0(0x1)
	unsigned char bWorldSupport : 1; // 0x0(0x1)
	unsigned char bDebrisTimeout : 1; // 0x0(0x1)
	unsigned char bDebrisMaxSeparation : 1; // 0x0(0x1)
	unsigned char bCrumbleSmallestChunks : 1; // 0x0(0x1)
	unsigned char bAccurateRaycasts : 1; // 0x0(0x1)
	unsigned char bUseValidBounds : 1; // 0x0(0x1)
	unsigned char bFormExtendedStructures : 1; // 0x1(0x1)
	unsigned char UnknownData_1_1 : 7; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// Size : 0x1 (Inherited : 0x0)
struct FDestructibleDepthParameters {
	enum class EImpactDamageOverride ImpactDamageOverride; // 0x0(0x1)
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// Size : 0x14 (Inherited : 0x0)
struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0(0x4)
	int32_t MinimumFractureDepth; // 0x4(0x4)
	bool bEnableDebris; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	int32_t DebrisDepth; // 0xC(0x4)
	int32_t EssentialDepth; // 0x10(0x4)
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// Size : 0x10 (Inherited : 0x0)
struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0(0x4)
	float ImpactVelocityThreshold; // 0x4(0x4)
	float MaxChunkSpeed; // 0x8(0x4)
	float FractureImpulseScale; // 0xC(0x4)
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// Size : 0x2C (Inherited : 0x0)
struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0(0x4)
	float DebrisLifetimeMax; // 0x4(0x4)
	float DebrisMaxSeparationMin; // 0x8(0x4)
	float DebrisMaxSeparationMax; // 0xC(0x4)
	struct FBox ValidBounds; // 0x10(0x1C)
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// Size : 0x1C (Inherited : 0x0)
struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x0(0x4)
	float DamageSpread; // 0x4(0x4)
	bool bEnableImpactDamage; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float ImpactDamage; // 0xC(0x4)
	int32_t DefaultImpactDamageDepth; // 0x10(0x4)
	bool bCustomImpactResistance; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	float ImpactResistance; // 0x18(0x4)
};

