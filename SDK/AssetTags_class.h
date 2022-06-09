// Class AssetTags.AssetTagsSubsystem
// Size : 0x30 (Inherited : 0x30)
struct UAssetTagsSubsystem : UEngineSubsystem {

	struct TArray<struct FName> GetCollectionsContainingAssetPtr(struct UObject* AssetPtr); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF653661020
	struct TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData AssetData); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x60, 0x7FF653660EE0
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName AssetPathName); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF653660E00
	struct TArray<struct FName> GetCollections(); // Function AssetTags.AssetTagsSubsystem.GetCollections // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF653660D80
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName Name); // Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF653660BF0
	bool CollectionExists(struct FName Name); // Function AssetTags.AssetTagsSubsystem.CollectionExists // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF653660B60
};

