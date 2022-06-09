// WidgetBlueprintGeneratedClass AgentListItem.AgentListItem_C
// Size : 0x328 (Inherited : 0x2D0)
struct UAgentListItem_C : UPDAgentListItemUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2D0(0x8)
	struct UWidgetAnimation* Anim_Selected; // 0x2D8(0x8)
	struct UImage* IMG_HoldingBg; // 0x2E0(0x8)
	struct UImage* IMG_Lock; // 0x2E8(0x8)
	struct UImage* IMG_PremiumLock; // 0x2F0(0x8)
	struct UImage* IMG_Selected_InnerBox; // 0x2F8(0x8)
	struct UImage* IMG_Selected_LB; // 0x300(0x8)
	struct UImage* IMG_Selected_LT; // 0x308(0x8)
	struct UImage* IMG_Selected_RB; // 0x310(0x8)
	struct UImage* IMG_Selected_RT; // 0x318(0x8)
	struct UImage* IMG_TopBar; // 0x320(0x8)

	void BP_OnEntryReleased(); // Function AgentListItem.AgentListItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function AgentListItem.AgentListItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF653FAFDF0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AgentListItem.AgentListItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF653FAFDF0
	void ExecuteUbergraph_AgentListItem(int32_t EntryPoint); // Function AgentListItem.AgentListItem_C.ExecuteUbergraph_AgentListItem // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

