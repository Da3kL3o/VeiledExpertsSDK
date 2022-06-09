// Enum VivoxCore.DeviceType
enum class FDeviceType : uint8 {
	NullDevice
	SpecificDevice
	DefaultSystemDevice
	DefaultCommunicationDevice
	DeviceType_MAX
};

// Enum VivoxCore.EAudioFadeModel
enum class FEAudioFadeModel : uint8 {
	InverseByDistance
	LinearByDistance
	ExponentialByDistance
	EAudioFadeModel_MAX
};

// Enum VivoxCore.ChannelType
enum class FChannelType : uint8 {
	NonPositional
	Positional
	Echo
	ChannelType_MAX
};

// Enum VivoxCore.ConnectionState
enum class FConnectionState : uint8 {
	Disconnected
	Connecting
	Connected
	Disconnecting
	ConnectionState_MAX
};

// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class FParticipantSpeakingUpdateRate : uint8 {
	StateChange
	Never
	Update1Hz
	Update5Hz
	Update10Hz
	ParticipantSpeakingUpdateRate_MAX
};

// Enum VivoxCore.TransmissionMode
enum class FTransmissionMode : uint8 {
	None
	Single
	All
	TransmissionMode_MAX
};

// Enum VivoxCore.SubscriptionReply
enum class FSubscriptionReply : uint8 {
	Allow
	Block
	SubscriptionReply_MAX
};

// Enum VivoxCore.SubscriptionMode
enum class FSubscriptionMode : uint8 {
	Accept
	Block
	Defer
	SubscriptionMode_MAX
};

// Enum VivoxCore.LoginState
enum class FLoginState : uint8 {
	LoggedOut
	LoggingIn
	LoggedIn
	LoggingOut
	LoginState_MAX
};

// Enum VivoxCore.TTSMessageState
enum class FTTSMessageState : uint8 {
	Playing
	Enqueued
	TTSMessageState_MAX
};

// Enum VivoxCore.TTSDestination
enum class FTTSDestination : uint8 {
	Default
	RemoteTransmission
	LocalPlayback
	RemoteTransmissionWithLocalPlayback
	QueuedRemoteTransmission
	QueuedLocalPlayback
	QueuedRemoteTransmissionWithLocalPlayback
	ScreenReader
	TTSDestination_MAX
};

// Enum VivoxCore.PresenceStatus
enum class FPresenceStatus : uint8 {
	Unavailable
	Available
	Chat
	DoNotDisturb
	Away
	ExtendedAway
	PresenceStatus_MAX
};

