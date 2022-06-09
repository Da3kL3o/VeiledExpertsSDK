// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapPrivilegesFunctionLibrary : UBlueprintFunctionLibrary {

	bool RequestPrivilegeAsync(enum class EMagicLeapPrivilege Privilege, struct FDelegate ResultDelegate); // Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x15, 0x7FF6535F4240
	bool RequestPrivilege(enum class EMagicLeapPrivilege Privilege); // Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF6535F41C0
	bool CheckPrivilege(enum class EMagicLeapPrivilege Privilege); // Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF6535F41C0
};

