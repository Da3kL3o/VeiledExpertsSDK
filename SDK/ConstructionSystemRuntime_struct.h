// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
// Size : 0x50 (Inherited : 0x0)
struct FConstructionSystemSavePlayerInfo {
	bool bRestorePlayerInfo; // 0x0(0x1)
	unsigned char UnknownData_1[0x000F]; // 0x1(0xF)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator ControlRotation; // 0x40(0xC)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
// Size : 0x40 (Inherited : 0x0)
struct FConstructionSystemSaveConstructedItem {
	struct UPrefabricatorAssetInterface* PrefabAsset; // 0x0(0x8)
	int32_t Seed; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintWall
// Size : 0x4 (Inherited : 0x0)
struct FPCSnapConstraintWall {
	bool AttachTop; // 0x0(0x1)
	bool AttachBottom; // 0x1(0x1)
	bool AttachLeft; // 0x2(0x1)
	bool AttachRight; // 0x3(0x1)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintFloor
// Size : 0x6 (Inherited : 0x0)
struct FPCSnapConstraintFloor {
	bool AttachX; // 0x0(0x1)
	bool AttachXNegative; // 0x1(0x1)
	bool AttachY; // 0x2(0x1)
	bool AttachYNegative; // 0x3(0x1)
	bool AttachZ; // 0x4(0x1)
	bool AttachZNegative; // 0x5(0x1)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUICategory
// Size : 0x30 (Inherited : 0x0)
struct FConstructionSystemUICategory {
	struct FText DisplayName; // 0x0(0x18)
	struct UTexture2D* Icon; // 0x18(0x8)
	struct TArray<struct FConstructionSystemUIPrefabEntry> PrefabEntries; // 0x20(0x10)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
// Size : 0x40 (Inherited : 0x0)
struct FConstructionSystemUIPrefabEntry {
	struct FText DisplayName; // 0x0(0x18)
	struct FText Tooltip; // 0x18(0x18)
	struct UTexture2D* Icon; // 0x30(0x8)
	struct UPrefabricatorAssetInterface* Prefab; // 0x38(0x8)
};

