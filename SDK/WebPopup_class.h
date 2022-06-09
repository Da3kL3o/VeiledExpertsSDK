// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// Size : 0x370 (Inherited : 0x2F8)
struct UWebPopup_C : UPDWebPopupUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
	struct UWidgetAnimation* Anim_SceneOut; // 0x300(0x8)
	struct UWidgetAnimation* Anim_SceneShowUp; // 0x308(0x8)
	struct UImage* IMG_ActiveBarDeco; // 0x310(0x8)
	struct UImage* IMG_Blinder; // 0x318(0x8)
	struct UImage* IMG_BottomBar; // 0x320(0x8)
	struct UImage* IMG_BoxGlow; // 0x328(0x8)
	struct UImage* IMG_Deco_BL; // 0x330(0x8)
	struct UImage* IMG_Deco_BR; // 0x338(0x8)
	struct UImage* IMG_Deco_TL; // 0x340(0x8)
	struct UImage* IMG_Deco_TR; // 0x348(0x8)
	struct UImage* IMG_Outglow_Agent; // 0x350(0x8)
	struct UImage* IMG_PopupBg; // 0x358(0x8)
	struct UImage* IMG_TitleActiveBar; // 0x360(0x8)
	struct UImage* IMG_TopBar; // 0x368(0x8)

	void OpenWebPage(); // Function WebPopup.WebPopup_C.OpenWebPage // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void CloseWebPage(); // Function WebPopup.WebPopup_C.CloseWebPage // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void ExecuteUbergraph_WebPopup(int32_t EntryPoint); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

