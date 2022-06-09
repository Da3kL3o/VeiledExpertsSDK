// Class MobilePatchingUtils.MobileInstalledContent
// Size : 0x48 (Inherited : 0x28)
struct UMobileInstalledContent : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)

	bool Mount(int32_t PakOrder, struct FString MountPoint); // Function MobilePatchingUtils.MobileInstalledContent.Mount // (Final|Native|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF65366DFF0
	float GetInstalledContentSize(); // Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DE80
	float GetDiskFreeSpace(); // Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DC80
};

// Class MobilePatchingUtils.MobilePendingContent
// Size : 0x88 (Inherited : 0x48)
struct UMobilePendingContent : UMobileInstalledContent {
	unsigned char UnknownData_48[0x0040]; // 0x48(0x40)

	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePendingContent.StartInstall // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF65366E2B0
	float GetTotalDownloadedSize(); // Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DFC0
	float GetRequiredDiskSpace(); // Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DEB0
	float GetInstallProgress(); // Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DDB0
	struct FText GetDownloadStatusText(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF65366DD10
	float GetDownloadSpeed(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DCE0
	float GetDownloadSize(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF65366DCB0
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary {

	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x50, 0x7FF65366E0D0
	bool HasActiveWiFiConnection(); // Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF6535D30D0
	struct TArray<struct FString> GetSupportedPlatformNames(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF65366DEE0
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory); // Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF65366DDE0
	struct FString GetActiveDeviceProfileName(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF65366DC00
};

