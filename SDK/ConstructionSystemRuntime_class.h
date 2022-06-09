// Class ConstructionSystemRuntime.ConstructionSystemTool
// Size : 0x30 (Inherited : 0x28)
struct UConstructionSystemTool : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
// Size : 0x168 (Inherited : 0x30)
struct UConstructionSystemBuildTool : UConstructionSystemTool {
	float TraceDistance; // 0x30(0x4)
	float CursorRotationStepAngle; // 0x34(0x4)
	struct UConstructionSystemCursor* Cursor; // 0x38(0x8)
	struct UPrefabricatorAssetInterface* ActivePrefabAsset; // 0x40(0x8)
	unsigned char UnknownData_48[0x0120]; // 0x48(0x120)

	void SetActivePrefab(struct UPrefabricatorAssetInterface* InActivePrefabAsset); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF65312EEE0
	void HandleInput_RotateCursorStep(float NumSteps); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep // (Final|Native|Private) // Param Size : 0x4, 0x7FF65312EB50
	void HandleInput_CursorMovePrev(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev // (Final|Native|Private) // Param Size : 0x0, 0x7FF65312EB10
	void HandleInput_CursorMoveNext(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext // (Final|Native|Private) // Param Size : 0x0, 0x7FF65312EAF0
	void HandleInput_ConstructAtCursor(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor // (Final|Native|Private) // Param Size : 0x0, 0x7FF65312EAD0
};

// Class ConstructionSystemRuntime.ConstructionSystemComponent
// Size : 0x150 (Inherited : 0xB0)
struct UConstructionSystemComponent : UActorComponent {
	struct UMaterialInterface* CursorMaterial; // 0xB0(0x8)
	struct UMaterialInterface* CursorInvalidMaterial; // 0xB8(0x8)
	float TraceStartDistance; // 0xC0(0x4)
	float TraceSweepRadius; // 0xC4(0x4)
	struct AActor* ConstructionCameraActor; // 0xC8(0x8)
	float ConstructionCameraTransitionTime; // 0xD0(0x4)
	float ConstructionCameraTransitionExp; // 0xD4(0x4)
	class UUserWidget* BuildMenuUI; // 0xD8(0x8)
	struct UConstructionSystemUIAsset* BuildMenuData; // 0xE0(0x8)
	struct UUserWidget* BuildMenuUIInstance; // 0xE8(0x8)
	enum class EConstructionSystemToolType ActiveToolType; // 0xF0(0x1)
	unsigned char UnknownData_F1[0x0007]; // 0xF1(0x7)
	struct TMap<enum class EConstructionSystemToolType, struct UConstructionSystemTool*> Tools; // 0xF8(0x50)
	unsigned char UnknownData_148[0x0008]; // 0x148(0x8)

	void ToggleConstructionSystem(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65312F000
	void ShowBuildMenu(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65312EFE0
	void SetActiveTool(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF65312EF60
	void HideBuildMenu(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65312EBD0
	struct UConstructionSystemTool* GetTool(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF65312E9D0
	enum class EConstructionSystemToolType GetActiveToolType(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF65312E9B0
	struct UConstructionSystemTool* GetActiveTool(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF65312E980
	void EnableConstructionSystem(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF65312E900
	void DisableConstructionSystem(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF65312E8E0
};

// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
// Size : 0x30 (Inherited : 0x28)
struct UConstructionSystemItemUserData : UAssetUserData {
	int32_t Seed; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// Class ConstructionSystemRuntime.ConstructionSystemCursor
// Size : 0x60 (Inherited : 0x28)
struct UConstructionSystemCursor : UObject {
	struct APrefabActor* CursorGhostActor; // 0x28(0x8)
	int32_t CursorSeed; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct UMaterialInterface* CursorMaterial; // 0x38(0x8)
	struct UMaterialInterface* CursorInvalidMaterial; // 0x40(0x8)
	struct TArray<struct UPrefabricatorConstructionSnapComponent*> SnapComponents; // 0x48(0x10)
	int32_t ActiveSnapComponentIndex; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
};

// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
// Size : 0x90 (Inherited : 0x30)
struct UConstructionSystemRemoveTool : UConstructionSystemTool {
	float TraceDistance; // 0x30(0x4)
	struct FWeakObjectPtr<struct APrefabActor> FocusedActor; // 0x34(0x8)
	unsigned char UnknownData_3C[0x0054]; // 0x3C(0x54)

	void HandleInput_RemoveAtCursor(); // Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor // (Final|Native|Protected) // Param Size : 0x0, 0x7FF65312EB30
};

// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
// Size : 0xA0 (Inherited : 0x28)
struct UConstructionSystemSaveGame : USaveGame {
	struct FString SaveSlotName; // 0x28(0x10)
	uint32_t UserIndex; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
	struct FConstructionSystemSavePlayerInfo PlayerInfo; // 0x40(0x50)
	struct TArray<struct FConstructionSystemSaveConstructedItem> ConstructedItems; // 0x90(0x10)
};

// Class ConstructionSystemRuntime.ConstructionSystemSaveSystem
// Size : 0x28 (Inherited : 0x28)
struct UConstructionSystemSaveSystem : UBlueprintFunctionLibrary {

	void SaveConstructionSystemLevel(struct UObject* WorldContextObject, struct FString SaveSlotName, int32_t UserIndex, bool bSavePlayerState); // Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.SaveConstructionSystemLevel // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1D, 0x7FF65312ED90
	void LoadConstructionSystemLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString SaveSlotName, int32_t UserIndex); // Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.LoadConstructionSystemLevel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2C, 0x7FF65312EBF0
	void HandleConstructionSystemLevelLoad(struct UObject* WorldContextObject); // Function ConstructionSystemRuntime.ConstructionSystemSaveSystem.HandleConstructionSystemLevelLoad // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF65312EA60
};

// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
// Size : 0x450 (Inherited : 0x430)
struct UPrefabricatorConstructionSnapComponent : UBoxComponent {
	enum class EPrefabricatorConstructionSnapType SnapType; // 0x430(0x1)
	struct FPCSnapConstraintFloor FloorConstraint; // 0x431(0x6)
	struct FPCSnapConstraintWall WallConstraint; // 0x437(0x4)
	bool bAlignToGroundSlope; // 0x43B(0x1)
	bool bUseMaxGroundSlopeConstraint; // 0x43C(0x1)
	unsigned char UnknownData_43D[0x0003]; // 0x43D(0x3)
	float MaxGroundPlacementSlope; // 0x440(0x4)
	unsigned char UnknownData_444[0x000C]; // 0x444(0xC)
};

// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
// Size : 0x228 (Inherited : 0x220)
struct APrefabricatorConstructionSnap : AActor {
	struct UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent; // 0x220(0x8)
};

// Class ConstructionSystemRuntime.ConstructionSystemBuildUI
// Size : 0x28 (Inherited : 0x28)
struct UConstructionSystemBuildUI : UInterface {

	void SetUIAsset(struct UConstructionSystemUIAsset* UIAsset); // Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetUIAsset // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x8, 0x7FF653FAFDF0
	void SetConstructionSystem(struct UConstructionSystemComponent* ConstructionSystem); // Function ConstructionSystemRuntime.ConstructionSystemBuildUI.SetConstructionSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x8, 0x7FF653FAFDF0
};

// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
// Size : 0x58 (Inherited : 0x30)
struct UConstructionSystemUIAsset : UDataAsset {
	struct FText MenuTitle; // 0x30(0x18)
	struct TArray<struct FConstructionSystemUICategory> Categories; // 0x48(0x10)
};

