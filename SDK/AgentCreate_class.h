// WidgetBlueprintGeneratedClass AgentCreate.AgentCreate_C
// Size : 0x3B8 (Inherited : 0x340)
struct UAgentCreate_C : UPDAgentCreateUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x8)
	struct UWidgetAnimation* Anim_SceneOut; // 0x348(0x8)
	struct UWidgetAnimation* Anim_SceneShowUp; // 0x350(0x8)
	struct UImage* IMG_ActiveBarDeco; // 0x358(0x8)
	struct UImage* IMG_BottomBg; // 0x360(0x8)
	struct UImage* IMG_Clipboard; // 0x368(0x8)
	struct UImage* IMG_DescIcon; // 0x370(0x8)
	struct UImage* IMG_Divider; // 0x378(0x8)
	struct UImage* IMG_Mouse_W; // 0x380(0x8)
	struct UImage* IMG_Outglow; // 0x388(0x8)
	struct UImage* IMG_Outglow_Agent; // 0x390(0x8)
	struct UImage* IMG_Outline; // 0x398(0x8)
	struct UImage* IMG_PerkPreview; // 0x3A0(0x8)
	struct UImage* IMG_TitleActiveBar; // 0x3A8(0x8)
	struct UImage* IMG_ToolTipBg; // 0x3B0(0x8)

	void OnBP_OnGetItemChildren_1(struct UObject* Item, struct TArray<struct UObject*> Children); // Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x18, 0x7FF653FAFDF0
	void MovieEnd(); // Function AgentCreate.AgentCreate_C.MovieEnd // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void MovieOpen(struct FString OpenedUrl); // Function AgentCreate.AgentCreate_C.MovieOpen // (BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF653FAFDF0
	void OnInitMediaPlayer(); // Function AgentCreate.AgentCreate_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void ExecuteUbergraph_AgentCreate(int32_t EntryPoint); // Function AgentCreate.AgentCreate_C.ExecuteUbergraph_AgentCreate // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

