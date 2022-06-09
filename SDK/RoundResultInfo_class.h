// WidgetBlueprintGeneratedClass RoundResultInfo.RoundResultInfo_C
// Size : 0x420 (Inherited : 0x338)
struct URoundResultInfo_C : UPDRoundResult {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x8)
	struct UWidgetAnimation* 10_AniSwitch; // 0x340(0x8)
	struct UWidgetAnimation* 08_AniKeyPlayer; // 0x348(0x8)
	struct UWidgetAnimation* 061_AniTeamRecordEnd; // 0x350(0x8)
	struct UWidgetAnimation* 06_AniTeamRecordStart; // 0x358(0x8)
	struct UWidgetAnimation* 07_AniKeyPlayerBack; // 0x360(0x8)
	struct UWidgetAnimation* 05_AniSwitch; // 0x368(0x8)
	struct UWidgetAnimation* 041_AniMVPEnd; // 0x370(0x8)
	struct UWidgetAnimation* 031_AniPlayerNotiEnd; // 0x378(0x8)
	struct UWidgetAnimation* 04_AniMVPStart; // 0x380(0x8)
	struct UWidgetAnimation* 03_AniPlayerNotiStart; // 0x388(0x8)
	struct UWidgetAnimation* 01_AniRoundResult; // 0x390(0x8)
	struct UWidgetAnimation* 02_Result_Round; // 0x398(0x8)
	struct UWidgetAnimation* 00_AniRoundEnd; // 0x3A0(0x8)
	struct UImage* Img_Bg; // 0x3A8(0x8)
	struct FLinearColor TeamColorBlue; // 0x3B0(0x10)
	struct FLinearColor TeamColorOrange; // 0x3C0(0x10)
	struct FLinearColor ResultColorLose; // 0x3D0(0x10)
	struct FLinearColor ResultColorDraw; // 0x3E0(0x10)
	struct FLinearColor SetTeamColor; // 0x3F0(0x10)
	struct FLinearColor SetfoeColor; // 0x400(0x10)
	struct FLinearColor SetMVPColor; // 0x410(0x10)

	struct FLinearColor FoeColorSet(); // Function RoundResultInfo.RoundResultInfo_C.FoeColorSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // Param Size : 0x10, 0x7FF653FAFDF0
	struct FLinearColor TeamColorSet(); // Function RoundResultInfo.RoundResultInfo_C.TeamColorSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // Param Size : 0x10, 0x7FF653FAFDF0
	void OrangeTeam(); // Function RoundResultInfo.RoundResultInfo_C.OrangeTeam // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void MVP_Orage(); // Function RoundResultInfo.RoundResultInfo_C.MVP_Orage // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void MVP_Blue(); // Function RoundResultInfo.RoundResultInfo_C.MVP_Blue // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void BlueTeam(); // Function RoundResultInfo.RoundResultInfo_C.BlueTeam // (BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF653FAFDF0
	void ExecuteUbergraph_RoundResultInfo(int32_t EntryPoint); // Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF653FAFDF0
};

