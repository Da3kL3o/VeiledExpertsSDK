// WidgetBlueprintGeneratedClass PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C
// Size : 0x3B0 (Inherited : 0x328)
struct UPlayerEquipmentCenterSlot_C : UPDPlayerEquipmentDetail {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x8)
	struct UWidgetAnimation* ReloadComp; // 0x330(0x8)
	struct UWidgetAnimation* ReloadAlert; // 0x338(0x8)
	struct UPDImage* IMG_CompBack; // 0x340(0x8)
	struct UPDImage* IMG_Gauge_Back; // 0x348(0x8)
	struct UPDImage* InfoBackC; // 0x350(0x8)
	struct UPDImage* InfoBackL; // 0x358(0x8)
	struct UPDImage* InfoBackR; // 0x360(0x8)
	struct UPDImage* PDImage; // 0x368(0x8)
	struct UPDImage* PDImage_3; // 0x370(0x8)
	struct UPDImage* PDImage_4; // 0x378(0x8)
	struct UPDImage* PDImage_5; // 0x380(0x8)
	struct UPDImage* PDImage_332; // 0x388(0x8)
	struct URetainerBox* RB_Back; // 0x390(0x8)
	struct URetainerBox* RB_Deco; // 0x398(0x8)
	struct URetainerBox* RB_ReloadComp; // 0x3A0(0x8)
	struct URetainerBox* RB_WPInfo; // 0x3A8(0x8)

	void PreConstruct(bool IsDesignTime); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x1, 0x7FF653FAFDF0
	void Construct(); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x3C, 0x7FF653FAFDF0
	void ExecuteUbergraph_PlayerEquipmentCenterSlot(int32_t EntryPoint); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.ExecuteUbergraph_PlayerEquipmentCenterSlot // (Final|UbergraphFunction|HasDefaults) // Param Size : 0x4, 0x7FF653FAFDF0
};

