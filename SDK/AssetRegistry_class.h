// Class AssetRegistry.AssetRegistryImpl
// Size : 0x778 (Inherited : 0x28)
struct UAssetRegistryImpl : UObject {
	unsigned char UnknownData_28[0x0750]; // 0x28(0x750)
};

// Class AssetRegistry.AssetRegistryHelpers
// Size : 0x28 (Inherited : 0x28)
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x68, 0x7FF654F004B0
	struct FARFilter SetFilterTagsAndValues(struct FARFilter InFilter, struct TArray<struct FTagAndValue> InTagsAndValues); // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x1E0, 0x7FF654F002B0
	bool IsValid(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x51, 0x7FF654EFF920
	bool IsUAsset(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsUAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x51, 0x7FF654EFF830
	bool IsRedirector(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsRedirector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x51, 0x7FF654EFF740
	bool IsAssetLoaded(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x51, 0x7FF654EFF620
	bool GetTagValue(struct FAssetData InAssetData, struct FName InTagName, struct FString OutTagValue); // Function AssetRegistry.AssetRegistryHelpers.GetTagValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x69, 0x7FF654EFF3A0
	struct FString GetFullName(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetFullName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x60, 0x7FF654EFF0E0
	struct FString GetExportTextName(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetExportTextName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x60, 0x7FF654EFEFA0
	class UObject* GetClass(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x58, 0x7FF654EFEEB0
	struct TScriptInterface<None> GetAssetRegistry(); // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF654EFE8D0
	struct UObject* GetAsset(struct FAssetData InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x58, 0x7FF654EFE6C0
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x60, 0x7FF654EFE3D0
};

// Class AssetRegistry.AssetRegistry
// Size : 0x28 (Inherited : 0x28)
struct UAssetRegistry : UInterface {

	void UseFilterToExcludeAssets(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0xF8, 0x7FF654F005F0
	void SearchAllAssets(bool bSynchronousSearch); // Function AssetRegistry.AssetRegistry.SearchAllAssets // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654F00220
	void ScanPathsSynchronous(struct TArray<struct FString> InPaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF654F00100
	void ScanModifiedAssetFiles(struct TArray<struct FString> InFilePaths); // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654F00030
	void ScanFilesSynchronous(struct TArray<struct FString> InFilePaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF654EFFF10
	void RunAssetsThroughFilter(struct TArray<struct FAssetData> AssetDataList, struct FARFilter Filter); // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0xF8, 0x7FF654EFFD50
	void PrioritizeSearchPath(struct FString PathToPrioritize); // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath // (Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654EFFCB0
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions ReferenceOptions, struct TArray<struct FName> OutReferencers); // Function AssetRegistry.AssetRegistry.K2_GetReferencers // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x21, 0x7FF654EFFB60
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions DependencyOptions, struct TArray<struct FName> OutDependencies); // Function AssetRegistry.AssetRegistry.K2_GetDependencies // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x21, 0x7FF654EFFA10
	bool IsLoadingAssets(); // Function AssetRegistry.AssetRegistry.IsLoadingAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654EFF710
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Function AssetRegistry.AssetRegistry.HasAssets // (Native|Public|BlueprintCallable|Const) // Param Size : 0xA, 0x7FF654EFF550
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString> OutPathList, bool bInRecurse); // Function AssetRegistry.AssetRegistry.GetSubPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x21, 0x7FF654EFF220
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData> OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPath // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x1B, 0x7FF654EFED30
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x1A, 0x7FF654EFEC00
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData> OutAssetData, bool bSearchSubClasses); // Function AssetRegistry.AssetRegistry.GetAssetsByClass // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x1A, 0x7FF654EFEAD0
	bool GetAssets(struct FARFilter Filter, struct TArray<struct FAssetData> OutAssetData); // Function AssetRegistry.AssetRegistry.GetAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0xF9, 0x7FF654EFE910
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath // (Native|Public|BlueprintCallable|Const) // Param Size : 0x60, 0x7FF654EFE7B0
	void GetAllCachedPaths(struct TArray<struct FString> OutPathList); // Function AssetRegistry.AssetRegistry.GetAllCachedPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x10, 0x7FF654EFE5F0
	bool GetAllAssets(struct TArray<struct FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAllAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x12, 0x7FF654EFE4F0
};

