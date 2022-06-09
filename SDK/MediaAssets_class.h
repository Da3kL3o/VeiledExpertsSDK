// Class MediaAssets.MediaSource
// Size : 0x80 (Inherited : 0x28)
struct UMediaSource : UObject {
	unsigned char UnknownData_28[0x0058]; // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654FA16E0
	void SetMediaOptionString(struct FName Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF654FA0C90
	void SetMediaOptionInt64(struct FName Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654FA0BC0
	void SetMediaOptionFloat(struct FName Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF654FA0AF0
	void SetMediaOptionBool(struct FName Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x9, 0x7FF654FA0A20
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF653CAA500
};

// Class MediaAssets.BaseMediaSource
// Size : 0x88 (Inherited : 0x80)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x80(0x8)
};

// Class MediaAssets.FileMediaSource
// Size : 0xB0 (Inherited : 0x88)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x1)
	unsigned char UnknownData_99[0x0017]; // 0x99(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654FA08F0
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x14, 0x7FF654F9E380
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x14, 0x7FF654F9E2A0
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x14, 0x7FF654F9E1C0
};

// Class MediaAssets.MediaComponent
// Size : 0xC0 (Inherited : 0xB0)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xB0(0x8)
	struct UMediaPlayer* MediaPlayer; // 0xB8(0x8)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654A28390
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9E9D0
};

// Class MediaAssets.MediaPlayer
// Size : 0x138 (Inherited : 0x28)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xA8(0x8)
	struct FTimespan CacheBehind; // 0xB0(0x8)
	struct FTimespan CacheBehindGame; // 0xB8(0x8)
	bool NativeAudioOut; // 0xC0(0x1)
	bool PlayOnOpen; // 0xC1(0x1)
	unsigned char UnknownData_C2[0x0002]; // 0xC2(0x2)
	unsigned char Shuffle : 1; // 0xC4(0x1)
	unsigned char Loop : 1; // 0xC4(0x1)
	unsigned char UnknownData_C4_2 : 6; // 0xC4(0x1)
	unsigned char UnknownData_C5[0x0003]; // 0xC5(0x3)
	struct UMediaPlaylist* Playlist; // 0xC8(0x8)
	int32_t PlaylistIndex; // 0xD0(0x4)
	unsigned char UnknownData_D4[0x0004]; // 0xD4(0x4)
	struct FTimespan TimeDelay; // 0xD8(0x8)
	float HorizontalFieldOfView; // 0xE0(0x4)
	float VerticalFieldOfView; // 0xE4(0x4)
	struct FRotator ViewRotation; // 0xE8(0xC)
	unsigned char UnknownData_F4[0x002C]; // 0xF4(0x2C)
	struct FGuid PlayerGuid; // 0x120(0x10)
	unsigned char UnknownData_130[0x0008]; // 0x130(0x8)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654FA16B0
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654FA1680
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x6, 0x7FF654FA15B0
	bool SetViewRotation(struct FRotator Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0xE, 0x7FF654FA14D0
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|Native|Public|BlueprintCallable) // Param Size : 0xA, 0x7FF654FA13C0
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF654FA12C0
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|Native|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF654FA11C0
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA1140
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF654FA0F90
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF654FA0F00
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA0D80
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF654FA0990
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA0690
	void SetBlockOnTime(struct FTimespan Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA0600
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF654FA0540
	bool Seek(struct FTimespan Time); // Function MediaAssets.MediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x9, 0x7FF654FA04A0
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA0470
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA0380
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA0230
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF654FA0210
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA01E0
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA01B0
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654FA0100
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x39, 0x7FF654FA0000
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options, bool bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x59, 0x7FF654F9FE20
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF654F9FD90
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF654F9FCD0
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF654F9FC30
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654F9FB80
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654F9FB30
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9FB00
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9FAD0
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9FAA0
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9FA70
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9FA40
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9FA10
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9F9E0
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9F9B0
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9F8C0
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9F850
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF654F9F750
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF654F9F680
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9F5C0
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654F9F4F0
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9F430
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9F400
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF654F9F3C0
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF654F9F2B0
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9F1F0
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x20, 0x7FF654F9F0D0
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9F090
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9F050
	void GetSupportedRates(struct TArray<struct FFloatRange> OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x11, 0x7FF654F9EF50
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9EE40
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9EE10
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9ECB0
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9EC90
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9EC50
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9EBC0
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9EB00
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF654F9E930
	struct FTimespan GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9E8F0
	struct FTimespan GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9E8B0
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9E880
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9E7E0
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9E7A0
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF654F9E6A0
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9E5E0
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF654F9E520
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF654F9E1A0
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654F9E0F0
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF654F9E060
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF654F9E030
};

// Class MediaAssets.MediaPlaylist
// Size : 0x38 (Inherited : 0x28)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654FA03B0
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF654FA02F0
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF654FA0260
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF654F9FB60
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF654F9F8F0
	struct UMediaSource* GetRandom(int32_t OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654F9ED70
	struct UMediaSource* GetPrevious(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654F9ECD0
	struct UMediaSource* GetNext(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF654F9EA60
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654F9E460
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654F9DD30
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654F9DC80
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF654F9DBF0
};

// Class MediaAssets.MediaSoundComponent
// Size : 0x8D0 (Inherited : 0x6D0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x6D0(0x4)
	bool DynamicRateAdjustment; // 0x6D4(0x1)
	unsigned char UnknownData_6D5[0x0003]; // 0x6D5(0x3)
	float RateAdjustmentFactor; // 0x6D8(0x4)
	struct FFloatRange RateAdjustmentRange; // 0x6DC(0x10)
	unsigned char UnknownData_6EC[0x0004]; // 0x6EC(0x4)
	struct UMediaPlayer* MediaPlayer; // 0x6F0(0x8)
	unsigned char UnknownData_6F8[0x01D8]; // 0x6F8(0x1D8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF654FA1020
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA0E00
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA0830
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA07A0
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF654FA0710
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF654F9EED0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9EA00
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9E820
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x3A1, 0x7FF654F9DDE0
};

// Class MediaAssets.MediaTexture
// Size : 0x188 (Inherited : 0xB8)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xB8(0x1)
	enum class TextureAddress AddressY; // 0xB9(0x1)
	bool AutoClear; // 0xBA(0x1)
	unsigned char UnknownData_BB[0x0001]; // 0xBB(0x1)
	struct FLinearColor ClearColor; // 0xBC(0x10)
	bool EnableGenMips; // 0xCC(0x1)
	enum class None NumMips; // 0xCD(0x1)
	unsigned char UnknownData_CE[0x0002]; // 0xCE(0x2)
	struct UMediaPlayer* MediaPlayer; // 0xD0(0x8)
	unsigned char UnknownData_D8[0x00B0]; // 0xD8(0xB0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF654FA0E80
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9F890
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF654F9EA30
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9E850
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF654F9E4F0
};

// Class MediaAssets.PlatformMediaSource
// Size : 0x88 (Inherited : 0x80)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x80(0x8)
};

// Class MediaAssets.StreamMediaSource
// Size : 0x98 (Inherited : 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size : 0x98 (Inherited : 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88(0x1)
	unsigned char UnknownData_89[0x0003]; // 0x89(0x3)
	int32_t FrameDelay; // 0x8C(0x4)
	double TimeDelay; // 0x90(0x8)
};

