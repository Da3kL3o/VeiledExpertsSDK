// WidgetBlueprintGeneratedClass IngameMap.IngameMap_C
// Size : 0x530 (Inherited : 0x4A0)
struct UIngameMap_C : UPDIngameMapUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4A0(0x8)
	struct UWidgetAnimation* AllyPing_Old; // 0x4A8(0x8)
	struct UWidgetAnimation* MissionPing_Old; // 0x4B0(0x8)
	struct UWidgetAnimation* AllyPing; // 0x4B8(0x8)
	struct UWidgetAnimation* MissionPing; // 0x4C0(0x8)
	struct UImage* IMG_AlertAnim_01; // 0x4C8(0x8)
	struct UImage* IMG_AlertAnim_02; // 0x4D0(0x8)
	struct UImage* IMG_AlertAnim_03; // 0x4D8(0x8)
	struct UImage* IMG_Back; // 0x4E0(0x8)
	struct UImage* IMG_BadgeBg; // 0x4E8(0x8)
	struct UImage* IMG_BadgeOutline; // 0x4F0(0x8)
	struct UPDImage* IMG_Deco; // 0x4F8(0x8)
	struct UImage* IMG_GuideBg; // 0x500(0x8)
	struct UImage* IMG_Mouse_C; // 0x508(0x8)
	struct UImage* IMG_Mouse_L; // 0x510(0x8)
	struct UImage* IMG_Mouse_R; // 0x518(0x8)
	struct UImage* IMG_Mouse_WD; // 0x520(0x8)
	struct URetainerBox* RetainerBox_1; // 0x528(0x8)

	void Construct(); // Function IngameMap.IngameMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IngameMap.IngameMap_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x3C, 0x7FF653FAFDF0
	void ExecuteUbergraph_IngameMap(int32_t EntryPoint); // Function IngameMap.IngameMap_C.ExecuteUbergraph_IngameMap // (Final|UbergraphFunction|HasDefaults) // Param Size : 0x4, 0x7FF653FAFDF0
};

