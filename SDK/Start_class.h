// WidgetBlueprintGeneratedClass Start.Start_C
// Size : 0x318 (Inherited : 0x2C0)
struct UStart_C : UPDStartUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C0(0x8)
	struct UWidgetAnimation* Anim_Show; // 0x2C8(0x8)
	struct UImage* IMG_AnimIndicator_A; // 0x2D0(0x8)
	struct UImage* IMG_AnimIndicator_B; // 0x2D8(0x8)
	struct UImage* Img_Bg; // 0x2E0(0x8)
	struct UImage* IMG_LoadingBg; // 0x2E8(0x8)
	struct UImage* IMG_PDLogo; // 0x2F0(0x8)
	struct UImage* IMG_Rating_01; // 0x2F8(0x8)
	struct UImage* IMG_Rating_02; // 0x300(0x8)
	struct UImage* IMG_Rating_03; // 0x308(0x8)
	struct UWidgetSwitcher* WS_AnimIndicator; // 0x310(0x8)

	void OnInitMediaPlayer(); // Function Start.Start_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void MovieEnd(); // Function Start.Start_C.MovieEnd // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void MovieStart(struct FString OpenedUrl); // Function Start.Start_C.MovieStart // (BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF653FAFDF0
	void ExecuteUbergraph_Start(int32_t EntryPoint); // Function Start.Start_C.ExecuteUbergraph_Start // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

