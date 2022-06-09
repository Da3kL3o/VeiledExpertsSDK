// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size : 0xB0 (Inherited : 0xB0)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	void SetUseWeightedNormals(bool bInUseWeightedNormals); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6535F7290
	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6535F7180
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6535F7010
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6535F7210
	bool DestroyClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6535F7150
	bool CreateClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF6535F7120
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF6535F70A0
};

