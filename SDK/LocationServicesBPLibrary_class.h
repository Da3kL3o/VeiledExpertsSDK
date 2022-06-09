// Class LocationServicesBPLibrary.LocationServices
// Size : 0x28 (Inherited : 0x28)
struct ULocationServices : UBlueprintFunctionLibrary {

	bool StopLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StopLocationServices // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF653669FA0
	bool StartLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StartLocationServices // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF653669F70
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy); // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF653669EF0
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter); // Function LocationServicesBPLibrary.LocationServices.InitLocationServices // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF653669DF0
	struct ULocationServicesImpl* GetLocationServicesImpl(); // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF653669DD0
	struct FLocationServicesData GetLastKnownLocation(); // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF653669D90
	bool AreLocationServicesEnabled(); // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF653669D60
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// Size : 0x38 (Inherited : 0x28)
struct ULocationServicesImpl : UObject {
	struct FMulticastInlineDelegate OnLocationChanged; // 0x28(0x10)
};

