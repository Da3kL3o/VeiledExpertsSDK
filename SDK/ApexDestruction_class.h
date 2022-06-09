// Class ApexDestruction.DestructibleActor
// Size : 0x238 (Inherited : 0x220)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x220(0x8)
	struct FMulticastInlineDelegate OnActorFracture; // 0x228(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size : 0x720 (Inherited : 0x640)
struct UDestructibleComponent : USkinnedMeshComponent {
	unsigned char bFractureEffectOverride : 1; // 0x640(0x1)
	unsigned char UnknownData_640_1 : 7; // 0x640(0x1)
	unsigned char UnknownData_641[0x0007]; // 0x641(0x7)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x648(0x10)
	bool bEnableHardSleeping; // 0x658(0x1)
	unsigned char UnknownData_659[0x0003]; // 0x659(0x3)
	float LargeChunkThreshold; // 0x65C(0x4)
	unsigned char UnknownData_660[0x0010]; // 0x660(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x670(0x10)
	unsigned char UnknownData_680[0x00A0]; // 0x680(0xA0)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF653139750
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF653139720
	void ApplyRadiusDamage(float BaseDamage, struct FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x19, 0x7FF653139570
	void ApplyDamage(float DamageAmount, struct FVector HitLocation, struct FVector ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x20, 0x7FF653139400
};

// Class ApexDestruction.DestructibleFractureSettings
// Size : 0xB8 (Inherited : 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x4)
	struct FFractureMaterial FractureMaterialDesc; // 0x2C(0x24)
	int32_t RandomSeed; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	unsigned char UnknownData_90[0x0028]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size : 0x420 (Inherited : 0x380)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x380(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x408(0x10)
	unsigned char UnknownData_418[0x0008]; // 0x418(0x8)
};

