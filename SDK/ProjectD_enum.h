// Enum ProjectD.ECoreNetError
enum class FECoreNetError : uint8 {
	CNE_None
	CNE_ConnectError
	CNE_DisconnectByClient
	CNE_DisconnectedByServer
	CNE_ReceiveError
	CNE_SendError
	CNE_RSADecryptError
	CNE_TimeOut
	CNE_MAX
};

// Enum ProjectD.ECoreNetResult
enum class FECoreNetResult : uint8 {
	CNR_None
	CNR_Success
	CNR_Failure
	CNR_MAX
};

// Enum ProjectD.EPDMovementState
enum class FEPDMovementState : uint8 {
	Grounded
	Falling
	Ragdoll
	Parkour
	Riding
	SkyDiving
	Airborne
	Sliding
	MAX
};

// Enum ProjectD.EPDCharacterActionType
enum class FEPDCharacterActionType : uint8 {
	None
	Land
	Jump
	Roll
	Vault
	Climbup
	LedgeGrapParkour
	LedgeGrapClimbing
	MeleeAttack
	Lean
	ChangeStance
	ItemUse
	ClimbEnterUpward
	ClimbEnterDownward
	ClimbEnterVault
	ClimbMove
	ClimbExit
	GroggyEnter
	GroggyExit
	Death_Normal
	Death_Groggy
	FireWeapon
	AimWeapon
	ChangeWeapon
	ReloadWeapon
	InstantThrowWeapon
	ThrowWeapon
	BoltAction
	OutCover
	PickUpItem
	DynamicShielding
	GroggyRescue
	SNDModeBomb
	Guard
	MeleeHit
	KnockBack
	FallingObjcetKnockBack
	SlidingEnter
	SlidingExit
	ZipLine
	Signature_RevolerSpinning
	Signature_DrinkBottle
	Signature_EatHotdog
	Signature_LickKnife
	Signature_CoinToss
	Signature_GlassesScan
	Signature_ShootFlare
	Signature_SprayMoney
	Signature_Warcry
	Signature_LookMagnifier
	Perk_Hacking
	Perk_Maintenance
	JuggernautWear_Start
	JuggernautWear_End
	JuggernautDash_Start
	JuggernautDash_End
	ExoSuitWear_Start
	ExoSuitWear_End
	ExoSuitDash
	ExoSuitLauncher
	ArmorPlateReplaceKit
	TurnBack
	AFK
	RoundEnter
	BurnReaction
	MAX
};

// Enum ProjectD.EINGAMEMISSIONSTATE
enum class FEINGAMEMISSIONSTATE : uint8 {
	None
	MissionOrder
	MissionClear
	MissionError
	MissionFail
	EINGAMEMISSIONSTATE_MAX
};

// Enum ProjectD.ESubLevelEvent
enum class FESubLevelEvent : uint8 {
	SLE_NONE
	SLE_ExplodeAreaA
	SLE_MAX
};

// Enum ProjectD.ECharacterSpawnGroup
enum class FECharacterSpawnGroup : uint8 {
	CharacterSG_RED
	CharacterSG_BLUE
	CharacterSG_Result
	CharacterSG_MAX
};

// Enum ProjectD.ETRIGGERNOTI
enum class FETRIGGERNOTI : uint8 {
	ETB_ALL
	ETB_PLAYER
	ETB_NPC
	ETB_MAX
};

// Enum ProjectD.EDamageType
enum class FEDamageType : uint8 {
	None
	Melee
	Weapon
	SystemGroggy
	Fall
	Vehicle
	RedStorm
	Explosion
	Blaze
	Burn
	Gas
	Heal
	InstallSeed
	ExplosionSeed
	DeactiveSeed
	SuicideGroggyToKill
	Max
};

// Enum ProjectD.EActionReserveOption
enum class FEActionReserveOption : uint8 {
	None
	IsAbleTo
	MustReserve
	IfBlockedDontReserve
	EActionReserveOption_MAX
};

// Enum ProjectD.EPDGroggyRescueActionType
enum class FEPDGroggyRescueActionType : uint8 {
	GroggyRescueAction_Start
	GroggyRescueAction_Complete
	GroggyRescueAction_Cancel
	GroggyRescueAction_MAX
};

// Enum ProjectD.EParkourHeightType
enum class FEParkourHeightType : uint8 {
	Parkour_51
	Parkour_101
	Parkour_151
	Parkour_201
	Parkour_251
	Parkour_301
	MAX
};

// Enum ProjectD.ESlideEnterType
enum class FESlideEnterType : uint8 {
	SlideEnter_None
	SlideEnter_Default
	SlideEnter_Falling
	SlideEnter_Groggy
	SlideEnter_GroggyFalling
	SlideEnter_Die
	SlideEnter_MAX
};

// Enum ProjectD.ESlideExitType
enum class FESlideExitType : uint8 {
	SlideExit_None
	SlideExit_Default
	SlideExit_Roll
	SlideExit_Falling
	SlideExit_Groggy
	SlideExit_GroggyFalling
	SlideExit_Die
	SlideExit_MAX
};

// Enum ProjectD.ESlotState
enum class FESlotState : uint8 {
	Create
	Filled
	ESlotState_MAX
};

// Enum ProjectD.EAkBankName
enum class FEAkBankName : uint8 {
	sfx
	weapons
	ambience
	bgm
	foley
	EAkBankName_MAX
};

// Enum ProjectD.EGameModeWidget
enum class FEGameModeWidget : uint8 {
	None
	PlayerInfo
	Spectator
	StateGauge
	Perk
	CoinInfo
	CrossHair
	TargetScreen
	DamageIndicator
	ThreeDIndicator
	InteractionInfo
	RoundInfo
	RoundResult
	GameTime
	IngameMap
	RoundReplayer
	RingCommand
	MarkerGuide
	UnknownMarket
	StatusBoard
	ReportPopup
	WorldMessage
	BattleLog
	KillMessage
	KillLog
	PerkNotify
	PingLog
	TutorialQuest
	BreakInto
	RoundWait
	AgentLeptonInfo
	PlayerSetting
	PersonalMission
	MAX
};

// Enum ProjectD.EUIName
enum class FEUIName : uint8 {
	None
	Start
	Login
	NickNameCreate
	AgentCreate
	AgentInventory
	AgentLobby
	CustomMain
	CustomCharacterPerk
	CustomCharacterDeco
	CustomVoice
	CustomWeapon
	CustomGameDeco
	CustomLocker
	ClanMain
	ClanInfo
	ClanList
	ClanCreate
	ClanInfoPopup
	DebugLog
	PlayLogReport
	Loading
	Ingame
	Match
	Intro
	GameResult
	DeathMatchModeUI
	SquadDeathMatchModeUI
	OptionContent
	OKPopup
	OKCancelPopup
	OptionPopup
	LobbyUserListPopup
	InvitePartyPopup
	TutorialPopup
	StroyPerkPopup
	GainPerkPopup
	GuideWebPagePopup
	WebPopup
	TermsOfServicePopup
	ServerMaintenanceNoti
	SystemMessage
	GameModeSelectItem
	LobbyUserListItem
	CommunityPopup
	PartySlotListItem
	FriendListItem
	FriendAddItem
	FriendClanItem
	CustomMatchJoinPopup
	CustomMatchListItem
	AgentListItem
	AgentSlotListItem
	CustomCharacterListItem
	PlayLogPlayInfoItem
	KillLogItem
	EventLogItem
	NameTagAlly
	NameTagEnemy
	ObjectTag
	ObjectTagSite
	PingIndicator
	IngameShopMain
	CategoryListItem
	IngameShopListItem
	IngameShopEtcItemElem
	IngameShopPartListItem
	IngameShopUpgradeListItem
	PurchaseMsg
	RingCommand
	InvenDragModule
	LootingList
	DamageIndicator
	PlayerEntryItemAlly
	PlayerEntryItemEnemy
	MissionScorePlayerEntryItem
	MSStatusBoardPlayerInfo
	MSStatusBoardRoundItem
	PerkEntryItem
	PerkNotifySlot
	AttackDamageIndicator
	GrenadeIndicator
	CoinInfoListItem
	PingLogItem
	PersonalMissionModule
	PersonalMissionRewardModule
	ScreenMarkerLoot
	BaseGameMode
	DeathMatchMode
	DefuseBombMode
	MissionScoreMode
	UnKnownMarketPartListItem
	UnKnownMarketPurchaseMsgItem
	UnKnownMarketInvenListItem
	StatusBoardRoundListItem
	ResultRoundItem
	ResultTeamMember
	ResultExpItem
	ResultMedalItem
	MatchListItem
	MailPopup
	MailNotificationSlot
	MailItemListSlot
	TeamCharListItem
	LeptonPresetTab
	UI_Max
	EUIName_MAX
};

// Enum ProjectD.EPDHitReactionAnimType
enum class FEPDHitReactionAnimType : uint8 {
	HitReaction_None
	HitReaction_Normal
	HitReaction_Run
	HitReaction_Lower
	HitReaction_Head
	HitReaction_Melee
	HitReaction_BombGraze
	HitReaction_BulletGraze
	MAX
};

// Enum ProjectD.EPDRagdollState
enum class FEPDRagdollState : uint8 {
	Wake
	Freeze
	EPDRagdollState_MAX
};

// Enum ProjectD.EPDNPCActionState
enum class FEPDNPCActionState : uint8 {
	None
	LookAround
	Surprised
	MAX
};

// Enum ProjectD.EPDNPCLocoState
enum class FEPDNPCLocoState : uint8 {
	NotMoving
	Moving
	MAX
};

// Enum ProjectD.EOptionSensitivenessType
enum class FEOptionSensitivenessType : uint8 {
	ZOOM0
	ZOOM1
	ZOOM2
	ZOOM3
	ZOOM4
	_TOTAL_COUNT
	EOptionSensitivenessType_MAX
};

// Enum ProjectD.EPDParkourType
enum class FEPDParkourType : uint8 {
	NONE
	STAIR
	HURDLE
	WALL
	NEXTFLOOR
	MAX
};

// Enum ProjectD.EPDActionRuleCondtion
enum class FEPDActionRuleCondtion : uint8 {
	NOT_CHANGE
	WAIT_PREV_ACTION
	IMMEDIATE_NEXT_ACTION
	EPDActionRuleCondtion_MAX
};

// Enum ProjectD.EPDIKStanceFrame
enum class FEPDIKStanceFrame : uint8 {
	Idle
	Default
	SingleShot
	VerticalGrip
	AngleGrip
	HalfGrip
	MagGrip
	Max
};

// Enum ProjectD.EPDSpecificWeaponAnimset
enum class FEPDSpecificWeaponAnimset : uint8 {
	HK416
	SCAR
	AK47
	MP5
	MPX
	BenelliM4
	M24
	M14
	M249
	M134
	KrissVector
	AUGA3
	ASVAL
	AWP
	Glock
	DesertEagle
	DoubleBarrel
	PBPistol
	Bow
	M870
	G36
	MAC10
	P30L
	SVD
	DoubleDefense
	Barrett
	MAX
};

// Enum ProjectD.EPDAnimset
enum class FEPDAnimset : uint8 {
	Bare
	HK416
	MP5
	BenelliM4
	M24
	M249
	Glock
	Throw
	M134
	Knife
	KnuckleBlade
	Bow
	Karambit
	CAxe
	Tonfa
	ThreeBaton
	CHammer
	FistKnife
	Wrench
	ExoSuit
	MAX
};

// Enum ProjectD.EPDLeanState
enum class FEPDLeanState : uint8 {
	Lean_None
	Lean_Left
	Lean_Right
	MAX
};

// Enum ProjectD.EPDSocketOffsetState
enum class FEPDSocketOffsetState : uint8 {
	SocketOffset_Left
	SocketOffset_Right
	MAX
};

// Enum ProjectD.EPDSlideStanceState
enum class FEPDSlideStanceState : uint8 {
	SlideStance_Default
	SlideStance_Groggy
	MAX
};

// Enum ProjectD.EPDThrowStanceState
enum class FEPDThrowStanceState : uint8 {
	ThrowStance_Over
	ThrowStance_Under
	MAX
};

// Enum ProjectD.EPDClimbStanceState
enum class FEPDClimbStanceState : uint8 {
	Climb_4P
	Climb_2P
	MAX
};

// Enum ProjectD.EPDRotationState
enum class FEPDRotationState : uint8 {
	None
	FreeLook
	VelocityDirection
	LookingDirection
	Max
};

// Enum ProjectD.EPDAimingState
enum class FEPDAimingState : uint8 {
	Idle
	HipFire
	Aim
	ADS
	MAX
};

// Enum ProjectD.EPDStanceState
enum class FEPDStanceState : uint8 {
	Standing
	Crouching
	MAX
};

// Enum ProjectD.EPDGaitsState
enum class FEPDGaitsState : uint8 {
	Staying
	Walking
	Jogging
	Running
	Sprinting
	MAX
};

// Enum ProjectD.EPDInputMoveType
enum class FEPDInputMoveType : uint8 {
	Walk
	Run
	Sprint
	MAX
};

// Enum ProjectD.EPDLocoState
enum class FEPDLocoState : uint8 {
	NotMoving
	Stopping
	Starting_F
	Starting_L
	Starting_R
	Moving
	MAX
};

// Enum ProjectD.EPDLocoType
enum class FEPDLocoType : uint8 {
	Default
	Climb
	Cover
	Groggy
	Slide
	ZipLine
	Dead
	MAX
};

// Enum ProjectD.EPDActionNotifyType
enum class FEPDActionNotifyType : uint8 {
	ActionNotify_Begin_Anim
	ActionNotify_End_Anim
	ActionNotify_Event_Anim
	ActionNotify_Event_CPP
	ActionNotify_MAX
};

// Enum ProjectD.EPDActionTriggerType
enum class FEPDActionTriggerType : uint8 {
	Activate
	End
	Cancel
	Toggle
	EPDActionTriggerType_MAX
};

// Enum ProjectD.EPDActionSlotType
enum class FEPDActionSlotType : uint8 {
	Fullbody
	Upper
	Lower
	Additive
	EPDActionSlotType_MAX
};

// Enum ProjectD.EPDLobbyAnimStatus
enum class FEPDLobbyAnimStatus : uint8 {
	None
	Lobby_Scene_Select
	Lobby_Scene_Select_Idle
	Lobby_Scene_Matching_Start
	Lobby_Scene_Matching_Idle
	Lobby_Scene_Customizing
	Lobby_Scene_Shop
	Create_Scene_Select
	Create_Scene_Idle
	Result_Scene_Win
	Result_Scene_Win_Idle
	Result_Scene_Lose
	Result_Scene_Lose_IDle
	MAX
};

// Enum ProjectD.EPDDirCalcMethodType
enum class FEPDDirCalcMethodType : uint8 {
	_2WAY
	_4WAY
	_8WAY
	MAX
};

// Enum ProjectD.EPD4DirType
enum class FEPD4DirType : uint8 {
	Forward
	Left
	Right
	Back
	MAX
};

// Enum ProjectD.EPDDirectionType
enum class FEPDDirectionType : uint8 {
	FWD
	BCK
	RT
	LFT
	FWD_RT
	FWD_LFT
	BCK_RT
	BCK_LFT
	MAX
};

// Enum ProjectD.EPDHitReactionType
enum class FEPDHitReactionType : uint8 {
	FULL_BODY
	UPPER_BODY
	LOWER_BODY
	MELEE_HIT
	MAX
};

// Enum ProjectD.EPDCharacterParts
enum class FEPDCharacterParts : uint8 {
	Head
	Body
	Hair
	Accessory
	EPDCharacterParts_MAX
};

// Enum ProjectD.EPDClimbMoveType
enum class FEPDClimbMoveType : uint8 {
	ClimbMove_None
	ClimbMove_Default
	ClimbMove_InTurn
	ClimbMove_OutTurn
	ClimbMove_Jump
	ClimbMove_Wide
	ClimbMove_LongJump
	ClimbMove_MAX
};

// Enum ProjectD.EPDClimbPointUptype
enum class FEPDClimbPointUptype : uint8 {
	ClimbPoint_None
	ClimbPoint_Vault
	ClimbPoint_ClimbUp
	ClimbPoint_MAX
};

// Enum ProjectD.EControlTapType
enum class FEControlTapType : uint8 {
	None
	MoveNAction
	ETCAction
	EControlTapType_MAX
};

// Enum ProjectD.ECrossHairColorPreset
enum class FECrossHairColorPreset : uint8 {
	WHITE
	RED
	BLUE
	GREEN
	YELLOW
	PINK
	ECrossHairColorPreset_MAX
};

// Enum ProjectD.ECrossHairDrawStyle
enum class FECrossHairDrawStyle : uint8 {
	Scaled
	ScaledWithOutline
	NonScaled
	NonScaledWithOutline
	ECrossHairDrawStyle_MAX
};

// Enum ProjectD.EMISituation
enum class FEMISituation : uint8 {
	None
	Weapon_AR
	Weapon_SMG
	Weapon_SR
	Weapon_SG
	Weapon_LMG
	Weapon_BOW
	Weapon_RPG
	Weapon_MINIGUN
	Weapon_EXOSUIT_SMG
	Weapon_Pistol
	Weapon_Melee
	Weapon_Weapon
	Weapon_Explosion
	Weather
	Fire_HipFire
	Fire_Aim
	Fire_ADS
	Groggy
	Execution
	EMISituation_MAX
};

// Enum ProjectD.EMITarget
enum class FEMITarget : uint8 {
	AnybodyUser
	RandomUser
	BestUser
	EMITarget_MAX
};

// Enum ProjectD.EDYNAMICOBJECTSTATE
enum class FEDYNAMICOBJECTSTATE : uint8 {
	NONE
	ALIVEOBJ
	MDESTROY
	FDESTROY
	CLOSE
	OPEN
	OPEN2
	MOVE
	MOVE2
	EDYNAMICOBJECTSTATE_MAX
};

// Enum ProjectD.EGraphicsScalabilityType
enum class FEGraphicsScalabilityType : uint8 {
	None
	Resolution
	ViewDistance
	AntiAliasing
	PostProcessing
	Shadows
	Texture
	Effects
	Foliage
	EGraphicsScalabilityType_MAX
};

// Enum ProjectD.EFrameRateMode
enum class FEFrameRateMode : uint8 {
	DisplayBased
	Customize
	EFrameRateMode_MAX
};

// Enum ProjectD.EDisplayMode
enum class FEDisplayMode : uint8 {
	WindowedFullscreen
	Windowed
	Fullscreen
	EDisplayMode_MAX
};

// Enum ProjectD.EDisplayTapType
enum class FEDisplayTapType : uint8 {
	None
	Video
	System
	EDisplayTapType_MAX
};

// Enum ProjectD.EDroneArmLagState
enum class FEDroneArmLagState : uint8 {
	None
	Floating
	Crouch
	Parkour_Enable
	Parkour_Disable
	EDroneArmLagState_MAX
};

// Enum ProjectD.EENVTYPE
enum class FEENVTYPE : uint8 {
	DEFAULT
	DESTROY
	SAND
	WET
	EENVTYPE_MAX
};

// Enum ProjectD.EPDEndAnimationType
enum class FEPDEndAnimationType : uint8 {
	StartMove
	StopMove
	Pivot
	Max
};

// Enum ProjectD.EPDEnvEffectClientType
enum class FEPDEnvEffectClientType : uint8 {
	Normal
	SandStorm
	Rain
	SeaFog
	EPDEnvEffectClientType_MAX
};

// Enum ProjectD.ESafeZoneDrawStyle
enum class FESafeZoneDrawStyle : uint8 {
	Line
	Solid
	ESafeZoneDrawStyle_MAX
};

// Enum ProjectD.ESafeZoneDrawType
enum class FESafeZoneDrawType : uint8 {
	None
	CurrentArea
	NextArea
	ESafeZoneDrawType_MAX
};

// Enum ProjectD.EMapShape
enum class FEMapShape : uint8 {
	Rect
	Oval
	EMapShape_MAX
};

// Enum ProjectD.EGamePlayTapType
enum class FEGamePlayTapType : uint8 {
	None
	Mouse
	UI
	EGamePlayTapType_MAX
};

// Enum ProjectD.GBOStep
enum class FGBOStep : uint8 {
	ALL
	Step1
	Step2
	Step3
	Step4
	Step5
	GBOStep_MAX
};

// Enum ProjectD.EInventorySlot
enum class FEInventorySlot : uint8 {
	Slot_None
	Weapon_MainSlot
	Weapon_SubSlot
	Weapon_PistolSlot
	Weapon_MeleeSlot
	Weapon_ThrowSlot
	Slot_Max
	EInventorySlot_MAX
};

// Enum ProjectD.EPDHitFeedBackType
enum class FEPDHitFeedBackType : uint8 {
	Hit
	Hit_NoDmg
	Groggy
	Death
	HeadShot
	Armor
	ArmorBroken
	EPDHitFeedBackType_MAX
};

// Enum ProjectD.EDivideType
enum class FEDivideType : uint8 {
	DivideType_None
	DivideType_DropItem
	DivideType_DropCoin
	DivideType_DropAmmo
	DivideType_GetItem
	DivideType_DropSlotItem
	DivideType_MAX
};

// Enum ProjectD.EPDStoppingType
enum class FEPDStoppingType : uint8 {
	Stopping_Foward
	Stopping_Left
	Stopping_Right
	Stopping_Back
	Stopping_MAX
};

// Enum ProjectD.EPDStartingType
enum class FEPDStartingType : uint8 {
	Starting_Foward
	Starting_Left
	Starting_Right
	Starting_Back
	Starting_MAX
};

// Enum ProjectD.EPDSpectatingModeType
enum class FEPDSpectatingModeType : uint8 {
	None
	FreeLookMode
	PlayerLookMode
	Max
};

// Enum ProjectD.ESmoothTurn
enum class FESmoothTurn : uint8 {
	SmoothTurn_None
	SmoothTurn_Left
	SmoothTurn_Right
	SmoothTurn_MAX
};

// Enum ProjectD.EOverlapNumber
enum class FEOverlapNumber : uint8 {
	None
	Overlap1
	Overlap2
	Overlap3
	Overlap4
	Overlap5
	Overlap6
	Overlap7
	Overlap8
	Overlap9
	EOverlapNumber_MAX
};

// Enum ProjectD.EOptionContentType
enum class FEOptionContentType : uint8 {
	ComboBox
	Slider
	InputKeySelector
	InputToggleKeySelector
	CheckBox
	Tabs
	OneButton
	CrossHairImage
	EOptionContentType_MAX
};

// Enum ProjectD.EBlockType
enum class FEBlockType : uint8 {
	Default
	Friend_Clan
	AllBlock
	EBlockType_MAX
};

// Enum ProjectD.EOptionQuality
enum class FEOptionQuality : uint8 {
	LowQuality
	MediumQuality
	HighQuality
	EpicQuality
	EOptionQuality_MAX
};

// Enum ProjectD.EGraphicsQuality
enum class FEGraphicsQuality : uint8 {
	Low
	Medium
	High
	Epic
	Custom
	EGraphicsQuality_MAX
};

// Enum ProjectD.EMouseSensitivityType
enum class FEMouseSensitivityType : uint8 {
	NormalSensitivity
	AimingSensitivity
	IronsightSensitivity
	X2ZoomScope
	X4ZoomScope
	X8ZoomScope
	X16ZoomScope
	EMouseSensitivityType_MAX
};

// Enum ProjectD.EOptionType
enum class FEOptionType : uint8 {
	None
	Display
	Sounds
	Gameplay
	Controls
	OptionType_Max
	EOptionType_MAX
};

// Enum ProjectD.EOutGameCameraType
enum class FEOutGameCameraType : uint8 {
	OutgameCameraLobby
	OutgameCameraAgentInven
	OutgameCameraAgentCreate
	OutgameCameraCustomCharacter
	EOutGameCameraType_MAX
};

// Enum ProjectD.EOutgameCharacterSpawnGroup
enum class FEOutgameCharacterSpawnGroup : uint8 {
	OutgameCharacterSG_Lobby
	OutgameCharacterSG_AgentInven
	OutgameCharacterSG_AgentCreate
	OutgameCharacterSG_Custom
	OutgameCharacterSG_Result
	OutgameCharacterSG_MAX
};

// Enum ProjectD.EPartySlotState
enum class FEPartySlotState : uint8 {
	Empty
	Inviting
	Filled
	EPartySlotState_MAX
};

// Enum ProjectD.ECameraMovementType
enum class FECameraMovementType : uint8 {
	CMT_Indoor
	CMT_Outdoor
	CMT_Groggy
	CMT_Roll
	CMT_PKRCU100WCamera
	CMT_PKRCU100RCamera
	CMT_PKRCU150WCamera1
	CMT_PKRCU150WCamera2
	CMT_PKRCU150RCamera1
	CMT_PKRCU150RCamera2
	CMT_PKRCU200WCamera1
	CMT_PKRCU200WCamera2
	CMT_PKRCU200RCamera1
	CMT_PKRCU200RCamera2
	CMT_PKRCU250WCamera1
	CMT_PKRCU250WCamera2
	CMT_PKRCU250RCamera1
	CMT_PKRCU250RCamera2
	CMT_PKRCU300WCamera1
	CMT_PKRCU300WCamera2
	CMT_PKRCU300RCamera1
	CMT_PKRCU300RCamera2
	CMT_PKRVT100WCamera
	CMT_PKRVT100RCamera
	CMT_PKRVT150WCamera1
	CMT_PKRVT150WCamera2
	CMT_PKRVT150RCamera1
	CMT_PKRVT150RCamera2
	CMT_PKRVT200WCamera1
	CMT_PKRVT200WCamera2
	CMT_PKRVT200RCamera1
	CMT_PKRVT200RCamera2
	CMT_PKRVT250WCamera1
	CMT_PKRVT250WCamera2
	CMT_PKRVT250RCamera1
	CMT_PKRVT250RCamera2
	CMT_PKRVT300WCamera1
	CMT_PKRVT300WCamera2
	CMT_PKRVT300RCamera1
	CMT_PKRVT300RCamera2
	CMT_PKRCloseUpCamera
	CMT_PKRDefCamera
	CMT_FirstPerson
	CMT_FirstPerson_Bow
	CMT_Aiming
	CMT_CrouchAiming
	CMT_Crouch
	CMT_Aiming_Bow
	CMT_CrouchAiming_Bow
	CMT_ForwardRun
	CMT_Jump
	CMT_LongJump
	CMT_Climb
	CMT_Zipline
	CMT_Slide
	CMT_JuggernautDash
	CMT_Stealth
	CMT_Seed_Bomb_Install_Defuse
	CMT_GgoggySeed_Bomb_Install_Defuse
	CMT_Count
	CMT_MAX
};

// Enum ProjectD.ESpectatingParkourCamera
enum class FESpectatingParkourCamera : uint8 {
	None
	Following
	FollowingEnd
	MAX
};

// Enum ProjectD.EPDFootStepNotifyType
enum class FEPDFootStepNotifyType : uint8 {
	Run
	Jump
	SoftLand
	HardLand
	JugDash
	Roll
	Max
};

// Enum ProjectD.EPDTraceChannel
enum class FEPDTraceChannel : uint8 {
	Visibility
	Parkour
	Climb
	Weapon
	AttackObject
	Pickup
	Ladder
	Projectile
	Audio
	Slide
	AudioOcc
	EPDTraceChannel_MAX
};

// Enum ProjectD.EHandsAndFeetBone
enum class FEHandsAndFeetBone : uint8 {
	Palm_L
	Palm_R
	bx_L_toe
	bx_R_toe
	bx_spine
	EHandsAndFeetBone_MAX
};

// Enum ProjectD.EBattleIntensityState
enum class FEBattleIntensityState : uint8 {
	INTENSITY_NORMAL
	INTENSITY_ALARMED
	INTENSITY_COMBAT_SIMPLE
	INTENSITY_COMBAT_HARD
	INTENSITY_MAX
};

// Enum ProjectD.EPDTutorialEvent
enum class FEPDTutorialEvent : uint8 {
	CloseShopUI
	HighlightLoadoutUI
	HighlightNPC
	HighlightPartSlotUI
	HighlightShopItemUI
	HighlightShopGuideUI
	HighlightUpgradeUI
	HighlightVicinityItemUI
	SpawnItem
	SpawnNPC
	EPDTutorialEvent_MAX
};

// Enum ProjectD.EPDTutorialQuestKeyPressType
enum class FEPDTutorialQuestKeyPressType : uint8 {
	Normal
	Hold
	Short
	Double
	EPDTutorialQuestKeyPressType_MAX
};

// Enum ProjectD.ETutorialPhase
enum class FETutorialPhase : uint8 {
	TP_PHASE_2
	TP_PHASE_3
	TP_PHASE_4
	TP_PHASE_5
	TP_PHASE_6
	TP_PHASE_7
	TP_PHASE_8
	TP_PHASE_9
	TP_PHASE_10
	TP_PHASE_11
	TP_PHASE_MAX
};

// Enum ProjectD.EQuestAction
enum class FEQuestAction : uint8 {
	QA_None
	QA_OUTGAME_CHA_VOICE
	QA_HIT
	QA_RANGE
	QA_THROW
	QA_CHA_STATE
	QA_AREA
	QA_PING
	QA_USEITEM
	QA_INTERACTION
	QA_MODE_EVENT
	QA_ADD_ITEM
	QA_UPGRADE
	QA_INGAME_MOVIE
	QA_BATTLE_ASPECT
	QA_GAME_READY
	QA_ROUND_END
	QA_OPERATOR_CHECK
	QA_ENV_EFFECT
	QA_MOVE_CHARACTER
	QA_CHANGE_MOVE_TYPE
	QA_TRY_ACTION
	QA_CHANGE_AIM_STATE
	QA_CHANGE_WEAPON
	QA_ETC_ACTION
	QA_START_TUTORIAL
	QA_COMPLETE_TUTORAL_PHASE
	QA_BATTLE_INTENSITY
	QA_RANGE_IN_LOCATION
	QA_SHOP_READY
	QA_UNEQUIP_POWERARMOR
	QA_MAX
};

// Enum ProjectD.EQuestList
enum class FEQuestList : uint8 {
	QL_None
	QL_VOICE_ENEMY_HIT
	QL_VOICE_TEAM_HIT
	QL_VOICE_TEAM_ENEMY_HIT
	QL_VOICE_TEAM_ME_HIT
	QL_VOICE_ENEMY_TEAM_HIT
	QL_VOICE_ENEMY_ME_HIT
	QL_VOICE_GROGGY
	QL_VOICE_DEATH
	QL_VOICE_ENEMY_GROGGY
	QL_VOICE_ENEMY_DEATH
	QL_VOICE_DOT_HIT
	QL_VOICE_SMOKE_AREA
	QL_VOICE_THROW_GRANADE
	QL_VOICE_THROW_HEAL
	QL_VOICE_THROW_GAS
	QL_VOICE_THROW_SCAN
	QL_VOICE_JUGGERNAUT
	QL_VOICE_CHANGE_ARMORPLATE
	QL_VOICE_RECOVER
	QL_VOICE_FULL_INVEN
	QL_VOICE_GET_SEED
	QL_VOICE_SET_SEED
	QL_VOICE_RELEASE_SEED
	QL_VOICE_RELOAD
	QL_VOICE_SHOP_BUYREQUEST
	QL_VOICE_SHOP_CANCEL
	QL_VOICE_SHOP_REFUSE
	QL_VOICE_INTER_LEDEAR_DELEGATE
	QL_VOICE_SIGNATURE
	QL_VOICE_GROGGY_REQUEST
	QL_VOICE_GROGGY_HEAL
	QL_VOICE_INTER_BOMB_DELEGATE
	QL_VOICE_MONOLOGUE
	QL_VOICE_CHA_INTERACTION_TALK
	QL_VOICE_OUTGAME_CHA_CREATE
	QL_VOICE_OUTGAME_CHA_SELECT
	QL_VOICE_OUTGAME_LOBBY
	QL_VOICE_OUTGAME_RESULT_WIN
	QL_VOICE_OUTGAME_RESULT_LOSE
	QL_VOICE_ENEMY_SNIPER_FIND
	QL_VOICE_NEAR_GRANADE
	QL_VOICE_PING_MOVE
	QL_VOICE_PING_GO
	QL_VOICE_PING_ASSEMBLE
	QL_VOICE_PING_RETREAT
	QL_VOICE_PING_INSTALL
	QL_VOICE_PING_DEFUSE
	QL_VOICE_PING_CAUTIONINSTALL
	QL_VOICE_PING_CAUTIONDEFUSE
	QL_VOICE_PING_ENEMY
	QL_VOICE_PING_WATCH
	QL_VOICE_PING_SUPPORT
	QL_VOICE_PING_RUSH
	QL_VOICE_PING_ATTACK
	QL_VOICE_PING_DEFENSE
	QL_VOICE_PING_SOS
	QL_VOICE_PING_ALLYGROGGY
	QL_VOICE_PING_ENEMYGROGGY
	QL_VOICE_PING_ENEMYDEAD
	QL_VOICE_PING_ENEMYJUGGERNAUT
	QL_VOICE_PING_HELLO
	QL_VOICE_PING_SORRY
	QL_VOICE_PING_GREAT
	QL_VOICE_PING_THANKYOU
	QL_VOICE_PING_BLAHBLAH
	QL_VOICE_PING_INVEST
	QL_VOICE_PING_SAVING
	QL_VOICE_PING_ALLIN
	QL_VOICE_PING_RICH
	QL_VOICE_PING_POOR
	QL_VOICE_PING_ITEM
	QL_VOICE_PING_SEED
	QL_VOICE_PING_WEAPON_AR
	QL_VOICE_PING_WEAPON_SMG
	QL_VOICE_PING_WEAPON_SR
	QL_VOICE_PING_WEAPON_SG
	QL_VOICE_PING_WEAPON_LMG
	QL_VOICE_PING_WEAPON_BOW
	QL_VOICE_PING_WEAPON_SUB
	QL_VOICE_PING_AMMO_10
	QL_VOICE_PING_AMMO_557
	QL_VOICE_PING_AMMO_763
	QL_VOICE_PING_AMMO_12GAUGE
	QL_VOICE_PING_AMMO_ARROW
	QL_VOICE_PING_THROW_GRENADE
	QL_VOICE_PING_THROW_GAS
	QL_VOICE_PING_THROW_SCAN
	QL_VOICE_PING_THROW_HEAL
	QL_VOICE_PING_BANDAGE
	QL_VOICE_PING_ARMORPLATE
	QL_VOICE_PING_ASTRAPI
	QL_VOICE_PING_SELFREVIVALKIT
	QL_VOICE_PING_BOMBDEACTIVATEKIT
	QL_VOICE_PING_JUGGERNAUT
	QL_VOICE_PING_INVEN_COIN
	QL_VOICE_PING_INVEN_SEED
	QL_VOICE_PING_INVEN_WEAPON_MAIN
	QL_VOICE_PING_INVEN_WEAPON_SUB
	QL_VOICE_PING_INVEN_AMMO_10
	QL_VOICE_PING_INVEN_AMMO_557
	QL_VOICE_PING_INVEN_AMMO_763
	QL_VOICE_PING_INVEN_AMMO_12GAUGE
	QL_VOICE_PING_INVEN_AMMO_ARROW
	QL_VOICE_PING_SHOP
	QL_VOICE_PING_SHOP_WEAPON_AR
	QL_VOICE_PING_SHOP_WEAPON_SMG
	QL_VOICE_PING_SHOP_WEAPON_SR
	QL_VOICE_PING_SHOP_WEAPON_SG
	QL_VOICE_PING_SHOP_WEAPON_LMG
	QL_VOICE_PING_SHOP_WEAPON_BOW
	QL_VOICE_PING_SHOP_WEAPON_SUB
	QL_VOICE_PING_SHOP_AMMO_10
	QL_VOICE_PING_SHOP_AMMO_557
	QL_VOICE_PING_SHOP_AMMO_763
	QL_VOICE_PING_SHOP_AMMO_12GAUGE
	QL_VOICE_PING_SHOP_AMMO_ARROW
	QL_VOICE_PING_SHOP_THROW_GRENADE
	QL_VOICE_PING_SHOP_THROW_GAS
	QL_VOICE_PING_SHOP_THROW_SCAN
	QL_VOICE_PING_SHOP_THROW_HEAL
	QL_VOICE_PING_SHOP_BANDAGE
	QL_VOICE_PING_SHOP_ARMORPLATE
	QL_VOICE_PING_SHOP_ASTRAPI
	QL_VOICE_PING_SHOP_SELFREVIVALKIT
	QL_VOICE_PING_SHOP_BOMBDEACTIVATEKIT
	QL_VOICE_PING_SHOP_JUGGERNAUT
	QL_VOICE_PING_SHOP_TEMABUFF
	QL_VOICE_PING_FUND_ARMORY
	QL_VOICE_PING_FUND_ORDNANCE
	QL_VOICE_PING_FUND_TACTICAL
	QL_VOICE_PING_GROGGY_MOVE
	QL_VOICE_PING_GROGGY_ENEMY
	QL_VOICE_PING_AGREE
	QL_VOICE_PING_DECLINE
	QL_VOICE_PING_TARGET_CANEL
	QL_VOICE_PING_CLAIM
	QL_VOICE_PING_HELP_AGREE
	QL_VOICE_BREAKINTO_START
	QL_VOICE_SCAN_ME
	QL_OPERATOR_ARMORY_UPGRADE
	QL_OPERATOR_TACTICAL_UPGRADE
	QL_OPERATOR_EQUIP_UPGRADE
	QL_OPERATOR_DERAILED_INGAME_MOVIE
	QL_OPERATOR_SHIPYARD_INGAME_MOVIE
	QL_OPERATOR_WINDFARM_INGAME_MOVIE
	QL_OPERATOR_BRIDGE_INGAME_MOVIE
	QL_OPERATOR_CHANGE_STARTPOINT_ATTACK
	QL_OPERATOR_CHANGE_STARTPOINT_DEFENCE
	QL_OPERATOR_REMAIN_TIME
	QL_OPERATOR_FILED_MOVE
	QL_OPERATOR_GET_SEED
	QL_OPERATOR_SEED_INSTALL
	QL_OPERATOR_SEED_RELEASE
	QL_OPERATOR_SEED_NOTIFY
	QL_OPERATOR_RESULT
	QL_OPERATOR_INTER_START
	QL_OPERATOR_INTER_END
	QL_OPERATOR_ARMED_TIME
	QL_OPERATOR_ALLREADY
	QL_OPERATOR_AUTO_SUPPLY
	QL_OPERATOR_ENEMY_INFO_OPEN
	QL_OPERATOR_ENEMY_INFO_OPEN_S
	QL_OPERATOR_ENEMY_UPGRADE_OPEN
	QL_OPERATOR_SEED_DROP
	QL_OPERATOR_BATTLE_ASPECT_E4_T3
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_AT
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_DEF
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_AT
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_DEF
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_AT
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_DEF
	QL_OPERATOR_LAST_ROUND
	QL_OPERATOR_FIRST_WIN
	QL_OPERATOR_FIRST_LOSE
	QL_OPERATOR_WININGSTREAK_3
	QL_OPERATOR_LOSINGSTREAK_3
	QL_OPERATOR_WININGSTREAK_4
	QL_OPERATOR_LOSINGSTREAK_4
	QL_OPERATOR_WININGSTREAK_3_N_LOSE
	QL_OPERATOR_LOSINGSTREAK_3_N_WIN
	QL_OPERATOR_ENEMY_JUGGERNAUT_2
	QL_OPERATOR_ENEMY_JUGGERNAUT_3
	QL_OPERATOR_TEAM_JUGGERNAUT_2
	QL_OPERATOR_TEAM_JUGGERNAUT_3
	QL_OPERATOR_ENEMY_JUGGERNAUT_1
	QL_OPERATOR_TEAM_JUGGERNAUT_1
	QL_OPERATOR_TEAM_KILL
	QL_OPERATOR_FIRST_KILL
	QL_OPERATOR_DOUBLE_KILL
	QL_OPERATOR_TRIPLE_KILL
	QL_OPERATOR_ALL_KILL
	QL_OPERATOR_ALL_KILL_MELEE
	QL_OPERATOR_HALF_JUG_ARMOR
	QL_OPERATOR_HALF_JUG_AMMO
	QL_OPERATOR_ZERO_JUG_AMMO
	QL_OPERATOR_SHOP_NOTBUY_ARMOR
	QL_OPERATOR_SHOP_NOTBUY_AMMO
	QL_OPERATOR_SHOP_NOTBUY_SNIPERSCOPE
	QL_OPERATOR_30_UNDER_HAVE_HEAL_PACK
	QL_OPERATOR_30_UNDER_NEED_HEAL_PACK
	QL_OPERATOR_ARMORPLATE_USE
	QL_OPERATOR_ARMORPLATE_NEED
	QL_OPERATOR_SENDSTORM
	QL_OPERATOR_TUTORIAL_START_2
	QL_OPERATOR_TUTORIAL_START_3
	QL_OPERATOR_TUTORIAL_PHASE_2
	QL_OPERATOR_TUTORIAL_PHASE_3
	QL_OPERATOR_TUTORIAL_PHASE_4
	QL_OPERATOR_TUTORIAL_PHASE_5
	QL_OPERATOR_TUTORIAL_PHASE_6
	QL_OPERATOR_TUTORIAL_PHASE_7
	QL_OPERATOR_TUTORIAL_PHASE_8
	QL_OPERATOR_TUTORIAL_PHASE_9
	QL_OPERATOR_TUTORIAL_PHASE_10
	QL_OPERATOR_TUTORIAL_PHASE_11
	QL_OPERATOR_SIGNATURE_SCAN
	QL_OPERATOR_SOY_SIGNATURE_SCAN
	QL_OPERATOR_BREAKINTO_READY
	QL_OPERATOR_BREAKINTO_START
	QL_OPERATOR_BREAKINTO_TEAM_ALERT
	QL_TUTORIAL_OPEN_INVENTORY
	QL_TUTORIAL_BUY_MP5
	QL_TUTORIAL_BUY_AMMO_10
	QL_TUTORIAL_INVEST_ARMORY
	QL_TUTORIAL_ATTACH_WEAPON_PARTS
	QL_TUTORIAL_SET_LOADOUT
	QL_TUTORIAL_INVEST_ORDNANCE
	QL_TUTORIAL_BUY_BANDAGE
	QL_TUTORIAL_BUY_ARMOR_PLATE
	QL_TUTORIAL_BUY_GRENADE
	QL_TUTORIAL_MOVE_FRONT
	QL_TUTORIAL_MOVE_BACK
	QL_TUTORIAL_MOVE_LEFT
	QL_TUTORIAL_MOVE_RIGHT
	QL_TUTORIAL_CROUCH
	QL_TUTORIAL_WALK
	QL_TUTORIAL_JUMP
	QL_TUTORIAL_LONG_JUMP
	QL_TUTORIAL_ROLL
	QL_TUTORIAL_ROLL_LEFT
	QL_TUTORIAL_ROLL_RIGHT
	QL_TUTORIAL_FIRE_WEAPON
	QL_TUTORIAL_RELOAD_WEAPON
	QL_TUTORIAL_AIMING
	QL_TUTORIAL_AIM_TO_ADS
	QL_TUTORIAL_ADS
	QL_TUTORIAL_LEAN_LEFT
	QL_TUTORIAL_LEAN_RIGHT
	QL_TUTORIAL_GROGGY_BULLET
	QL_TUTORIAL_KILL_BULLET
	QL_TUTORIAL_MELEE_V
	QL_TUTORIAL_SWITCH_MELEE_WEAPON
	QL_TUTORIAL_MELEE_MOUSE
	QL_TUTORIAL_GROGGY_MELEE
	QL_TUTORIAL_KILL_MELEE
	QL_TUTORIAL_LOOT_ITEM
	QL_TUTORIAL_RESCUE_ALLY
	QL_TUTORIAL_INTERACT_ITEM_BOX
	QL_TUTORIAL_GET_DROP_ITEM
	QL_TUTORIAL_USE_ITEM_RECOVER
	QL_TUTORIAL_SIGNATURE_ACTION
	QL_TUTORIAL_USE_ZIPLINE
	QL_TUTORIAL_SWITCH_THROW_WEAPON
	QL_TUTORIAL_THROW_WEAPON
	QL_TUTORIAL_FAST_THROW_WEAPON
	QL_TUTORIAL_MARK_PING_MOVE
	QL_TUTORIAL_MARK_PING_ENEMY
	QL_TUTORIAL_MARK_PING_SUPPORT
	QL_TUTORIAL_OPEN_STATUS_BOARD
	QL_TUTORIAL_DRAW_STATUS_BOARD
	QL_TUTORIAL_PING_STATUS_BOARD
	QL_TUTORIAL_GET_BOMB
	QL_TUTORIAL_INSTALL_BOMB
	QL_TUTORIAL_WAIT_EXPLOSION_BOMB
	QL_TUTORIAL_USE_ARMOR_PLATE
	QL_TUTORIAL_STEALTH
	QL_BI_NORMAL
	QL_BI_ALARMED
	QL_BI_COMBAT_SIMPLE
	QL_BI_COMBAT_HARD
	QL_Max
};

// Enum ProjectD.EQuestType
enum class FEQuestType : uint8 {
	QT_VOICE
	QT_TUTORIAL
	QT_BATTLE_INTENSITY
	QT_MAX
};

// Enum ProjectD.EReloadNotifyType
enum class FEReloadNotifyType : uint8 {
	NONE
	AttachMagazineToHand
	HideMagazine
	All
	EReloadNotifyType_MAX
};

// Enum ProjectD.EGuideType
enum class FEGuideType : uint8 {
	ROUND_OFFENSE
	ROUND_DEFENSE
	AREA
	PATH
	EGuideType_MAX
};

// Enum ProjectD.ESceneEvent
enum class FESceneEvent : uint8 {
	SE_None
	SE_MatchingStarted
	SE_MatchingCanceled
	SE_MAX
};

// Enum ProjectD.ESceneName
enum class FESceneName : uint8 {
	None
	Start
	Login
	lobby
	AgentNick
	AgentCreate
	AgentInven
	AgentLobby
	Custom
	CustomCharacterPerk
	CustomCharacterDeco
	CustomVoice
	CustomWeapon
	CustomGameDeco
	Clan
	ClanInfo
	ClanList
	ClanCreate
	DebugLog
	PlayLogReport
	Loading
	LoadBase
	LoadIntro
	LoadMatch
	LoadResult
	Ingame
	GameResult
	Scene_Max
	ESceneName_MAX
};

// Enum ProjectD.EBowStringAction
enum class FEBowStringAction : uint8 {
	Grab
	Release
	PullTight
	EBowStringAction_MAX
};

// Enum ProjectD.EPDSlidableType
enum class FEPDSlidableType : uint8 {
	Slidable_None
	Slidable_Start
	Slidable_Loop
	Slidable_End
	Slidable_MAX
};

// Enum ProjectD.ESoundTapType
enum class FESoundTapType : uint8 {
	None
	Sound
	Voice
	ESoundTapType_MAX
};

// Enum ProjectD.ESplineTrace
enum class FESplineTrace : uint8 {
	ST_None
	SR_TraceTarget
	ESplineTrace_MAX
};

// Enum ProjectD.ESplineRotation
enum class FESplineRotation : uint8 {
	SR_None
	SR_LookAtTarget
	SR_Local
	SR_World
	SR_InterpPoint
	SR_InterpPointLocal
	SR_MAX
};

// Enum ProjectD.ESplineMovementType
enum class FESplineMovementType : uint8 {
	Position
	OffsetRotateAndPosition
	RotateAndPosition
	UseCustomRotation
	UseCharacterBone
	FOVOnly
	ESplineMovementType_MAX
};

// Enum ProjectD.EMoveInterpolateType
enum class FEMoveInterpolateType : uint8 {
	None
	PrevPosInclusive
	EMoveInterpolateType_MAX
};

// Enum ProjectD.ETabButtonState
enum class FETabButtonState : uint8 {
	UnSelect
	Select
	ETabButtonState_MAX
};

// Enum ProjectD.ERookieEventState
enum class FERookieEventState : uint8 {
	FirstLogin
	Incomplete
	CompleteTutorial
	CompletePlayGames
	CompleteAll
	ERookieEventState_MAX
};

// Enum ProjectD.EInvenSortOrder
enum class FEInvenSortOrder : uint8 {
	Property_Mission_ModeItem
	Property_Coin
	Property_ArmorPlate
	Property_Bandage
	Property_Painkiller
	Property_Pouchkit
	Property_FirstAidkit
	Property_Astrapi
	Property_SelfRevivalKit
	Property_Scope
	Property_FrontSight
	Property_SideSight
	Property_RearSight
	Property_Grip
	Property_Muzzle
	Property_Stock
	Property_Magazine
	Property_Ammo_10
	Property_Ammo_557
	Property_Ammo_763
	Property_Ammo_12Gauge
	Property_Ammo_47
	Property_Ammo_128
	Property_Ammo_762G
	Property_Ammo_Arrow
	Property_Ammo_Exosuit
	Property_AR
	Property_SMG
	Property_SR
	Property_SG
	Property_LMG
	Property_BOW
	Property_RPG
	Property_MINIGUN
	Property_EXOSUIT_SMG
	Property_ETC
	Property_Pistol
	Property_Grenade
	Property_Smoke
	Property_GasGrenade
	Property_ScanGrenade
	Property_HealGrenade
	Property_Explosive
	Property_WhitePhosphorus
	Property_SND_BombDeactivateKit
	Property_MAX
};

// Enum ProjectD.EUIEvent
enum class FEUIEvent : uint8 {
	UE_None
	UE_ClanNameCheck
	UE_ClanCreate
	UE_ClanBreakRequested
	UE_ClanDestroyed
	UE_ClanInfoUpdated
	UE_ClanMemberListUpdated
	UE_ClanWaiterListUpdated
	UE_ClanListUpdated
	UE_ClanBreakCanceled
	UE_ClanJoined
	UE_ClanMemberRemoved
	UE_ClanDetailGet
	UE_ClanListLeftClicked
	UE_LeptonEquipFailed
	UE_LeptonSeasonMissionStatusUpdated
	UE_LeptonEquipListUpdated
	UE_Mercenary_Notify_Invite
	UE_InviteParty_Result
	UE_AcceptInviteParty_Result
	UE_NotifyBreakParty
	UE_OnShutDown
	UE_ReloadFindPartyUI
	UE_ReloadRegisterMercenaryUI
	UE_FindPartyPageVisibilityUpdated
	UE_ShowMatching
	UE_MatchingTime
	UE_HideMatching
	UE_ReloadPenalty
	UE_DefaultCustomRoom
	UE_ReloadCustomRoom
	UE_ReloadCustomRoomOption
	UE_ReloadHideCode
	UE_ReloadCustomRoomState
	UE_ReloadCustomRoomButton
	UI_MailListUpdate
	UI_MailUpdateItemStatus
	UE_NewMailVisibilityUpdated
	UE_MailUIClosed
	UE_ReloadOptionPopup
	MAXUIEvent
	EUIEvent_MAX
};

// Enum ProjectD.EChannelRange
enum class FEChannelRange : uint8 {
	None
	Party
	Area
	Team
	Text
	Max
};

// Enum ProjectD.EMapObjectState
enum class FEMapObjectState : uint8 {
	None
	Normal
	Groggy
	Dead
	Rescue
	Bandage
	Astrapi
	ArmorKit
	Seed
	Revive
	Shop
	Max
};

// Enum ProjectD.EMapObjectType
enum class FEMapObjectType : uint8 {
	None
	MainPlayer
	Ally
	Enemy
	Npc
	Object
	Seed
	Demolition
	EnemyDamage
	EnemyDeath
	SafeZone
	FireSound
	Ping
	Camp
	Drawing
	ItemBox
	Mission_Lepton
	RecMainPlayer
	RecAlly
	RecEnemy
	YoungsikHacking
	Max
};

// Enum ProjectD.EEntryPointType
enum class FEEntryPointType : uint8 {
	EPT_NONE
	EPT_Entry
	EPT_Exit
	EPT_MAX
};

