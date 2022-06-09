// WidgetBlueprintGeneratedClass IngameMyCharListItem.IngameMyCharListItem_C
// Size : 0x2F0 (Inherited : 0x2C8)
struct UIngameMyCharListItem_C : UPDIngameMyCharListItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C8(0x8)
	struct UWidgetAnimation* Anim_Selected; // 0x2D0(0x8)
	struct UImage* IMG_NotOwned_Outline; // 0x2D8(0x8)
	struct UImage* IMG_Owned_Outline; // 0x2E0(0x8)
	struct UImage* IMG_SLotBg; // 0x2E8(0x8)

	void BP_OnEntryReleased(); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF653FAFDF0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF653FAFDF0
	void ExecuteUbergraph_IngameMyCharListItem(int32_t EntryPoint); // Function IngameMyCharListItem.IngameMyCharListItem_C.ExecuteUbergraph_IngameMyCharListItem // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

