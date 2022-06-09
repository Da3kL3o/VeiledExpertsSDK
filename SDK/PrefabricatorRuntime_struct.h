// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// Size : 0x30 (Inherited : 0x0)
struct FPrefabricatorAssetCollectionItem {
	struct TSoftObjectPtr<struct UPrefabricatorAsset> PrefabAsset; // 0x0(0x28)
	float Weight; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// Size : 0x90 (Inherited : 0x0)
struct FPrefabricatorActorData {
	struct FGuid PrefabItemID; // 0x0(0x10)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct FString ClassPath; // 0x40(0x10)
	struct FSoftClassPath ClassPathRef; // 0x50(0x18)
	struct TArray<struct UPrefabricatorProperty*> Properties; // 0x68(0x10)
	struct TArray<struct FPrefabricatorComponentData> Components; // 0x78(0x10)
	unsigned char UnknownData_88[0x0008]; // 0x88(0x8)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// Size : 0x50 (Inherited : 0x0)
struct FPrefabricatorComponentData {
	struct FTransform RelativeTransform; // 0x0(0x30)
	struct FString ComponentName; // 0x30(0x10)
	struct TArray<struct UPrefabricatorProperty*> Properties; // 0x40(0x10)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
// Size : 0x38 (Inherited : 0x0)
struct FPrefabricatorPropertyAssetMapping {
	struct FSoftObjectPath AssetReference; // 0x0(0x18)
	struct FString AssetClassName; // 0x18(0x10)
	struct FName AssetObjectPath; // 0x28(0x8)
	bool bUseQuotes; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

