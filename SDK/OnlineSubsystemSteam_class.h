// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size : 0x28 (Inherited : 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size : 0x1AD8 (Inherited : 0x1AD0)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1AD0(0x1)
	unsigned char UnknownData_1AD1[0x0007]; // 0x1AD1(0x7)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size : 0x7C0 (Inherited : 0x7B8)
struct USteamNetDriver : UIpNetDriver {
	unsigned char UnknownData_7B8[0x0008]; // 0x7B8(0x8)
};

