// WidgetBlueprintGeneratedClass IngameVideo.IngameVideo_C
// Size : 0x330 (Inherited : 0x318)
struct UIngameVideo_C : UPDIngameVideoUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x8)
	struct UWidgetAnimation* Anim_LineShow; // 0x320(0x8)
	struct UImage* IMG_MovieD; // 0x328(0x8)

	void OnInitMediaPlayer(); // Function IngameVideo.IngameVideo_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void IngameMovieOpen(struct FString OpenedUrl); // Function IngameVideo.IngameVideo_C.IngameMovieOpen // (BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF653FAFDF0
	void ExecuteUbergraph_IngameVideo(int32_t EntryPoint); // Function IngameVideo.IngameVideo_C.ExecuteUbergraph_IngameVideo // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

