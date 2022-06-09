// Enum AkAudio.EAkCallbackType
enum class FEAkCallbackType : uint8 {
	EndOfEvent
	Marker
	Duration
	Starvation
	MusicPlayStarted
	MusicSyncBeat
	MusicSyncBar
	MusicSyncEntry
	MusicSyncExit
	MusicSyncGrid
	MusicSyncUserCue
	MusicSyncPoint
	MIDIEvent
	EAkCallbackType_MAX
};

// Enum AkAudio.EAkResult
enum class FEAkResult : uint8 {
	NotImplemented
	Success
	Fail
	PartialSuccess
	NotCompatible
	AlreadyConnected
	InvalidFile
	AudioFileHeaderTooLarge
	MaxReached
	InvalidID
	IDNotFound
	InvalidInstanceID
	NoMoreData
	InvalidStateGroup
	ChildAlreadyHasAParent
	InvalidLanguage
	CannotAddItseflAsAChild
	InvalidParameter
	ElementAlreadyInList
	PathNotFound
	PathNoVertices
	PathNotRunning
	PathNotPaused
	PathNodeAlreadyInList
	PathNodeNotInList
	DataNeeded
	NoDataNeeded
	DataReady
	NoDataReady
	InsufficientMemory
	Cancelled
	UnknownBankID
	BankReadError
	InvalidSwitchType
	FormatNotReady
	WrongBankVersion
	FileNotFound
	DeviceNotReady
	BankAlreadyLoaded
	RenderedFX
	ProcessNeeded
	ProcessDone
	MemManagerNotInitialized
	StreamMgrNotInitialized
	SSEInstructionsNotSupported
	Busy
	UnsupportedChannelConfig
	PluginMediaNotAvailable
	MustBeVirtualized
	CommandTooLarge
	RejectedByFilter
	InvalidCustomPlatformName
	DLLCannotLoad
	DLLPathNotFound
	NoJavaVM
	OpenSLError
	PluginNotRegistered
	DataAlignmentError
	EAkResult_MAX
};

// Enum AkAudio.EAkAndroidAudioAPI
enum class FEAkAndroidAudioAPI : uint8 {
	AAudio
	OpenSL_ES
	EAkAndroidAudioAPI_MAX
};

// Enum AkAudio.EAkAudioSessionMode
enum class FEAkAudioSessionMode : uint8 {
	Default
	VoiceChat
	GameChat
	VideoRecording
	Measurement
	MoviePlayback
	VideoChat
	EAkAudioSessionMode_MAX
};

// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class FEAkAudioSessionCategoryOptions : uint8 {
	MixWithOthers
	DuckOthers
	AllowBluetooth
	DefaultToSpeaker
	EAkAudioSessionCategoryOptions_MAX
};

// Enum AkAudio.EAkAudioSessionCategory
enum class FEAkAudioSessionCategory : uint8 {
	Ambient
	SoloAmbient
	PlayAndRecord
	EAkAudioSessionCategory_MAX
};

// Enum AkAudio.EReflectionFilterBits
enum class FEReflectionFilterBits : uint8 {
	Wall
	Ceiling
	Floor
	EReflectionFilterBits_MAX
};

// Enum AkAudio.AkCodecId
enum class FAkCodecId : uint8 {
	None
	PCM
	ADPCM
	XMA
	Vorbis
	AAC
	ATRAC9
	OpusNX
	AkOpus
	AkOpusWEM
	AkCodecId_MAX
};

// Enum AkAudio.EAkMidiCcValues
enum class FEAkMidiCcValues : uint8 {
	AkMidiCcBankSelectCoarse
	AkMidiCcModWheelCoarse
	AkMidiCcBreathCtrlCoarse
	AkMidiCcCtrl3Coarse
	AkMidiCcFootPedalCoarse
	AkMidiCcPortamentoCoarse
	AkMidiCcDataEntryCoarse
	AkMidiCcVolumeCoarse
	AkMidiCcBalanceCoarse
	AkMidiCcCtrl9Coarse
	AkMidiCcPanPositionCoarse
	AkMidiCcExpressionCoarse
	AkMidiCcEffectCtrl1Coarse
	AkMidiCcEffectCtrl2Coarse
	AkMidiCcCtrl14Coarse
	AkMidiCcCtrl15Coarse
	AkMidiCcGenSlider1
	AkMidiCcGenSlider2
	AkMidiCcGenSlider3
	AkMidiCcGenSlider4
	AkMidiCcCtrl20Coarse
	AkMidiCcCtrl21Coarse
	AkMidiCcCtrl22Coarse
	AkMidiCcCtrl23Coarse
	AkMidiCcCtrl24Coarse
	AkMidiCcCtrl25Coarse
	AkMidiCcCtrl26Coarse
	AkMidiCcCtrl27Coarse
	AkMidiCcCtrl28Coarse
	AkMidiCcCtrl29Coarse
	AkMidiCcCtrl30Coarse
	AkMidiCcCtrl31Coarse
	AkMidiCcBankSelectFine
	AkMidiCcModWheelFine
	AkMidiCcBreathCtrlFine
	AkMidiCcCtrl3Fine
	AkMidiCcFootPedalFine
	AkMidiCcPortamentoFine
	AkMidiCcDataEntryFine
	AkMidiCcVolumeFine
	AkMidiCcBalanceFine
	AkMidiCcCtrl9Fine
	AkMidiCcPanPositionFine
	AkMidiCcExpressionFine
	AkMidiCcEffectCtrl1Fine
	AkMidiCcEffectCtrl2Fine
	AkMidiCcCtrl14Fine
	AkMidiCcCtrl15Fine
	AkMidiCcCtrl20Fine
	AkMidiCcCtrl21Fine
	AkMidiCcCtrl22Fine
	AkMidiCcCtrl23Fine
	AkMidiCcCtrl24Fine
	AkMidiCcCtrl25Fine
	AkMidiCcCtrl26Fine
	AkMidiCcCtrl27Fine
	AkMidiCcCtrl28Fine
	AkMidiCcCtrl29Fine
	AkMidiCcCtrl30Fine
	AkMidiCcCtrl31Fine
	AkMidiCcHoldPedal
	AkMidiCcPortamentoOnOff
	AkMidiCcSustenutoPedal
	AkMidiCcSoftPedal
	AkMidiCcLegatoPedal
	AkMidiCcHoldPedal2
	AkMidiCcSoundVariation
	AkMidiCcSoundTimbre
	AkMidiCcSoundReleaseTime
	AkMidiCcSoundAttackTime
	AkMidiCcSoundBrightness
	AkMidiCcSoundCtrl6
	AkMidiCcSoundCtrl7
	AkMidiCcSoundCtrl8
	AkMidiCcSoundCtrl9
	AkMidiCcSoundCtrl10
	AkMidiCcGeneralButton1
	AkMidiCcGeneralButton2
	AkMidiCcGeneralButton3
	AkMidiCcGeneralButton4
	AkMidiCcReverbLevel
	AkMidiCcTremoloLevel
	AkMidiCcChorusLevel
	AkMidiCcCelesteLevel
	AkMidiCcPhaserLevel
	AkMidiCcDataButtonP1
	AkMidiCcDataButtonM1
	AkMidiCcNonRegisterCoarse
	AkMidiCcNonRegisterFine
	AkMidiCcAllSoundOff
	AkMidiCcAllControllersOff
	AkMidiCcLocalKeyboard
	AkMidiCcAllNotesOff
	AkMidiCcOmniModeOff
	AkMidiCcOmniModeOn
	AkMidiCcOmniMonophonicOn
	AkMidiCcOmniPolyphonicOn
	EAkMidiCcValues_MAX
};

// Enum AkAudio.EAkMidiEventType
enum class FEAkMidiEventType : uint8 {
	AkMidiEventTypeInvalid
	AkMidiEventTypeNoteOff
	AkMidiEventTypeNoteOn
	AkMidiEventTypeNoteAftertouch
	AkMidiEventTypeController
	AkMidiEventTypeProgramChange
	AkMidiEventTypeChannelAftertouch
	AkMidiEventTypePitchBend
	AkMidiEventTypeSysex
	AkMidiEventTypeEscape
	AkMidiEventTypeMeta
	EAkMidiEventType_MAX
};

// Enum AkAudio.ERTPCValueType
enum class FERTPCValueType : uint8 {
	Default
	Global
	GameObject
	PlayingID
	Unavailable
	ERTPCValueType_MAX
};

// Enum AkAudio.EAkCurveInterpolation
enum class FEAkCurveInterpolation : uint8 {
	Log3
	Sine
	Log1
	InvSCurve
	Linear
	SCurve
	Exp1
	SineRecip
	Exp3
	LastFadeCurve
	Constant
	EAkCurveInterpolation_MAX
};

// Enum AkAudio.AkActionOnEventType
enum class FAkActionOnEventType : uint8 {
	Stop
	Pause
	Resume
	Break
	ReleaseEnvelope
	AkActionOnEventType_MAX
};

// Enum AkAudio.AkMultiPositionType
enum class FAkMultiPositionType : uint8 {
	SingleSource
	MultiSources
	MultiDirections
	AkMultiPositionType_MAX
};

// Enum AkAudio.AkSpeakerConfiguration
enum class FAkSpeakerConfiguration : uint8 {
	Ak_Speaker_Front_Left
	Ak_Speaker_Front_Right
	Ak_Speaker_Front_Center
	Ak_Speaker_Low_Frequency
	Ak_Speaker_Back_Left
	Ak_Speaker_Back_Right
	Ak_Speaker_Back_Center
	Ak_Speaker_Side_Left
	Ak_Speaker_Side_Right
	Ak_Speaker_Top
	Ak_Speaker_Height_Front_Left
	Ak_Speaker_Height_Front_Center
	Ak_Speaker_Height_Front_Right
	Ak_Speaker_Height_Back_Left
	Ak_Speaker_Height_Back_Center
	Ak_Speaker_Height_Back_Right
	Ak_Speaker_MAX
};

// Enum AkAudio.AkChannelConfiguration
enum class FAkChannelConfiguration : uint8 {
	Ak_Parent
	Ak_LFE
	AK_Audio_Objects
	Ak_1_1
	Ak_2_1
	Ak_2_2
	Ak_3_1
	Ak_3_2
	Ak_4_1
	Ak_4_2
	Ak_5_1
	Ak_5_2
	Ak_7_2
	Ak_5_1_3
	Ak_7_1_3
	Ak_7_1_5
	Ak_Auro_9_2
	Ak_Auro_10_2
	Ak_Auro_11_2
	Ak_Auro_13_2
	Ak_Ambisonics_1st_order
	Ak_Ambisonics_2nd_order
	Ak_Ambisonics_3rd_order
	Ak_Ambisonics_4th_order
	Ak_Ambisonics_5th_order
	AkChannelConfiguration_MAX
};

// Enum AkAudio.AkAcousticPortalState
enum class FAkAcousticPortalState : uint8 {
	Closed
	Open
	AkAcousticPortalState_MAX
};

// Enum AkAudio.PanningRule
enum class FPanningRule : uint8 {
	PanningRule_Speakers
	PanningRule_Headphones
	PanningRule_MAX
};

// Enum AkAudio.AkMeshType
enum class FAkMeshType : uint8 {
	StaticMesh
	CollisionMesh
	AkMeshType_MAX
};

// Enum AkAudio.EAkCommSystem
enum class FEAkCommSystem : uint8 {
	Socket
	HTCS
	EAkCommSystem_MAX
};

// Enum AkAudio.EAkChannelMask
enum class FEAkChannelMask : uint8 {
	FrontLeft
	FrontRight
	FrontCenter
	LowFrequency
	BackLeft
	BackRight
	BackCenter
	SideLeft
	SideRight
	Top
	HeightFrontLeft
	HeightFrontCenter
	HeightFrontRight
	HeightBackLeft
	HeightBackCenter
	HeightBackRight
	EAkChannelMask_MAX
};

// Enum AkAudio.EAkChannelConfigType
enum class FEAkChannelConfigType : uint8 {
	Anonymous
	Standard
	Ambisonic
	EAkChannelConfigType_MAX
};

// Enum AkAudio.EAkPanningRule
enum class FEAkPanningRule : uint8 {
	Speakers
	Headphones
	EAkPanningRule_MAX
};

// Enum AkAudio.EAkFitToGeometryMode
enum class FEAkFitToGeometryMode : uint8 {
	OrientedBox
	AlignedBox
	ConvexPolyhedron
	EAkFitToGeometryMode_MAX
};

