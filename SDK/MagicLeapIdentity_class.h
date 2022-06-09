// Class MagicLeapIdentity.MagicLeapIdentity
// Size : 0x38 (Inherited : 0x28)
struct UMagicLeapIdentity : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)

	void RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<struct FMagicLeapIdentityAttribute> AttributeValue); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF653FAFDF0
	enum class EMagicLeapIdentityError RequestAttributeValueAsync(struct TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, struct FDelegate ResultDelegate); // Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF6535EDD10
	enum class EMagicLeapIdentityError RequestAttributeValue(struct TArray<enum class EMagicLeapIdentityKey> RequestedAttributeList, struct TArray<struct FMagicLeapIdentityAttribute> RequestedAttributeValues); // Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF6535EDBC0
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<enum class EMagicLeapIdentityKey> AttributesUpdatedSuccessfully); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF653FAFDF0
	void GetAllAvailableAttributesAsync(struct FDelegate ResultDelegate); // Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF6535EDB10
	enum class EMagicLeapIdentityError GetAllAvailableAttributes(struct TArray<enum class EMagicLeapIdentityKey> AvailableAttributes); // Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF6535EDA50
	void AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<enum class EMagicLeapIdentityKey> AvailableAttributes); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF653FAFDF0
};

