// WidgetBlueprintGeneratedClass Intro.Intro_C
// Size : 0x318 (Inherited : 0x2E8)
struct UIntro_C : UPDIntroUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E8(0x8)
	struct UImage* IMG_AnimIndicator_A; // 0x2F0(0x8)
	struct UImage* IMG_AnimIndicator_B; // 0x2F8(0x8)
	struct UImage* Img_Indicator; // 0x300(0x8)
	struct UImage* IMG_PDLogo; // 0x308(0x8)
	struct UWidgetSwitcher* WS_AnimIndicator; // 0x310(0x8)

	void MovieEnd(); // Function Intro.Intro_C.MovieEnd // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void OnInitMediaPlayer(); // Function Intro.Intro_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void MovieOpen(struct FString OpenedUrl); // Function Intro.Intro_C.MovieOpen // (BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF653FAFDF0
	void ExecuteUbergraph_Intro(int32_t EntryPoint); // Function Intro.Intro_C.ExecuteUbergraph_Intro // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

