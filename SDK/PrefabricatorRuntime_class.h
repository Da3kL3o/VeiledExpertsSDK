// Class PrefabricatorRuntime.PrefabActor
// Size : 0x240 (Inherited : 0x220)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x220(0x8)
	struct FGuid LastUpdateID; // 0x228(0x10)
	int32_t Seed; // 0x238(0x4)
	unsigned char UnknownData_23C[0x0004]; // 0x23C(0x4)

	void SavePrefab(); // Function PrefabricatorRuntime.PrefabActor.SavePrefab // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65311E8B0
	void RandomizeSeed(struct FRandomStream InRandom, bool bRecursive); // Function PrefabricatorRuntime.PrefabActor.RandomizeSeed // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x9, 0x7FF65311E7E0
	void LoadPrefab(); // Function PrefabricatorRuntime.PrefabActor.LoadPrefab // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65311E5F0
	bool IsPrefabOutdated(); // Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF65311E5C0
	struct UPrefabricatorAsset* GetPrefabAsset(); // Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF65311E590
};

// Class PrefabricatorRuntime.ReplicablePrefabActor
// Size : 0x240 (Inherited : 0x240)
struct AReplicablePrefabActor : APrefabActor {
};

// Class PrefabricatorRuntime.PrefabComponent
// Size : 0x220 (Inherited : 0x1F0)
struct UPrefabComponent : USceneComponent {
	struct TSoftObjectPtr<struct UPrefabricatorAssetInterface> PrefabAssetInterface; // 0x1F0(0x28)
	unsigned char UnknownData_218[0x0008]; // 0x218(0x8)
};

// Class PrefabricatorRuntime.PrefabDebugActor
// Size : 0x238 (Inherited : 0x220)
struct APrefabDebugActor : AActor {
	struct AActor* Actor; // 0x220(0x8)
	struct TArray<enum class None> ActorData; // 0x228(0x10)
};

// Class PrefabricatorRuntime.PrefabRandomizer
// Size : 0x260 (Inherited : 0x220)
struct APrefabRandomizer : AActor {
	bool bRandomizeOnBeginPlay; // 0x220(0x1)
	unsigned char UnknownData_221[0x0003]; // 0x221(0x3)
	int32_t SeedOffset; // 0x224(0x4)
	float MaxBuildTimePerFrame; // 0x228(0x4)
	unsigned char UnknownData_22C[0x0004]; // 0x22C(0x4)
	struct FMulticastInlineDelegate OnRandomizationComplete; // 0x230(0x10)
	bool bFastSyncBuild; // 0x240(0x1)
	unsigned char UnknownData_241[0x001F]; // 0x241(0x1F)

	void Randomize(int32_t InSeed); // Function PrefabricatorRuntime.PrefabRandomizer.Randomize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF65311E6A0
};

// Class PrefabricatorRuntime.PrefabricatorProperty
// Size : 0x70 (Inherited : 0x28)
struct UPrefabricatorProperty : UObject {
	struct FString PropertyName; // 0x28(0x10)
	struct FString ExportedValue; // 0x38(0x10)
	struct TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x48(0x10)
	bool bIsCrossReferencedActor; // 0x58(0x1)
	unsigned char UnknownData_59[0x0003]; // 0x59(0x3)
	struct FGuid CrossReferencePrefabActorId; // 0x5C(0x10)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class PrefabricatorRuntime.PrefabricatorEventListener
// Size : 0x28 (Inherited : 0x28)
struct UPrefabricatorEventListener : UObject {

	void PostSpawn(struct APrefabActor* Prefab); // Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn // (Native|Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF65311E610
};

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// Size : 0x38 (Inherited : 0x28)
struct UPrefabricatorAssetInterface : UObject {
	class UPrefabricatorEventListener* EventListener; // 0x28(0x8)
	bool bReplicates; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// Class PrefabricatorRuntime.PrefabricatorAsset
// Size : 0x70 (Inherited : 0x38)
struct UPrefabricatorAsset : UPrefabricatorAssetInterface {
	struct TArray<struct FPrefabricatorActorData> ActorData; // 0x38(0x10)
	enum class EComponentMobility PrefabMobility; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
	struct FGuid LastUpdateID; // 0x4C(0x10)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
	struct UThumbnailInfo* ThumbnailInfo; // 0x60(0x8)
	uint32_t Version; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// Size : 0x50 (Inherited : 0x38)
struct UPrefabricatorAssetCollection : UPrefabricatorAssetInterface {
	struct TArray<struct FPrefabricatorAssetCollectionItem> Prefabs; // 0x38(0x10)
	uint32_t Version; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// Size : 0x40 (Inherited : 0x28)
struct UPrefabricatorAssetUserData : UAssetUserData {
	struct FWeakObjectPtr<struct APrefabActor> PrefabActor; // 0x28(0x8)
	struct FGuid ItemId; // 0x30(0x10)
};

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPrefabricatorBlueprintLibrary : UBlueprintFunctionLibrary {

	struct APrefabActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabricatorAssetInterface* Prefab, struct FTransform Transform, int32_t Seed); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x50, 0x7FF65311E8D0
	void RandomizePrefab(struct APrefabActor* PrefabActor, struct FRandomStream InRandom); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF65311E720
	void GetAllAttachedActors(struct AActor* Prefab, struct TArray<struct AActor*> AttachedActors); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF65311E4B0
};

// Class PrefabricatorRuntime.PrefabricatorSettings
// Size : 0x48 (Inherited : 0x38)
struct UPrefabricatorSettings : UDeveloperSettings {
	enum class EPrefabricatorPivotPosition PivotPosition; // 0x38(0x1)
	bool bAllowDynamicUpdate; // 0x39(0x1)
	unsigned char UnknownData_3A[0x0002]; // 0x3A(0x2)
	float DefaultThumbnailPitch; // 0x3C(0x4)
	float DefaultThumbnailYaw; // 0x40(0x4)
	float DefaultThumbnailZoom; // 0x44(0x4)
};

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// Size : 0x1F0 (Inherited : 0x1F0)
struct UPrefabSeedLinkerComponent : USceneComponent {
};

// Class PrefabricatorRuntime.PrefabSeedLinker
// Size : 0x238 (Inherited : 0x220)
struct APrefabSeedLinker : AActor {
	struct TArray<struct FWeakObjectPtr<struct APrefabActor>> LinkedActors; // 0x220(0x10)
	struct UPrefabSeedLinkerComponent* SeedLinkerComponent; // 0x230(0x8)
};

